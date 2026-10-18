// FUN_00b19fc0 @ 00b19fc0 body=[[00b19fc0, 00b19fe2]]


uint FUN_00b19fc0(void *param_1,uint param_2)

{
  size_t sVar1;
  int in_ECX;
  
  sVar1 = _fwrite(param_1,param_2,1,*(FILE **)(in_ECX + 0x10));
  return -(uint)(sVar1 != 0) & param_2;
}

