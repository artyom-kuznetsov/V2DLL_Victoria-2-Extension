// FUN_009b3470 @ 009b3470 body=[[009b3470, 009b34ca]]


void FUN_009b3470(int *param_1)

{
  int *piVar1;
  int in_ECX;
  undefined4 *puVar2;
  
  if (*(char *)(in_ECX + 0x24) != '\0') {
    for (piVar1 = *(int **)(in_ECX + 4); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      if (param_1 != (int *)*piVar1) {
        (**(code **)(*(int *)*piVar1 + 0x1c))(0);
      }
    }
    (**(code **)(*param_1 + 0x1c))(1);
  }
  puVar2 = *(undefined4 **)(in_ECX + 0x2c);
  if (puVar2 != (undefined4 *)0x0) {
    do {
      (**(code **)(*(int *)*puVar2 + 4))(in_ECX + -4);
      puVar2 = (undefined4 *)puVar2[2];
    } while (puVar2 != (undefined4 *)0x0);
  }
  return;
}

