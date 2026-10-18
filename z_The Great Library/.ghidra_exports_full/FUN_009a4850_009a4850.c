// FUN_009a4850 @ 009a4850 body=[[009a4850, 009a4923]]


/* WARNING: Removing unreachable block (ram,0x009a489a) */

void FUN_009a4850(int param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  int local_8;
  
  local_8 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x60) - *(int *)(in_ECX + 0x5c) & 0xfffffffcU)) {
    while( true ) {
      iVar4 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x5c) + local_8 * 4) + 0x44))();
      uVar1 = *(uint *)(param_1 + 0x10);
      uVar2 = *(uint *)(iVar4 + 0x10);
      uVar5 = uVar2;
      if (uVar1 <= uVar2) {
        uVar5 = uVar1;
      }
      iVar4 = FUN_00414bd0(uVar5);
      if (((iVar4 == 0) && (uVar1 <= uVar2)) && (uVar2 == uVar1)) break;
      cVar3 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x5c) + local_8 * 4) + 0x88))(param_1);
      if (cVar3 != '\0') goto LAB_009a4917;
      local_8 = local_8 + 1;
      if (*(int *)(in_ECX + 0x60) - *(int *)(in_ECX + 0x5c) >> 2 <= local_8) {
        return;
      }
    }
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x5c) + local_8 * 4) + 0x84))(1);
LAB_009a4917:
    *(undefined1 *)(in_ECX + 0x12) = 1;
  }
  return;
}

