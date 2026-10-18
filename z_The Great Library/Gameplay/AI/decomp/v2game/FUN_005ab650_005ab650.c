// FUN_005ab650 @ 005ab650  (requested 005AB650, first bytes: 55 8B EC 83 EC 08 53 56)


undefined4 FUN_005ab650(int param_1)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x10);
  if ((*(int *)(iVar1 + 0x38) - *(int *)(iVar1 + 0x34) & 0xfffffff8U) != 0) {
    pcVar2 = *(char **)(iVar1 + 0x34);
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc4) * 4);
    if (*(int *)(pcVar2 + 4) != *(int *)(iVar1 + 0x20)) {
      if (*(int *)(*(int *)(*(int *)(iVar1 + 0xbe8) + *(int *)(pcVar2 + 4) * 4) + 0x34) != 0) {
        return 0;
      }
      if (((*pcVar2 == 'R') && (pcVar2[1] == 'E')) && (pcVar2[2] == 'B')) {
        return 0;
      }
      if (((*(char *)(iVar1 + 0x1c) == 'R') && (*(char *)(iVar1 + 0x1d) == 'E')) &&
         (*(char *)(iVar1 + 0x1e) == 'B')) {
        return 0;
      }
    }
  }
  cVar3 = (**(code **)(**(int **)(in_ECX + 0x14) + 0x40))(param_1);
  if (((cVar3 != '\0') && (*(int *)(param_1 + 0x70) == 0)) && (*(int *)(param_1 + 0xec) < 1)) {
    FUN_005a9610();
    return 1;
  }
  return 0;
}

