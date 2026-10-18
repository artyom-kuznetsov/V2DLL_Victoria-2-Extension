// FUN_00b28260 @ 00b28260 body=[[00b28260, 00b282b7]]


void FUN_00b28260(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  
  piVar1 = (int *)param_1[2];
  piVar3 = piVar1;
  for (uVar2 = (uint)*(ushort *)(param_1 + 1); uVar2 != 0; uVar2 = uVar2 - 1) {
    if (*piVar3 != 0) {
      (*DAT_013f3ab0)(*piVar3);
    }
    piVar3 = piVar3 + 0xc;
  }
  (*DAT_013f3ab0)(piVar1);
  (*DAT_013f3ab0)(*param_1);
  (*DAT_013f3ab0)(param_1);
  return;
}

