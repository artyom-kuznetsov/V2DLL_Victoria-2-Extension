// FUN_00a866d0 @ 00a866d0 body=[[00a866d0, 00a8671c]]


undefined4 FUN_00a866d0(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  if (in_ECX == param_1) {
    return 1;
  }
  puVar3 = (undefined4 *)(**(code **)(*(int *)(in_ECX + 0x74) + 0x2c))();
  piVar1 = (int *)*puVar3;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    cVar2 = (**(code **)(*(int *)(*piVar1 + 0x1c) + 0x58))(param_1);
    if (cVar2 != '\0') break;
    piVar1 = (int *)piVar1[2];
  }
  return 1;
}

