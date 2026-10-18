// FUN_006cb0c0 @ 006cb0c0 body=[[006cb0c0, 006cb10c]]


int FUN_006cb0c0(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  FUN_0061ac20();
  iVar1 = *(int *)(in_ECX + 8);
  FUN_0061ac20();
  *(int *)(param_1 + 8) = iVar1 - param_2;
  FUN_004010c0();
  return param_1;
}

