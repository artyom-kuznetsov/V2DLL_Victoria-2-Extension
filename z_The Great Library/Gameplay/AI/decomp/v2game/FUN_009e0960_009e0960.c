// FUN_009e0960 @ 009e0960 body=[[009e0960, 009e0973]]


undefined4 FUN_009e0960(void)

{
  int *in_EAX;
  
  if ((*in_EAX == 0x13) && (in_EAX[1] != 0x102)) {
    return 1;
  }
  return 0;
}

