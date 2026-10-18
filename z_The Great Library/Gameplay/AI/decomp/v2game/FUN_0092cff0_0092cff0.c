// FUN_0092cff0 @ 0092cff0 body=[[0092cff0, 0092d07f]]


void FUN_0092cff0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = DAT_012587e4;
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4) +
                           0xbe8) + *(int *)(in_ECX + 0x14) * 4);
  *(undefined1 *)(iVar1 + 0x71) = 1;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + *(int *)(in_ECX + 0x14) * 4) + 0xbe8) +
                  *(int *)(in_ECX + 0xc) * 4);
  *(undefined1 *)(iVar1 + 0x71) = 1;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  FUN_00519920();
  FUN_00519920();
  return;
}

