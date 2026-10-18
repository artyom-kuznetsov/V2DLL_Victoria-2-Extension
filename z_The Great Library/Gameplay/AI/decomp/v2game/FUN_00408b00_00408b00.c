// FUN_00408b00 @ 00408b00 body=[[00408b00, 00408bc6]]


void FUN_00408b00(void)

{
  uint uVar1;
  ulonglong *in_EAX;
  
  uVar1 = DAT_00f092fc;
  *in_EAX = (ulonglong)DAT_00f092fc;
  in_EAX[1] = 0;
  in_EAX[2] = (ulonglong)uVar1 << 0x20;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  in_EAX[6] = 0;
  in_EAX[5] = (ulonglong)uVar1;
  in_EAX[7] = (ulonglong)uVar1 << 0x20;
  return;
}

