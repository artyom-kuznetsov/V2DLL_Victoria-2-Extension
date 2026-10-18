// FUN_00588700 @ 00588700 body=[[00588700, 005887c9]]


void FUN_00588700(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  uint local_10;
  int iStack_c;
  
  if (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(in_ECX + 0x44) * 4) +
                       0x188) + 0x244) != 4) {
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4);
    uVar2 = *(uint *)(iVar1 + 0xe78);
    iVar3 = *(int *)(iVar1 + 0xe7c);
    local_10 = uVar2 - *(uint *)(in_ECX + 0x48);
    iStack_c = (iVar3 - *(int *)(in_ECX + 0x4c)) - (uint)(uVar2 < *(uint *)(in_ECX + 0x48));
    if ((iStack_c < 1) && (iStack_c < 0)) {
      iStack_c = 0;
      local_10 = 0;
    }
    *(uint *)(iVar1 + 0xe78) = local_10;
    *(int *)(iVar1 + 0xe7c) = iStack_c;
    FUN_004a76f0(uVar2 - local_10,(iVar3 - iStack_c) - (uint)(uVar2 < local_10));
    FUN_004a4eb0();
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xe0))(0);
  }
  return;
}

