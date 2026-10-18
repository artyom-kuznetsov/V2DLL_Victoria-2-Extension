// FUN_009f4e70 @ 009f4e70 body=[[009f4e70, 009f4f07]]


void FUN_009f4e70(short *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  
  if (*(char *)((int)in_ECX + 0x9b) != '\0') {
    piVar4 = (int *)(**(code **)(*in_ECX + 0x58))();
    iVar3 = in_ECX[10];
    sVar1 = (**(code **)(*piVar4 + 4))();
    param_1[1] = 0x40;
    *param_1 = sVar1 * (short)iVar3;
    return;
  }
  iVar3 = FUN_009f77c0();
  if (iVar3 < 3) {
    iVar3 = in_ECX[0x12];
    param_1[1] = 0x40;
    *param_1 = (short)iVar3;
    return;
  }
  piVar4 = (int *)(**(code **)(*in_ECX + 0x58))();
  sVar1 = (**(code **)(*piVar4 + 4))();
  sVar2 = FUN_009f77c0();
  *param_1 = (short)in_ECX[0x12];
  param_1[1] = sVar1 * (sVar2 + 1);
  return;
}

