// FUN_005d7760 @ 005d7760 body=[[005d7760, 005d779f]]


void FUN_005d7760(int *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x5c);
  if (*(char *)(iVar3 + 0x2a) != '\0') {
    iVar3 = FUN_004c4570(iVar3);
    fVar1 = *(float *)(iVar3 + 0xc);
    *param_1 = (int)*(float *)(iVar3 + 8);
    param_1[1] = (int)fVar1;
    return;
  }
  iVar2 = *(int *)(iVar3 + 0x80);
  *param_1 = *(int *)(iVar3 + 0x7c);
  param_1[1] = iVar2;
  return;
}

