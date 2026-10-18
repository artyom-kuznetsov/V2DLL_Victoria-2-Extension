// FUN_009b2120 @ 009b2120 body=[[009b2120, 009b2176]]


void FUN_009b2120(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = (int *)(**(code **)(*(int *)(in_ECX + -4) + 0x2c))();
  piVar1 = (int *)*piVar1;
  if (piVar1 == (int *)0x0) {
    *(undefined1 *)(in_ECX + 0x15c) = (undefined1)param_1;
    return;
  }
  do {
    (**(code **)(*(int *)(*(int *)(*piVar1 + 0x20) + 0x18) + 0x98))(param_1);
    piVar1 = (int *)piVar1[2];
  } while (piVar1 != (int *)0x0);
  *(undefined1 *)(in_ECX + 0x15c) = (undefined1)param_1;
  return;
}

