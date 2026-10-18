// FUN_009938c0 @ 009938c0 body=[[009938c0, 009938e8]]


uint FUN_009938c0(int param_1)

{
  uint in_EAX;
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x30) != 0) {
    iVar1 = PHYSFS_seek(*(int *)(in_ECX + 0x30),param_1,param_1 >> 0x1f);
    return (uint)(iVar1 != 0);
  }
  return in_EAX & 0xffffff00;
}

