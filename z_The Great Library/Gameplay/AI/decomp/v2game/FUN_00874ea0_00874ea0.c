// FUN_00874ea0 @ 00874ea0  (requested 00874EA0, first bytes: 55 8B EC 83 EC 0C 8B 45)


void FUN_00874ea0(int param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_c;
  int local_8;
  
  local_c = *(int *)(param_1 + 0x118);
  iVar3 = *(int *)(param_1 + 0x120) - *(int *)(param_1 + 0x11c) >> 2;
  if ((iVar3 != 0) && (local_8 = 0, 0 < iVar3)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x11c) + local_8 * 4);
      iVar4 = 0;
      iVar5 = *(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8) >> 2;
      if (0 < iVar5) {
        do {
          cVar2 = (**(code **)(**(int **)(*(int *)(iVar1 + 8) + iVar4 * 4) + 0x18))(param_2);
          if (cVar2 == '\0') goto LAB_00874f44;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar5);
      }
      local_c = __alldiv((longlong)
                         *(int *)(*(int *)(*(int *)(param_1 + 0x11c) + local_8 * 4) + 0x20) *
                         (longlong)local_c,1000,0);
      if (local_c < 1) {
        return;
      }
LAB_00874f44:
      local_8 = local_8 + 1;
    } while (local_8 < iVar3);
  }
  return;
}

