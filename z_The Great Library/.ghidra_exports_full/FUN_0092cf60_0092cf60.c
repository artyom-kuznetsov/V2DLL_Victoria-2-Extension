// FUN_0092cf60 @ 0092cf60 body=[[0092cf60, 0092cfed]]


void FUN_0092cf60(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = DAT_012587e4;
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4) +
                           0xbe8) + *(int *)(in_ECX + 0x14) * 4);
  *(int *)(iVar1 + 0x24) = in_ECX;
  *(undefined1 *)(iVar1 + 0x71) = 1;
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + *(int *)(in_ECX + 0x14) * 4) + 0xbe8) +
                  *(int *)(in_ECX + 0xc) * 4);
  *(undefined1 *)(iVar1 + 0x71) = 1;
  *(int *)(iVar1 + 0x24) = in_ECX;
  FUN_00519920();
  FUN_00519920();
  return;
}

