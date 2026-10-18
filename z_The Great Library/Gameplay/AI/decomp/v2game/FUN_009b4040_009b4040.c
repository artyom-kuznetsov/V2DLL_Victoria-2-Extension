// FUN_009b4040 @ 009b4040 body=[[009b4040, 009b408f]]


void FUN_009b4040(float param_1)

{
  int in_ECX;
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x60);
  *(float *)(in_ECX + 0xb4) = param_1;
  if (puVar1 != (undefined4 *)0x0) {
    do {
      (**(code **)(*(int *)*puVar1 + 0xc))(param_1 + 0.1);
      puVar1 = (undefined4 *)puVar1[2];
    } while (puVar1 != (undefined4 *)0x0);
  }
  return;
}

