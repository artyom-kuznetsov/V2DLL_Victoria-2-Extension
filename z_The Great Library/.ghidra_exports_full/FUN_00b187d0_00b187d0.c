// FUN_00b187d0 @ 00b187d0 body=[[00b187d0, 00b187ed]]


bool FUN_00b187d0(void)

{
  uint uVar1;
  uint uVar2;
  int *in_ECX;
  
  uVar1 = (**(code **)(*in_ECX + 0x78))();
  uVar2 = (**(code **)(*in_ECX + 0x74))();
  return uVar1 <= uVar2;
}

