// FUN_00443780 @ 00443780 body=[[00443780, 004437bc] [004437c0, 00443828]]


void FUN_00443780(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  FUN_00443c80(param_1);
  FUN_00443e40(param_1);
  FUN_00444040(param_1);
  FUN_00444160(param_1);
  FUN_004442e0(param_1);
  piVar2 = (int *)(in_ECX + 4);
  param_1 = 5;
  do {
    iVar1 = piVar2[1] - *piVar2 >> 2;
    if (0 < iVar1) {
      FUN_004bf300(iVar1);
    }
    piVar2 = piVar2 + 4;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  iVar1 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) >> 2) +
          (*(int *)(in_ECX + 0x18) - *(int *)(in_ECX + 0x14) >> 2) +
          (*(int *)(in_ECX + 0x28) - *(int *)(in_ECX + 0x24) >> 2) +
          (*(int *)(in_ECX + 0x38) - *(int *)(in_ECX + 0x34) >> 2) +
          (*(int *)(in_ECX + 0x48) - *(int *)(in_ECX + 0x44) >> 2);
  if (0 < iVar1) {
    FUN_004bf300(iVar1);
  }
  return;
}

