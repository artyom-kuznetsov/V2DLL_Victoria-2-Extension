// FUN_00795060 @ 00795060 body=[[00795060, 007951a9] [007951ad, 007951c0]]


void FUN_00795060(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_ECX;
  undefined4 *puVar3;
  int iStack_34;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_00b500db;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  puStack_28 = (undefined4 *)0x0;
  puStack_24 = (undefined4 *)0x0;
  uStack_20 = 0;
  iStack_c = 0;
  FUN_00794aa0(in_ECX,&puStack_28);
  iStack_34 = ((int)puStack_24 - (int)puStack_28) / 0x6c;
  if (0 < iStack_34) {
    puVar3 = puStack_28 + 0x10;
    do {
      puVar2 = (undefined4 *)FUN_00aae9af(0x6c);
      iStack_c._0_1_ = 1;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        FUN_0040a720(puVar2);
        iStack_c._0_1_ = 2;
        *puVar2 = CTransferSubUnitCommand::vftable;
        puVar2[0xf] = puVar3[-1];
        puVar2[0x10] = *puVar3;
        puVar2[0x11] = puVar3[1];
        puVar2[0x17] = 0xf;
        puVar2[0x16] = 0;
        *(undefined1 *)(puVar2 + 0x12) = 0;
        FUN_00408ed0(puVar3 + 2,0,0xffffffff);
        puVar2[0x19] = puVar3[9];
        puVar2[0x1a] = puVar3[10];
      }
      iStack_c = (uint)iStack_c._1_3_ << 8;
      (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(puVar2);
      puVar3 = puVar3 + 0x1b;
      iStack_34 = iStack_34 + -1;
    } while (iStack_34 != 0);
  }
  puVar2 = puStack_24;
  iStack_c = 0xffffffff;
  puVar3 = puStack_28;
  if (puStack_28 == (undefined4 *)0x0) {
    ExceptionList = pvStack_14;
    return;
  }
  for (; puVar3 != puVar2; puVar3 = puVar3 + 0x1b) {
    (**(code **)*puVar3)(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(puStack_28);
}

