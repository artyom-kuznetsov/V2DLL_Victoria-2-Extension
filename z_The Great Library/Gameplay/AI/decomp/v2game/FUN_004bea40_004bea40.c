// FUN_004bea40 @ 004bea40 body=[[004bea40, 004bea96]]


void FUN_004bea40(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint in_ECX;
  int *in_EDX;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = param_1;
  iVar1 = in_EDX[1];
  local_c = param_2;
  uVar2 = iVar1 - *in_EDX >> 3;
  if (uVar2 < in_ECX) {
    FUN_004beee0(iVar1,&local_10);
    return;
  }
  if (in_ECX < uVar2) {
    FUN_0043a910(*in_EDX + in_ECX * 8,iVar1);
  }
  return;
}

