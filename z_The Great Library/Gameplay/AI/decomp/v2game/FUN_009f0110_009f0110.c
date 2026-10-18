// FUN_009f0110 @ 009f0110 body=[[009f0110, 009f0120]]


undefined4 * FUN_009f0110(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x30) + 0x1e4);
  if (0xf < *(uint *)(*(int *)(in_ECX + 0x30) + 0x1f8)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1;
}

