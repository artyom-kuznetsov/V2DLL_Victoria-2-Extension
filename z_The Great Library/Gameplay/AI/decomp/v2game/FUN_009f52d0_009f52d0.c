// FUN_009f52d0 @ 009f52d0 body=[[009f52d0, 009f5305]]


short FUN_009f52d0(uint param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_009f7c00(param_1 >> 0x10,param_1 & 0xffff);
  if (0xf < *(uint *)(in_ECX + 0x2c)) {
    return (short)*(char *)(*(int *)(in_ECX + 0x18) + iVar1);
  }
  return (short)*(char *)(in_ECX + 0x18 + iVar1);
}

