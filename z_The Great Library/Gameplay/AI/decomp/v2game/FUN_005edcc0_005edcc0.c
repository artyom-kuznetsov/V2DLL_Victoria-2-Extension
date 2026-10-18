// FUN_005edcc0 @ 005edcc0 body=[[005edcc0, 005edd08]]


void FUN_005edcc0(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  undefined4 *puVar2;
  
  if ((char)param_1 == '\0') {
    puVar2 = *(undefined4 **)(in_ECX + 0x10);
    while (puVar2 != (undefined4 *)0x0) {
      piVar1 = (int *)*puVar2;
      puVar2 = (undefined4 *)puVar2[1];
      (**(code **)(*piVar1 + 0x1c))(0);
    }
  }
  else {
    puVar2 = *(undefined4 **)(in_ECX + 0xc);
    if (puVar2 != (undefined4 *)0x0) {
      do {
        piVar1 = (int *)*puVar2;
        puVar2 = (undefined4 *)puVar2[2];
        (**(code **)(*piVar1 + 0x1c))(param_1);
      } while (puVar2 != (undefined4 *)0x0);
      return;
    }
  }
  return;
}

