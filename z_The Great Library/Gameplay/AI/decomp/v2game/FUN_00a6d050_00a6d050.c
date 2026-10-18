// FUN_00a6d050 @ 00a6d050 body=[[00a6d050, 00a6d09b]]


void FUN_00a6d050(int *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined1 local_c [8];
  
  *(int **)(in_ECX + 0x1cc) = param_1;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x4c))(local_c);
  *(undefined4 *)(in_ECX + 0x1b4) = *puVar1;
  *(undefined4 *)(in_ECX + 0x1b8) = puVar1[1];
  *(bool *)(in_ECX + 0x285) = *(char *)(in_ECX + 0x284) == '\0';
  *(undefined1 *)(in_ECX + 0x286) = 0;
  return;
}

