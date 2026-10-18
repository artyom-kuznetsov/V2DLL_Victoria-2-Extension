// FUN_00a86d10 @ 00a86d10 body=[[00a86d10, 00a86d4e]]


void FUN_00a86d10(undefined4 param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  FUN_00408ed0(param_1,0,0xffffffff);
  puVar1 = (undefined4 *)(**(code **)(*(int *)(in_ECX + 0x74) + 0x2c))();
  for (puVar1 = (undefined4 *)*puVar1; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]
      ) {
    (**(code **)(*(int *)*puVar1 + 0x24))(param_1);
  }
  return;
}

