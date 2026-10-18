// FUN_00ae8d30 @ 00ae8d30 body=[[00ae8d30, 00ae8dab]]


int FUN_00ae8d30(void)

{
  uint uVar1;
  int in_ECX;
  int *piVar2;
  uint uVar3;
  int local_c;
  int local_8;
  int local_4;
  
  local_8 = *(int *)(in_ECX + 0x40);
  local_c = 0;
  if (local_8 == 0) {
    return 0;
  }
  local_4 = *(int *)(in_ECX + 0x18);
  piVar2 = *(int **)(in_ECX + 0x3c);
  do {
    local_c = local_c + 1;
    uVar1 = *(uint *)(*(int *)(*(int *)(local_4 + 0x80) + *piVar2 * 4) + 0x40);
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        FUN_00ae8bb0(&local_c);
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
    piVar2 = piVar2 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return local_c;
}

