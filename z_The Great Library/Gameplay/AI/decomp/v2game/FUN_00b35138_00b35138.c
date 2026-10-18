// FUN_00b35138 @ 00b35138 body=[[00b35138, 00b351ef]]


uint FUN_00b35138(int param_1,uint param_2)

{
  uint in_EAX;
  uint uVar1;
  bool in_ZF;
  unkbyte10 in_ST0;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (param_1 != 0)) {
      uVar1 = FUN_00b32a7c();
      goto LAB_00b351d1;
    }
    param_2 = 0;
    if ((in_EAX & 0x80000000) == 0) goto LAB_00b35165;
  }
  else {
    if ((((param_2 & 0x7ff00000) == 0) && ((param_2 & 0xfffff) == 0)) && (param_1 == 0)) {
      uVar1 = 2;
      goto LAB_00b351d1;
    }
    if ((param_2 & 0x80000000) == 0) {
      log2(in_ST0);
LAB_00b35165:
      if (DAT_00f1fc30 != 0) {
        return param_2;
      }
      uVar1 = __math_exit();
      return uVar1;
    }
  }
  uVar1 = 1;
LAB_00b351d1:
  if (DAT_00f1fc30 != 0) {
    return uVar1;
  }
  uVar1 = __startOneArgErrorHandling();
  return uVar1;
}

