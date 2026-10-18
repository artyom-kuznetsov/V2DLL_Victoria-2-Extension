// FUN_00b0a840 @ 00b0a840 body=[[00b0a840, 00b0a86b]]


void FUN_00b0a840(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (param_1 == 0) {
    *(undefined4 *)(in_ECX + 0x10) = 0xffffffff;
    return;
  }
  uVar1 = FUN_00b157e0(param_1);
  *(undefined4 *)(in_ECX + 0x10) = uVar1;
  return;
}

