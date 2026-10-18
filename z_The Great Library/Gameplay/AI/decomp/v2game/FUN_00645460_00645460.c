// FUN_00645460 @ 00645460 body=[[00645460, 0064576a]]


void FUN_00645460(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  int *unaff_EDI;
  
  FUN_007f75d0(unaff_EDI + 0x82f,param_1,param_2);
  (**(code **)(**(int **)(*unaff_EDI + 100) + 0xe4))(*(int **)(*unaff_EDI + 100),0xf,0);
  (**(code **)(**(int **)(*unaff_EDI + 100) + 0xe4))(*(int **)(*unaff_EDI + 100),0x1b,0);
  FUN_0099a480();
  iVar2 = FUN_00475500();
  fVar1 = *(float *)(iVar2 + 0xf8);
  param_2._3_1_ = 0;
  if (*(float *)(param_1 + 0x348) <= DAT_00f14420 && DAT_00f14420 != *(float *)(param_1 + 0x348)) {
    FUN_0099a480();
    iVar2 = FUN_00475500();
    if (*(char *)(iVar2 + 0xe6) != '\0') {
      FUN_0099a480();
    }
    param_2._3_1_ = 1;
  }
  if (fVar1 <= *(float *)(param_1 + 0x348)) {
    if (500.0 <= *(float *)(param_1 + 0x348)) goto LAB_0064564a;
    FUN_0098bab0();
    FUN_0099a480();
    FUN_0099a480();
  }
  else {
    iVar2 = FUN_00475500();
    if ((*(uint *)(iVar2 + 0xec) & *(uint *)(iVar2 + 0xe8) & 0x20) != 0) {
      FUN_0098bab0();
      FUN_0099a480();
      FUN_0099a480();
      FUN_0099a480();
      FUN_0099a480();
      param_2._3_1_ = 1;
    }
    iVar2 = FUN_00475500();
    if ((*(uint *)(iVar2 + 0xec) & *(uint *)(iVar2 + 0xe8) & 0x400) != 0) {
      FUN_0099a480();
    }
    iVar2 = FUN_00475500();
    if ((*(int *)(iVar2 + 0xf0) == 7) || (iVar2 = FUN_00475500(), *(int *)(iVar2 + 0xf0) == 9)) {
      FUN_0099a480();
    }
    iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x13c))();
    if (iVar2 != 5) goto LAB_0064564a;
  }
  FUN_0099a480();
LAB_0064564a:
  if (((*(float *)(param_1 + 0x348) < fVar1) &&
      (iVar2 = FUN_00475500(), *(char *)(iVar2 + 0x58) != '\0')) &&
     (iVar2 = FUN_00475500(), (*(uint *)(iVar2 + 0xec) & *(uint *)(iVar2 + 0xe8) & 4) != 0)) {
    FUN_007f7580();
  }
  if (*(float *)(param_1 + 0x348) < 500.0) {
    FUN_0099a480();
  }
  if (*(float *)(param_1 + 0x348) < fVar1) {
    iVar2 = FUN_00475500();
    if ((*(uint *)(iVar2 + 0xec) & *(uint *)(iVar2 + 0xe8) & 0x400) == 0) {
      DAT_00f07da5 = param_2._3_1_;
      return;
    }
    if (*(char *)((int)unaff_EDI + 0x1f35) == '\0') {
      DAT_00f07da5 = param_2._3_1_;
      return;
    }
    (**(code **)(**(int **)(*unaff_EDI + 100) + 0xac))
              (*(int **)(*unaff_EDI + 100),0,0,6,0xff000000,DAT_00f092fc,0);
    FUN_0099a480();
  }
  DAT_00f07da5 = param_2._3_1_;
  return;
}

