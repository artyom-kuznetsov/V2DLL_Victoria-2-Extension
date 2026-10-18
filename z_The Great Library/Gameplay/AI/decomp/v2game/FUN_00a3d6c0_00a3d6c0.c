// FUN_00a3d6c0 @ 00a3d6c0 body=[[00a3d6c0, 00a3d711]]


void FUN_00a3d6c0(void)

{
  int in_ECX;
  
  if (-1 < *(int *)(in_ECX + 0x9c)) {
    FUN_009bcda0();
  }
  *(undefined4 *)(in_ECX + 0x9c) = 0xffffffff;
  if (*(int *)(in_ECX + 0xb8) != 0) {
    FUN_00aaea59(*(int *)(in_ECX + 0xb8));
  }
  *(undefined4 *)(in_ECX + 0xbc) = 0;
  *(undefined4 *)(in_ECX + 0xb8) = 0;
  return;
}

