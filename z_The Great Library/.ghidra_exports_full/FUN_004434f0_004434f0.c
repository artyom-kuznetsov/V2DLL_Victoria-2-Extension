// FUN_004434f0 @ 004434f0 body=[[004434f0, 0044355d]]


void FUN_004434f0(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar4;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(DAT_012588dc + 0x20d8) + *(int *)(*(int *)(in_ECX + 0x2c) + 0x58) * 4);
  if ((iVar1 != 0) && (piVar2 = *(int **)(iVar1 + 0x10), piVar2 != (int *)0x0)) {
    cVar4 = (**(code **)(*piVar2 + 0x13c))();
    if (cVar4 != '\0') {
      iVar1 = piVar2[0x33];
      *param_1 = *(undefined8 *)(piVar2 + 0x31);
      *(int *)(param_1 + 1) = iVar1;
      return;
    }
  }
  uVar3 = DAT_00f0abb8;
  *param_1 = DAT_00f0abb0;
  *(undefined4 *)(param_1 + 1) = uVar3;
  return;
}

