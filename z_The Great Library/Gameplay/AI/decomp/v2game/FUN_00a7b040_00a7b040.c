// FUN_00a7b040 @ 00a7b040 body=[[00a7b040, 00a7b05d]]


void FUN_00a7b040(int param_1)

{
  int in_ECX;
  
  SetThreadPriority(*(HANDLE *)(in_ECX + 8),param_1);
  *(int *)(in_ECX + 0x1c) = param_1;
  return;
}

