// FUN_00b13f60 @ 00b13f60 body=[[00b13f60, 00b14010]]


void FUN_00b13f60(void)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int *in_ECX;
  uint uVar4;
  char local_14 [16];
  uint local_4;
  
  local_4 = DAT_00ef259c ^ (uint)local_14;
  if (*in_ECX == 0) {
    __security_check_cookie(local_4 ^ (uint)local_14);
    return;
  }
  uVar4 = 0;
  builtin_strncpy(local_14,"0123456789.e+-",0xe);
  if (in_ECX[1] != 0) {
    do {
      cVar1 = *(char *)(*in_ECX + uVar4);
      if (((cVar1 == '+') || (cVar1 == '-')) && (uVar4 != 0)) {
LAB_00b13ffd:
        __security_check_cookie(local_4 ^ (uint)local_14);
        return;
      }
      bVar2 = false;
      uVar3 = 0;
      do {
        if ((bVar2) || (cVar1 == local_14[uVar3])) goto LAB_00b13fe4;
        if (cVar1 == local_14[uVar3 + 1]) {
          bVar2 = true;
        }
        uVar3 = uVar3 + 2;
      } while (uVar3 < 0xe);
      if (!bVar2) goto LAB_00b13ffd;
LAB_00b13fe4:
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)in_ECX[1]);
  }
  __security_check_cookie(local_4 ^ (uint)local_14);
  return;
}

