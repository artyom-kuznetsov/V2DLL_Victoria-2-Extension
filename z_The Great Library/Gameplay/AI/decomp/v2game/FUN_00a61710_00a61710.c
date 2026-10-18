// FUN_00a61710 @ 00a61710 body=[[00a61710, 00a6177b]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a61710(void)

{
  int iVar1;
  DWORD DVar2;
  int in_ECX;
  uint uVar3;
  
  iVar1 = *(int *)(in_ECX + 0x18);
  uVar3 = *(uint *)(iVar1 + 0x20);
  if (uVar3 < (uint)(*(int *)(iVar1 + 0x24) * 0xe8 + *(int *)(iVar1 + 0x20))) {
    do {
      FUN_00a8a450();
      FUN_00a8a360();
      uVar3 = uVar3 + 0xe8;
    } while (uVar3 < (uint)(*(int *)(*(int *)(in_ECX + 0x18) + 0x24) * 0xe8 +
                           *(int *)(*(int *)(in_ECX + 0x18) + 0x20)));
  }
  DVar2 = timeGetTime();
  DAT_012586d0 = DVar2 - _DAT_01258b70;
  FUN_00a899f0(0,0);
  return;
}

