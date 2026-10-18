// FUN_0082e970 @ 0082e970 body=[[0082e970, 0082eaa5]]


void FUN_0082e970(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = FUN_00ab047b();
  iVar6 = 0;
  *(int *)(in_ECX + 0x30) = iVar2 % 3 + 1;
  iVar2 = (*(int *)(DAT_012588e8 + 0xb0c) + -43800000) / 0x18;
  iVar2 = iVar2 - (int)((float)(int)((double)iVar2 / 365.0) * 365.0);
  for (iVar3 = iVar2 - DAT_00f1027c; -1 < iVar3; iVar3 = iVar3 - (&DAT_00f1027c)[iVar6]) {
    iVar6 = iVar6 + 1;
  }
  iVar4 = 0;
  iVar5 = 0;
  iVar3 = 0;
  if (1 < iVar6) {
    iVar3 = 0;
    do {
      iVar4 = iVar4 + (&DAT_00f1027c)[iVar3];
      iVar5 = iVar5 + (&DAT_00f10280)[iVar3];
      iVar3 = iVar3 + 2;
    } while (iVar3 < iVar6 + -1);
  }
  if (iVar3 < iVar6) {
    iVar6 = (&DAT_00f1027c)[iVar3];
  }
  else {
    iVar6 = 0;
  }
  iVar6 = ((iVar2 - iVar4) - iVar5) - iVar6;
  if (*(int *)(in_ECX + 0x68) != iVar6) {
    *(int *)(in_ECX + 0x68) = iVar6;
    FUN_00831a60(in_ECX);
    FUN_0082f430();
    if (((DAT_013f08c4 != 0) && (*(int *)(in_ECX + 0x38) == *(int *)(DAT_012588e8 + 0xb60))) &&
       (cVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x158))(), cVar1 == '\0')) {
      (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x15c))();
    }
  }
  return;
}

