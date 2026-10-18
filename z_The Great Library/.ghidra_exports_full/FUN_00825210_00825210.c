// FUN_00825210 @ 00825210 body=[[00825210, 008252a5]]


int FUN_00825210(void)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int in_EAX;
  int iVar5;
  
  piVar1 = *(int **)(in_EAX + 0x90);
  iVar4 = 0;
  fVar3 = DAT_00f07eb0;
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    FUN_00401000((fVar3 + 0.0005) * 1000.0);
    iVar5 = FUN_00b31c00();
    if ((*(int *)(iVar2 + 0x3c) < iVar5) || (*(int *)(*(int *)(iVar2 + 0x38) + 0x34) == 6)) {
      fVar3 = (float)*(int *)(iVar2 + 0x3c) / 1000.0;
      iVar4 = iVar2;
    }
  }
  return iVar4;
}

