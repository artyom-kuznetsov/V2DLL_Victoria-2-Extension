// FUN_008f7170 @ 008f7170 body=[[008f7170, 008f71a5]]


void FUN_008f7170(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CIsReleaseableAsVassal::vftable;
  in_EAX[7] = 0x2d2d2d;
  in_EAX[8] = 0;
  return;
}

