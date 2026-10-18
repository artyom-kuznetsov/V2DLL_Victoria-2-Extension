// FUN_006f39d0 @ 006f39d0 body=[[006f39d0, 006f3a94]]


bool FUN_006f39d0(int *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int in_ECX;
  int in_EDX;
  
  iVar2 = *param_1 * 4;
  if (param_1[1] != 0) {
    if (param_1[1] == 1) {
      return *(int *)(*(int *)(in_EDX + 0x118) + iVar2) - *(int *)(*(int *)(in_EDX + 0x120) + iVar2)
             < *(int *)(*(int *)(in_ECX + 0x118) + iVar2) -
               *(int *)(*(int *)(in_ECX + 0x120) + iVar2);
    }
    return *(uint *)(iVar2 + *(int *)(in_EDX + 0x118)) < *(uint *)(iVar2 + *(int *)(in_ECX + 0x118))
    ;
  }
  iVar1 = *(int *)(*(int *)(in_EDX + 0x118) + iVar2);
  fVar3 = (float)iVar1;
  if (iVar1 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  iVar2 = *(int *)(*(int *)(in_ECX + 0x118) + iVar2);
  fVar4 = (float)iVar2;
  if (iVar2 < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  if (fVar3 / (float)*(int *)(in_EDX + 200) < fVar4 / (float)*(int *)(in_ECX + 200)) {
    return true;
  }
  return false;
}

