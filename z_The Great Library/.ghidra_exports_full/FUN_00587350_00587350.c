// FUN_00587350 @ 00587350 body=[[00587350, 005873c6]]


void FUN_00587350(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  uint *puVar4;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  
  local_14 = *(int *)(in_ECX + 0x44);
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x50) * 4);
  iVar2 = *(int *)(in_ECX + 0x48);
  local_c = *(int *)(iVar1 + 0x1464 + iVar2 * 8);
  local_10 = *(uint *)(iVar1 + 0x1460 + iVar2 * 8);
  local_18 = *(uint *)(in_ECX + 0x40);
  if ((local_14 < local_c) || ((local_14 <= local_c && (*(uint *)(in_ECX + 0x40) <= local_10)))) {
    puVar4 = &local_10;
  }
  else {
    puVar4 = &local_18;
  }
  uVar3 = puVar4[1];
  *(uint *)(iVar1 + 0x1448 + iVar2 * 8) = *puVar4;
  *(uint *)(iVar1 + 0x144c + iVar2 * 8) = uVar3;
  return;
}

