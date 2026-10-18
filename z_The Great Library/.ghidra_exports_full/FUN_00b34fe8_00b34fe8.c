// FUN_00b34fe8 @ 00b34fe8 body=[[00b34fe8, 00b35095]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00b34fe8(int param_1,uint param_2)

{
  uint in_EAX;
  bool in_ZF;
  short in_FPUControlWord;
  float10 in_ST0;
  float10 extraout_ST0;
  float10 fVar1;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (fVar1 = _DAT_00de9d80, param_1 != 0)) {
      fVar1 = (float10)FUN_00b32a7c();
    }
LAB_00b35077:
    if (DAT_00f1fc30 == 0) {
      fVar1 = (float10)__startOneArgErrorHandling();
      return fVar1;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      in_EAX = FUN_00b32a65();
      in_ST0 = extraout_ST0;
    }
    if (in_EAX < 0x3ff00000) {
      fVar1 = (float10)fpatan(in_ST0,SQRT(((float10)1 - in_ST0) * ((float10)1 + in_ST0)));
    }
    else {
      fVar1 = _DAT_00de9d80;
      if ((0x3ff00000 < in_EAX) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_00b35077;
      fVar1 = _DAT_00de9d8a;
      if ((param_2 & 0x80000000) != 0) {
        fVar1 = -_DAT_00de9d8a;
      }
    }
    if (DAT_00f1fc30 == 0) {
      fVar1 = (float10)__math_exit();
      return fVar1;
    }
  }
  return fVar1;
}

