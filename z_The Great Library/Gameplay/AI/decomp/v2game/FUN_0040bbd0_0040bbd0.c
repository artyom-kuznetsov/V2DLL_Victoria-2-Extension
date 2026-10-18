// FUN_0040bbd0 @ 0040bbd0 body=[[0040bbd0, 0040bc0a]]


void FUN_0040bbd0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x74) == 0) {
    FUN_0040e820(*(undefined4 *)(in_ECX + 0x6c));
    *(undefined1 *)(in_ECX + 100) = 1;
    DAT_012586d5 = 0;
    return;
  }
  FUN_0040dc80(*(undefined4 *)(in_ECX + 0x70));
  *(undefined1 *)(in_ECX + 100) = 1;
  DAT_012586d5 = 0;
  return;
}

