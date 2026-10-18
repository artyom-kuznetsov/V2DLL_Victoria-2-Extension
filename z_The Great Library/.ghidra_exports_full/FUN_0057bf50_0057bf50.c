// FUN_0057bf50 @ 0057bf50 body=[[0057bf50, 0057bfc2]]


uint FUN_0057bf50(void)

{
  undefined4 uVar1;
  uint uVar2;
  int in_ECX;
  
  uVar2 = *(uint *)(in_ECX + 0x3c);
  if ((uVar2 != 0) && (-1 < *(int *)(in_ECX + 0x40))) {
    uVar1 = *(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(in_ECX + 0x40) * 4);
    if (*(char *)(in_ECX + 0x54) != '\0') {
      uVar2 = FUN_00511ef0(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x50) * 4)
                           ,uVar1,1,0,0,0,0);
      return uVar2;
    }
    uVar2 = FUN_00511e70(uVar2,uVar1);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

