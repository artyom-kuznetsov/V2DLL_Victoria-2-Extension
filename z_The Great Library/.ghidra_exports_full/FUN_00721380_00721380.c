// FUN_00721380 @ 00721380 body=[[00721380, 007213f1] [007213f5, 00721489]]


void FUN_00721380(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 uStack_38;
  undefined1 local_34 [12];
  undefined4 uStack_28;
  uint local_24;
  undefined4 local_20;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4be63;
  pvStack_14 = ExceptionList;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350("buy_from_stockpile",0x12);
  local_c = 0;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x48))(local_34);
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_38);
  }
  local_24 = 0xf;
  uStack_28 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_00aae9af(0x48);
    puStack_10 = (undefined1 *)0x1;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0058ccc0(iVar2,*(undefined4 *)(DAT_012588e8 + 0xb5c),
                           *(undefined4 *)(DAT_012588e8 + 0xb60),*(int *)(iVar1 + 0x6c) == 1);
    }
    puStack_10 = (undefined1 *)0xffffffff;
    iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
    (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar3);
  }
  ExceptionList = pvStack_18;
  return;
}

