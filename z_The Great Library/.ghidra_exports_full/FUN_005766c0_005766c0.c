// FUN_005766c0 @ 005766c0 body=[[005766c0, 00576713]]


void FUN_005766c0(void)

{
  int *in_EAX;
  int in_ECX;
  int iVar1;
  int unaff_ESI;
  
  if (((DAT_01258734 != 0) && (in_ECX != DAT_01258734 + 0x10)) && (in_ECX != 0)) {
    iVar1 = *(int *)(*(int *)(unaff_ESI + 0x160) + *(int *)(*(int *)(in_ECX + 0x80) + 8) * 4);
    if (*(char *)(in_ECX + 0x13c) != '\0') {
      *in_EAX = iVar1 + *(int *)(unaff_ESI + 0x278);
      return;
    }
    if (*(char *)(in_ECX + 0x13d) != '\0') {
      iVar1 = iVar1 + *(int *)(unaff_ESI + 0x27c);
    }
    *in_EAX = iVar1;
    return;
  }
  *in_EAX = 0;
  return;
}

