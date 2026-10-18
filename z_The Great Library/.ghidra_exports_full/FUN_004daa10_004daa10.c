// FUN_004daa10 @ 004daa10 body=[[004daa10, 004dab1b]]


void FUN_004daa10(char param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  uint uVar3;
  uint *unaff_ESI;
  int unaff_EDI;
  longlong lVar4;
  undefined8 uVar5;
  
  iVar1 = *(int *)(in_ECX + 300);
  *unaff_ESI = 0x8000;
  unaff_ESI[1] = 0;
  if (((iVar1 == 0) || (DAT_01258734 == 0)) || (iVar1 == DAT_01258734 + 0x10)) {
    if (param_1 != '\0') {
      if (*(char *)(in_ECX + 0x138) == '\0') {
        return;
      }
      uVar2 = *(uint *)(*(int *)(unaff_EDI + 0xa60) + 0xe0);
      uVar5 = __alldiv(uVar2 << 0x1e,((int)uVar2 >> 0x1f) << 0x1e | uVar2 >> 2,0x1f40000,0);
      uVar2 = (uint)uVar5 >> 0x11;
      *unaff_ESI = (uint)uVar5 & 0x1ffff | uVar2 << 0x11;
      unaff_ESI[1] = (int)((int)((ulonglong)uVar5 >> 0x20) << 0xf | uVar2) >> 0xf;
      return;
    }
  }
  else {
    uVar2 = *(uint *)(*(int *)(unaff_EDI + 0xbcc) + 0x18);
    lVar4 = __alldiv(uVar2 << 0x1e,((int)uVar2 >> 0x1f) << 0x1e | uVar2 >> 2,0x1f40000,0);
    *(longlong *)unaff_ESI = lVar4 + 0x8000;
    if (param_1 != '\0') {
      uVar2 = *(uint *)(*(int *)(unaff_EDI + 0xa60) + 0xe0);
      lVar4 = __alldiv(uVar2 << 0x1e,((int)uVar2 >> 0x1f) << 0x1e | uVar2 >> 2,0x1f40000,0);
      uVar2 = unaff_ESI[1];
      uVar3 = *unaff_ESI;
      goto LAB_004dab04;
    }
  }
  uVar3 = 0x10000 - *(uint *)(unaff_EDI + 0xe70);
  lVar4 = *(longlong *)unaff_ESI;
  uVar2 = -(uint)(0x10000 < *(uint *)(unaff_EDI + 0xe70)) - *(int *)(unaff_EDI + 0xe74);
LAB_004dab04:
  lVar4 = __allmul(uVar3,uVar2,lVar4);
  *(longlong *)unaff_ESI = lVar4 >> 0xf;
  return;
}

