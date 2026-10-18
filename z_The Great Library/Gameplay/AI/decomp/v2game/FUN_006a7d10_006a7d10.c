// FUN_006a7d10 @ 006a7d10 body=[[006a7d10, 006a7d96]]


int FUN_006a7d10(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int local_8;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  local_8 = 0;
  puVar5 = &DAT_00f0bed0;
  while( true ) {
    uVar2 = *puVar5;
    uVar3 = uVar2;
    if (uVar1 <= uVar2) {
      uVar3 = uVar1;
    }
    iVar4 = FUN_00414bd0(uVar3);
    if (((iVar4 == 0) && (uVar1 <= uVar2)) && (uVar2 == uVar1)) break;
    local_8 = local_8 + 1;
    puVar5 = puVar5 + 7;
    if (0xf0bf77 < (int)puVar5) {
      return 5;
    }
  }
  return local_8;
}

