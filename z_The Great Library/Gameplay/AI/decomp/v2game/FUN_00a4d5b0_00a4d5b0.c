// FUN_00a4d5b0 @ 00a4d5b0 body=[[00a4d5b0, 00a4d5fa]]


int FUN_00a4d5b0(int param_1)

{
  int iVar1;
  undefined4 in_ECX;
  
  if ((*(int *)(param_1 + 0x44) != 0) && (iVar1 = FUN_00a4d520(in_ECX), iVar1 < 0)) {
    return iVar1;
  }
  if ((*(int *)(param_1 + 0x48) != 0) && (iVar1 = FUN_00a4d5b0(*(int *)(param_1 + 0x48)), iVar1 < 0)
     ) {
    return iVar1;
  }
  if ((*(int *)(param_1 + 0x4c) != 0) && (iVar1 = FUN_00a4d5b0(*(int *)(param_1 + 0x4c)), iVar1 < 0)
     ) {
    return iVar1;
  }
  return 0;
}

