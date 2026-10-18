// FUN_009f49f0 @ 009f49f0 body=[[009f49f0, 009f4a80]]


float10 FUN_009f49f0(void)

{
  int in_EAX;
  
  return ((-(float10)(longlong)(((ulonglong)*(uint *)(in_EAX + 0x34) & 0x80000000) << 0x20) +
          (float10)(*(ulonglong *)(in_EAX + 0x30) & 0x7fffffffffffffff)) /
         (-(float10)(longlong)(((ulonglong)*(uint *)(in_EAX + 0x3c) & 0x80000000) << 0x20) +
         (float10)(*(ulonglong *)(in_EAX + 0x38) & 0x7fffffffffffffff))) /
         (-(float10)(longlong)(((ulonglong)DAT_01258acc & 0x80000000) << 0x20) +
         (float10)(CONCAT44(DAT_01258acc,DAT_01258ac8) & 0x7fffffffffffffff));
}

