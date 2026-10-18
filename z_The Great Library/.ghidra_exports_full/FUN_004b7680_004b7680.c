// FUN_004b7680 @ 004b7680 body=[[004b7680, 004b76d0]]


uint FUN_004b7680(int param_1)

{
  uint uVar1;
  uint in_ECX;
  
  if (*(int *)(param_1 + 0x38) == *(int *)(DAT_012588e8 + 0xb60)) {
    uVar1 = FUN_004b76e0(1);
    return uVar1 & 0xffffff00;
  }
  if (*(int *)(param_1 + 0x40) == *(int *)(DAT_012588e8 + 0xb60)) {
    in_ECX = FUN_004b76e0(0);
  }
  return in_ECX & 0xffffff00;
}

