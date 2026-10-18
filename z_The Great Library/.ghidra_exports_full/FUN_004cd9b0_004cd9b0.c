// FUN_004cd9b0 @ 004cd9b0 body=[[004cd9b0, 004cd9da]]


void FUN_004cd9b0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_EAX;
  
  puVar1 = (undefined4 *)*in_EAX;
  while (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)*puVar1;
    puVar1 = (undefined4 *)puVar1[2];
    (**(code **)(*piVar2 + 0x18))(param_1,param_2);
  }
  return;
}

