// FUN_009f4f10 @ 009f4f10 body=[[009f4f10, 009f4f9b]]


void FUN_009f4f10(short *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  
  if (*(char *)((int)in_ECX + 0x9b) != '\0') {
    piVar4 = (int *)(**(code **)(*in_ECX + 0x58))();
    iVar3 = in_ECX[10];
    sVar2 = (**(code **)(*piVar4 + 4))();
    *param_1 = sVar2 * (short)iVar3 + -0x100;
    param_1[1] = 0x40;
    return;
  }
  iVar3 = FUN_009f77c0();
  if (iVar3 < 4) {
    param_1[0] = 0;
    param_1[1] = 0;
    return;
  }
  piVar4 = (int *)(**(code **)(*in_ECX + 0x58))();
  sVar2 = *(short *)((int)in_ECX + 0x3a);
  sVar1 = (**(code **)(*piVar4 + 4))();
  *param_1 = 0;
  param_1[1] = sVar1 * (sVar2 + -3);
  return;
}

