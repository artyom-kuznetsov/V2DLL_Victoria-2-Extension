// FUN_0092cb10 @ 0092cb10 body=[[0092cb10, 0092cb67]]


void FUN_0092cb10(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = DAT_012587e4;
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4) +
                           0xbe8) + *(int *)(in_ECX + 0x14) * 4);
  *(undefined1 *)(iVar1 + 0x71) = 1;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + *(int *)(in_ECX + 0x14) * 4) + 0xbe8) +
                  *(int *)(in_ECX + 0xc) * 4);
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined1 *)(iVar1 + 0x71) = 1;
  return;
}

