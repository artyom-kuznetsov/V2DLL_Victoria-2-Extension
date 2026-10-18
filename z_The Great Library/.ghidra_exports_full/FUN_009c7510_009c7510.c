// FUN_009c7510 @ 009c7510 body=[[009c7510, 009c7552]]


void FUN_009c7510(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int *in_ECX;
  
  uVar1 = FUN_00ab047b();
  uVar1 = uVar1 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  if (uVar1 == 0) {
    (**(code **)(*in_ECX + 0x24))(param_1);
  }
  else if (uVar1 == 1) {
    (**(code **)(*in_ECX + 0x24))(param_2);
    return;
  }
  return;
}

