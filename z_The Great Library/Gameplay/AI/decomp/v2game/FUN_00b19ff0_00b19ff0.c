// FUN_00b19ff0 @ 00b19ff0 body=[[00b19ff0, 00b1a012]]


uint FUN_00b19ff0(void *param_1,uint param_2)

{
  size_t sVar1;
  int in_ECX;
  
  sVar1 = _fread(param_1,param_2,1,*(FILE **)(in_ECX + 0x10));
  return -(uint)(sVar1 != 0) & param_2;
}

