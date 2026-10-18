// FUN_00414bd0 @ 00414bd0 body=[[00414bd0, 00414c42]]


uint FUN_00414bd0(uint param_1)

{
  int iVar1;
  byte *in_ECX;
  byte *in_EDX;
  
  for (; 3 < param_1; param_1 = param_1 - 4) {
    if (*(int *)in_EDX != *(int *)in_ECX) goto LAB_00414bf8;
    in_ECX = in_ECX + 4;
    in_EDX = in_EDX + 4;
  }
  if (param_1 == 0) {
    return 0;
  }
LAB_00414bf8:
  iVar1 = (uint)*in_EDX - (uint)*in_ECX;
  if (iVar1 == 0) {
    if (param_1 < 2) {
      return 0;
    }
    iVar1 = (uint)in_EDX[1] - (uint)in_ECX[1];
    if (iVar1 == 0) {
      if (param_1 < 3) {
        return 0;
      }
      iVar1 = (uint)in_EDX[2] - (uint)in_ECX[2];
      if (iVar1 == 0) {
        if (param_1 < 4) {
          return 0;
        }
        iVar1 = (uint)in_EDX[3] - (uint)in_ECX[3];
      }
    }
  }
  return iVar1 >> 0x1f | 1;
}

