// FUN_00b3551d @ 00b3551d body=[[00b3551d, 00b355b9]]


uint FUN_00b3551d(uint param_1,uint param_2)

{
  uint uVar1;
  bool in_ZF;
  short in_FPUControlWord;
  
  if (in_ZF) {
    if (((param_2 & 0xfffff) != 0) || (param_1 != 0)) {
      uVar1 = FUN_00b32a7c();
      goto LAB_00b3559b;
    }
    param_1 = param_2 & 0x80000000;
    param_2 = 0;
joined_r0x00b3558c:
    if (param_1 == 0) {
LAB_00b3553e:
      if (DAT_00f1fc30 != 0) {
        return param_2;
      }
      uVar1 = __math_exit();
      return uVar1;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      param_2 = FUN_00b32a65();
    }
    if ((param_2 & 0x80000000) == 0) goto LAB_00b3553e;
    if (((param_2 & 0x7ff00000) == 0) && ((param_2 & 0xfffff) == 0)) goto joined_r0x00b3558c;
  }
  uVar1 = 1;
LAB_00b3559b:
  if (DAT_00f1fc30 != 0) {
    return uVar1;
  }
  uVar1 = __startOneArgErrorHandling();
  return uVar1;
}

