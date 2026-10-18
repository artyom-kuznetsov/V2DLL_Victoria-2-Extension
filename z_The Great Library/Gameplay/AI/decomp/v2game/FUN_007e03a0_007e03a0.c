// FUN_007e03a0 @ 007e03a0 body=[[007e03a0, 007e0408]]


void FUN_007e03a0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int *in_ECX;
  
  if ((char)in_ECX[0x9ae] == '\0') {
    FUN_007df9e0();
  }
  if (param_1 == 0) {
    if (param_5 < 0x1e) {
      if (0x11 < param_5) {
        param_1 = 1;
      }
    }
    else {
      param_1 = 2;
    }
  }
  (**(code **)(*in_ECX + 0x58))
            (param_1,param_2,
             ((*(int *)(in_ECX[0x9ad] + 0x14 + param_1 * 0x18) -
              *(int *)(&DAT_00f093c0 + param_1 * 4)) - param_5) + param_3,param_4);
  return;
}

