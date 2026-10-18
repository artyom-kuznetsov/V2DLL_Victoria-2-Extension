// FUN_00442df0 @ 00442df0 body=[[00442df0, 00442e88]]


void FUN_00442df0(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int *piVar4;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x2c) != 0) &&
     (piVar4 = *(int **)(*(int *)(in_ECX + 0x2c) + 8), piVar4 != (int *)0x0)) {
    do {
      iVar1 = *piVar4;
      piVar4 = (int *)piVar4[2];
      if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar1 * 4) + 300) == 0) {
        iVar1 = *(int *)(*(int *)(DAT_012588dc + 0x20d8) + iVar1 * 4);
        if ((iVar1 != 0) && (piVar4 = *(int **)(iVar1 + 0x10), piVar4 != (int *)0x0)) {
          cVar3 = (**(code **)(*piVar4 + 0x13c))();
          if (cVar3 != '\0') {
            iVar1 = piVar4[0x33];
            *param_1 = *(undefined8 *)(piVar4 + 0x31);
            *(int *)(param_1 + 1) = iVar1;
            return;
          }
        }
        break;
      }
    } while (piVar4 != (int *)0x0);
  }
  uVar2 = DAT_00f0abb8;
  *param_1 = DAT_00f0abb0;
  *(undefined4 *)(param_1 + 1) = uVar2;
  return;
}

