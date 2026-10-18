// FUN_008d0d10 @ 008d0d10 body=[[008d0d10, 008d0ed4]]


undefined4 FUN_008d0d10(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 local_60 [8];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 *puStack_4c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00ba01db;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_008a88d0();
  cVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
  if (cVar2 == '\0') {
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
    puVar4 = *(undefined4 **)(iVar1 + 0xda8);
    while ((*(undefined4 **)(iVar1 + 0xda8) <= puVar4 && (puVar4 < *(undefined4 **)(iVar1 + 0xdac)))
          ) {
      puVar3 = puVar4 + 2;
      uStack_58 = *puVar4;
      uStack_54 = puVar4[1];
      iVar6 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2;
      iVar5 = 0;
      if (iVar6 < 1) {
        ExceptionList = pvStack_14;
        return 1;
      }
      while (cVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 8) + iVar5 * 4) + 0x18))(local_60),
            puVar4 = puVar3, cVar2 != '\0') {
        iVar5 = iVar5 + 1;
        if (iVar6 <= iVar5) {
          ExceptionList = pvStack_14;
          return 1;
        }
      }
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) +
                    *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 100) + 300) * 4);
    puVar4 = *(undefined4 **)(iVar1 + 0xda8);
    while ((*(undefined4 **)(iVar1 + 0xda8) <= puVar4 && (puVar4 < *(undefined4 **)(iVar1 + 0xdac)))
          ) {
      uStack_58 = *puVar4;
      uStack_54 = puVar4[1];
      puVar4 = puVar4 + 2;
      iVar6 = 0;
      if (DAT_01258a10 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)FUN_00aae9af(0x278);
        uStack_c = 0;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          FUN_00954a40(puVar3);
          *puVar3 = CNullPop::vftable;
        }
        uStack_c = 0xffffffff;
        DAT_01258a10 = puVar3;
      }
      iVar5 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2;
      puStack_4c = DAT_01258a10;
      if (iVar5 < 1) {
        ExceptionList = pvStack_14;
        return 1;
      }
      while (cVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 8) + iVar6 * 4) + 0x18))(local_60),
            cVar2 != '\0') {
        iVar6 = iVar6 + 1;
        if (iVar5 <= iVar6) {
          ExceptionList = pvStack_14;
          return 1;
        }
      }
    }
  }
  ExceptionList = pvStack_14;
  return 0;
}

