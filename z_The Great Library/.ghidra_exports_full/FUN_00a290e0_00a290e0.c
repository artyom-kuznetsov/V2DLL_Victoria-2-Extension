// FUN_00a290e0 @ 00a290e0 body=[[00a290e0, 00a29110]]


void FUN_00a290e0(void)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x4c) != '\0') {
    if (-1 < *(int *)(in_ECX + 0x16c)) {
      FUN_009bcda0();
    }
    *(undefined4 *)(in_ECX + 0x16c) = 0xffffffff;
  }
  return;
}

