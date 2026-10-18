// FUN_00445f70 @ 00445f70 body=[[00445f70, 00445fac]]


uint FUN_00445f70(void)

{
  int iVar1;
  uint in_ECX;
  _Lockit local_8 [4];
  
  std::_Lockit::_Lockit(local_8,0);
  iVar1 = *(int *)(in_ECX + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(in_ECX + 4) = iVar1 + -1;
  }
  iVar1 = *(int *)(in_ECX + 4);
  FUN_00aad9f1();
  return ~-(uint)(iVar1 != 0) & in_ECX;
}

