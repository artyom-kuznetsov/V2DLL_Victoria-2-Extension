// FUN_0072b700 @ 0072b700 body=[[0072b700, 0072b7bb]]


void FUN_0072b700(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0x3c);
  if (*piVar1 != *(int *)(DAT_012588e8 + 0xb0c)) {
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x100))();
    FUN_0063ef30(1,*piVar1);
  }
  FUN_005edf10(piVar1);
  *(int *)(DAT_012588e8 + 0xb0c) = *piVar1;
  FUN_00688050();
  iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x38))();
  FUN_007fcbd0(iVar2 + 0x20bc);
  (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x38))();
  FUN_00819830();
  iVar2 = FUN_00475500();
  *(undefined4 *)(iVar2 + 0xec) = 0xff9a;
  iVar2 = FUN_00475500();
  *(undefined4 *)(iVar2 + 0xf0) = 2;
  return;
}

