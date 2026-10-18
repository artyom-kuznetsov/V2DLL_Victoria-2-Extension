// FUN_00b35338 @ 00b35338 body=[[00b35338, 00b353c8]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_00b35338(int param_1)

{
  ushort uVar1;
  uint in_EAX;
  bool in_ZF;
  ushort in_FPUStatusWord;
  unkbyte10 in_ST0;
  float10 fVar2;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) == 0) && (param_1 == 0)) {
      in_FPUStatusWord = 1;
    }
    else {
      in_FPUStatusWord = FUN_00b32a7c();
    }
    if (DAT_00f1fc30 == 0) {
      uVar1 = __startOneArgErrorHandling();
      return uVar1;
    }
  }
  else {
    fVar2 = (float10)fsin(in_ST0);
    if ((in_FPUStatusWord & 0x400) != 0) {
      do {
        fVar2 = fVar2 - ROUND(fVar2 / _DAT_00de9dba) * _DAT_00de9dba;
      } while ((in_FPUStatusWord & 0x400) != 0);
      fsin(fVar2);
    }
    if (DAT_00f1fc30 == 0) {
      uVar1 = __math_exit();
      return uVar1;
    }
  }
  return in_FPUStatusWord;
}

