// FUN_005d78d0 @ 005d78d0  (requested 005D78D0, first bytes: 55 8B EC 83 E4 F8 6A FF)


void FUN_005d78d0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *unaff_EDI;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5b6e0;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  uVar2 = (**(code **)(*unaff_EDI + 0x2c))();
  FUN_00859ef0(&LAB_005dafa0,uVar2);
  iVar3 = (**(code **)(*unaff_EDI + 0x2c))();
  *(undefined4 *)(iVar3 + 0x1b4) = 0;
  *(undefined4 *)(iVar3 + 0x1a4) = 0;
  *(undefined4 *)(iVar3 + 0x1a8) = 0;
  for (puVar1 = *(undefined4 **)(param_1 + 0x1a4);
      (puVar1 != (undefined4 *)0x0 && ((int *)*puVar1 != unaff_EDI));
      puVar1 = (undefined4 *)puVar1[2]) {
  }
  FUN_005f2ae0(puVar1);
  FUN_005b57a0(DAT_012588e8 + 0xab4);
  FUN_004c8580(*(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x5c),unaff_EDI);
  ExceptionList = pvStack_14;
  return;
}

