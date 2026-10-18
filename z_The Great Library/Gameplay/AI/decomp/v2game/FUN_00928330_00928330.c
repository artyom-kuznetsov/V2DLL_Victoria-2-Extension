// FUN_00928330 @ 00928330 body=[[00928330, 00928368]]


void FUN_00928330(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x14) * 4) +
                           0xbe8) + *(int *)(in_ECX + 0xc) * 4);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(in_ECX + 8);
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(in_ECX + 0xc);
  return;
}

