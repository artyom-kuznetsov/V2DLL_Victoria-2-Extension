// FUN_0098e940 @ 0098e940 body=[[0098e940, 0098e9bf]]


void FUN_0098e940(void)

{
  uint in_EAX;
  uint uVar1;
  undefined4 local_8;
  
  uVar1 = DAT_0131c8c0 - DAT_0131c8bc >> 4;
  if (in_EAX < uVar1) {
    FUN_0098e9c0(&local_8,in_EAX * 0x10 + DAT_0131c8bc,DAT_0131c8c0);
    return;
  }
  if (uVar1 < in_EAX) {
    FUN_0098ea20();
    FUN_00987920(DAT_0131c8c0,local_8);
    DAT_0131c8c0 = DAT_0131c8c0 + (in_EAX - (DAT_0131c8c0 - DAT_0131c8bc >> 4)) * 0x10;
  }
  return;
}

