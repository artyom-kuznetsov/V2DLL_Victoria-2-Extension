// FUN_0058c910 @ 0058c910 body=[[0058c910, 0058c990]]


void FUN_0058c910(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int in_ECX;
  
  bVar1 = *(byte *)(in_ECX + 0x48);
  iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4);
  bVar2 = *(byte *)(*(int *)(in_ECX + 0x44) + 0x124c + iVar3);
  if (bVar2 != 0) {
    iVar3 = *(int *)(iVar3 + 0x128c);
    *(undefined4 *)(iVar3 + 4 + (uint)bVar2 * 8) = 0;
    *(uint *)(iVar3 + (uint)bVar2 * 8) = (uint)bVar1 << 0xf;
    return;
  }
  *(char *)(*(int *)(in_ECX + 0x44) + 0x124c + iVar3) =
       (char)(*(int *)(iVar3 + 0x1290) - *(int *)(iVar3 + 0x128c) >> 3);
  FUN_00423920();
  return;
}

