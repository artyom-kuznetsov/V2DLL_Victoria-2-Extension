// FUN_00a81770 @ 00a81770 body=[[00a81770, 00a81834]]


void FUN_00a81770(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  _free((void *)*param_2);
  uVar3 = 0;
  if (param_2[5] != 0) {
    iVar2 = 0;
    do {
      FUN_00aaea59(*(undefined4 *)(iVar2 + 0x44 + param_2[3]));
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x48;
    } while (uVar3 < (uint)param_2[5]);
  }
  FUN_00aaea59(param_2[3]);
  FUN_00aaea59(param_2[6]);
  _free((void *)param_2[9]);
  if (param_2[7] != 0) {
    _free((void *)param_2[0x10]);
  }
  _free((void *)param_2[0xf]);
  piVar1 = (int *)param_2[0xe];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_2[0xe] = 0;
  }
  piVar1 = (int *)param_2[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_2[2] = 0;
  }
  piVar1 = (int *)param_2[7];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_2[7] = 0;
  }
  piVar1 = (int *)param_2[10];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_2[10] = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_2);
}

