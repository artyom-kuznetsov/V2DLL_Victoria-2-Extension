// FUN_00a2af60 @ 00a2af60 body=[[00a2af60, 00a2afc1]]


void FUN_00a2af60(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = *(int *)(param_1 + 0xdc);
  while (iVar3 = iVar2, iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 0x48);
    iVar4 = FUN_00a2afe0();
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar3 + 0x40);
      piVar5 = (int *)FUN_00a2c840(iVar3 + 8);
      *piVar5 = iVar4;
      piVar5[1] = iVar1;
    }
  }
  return;
}

