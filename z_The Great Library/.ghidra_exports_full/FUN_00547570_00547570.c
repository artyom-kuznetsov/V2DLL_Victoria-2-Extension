// FUN_00547570 @ 00547570 body=[[00547570, 00547596]]


uint FUN_00547570(void)

{
  byte *pbVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = (**(code **)(*in_ECX + 0x18))();
  if (iVar2 == -1) {
    return 0xffffffff;
  }
  *(int *)in_ECX[0xc] = *(int *)in_ECX[0xc] + -1;
  pbVar1 = *(byte **)in_ECX[8];
  *(byte **)in_ECX[8] = pbVar1 + 1;
  return (uint)*pbVar1;
}

