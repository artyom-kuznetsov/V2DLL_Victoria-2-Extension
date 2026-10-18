// FUN_009e35c0 @ 009e35c0 body=[[009e35c0, 009e35f4]]


void FUN_009e35c0(int *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined1 local_c [8];
  
  *(int **)(in_ECX + 0x260) = param_1;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x4c))(local_c);
  *(undefined4 *)(in_ECX + 600) = *puVar1;
  *(undefined4 *)(in_ECX + 0x25c) = puVar1[1];
  return;
}

