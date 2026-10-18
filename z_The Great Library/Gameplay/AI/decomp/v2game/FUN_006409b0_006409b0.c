// FUN_006409b0 @ 006409b0 body=[[006409b0, 006409c9]]


uint FUN_006409b0(void)

{
  uint uVar1;
  int *in_ECX;
  
  uVar1 = (**(code **)(*in_ECX + 0x20))();
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  return (uint)((char)in_ECX[0x19] == '\0');
}

