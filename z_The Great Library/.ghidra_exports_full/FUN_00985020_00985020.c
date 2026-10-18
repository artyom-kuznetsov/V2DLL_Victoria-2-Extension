// FUN_00985020 @ 00985020 body=[[00985020, 009850f8]]


void FUN_00985020(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  
  while (param_2 < in_ECX) {
    iVar3 = (in_ECX + -1) / 2;
    piVar1 = (int *)(param_1 + iVar3 * 0x44);
    if (*piVar1 <= *param_3) break;
    piVar2 = (int *)(param_1 + in_ECX * 0x44);
    *piVar2 = *piVar1;
    piVar2[1] = piVar1[1];
    piVar2[2] = piVar1[2];
    FUN_00408ed0(piVar1 + 3,0,0xffffffff);
    piVar2[0xb] = piVar1[0xb];
    *(undefined8 *)(piVar2 + 0xc) = *(undefined8 *)(piVar1 + 0xc);
    *(undefined8 *)(piVar2 + 0xe) = *(undefined8 *)(piVar1 + 0xe);
    *(char *)(piVar2 + 0x10) = (char)piVar1[0x10];
    in_ECX = iVar3;
  }
  piVar1 = (int *)(param_1 + in_ECX * 0x44);
  *piVar1 = *param_3;
  piVar1[1] = param_3[1];
  piVar1[2] = param_3[2];
  FUN_00408ed0(param_3 + 3,0,0xffffffff);
  piVar1[0xb] = param_3[0xb];
  *(undefined8 *)(piVar1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
  *(undefined8 *)(piVar1 + 0xe) = *(undefined8 *)(param_3 + 0xe);
  *(char *)(piVar1 + 0x10) = (char)param_3[0x10];
  return;
}

