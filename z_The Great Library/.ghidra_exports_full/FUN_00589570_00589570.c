// FUN_00589570 @ 00589570 body=[[00589570, 0058959d]]


void FUN_00589570(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
  if (iVar1 != 0) {
    if (*(char *)(in_ECX + 0x44) != '\0') {
      FUN_00428d70(iVar1,in_ECX + 0x3c);
      return;
    }
    FUN_00428e50(iVar1,in_ECX + 0x3c);
  }
  return;
}

