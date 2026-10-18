// FUN_0068dfc0 @ 0068dfc0 body=[[0068dfc0, 0068dfdc] [0068dfe0, 0068e04b]]


void FUN_0068dfc0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = DAT_01258a3c;
  piVar3 = *(int **)(DAT_01258a3c + 0xc);
  while ((*(int **)(iVar2 + 0xc) <= piVar3 && (piVar3 < *(int **)(iVar2 + 0x10)))) {
    iVar1 = *piVar3;
    piVar3 = piVar3 + 1;
    if (1 < (int)((double)((*(int *)(iVar1 + 0x1d0) + -43800000) / 0x18) / 365.0)) {
      if (*(int *)(param_1 + 0xb0c) < *(int *)(iVar1 + 0x1d0)) {
        *(undefined4 *)(iVar1 + 0x1d4) = DAT_01259abc;
      }
      else {
        *(int *)(iVar1 + 0x1d4) = *(int *)(param_1 + 0xb0c);
      }
    }
  }
  return;
}

