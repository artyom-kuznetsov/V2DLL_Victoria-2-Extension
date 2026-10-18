// FUN_00a1fe30 @ 00a1fe30 body=[[00a1fe30, 00a1fea7]]


void FUN_00a1fe30(void)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_005da1e0();
  puVar1 = (undefined4 *)FUN_007eb4f0((undefined4 *)(in_ECX + 0x54));
  puVar3 = (undefined4 *)(in_ECX + 0x54);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

