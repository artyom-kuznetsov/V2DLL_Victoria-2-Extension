// FUN_009311d0 @ 009311d0 body=[[009311d0, 009311e5]]


void FUN_009311d0(void)

{
  undefined4 *in_EAX;
  int in_ECX;
  
  if (DAT_01258a08 != 0) {
    *in_EAX = 100000;
    return;
  }
  *in_EAX = *(undefined4 *)(in_ECX + 0x48);
  return;
}

