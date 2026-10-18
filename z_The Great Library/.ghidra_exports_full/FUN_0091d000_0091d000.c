// FUN_0091d000 @ 0091d000 body=[[0091d000, 0091d036]]


void FUN_0091d000(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x10) = param_1;
  *(undefined4 *)(in_ECX + 0x14) = param_2;
  puVar1 = (undefined4 *)FUN_0091d920();
  *(undefined4 *)(in_ECX + 0x28) = *puVar1;
  *(undefined4 *)(in_ECX + 0x2c) = puVar1[1];
  return;
}

