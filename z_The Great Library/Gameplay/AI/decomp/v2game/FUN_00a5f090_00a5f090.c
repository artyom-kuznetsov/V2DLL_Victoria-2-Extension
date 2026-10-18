// FUN_00a5f090 @ 00a5f090 body=[[00a5f090, 00a5f09c] [00a5f0a0, 00a5f0bc]]


void FUN_00a5f090(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int in_EAX;
  
  for (puVar1 = *(undefined4 **)(in_EAX + 4); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*(int *)*puVar1 + 4))(param_1,param_2);
  }
  return;
}

