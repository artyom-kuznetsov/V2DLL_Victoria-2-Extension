// FUN_00a553e0 @ 00a553e0 body=[[00a553e0, 00a55413]]


void FUN_00a553e0(void)

{
  int in_ECX;
  
  if ((*(char *)(in_ECX + 0x4c) != '\0') && (-1 < *(int *)(in_ECX + 0x90))) {
    FUN_009bcda0();
    *(undefined4 *)(in_ECX + 0x90) = 0xffffffff;
  }
  return;
}

