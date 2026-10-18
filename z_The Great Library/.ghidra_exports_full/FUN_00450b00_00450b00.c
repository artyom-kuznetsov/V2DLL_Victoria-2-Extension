// FUN_00450b00 @ 00450b00 body=[[00450b00, 00450b84]]


void FUN_00450b00(int *param_1)

{
  int iVar1;
  undefined3 extraout_EAX;
  undefined1 extraout_var;
  undefined4 uVar2;
  int local_8;
  
  (**(code **)(*param_1 + 0x80))();
  iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) + 100);
  param_1._0_3_ = extraout_EAX;
  param_1._3_1_ = extraout_var;
  FUN_00445430(&param_1);
  if (local_8 == *(int *)(iVar1 + 8)) {
    param_1._3_1_ = '\0';
  }
  else {
    param_1._3_1_ = *(char *)(local_8 + 0x10);
  }
  uVar2 = FUN_0043caa0();
  *(bool *)uVar2 = param_1._3_1_ == '\0';
  *(undefined1 *)(iVar1 + 0x14) = 1;
  return;
}

