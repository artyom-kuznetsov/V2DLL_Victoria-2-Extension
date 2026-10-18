// FUN_00905520 @ 00905520 body=[[00905520, 0090556f]]


bool FUN_00905520(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (((*(char *)(in_ECX + 0x24) != '\0') && (iVar1 = *(int *)(param_1 + 0x28), iVar1 != 0)) &&
     (*(int *)(in_ECX + 0x1c) < *(int *)(iVar1 + 0x58) - *(int *)(iVar1 + 0x54) >> 2)) {
    iVar1 = FUN_00457630();
    iVar2 = FUN_00457630();
    return iVar2 < iVar1;
  }
  return false;
}

