// FUN_006cac20 @ 006cac20 body=[[006cac20, 006cac5d]]


int FUN_006cac20(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xc);
  iVar2 = *(int *)(in_ECX + 0x10);
  FUN_0061ac10();
  FUN_0061ac40(in_ECX);
  *(int *)(param_1 + 8) = iVar1 + iVar2;
  return param_1;
}

