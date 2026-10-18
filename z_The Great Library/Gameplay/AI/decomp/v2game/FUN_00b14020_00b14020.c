// FUN_00b14020 @ 00b14020 body=[[00b14020, 00b140e5]]


void FUN_00b14020(void)

{
  char cVar1;
  bool bVar2;
  int *in_ECX;
  uint uVar3;
  uint uVar4;
  char local_10 [12];
  uint local_4;
  
  local_4 = DAT_00ef259c ^ (uint)local_10;
  if (*in_ECX == 0) {
    __security_check_cookie(local_4 ^ (uint)local_10);
    return;
  }
  uVar4 = 0;
  builtin_strncpy(local_10,"0123456789+-",0xc);
  if (in_ECX[1] != 0) {
    do {
      cVar1 = *(char *)(*in_ECX + uVar4);
      if (((cVar1 == '+') || (cVar1 == '-')) && (uVar4 != 0)) {
LAB_00b140d2:
        __security_check_cookie(local_4 ^ (uint)local_10);
        return;
      }
      bVar2 = false;
      uVar3 = 0;
      do {
        if ((((bVar2) || (cVar1 == local_10[uVar3])) ||
            ((cVar1 == local_10[uVar3 + 1] ||
             ((cVar1 == local_10[uVar3 + 2] || (cVar1 == local_10[uVar3 + 3])))))) ||
           (cVar1 == local_10[uVar3 + 4])) goto LAB_00b140b9;
        if (cVar1 == local_10[uVar3 + 5]) {
          bVar2 = true;
        }
        uVar3 = uVar3 + 6;
      } while (uVar3 < 0xc);
      if (!bVar2) goto LAB_00b140d2;
LAB_00b140b9:
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)in_ECX[1]);
  }
  __security_check_cookie(local_4 ^ (uint)local_10);
  return;
}

