// FUN_009f4a90 @ 009f4a90 body=[[009f4a90, 009f4af4]]


float10 FUN_009f4a90(void)

{
  int in_EAX;
  
  return (-(float10)(longlong)(((ulonglong)*(uint *)(in_EAX + 0x34) & 0x80000000) << 0x20) +
         (float10)(*(ulonglong *)(in_EAX + 0x30) & 0x7fffffffffffffff)) /
         (-(float10)(longlong)(((ulonglong)DAT_01258acc & 0x80000000) << 0x20) +
         (float10)(CONCAT44(DAT_01258acc,DAT_01258ac8) & 0x7fffffffffffffff));
}

