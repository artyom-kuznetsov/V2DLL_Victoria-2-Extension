// FUN_005b5290 @ 005b5290 body=[[005b5290, 005b52ca]]


void FUN_005b5290(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 8);
  while (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)*puVar1;
    puVar1 = (undefined4 *)puVar1[2];
    (**(code **)(*piVar2 + 0x20))();
    FUN_009a0940(param_1);
    (**(code **)(*piVar2 + 4))(param_1);
  }
  return;
}

