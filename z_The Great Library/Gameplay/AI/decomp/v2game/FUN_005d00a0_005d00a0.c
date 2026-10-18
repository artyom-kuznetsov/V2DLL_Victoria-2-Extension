// FUN_005d00a0 @ 005d00a0 body=[[005d00a0, 005d00d4]]


int * FUN_005d00a0(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int in_ECX;
  
  piVar2 = param_1;
  puVar1 = *(undefined4 **)(in_ECX + 0x4c);
  *param_1 = 0;
  while (puVar1 != (undefined4 *)0x0) {
    piVar3 = (int *)*puVar1;
    puVar1 = (undefined4 *)puVar1[2];
    piVar3 = (int *)(**(code **)(*piVar3 + 0x5c))(&param_1);
    *piVar2 = *piVar2 + *piVar3;
  }
  return piVar2;
}

