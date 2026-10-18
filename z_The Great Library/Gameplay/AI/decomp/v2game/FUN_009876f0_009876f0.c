// FUN_009876f0 @ 009876f0 body=[[009876f0, 0098776f]]


void FUN_009876f0(void)

{
  uint in_EAX;
  uint uVar1;
  undefined4 local_8;
  
  uVar1 = DAT_0131c530 - DAT_0131c52c >> 4;
  if (in_EAX < uVar1) {
    FUN_00987770(&local_8,in_EAX * 0x10 + DAT_0131c52c,DAT_0131c530);
    return;
  }
  if (uVar1 < in_EAX) {
    FUN_009877d0();
    FUN_00987920(DAT_0131c530,local_8);
    DAT_0131c530 = DAT_0131c530 + (in_EAX - (DAT_0131c530 - DAT_0131c52c >> 4)) * 0x10;
  }
  return;
}

