// FUN_009e0a00 @ 009e0a00 body=[[009e0a00, 009e0a13]]


undefined4 FUN_009e0a00(void)

{
  int *in_EAX;
  
  if ((*in_EAX == 0x24) && (in_EAX[1] != 0x102)) {
    return 1;
  }
  return 0;
}

