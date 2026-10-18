// FUN_00589400 @ 00589400 body=[[00589400, 00589422]]


uint FUN_00589400(void)

{
  uint uVar1;
  
  if (*(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8) != 0) {
    uVar1 = FUN_00425b40();
    return uVar1;
  }
  return DAT_012588e8 & 0xffffff00;
}

