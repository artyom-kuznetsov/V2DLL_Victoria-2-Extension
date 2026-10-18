// FUN_00589760 @ 00589760 body=[[00589760, 00589785]]


uint FUN_00589760(void)

{
  uint uVar1;
  int in_ECX;
  
  if (*(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8) != 0) {
    uVar1 = FUN_00425e20(*(undefined1 *)(in_ECX + 0x44));
    return uVar1;
  }
  return DAT_012588e8 & 0xffffff00;
}

