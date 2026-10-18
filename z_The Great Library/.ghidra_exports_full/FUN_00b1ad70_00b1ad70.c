// FUN_00b1ad70 @ 00b1ad70 body=[[00b1ad70, 00b1adb0]]


void FUN_00b1ad70(uint *param_1,int param_2)

{
  uint uVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar1 = *param_1;
    *param_1 = (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 & 0xff00 | uVar1 << 0x10) << 8;
    param_1 = param_1 + 1;
  }
  return;
}

