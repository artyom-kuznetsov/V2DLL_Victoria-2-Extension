// FUN_0051f370 @ 0051f370 body=[[0051f370, 0051f3c1]]


int FUN_0051f370(void)

{
  int in_EAX;
  
  if (0 < in_EAX) {
    return (*(int *)(*(int *)(DAT_012586dc + 0x40) + 0xe0) / 1000) *
           (1 << ((char)in_EAX - 1U & 0x1f));
  }
  return *(int *)(*(int *)(DAT_012586dc + 0x40) + 0xe4) / 1000;
}

