// FUN_007319b0 @ 007319b0 body=[[007319b0, 007319fa]]


void FUN_007319b0(void)

{
  int in_ECX;
  undefined4 local_c;
  
  local_c = (*(int *)(in_ECX + 0x2c) - *(int *)(in_ECX + 0x28)) / 0x14;
  if (0 < local_c) {
    do {
      FUN_00732520(in_ECX);
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}

