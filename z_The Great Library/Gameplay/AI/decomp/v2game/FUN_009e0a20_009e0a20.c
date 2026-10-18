// FUN_009e0a20 @ 009e0a20 body=[[009e0a20, 009e0a33]]


undefined4 FUN_009e0a20(void)

{
  int *in_EAX;
  
  if ((*in_EAX == 0x23) && (in_EAX[1] != 0x102)) {
    return 1;
  }
  return 0;
}

