// FUN_00908e60 @ 00908e60 body=[[00908e60, 00908ecc]]


void FUN_00908e60(int param_1,int param_2)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (param_2 == 0x1aa) {
    (**(code **)(*(int *)(in_ECX + 0x68) + 0xc))(param_1);
    return;
  }
  if (param_2 != 0x3b5) {
    if (param_2 != 0x3b9) {
      FUN_009a2620(param_1,param_2);
      return;
    }
    uVar1 = FUN_00aaf0c5(param_1 + 0x22c);
    *(undefined4 *)(in_ECX + 100) = uVar1;
    return;
  }
  FUN_0072d580();
  return;
}

