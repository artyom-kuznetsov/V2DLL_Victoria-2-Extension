// FUN_005954c0 @ 005954c0 body=[[005954c0, 00595510]]


bool FUN_005954c0(void)

{
  char cVar1;
  int *piVar2;
  int *in_ECX;
  undefined1 local_8 [4];
  
  if ((char)in_ECX[0x1a] == '\0') {
    piVar2 = (int *)FUN_005dc180(in_ECX + 8,local_8);
    if (DAT_0125f594 <= *piVar2) {
      cVar1 = (**(code **)(*(int *)in_ECX[7] + 0x2c))();
      if (cVar1 == '\0') {
        return false;
      }
      cVar1 = (**(code **)(*in_ECX + 0x50))();
      return cVar1 != '\0';
    }
  }
  return true;
}

