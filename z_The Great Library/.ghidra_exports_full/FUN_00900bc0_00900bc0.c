// FUN_00900bc0 @ 00900bc0 body=[[00900bc0, 00900cb0]]


bool FUN_00900bc0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  float fVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return false;
  }
  iVar1 = FUN_005db9b0();
  iVar2 = FUN_005db9b0();
  fVar3 = (float)iVar1;
  if (0 < iVar2) {
    fVar3 = fVar3 / (float)iVar2;
  }
  FUN_00401000((fVar3 + 0.0005) * 1000.0);
  iVar1 = FUN_00b31c00();
  return *(int *)(in_ECX + 0x1c) <= iVar1;
}

