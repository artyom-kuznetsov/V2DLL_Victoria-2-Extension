// FUN_008aeb00 @ 008aeb00  (requested 008AEB00, first bytes: 55 8B EC 83 EC 0C 8B 45)


undefined4 * FUN_008aeb00(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_c;
  int local_8;
  
  local_c = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2;
  if ((iVar4 != 0) && (local_8 = 0, 0 < iVar4)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0xc) + local_8 * 4);
      iVar5 = 0;
      iVar6 = *(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8) >> 2;
      if (0 < iVar6) {
        do {
          cVar2 = (**(code **)(**(int **)(*(int *)(iVar1 + 8) + iVar5 * 4) + 0x18))(param_3);
          if (cVar2 == '\0') goto LAB_008aeb91;
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar6);
      }
      local_c = __alldiv((longlong)*(int *)(*(int *)(*(int *)(param_1 + 0xc) + local_8 * 4) + 0x20)
                         * (longlong)local_c,1000,0);
      if (local_c < 1) break;
LAB_008aeb91:
      local_8 = local_8 + 1;
    } while (local_8 < iVar4);
  }
  uVar3 = __alldiv((longlong)*(int *)(param_1 + 0x1c) * (longlong)local_c,1000,0);
  *param_2 = uVar3;
  return param_2;
}

