// FUN_004b6de0 @ 004b6de0 body=[[004b6de0, 004b6e07]]


uint FUN_004b6de0(int param_1)

{
  uint in_EAX;
  
  if (DAT_00f092fb == '\0') {
    return in_EAX & 0xffffff00;
  }
  return (uint)(*(int *)(*(int *)(param_1 + 0x5c) + 0x360) < 1);
}

