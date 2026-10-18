// FUN_004b8c80 @ 004b8c80 body=[[004b8c80, 004b8d24]]


int FUN_004b8c80(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  cVar2 = (**(code **)(**(int **)(param_1 + 0x3d4) + 0x18))();
  if (cVar2 == '\0') {
    return param_1;
  }
  iVar3 = *(int *)(param_2 + 0x58);
  if (DAT_01258728 == (int *)0x0) {
    DAT_01258728 = (int *)FUN_00aae9af(0x14);
    if (DAT_01258728 == (int *)0x0) {
      DAT_01258728 = (int *)0x0;
    }
    else {
      *DAT_01258728 = 0;
      DAT_01258728[1] = 0;
      DAT_01258728[2] = 0;
      *(undefined1 *)(DAT_01258728 + 4) = 0;
    }
  }
  iVar3 = *(int *)(iVar3 * 0xb0 + 8 + *DAT_01258728);
  iVar1 = *(int *)(iVar3 + 0x108);
  iVar3 = *(int *)(iVar3 + 0x10c) - iVar1 >> 5;
  iVar4 = 0;
  if (0 < iVar3) {
    piVar5 = (int *)(iVar1 + 8);
    do {
      if (*piVar5 == *(int *)(param_1 + 0x3d4)) {
        return *(int *)(param_1 + 0x3d4);
      }
      if (*piVar5 == param_1) {
        return param_1;
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 8;
    } while (iVar4 < iVar3);
  }
  return param_1;
}

