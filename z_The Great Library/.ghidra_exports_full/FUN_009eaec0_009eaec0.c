// FUN_009eaec0 @ 009eaec0 body=[[009eaec0, 009eaf44]]


uint FUN_009eaec0(uint param_1)

{
  uint *in_EAX;
  int iVar1;
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  local_10 = 0;
  local_8 = 0;
  local_28 = 0x80e200000024;
  if (param_1 == 1) {
    local_28 = 0x80ea00000024;
  }
  local_18 = (ulonglong)in_EAX[1];
  local_20 = (ulonglong)*in_EAX;
  if (DAT_00f20c5c == (int *)0x0) {
    DAT_01258a93 = 1;
    return 0;
  }
  iVar1 = (**(code **)(*DAT_00f20c5c + 0xc))(DAT_00f20c5c,&local_28,&param_1,0);
  return ~-(uint)(iVar1 != 0) & param_1;
}

