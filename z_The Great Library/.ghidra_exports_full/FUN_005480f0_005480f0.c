// FUN_005480f0 @ 005480f0 body=[[005480f0, 0054811f]]


undefined4 FUN_005480f0(void)

{
  int iVar1;
  int *in_ECX;
  
  if (in_ECX[0x15] != 0) {
    iVar1 = (**(code **)(*in_ECX + 0xc))(0xffffffff);
    if (iVar1 != -1) {
      iVar1 = __fflush_nolock((FILE *)in_ECX[0x15]);
      if (iVar1 < 0) {
        return 0xffffffff;
      }
    }
  }
  return 0;
}

