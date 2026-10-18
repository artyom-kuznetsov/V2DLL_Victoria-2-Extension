// FUN_0088fbc0 @ 0088fbc0 body=[[0088fbc0, 0088fc3a]]


void FUN_0088fbc0(int param_1)

{
  int in_ECX;
  
  FUN_0085aa20(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0x20c,
               in_ECX + 0x20);
  if (*(int *)(in_ECX + 0x3c) != 0) {
    *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0x228) =
         *(int *)(in_ECX + 0x3c);
  }
  FUN_0085ccb0();
  return;
}

