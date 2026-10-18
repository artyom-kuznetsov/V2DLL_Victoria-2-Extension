// FUN_00ad9cc0 @ 00ad9cc0 body=[[00ad9cc0, 00ad9ee8]]


undefined4 FUN_00ad9cc0(int *param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar2 = (**(code **)(*param_1 + 4))();
  switch(uVar2) {
  case 0:
  case 1:
    uVar2 = (**(code **)(*param_1 + 0x14))();
    FUN_00ad8ed0(uVar2,param_2,param_1[1]);
    return 1;
  case 2:
    iVar3 = (**(code **)(*param_1 + 0x14))();
    iVar4 = param_1[1];
    if (iVar4 != 0) {
      puVar5 = (undefined1 *)(iVar3 + 0xe);
      do {
        uStack_c = *(undefined4 *)(puVar5 + -0xe);
        uStack_8 = *(undefined4 *)(puVar5 + -10);
        uStack_4 = *(undefined4 *)(puVar5 + -6);
        if (param_2 == 1) {
          FUN_00ad8ea0(&uStack_c,3);
        }
        FUN_00b18c30(&uStack_c,1);
        *(undefined4 *)(puVar5 + -0xe) = uStack_c;
        *(undefined4 *)(puVar5 + -10) = uStack_8;
        *(undefined4 *)(puVar5 + -6) = uStack_4;
        if (param_2 == 1) {
          uVar1 = puVar5[-2];
          puVar5[-2] = puVar5[1];
          puVar5[1] = uVar1;
          uVar1 = puVar5[-1];
          puVar5[-1] = *puVar5;
          *puVar5 = uVar1;
        }
        if (*(char *)(*DAT_00f209e4 + 0x8d) != '\0') {
          *(float *)(puVar5 + -2) = -*(float *)(puVar5 + -2);
        }
        puVar5 = puVar5 + 0x10;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    return 1;
  case 3:
    uVar2 = (**(code **)(*param_1 + 0x14))();
    if (param_2 == 1) {
      FUN_00ad8ea0(uVar2,param_1[1] * 2);
    }
    break;
  case 4:
  case 5:
    uVar2 = (**(code **)(*param_1 + 0x14))();
    if (param_2 == 1) {
      FUN_00ad8ea0(uVar2,param_1[1]);
      return 1;
    }
    break;
  case 6:
    uVar2 = (**(code **)(*param_1 + 0x14))();
    if (param_2 == 1) {
      FUN_00ad8ea0(uVar2,param_1[1] * 4);
      return 1;
    }
    break;
  case 7:
    iVar3 = (**(code **)(*param_1 + 0x14))();
    iVar4 = param_1[1];
    if (iVar4 != 0) {
      puVar5 = (undefined1 *)(iVar3 + 0xe);
      do {
        uStack_c = *(undefined4 *)(puVar5 + -0xe);
        uStack_8 = *(undefined4 *)(puVar5 + -10);
        uStack_4 = *(undefined4 *)(puVar5 + -6);
        if (param_2 == 1) {
          FUN_00ad8ea0(&uStack_c,3);
        }
        FUN_00b18c30(&uStack_c,1);
        *(undefined4 *)(puVar5 + -0xe) = uStack_c;
        *(undefined4 *)(puVar5 + -10) = uStack_8;
        *(undefined4 *)(puVar5 + -6) = uStack_4;
        if (param_2 == 1) {
          uVar1 = puVar5[-2];
          puVar5[-2] = puVar5[1];
          puVar5[1] = uVar1;
          uVar1 = puVar5[-1];
          puVar5[-1] = *puVar5;
          *puVar5 = uVar1;
        }
        puVar5 = puVar5 + 0x10;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    return 1;
  default:
    FUN_00b15d30(
                "Importer::StandardLayerEndianConvert() - The layer type is unknown, so the data can\'t be converted!"
                );
    return 0;
  }
  return 1;
}

