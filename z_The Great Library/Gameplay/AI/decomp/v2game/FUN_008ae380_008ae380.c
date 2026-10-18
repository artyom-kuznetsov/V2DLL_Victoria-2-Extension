// FUN_008ae380 @ 008ae380  (requested 008AE380, first bytes: 55 8B EC 83 EC 08 8B 45)


int FUN_008ae380(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  iVar4 = *(int *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2;
  local_8 = 0;
  if (0 < iVar5) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0xc) + local_8 * 4);
      cVar2 = (**(code **)(*piVar1 + 0x18))(param_2);
      if (cVar2 != '\0') {
        FUN_00401000(((float)piVar1[8] / 1000.0 + 0.0005) * 1000.0);
        iVar3 = FUN_00b31c00();
        iVar4 = __alldiv((longlong)iVar3 * (longlong)iVar4,1000,0);
      }
      local_8 = local_8 + 1;
    } while (local_8 < iVar5);
  }
  if ((-1 < iVar4) || (*(int *)(param_1 + 8) < 1)) {
    if ((iVar4 < 0x3e9) || (iVar4 = (param_3 * 1000000) / (iVar4 / 1000), 1000000 < iVar4)) {
      return 1000000;
    }
    if (0 < iVar4) {
      return iVar4;
    }
  }
  return 1;
}

