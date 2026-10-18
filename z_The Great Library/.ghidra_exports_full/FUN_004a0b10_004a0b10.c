// FUN_004a0b10 @ 004a0b10 body=[[004a0b10, 004a0b49] [004a0b50, 004a0bc3]]


/* WARNING: Removing unreachable block (ram,0x004a0b67) */

int FUN_004a0b10(int param_1)

{
  uint uVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int local_8;
  
  local_8 = 0;
  iVar6 = *(int *)(in_EAX + 0x21e8) - *(int *)(in_EAX + 0x21e4) >> 2;
  if (0 < iVar6) {
    uVar1 = *(uint *)(param_1 + 0x10);
    piVar5 = *(int **)(in_EAX + 0x21e4);
    do {
      uVar2 = *(uint *)(*piVar5 + 0x18);
      uVar4 = uVar1;
      if (uVar2 < uVar1) {
        uVar4 = uVar2;
      }
      iVar3 = FUN_00414bd0(uVar4);
      if (((iVar3 == 0) && (uVar1 <= uVar2)) && (uVar2 == uVar1)) {
        return local_8;
      }
      local_8 = local_8 + 1;
      piVar5 = piVar5 + 1;
    } while (local_8 < iVar6);
  }
  return -1;
}

