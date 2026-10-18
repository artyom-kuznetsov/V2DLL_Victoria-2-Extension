// FUN_0074fff0 @ 0074fff0 body=[[0074fff0, 007500b5]]


void FUN_0074fff0(int *param_1)

{
  int iVar1;
  int iVar2;
  short sStack_28;
  short sStack_26;
  undefined1 auStack_24 [4];
  short sStack_20;
  short sStack_1e;
  undefined1 auStack_18 [8];
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar1 = (**(code **)(*param_1 + 0x80))();
  if (0 < iVar1) {
    iVar2 = (**(code **)(*DAT_012588e8 + 0x1c))();
    if (iVar1 < iVar2) {
      iVar1 = *(int *)(DAT_012588e8[0x2b7] + iVar1 * 4);
      uStack_10 = *(undefined4 *)(iVar1 + 0x1c);
      uStack_c = *(undefined4 *)(iVar1 + 0x20);
      (**(code **)(*param_1 + 0x60))(auStack_18);
      (**(code **)(*param_1 + 0xf4))(auStack_24);
      FUN_004241c0(CONCAT22(sStack_1e + sStack_26 / 2,sStack_20 + sStack_28 / 2),auStack_18);
    }
  }
  return;
}

