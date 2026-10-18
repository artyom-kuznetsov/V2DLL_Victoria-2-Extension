// FUN_009ee430 @ 009ee430 body=[[009ee430, 009ee46a]]


void FUN_009ee430(undefined4 param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined1 local_c [8];
  
  puVar1 = (undefined4 *)(**(code **)(**(int **)(DAT_01258a80 + 0xa4) + 0x38))(local_c,param_1);
  *(undefined4 *)(in_ECX + 0x80) = *puVar1;
  *(undefined4 *)(in_ECX + 0x84) = puVar1[1];
  return;
}

