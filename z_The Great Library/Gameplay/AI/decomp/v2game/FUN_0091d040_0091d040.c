// FUN_0091d040 @ 0091d040 body=[[0091d040, 0091d076]]


void FUN_0091d040(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 8) = param_1;
  *(undefined4 *)(in_ECX + 0xc) = param_2;
  puVar1 = (undefined4 *)FUN_0091d920();
  *(undefined4 *)(in_ECX + 0x28) = *puVar1;
  *(undefined4 *)(in_ECX + 0x2c) = puVar1[1];
  return;
}

