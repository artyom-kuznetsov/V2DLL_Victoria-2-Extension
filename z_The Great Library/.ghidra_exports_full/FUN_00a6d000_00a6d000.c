// FUN_00a6d000 @ 00a6d000 body=[[00a6d000, 00a6d04b]]


void FUN_00a6d000(int *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined1 local_c [8];
  
  *(int **)(in_ECX + 0x1e4) = param_1;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x4c))(local_c);
  *(undefined4 *)(in_ECX + 0x1cc) = *puVar1;
  *(undefined4 *)(in_ECX + 0x1d0) = puVar1[1];
  *(bool *)(in_ECX + 0x29d) = *(char *)(in_ECX + 0x29c) == '\0';
  *(undefined1 *)(in_ECX + 0x29e) = 0;
  return;
}

