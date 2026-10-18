// FUN_0056bc50 @ 0056bc50  (requested 0056BC50, first bytes: 55 8B EC 83 EC 08 8B 4D)


void FUN_0056bc50(int param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  *param_2 = *(int *)(param_1 + 0x378);
  iVar3 = *(int *)(param_1 + 0x380) - *(int *)(param_1 + 0x37c) >> 2;
  if ((iVar3 != 0) && (local_8 = 0, 0 < iVar3)) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x37c) + local_8 * 4);
      iVar4 = 0;
      iVar5 = *(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 8) >> 2;
      if (0 < iVar5) {
        do {
          cVar1 = (**(code **)(**(int **)(*(int *)(iVar2 + 8) + iVar4 * 4) + 0x18))(param_3);
          if (cVar1 == '\0') goto LAB_0056bcfb;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar5);
      }
      iVar2 = __alldiv((longlong)*param_2 *
                       (longlong)*(int *)(*(int *)(*(int *)(param_1 + 0x37c) + local_8 * 4) + 0x20),
                       1000,0);
      *param_2 = iVar2;
      if (iVar2 < 1) break;
LAB_0056bcfb:
      local_8 = local_8 + 1;
    } while (local_8 < iVar3);
  }
  if (*param_2 < -0x5f5dd18) {
    *param_2 = 0x5f5dd18;
  }
  return;
}

