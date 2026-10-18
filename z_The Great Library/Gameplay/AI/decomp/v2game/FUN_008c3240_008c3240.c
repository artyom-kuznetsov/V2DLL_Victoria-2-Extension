// FUN_008c3240 @ 008c3240 body=[[008c3240, 008c3258]]


undefined4 FUN_008c3240(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x68);
  return CONCAT31((int3)((uint)iVar1 >> 8),*(int *)(iVar1 + 0x3c) == *(int *)(in_ECX + 0x1c));
}

