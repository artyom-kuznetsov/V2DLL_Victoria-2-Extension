// FUN_00b26260 @ 00b26260 body=[[00b26260, 00b2629d]]


bool FUN_00b26260(undefined4 *param_1,void *param_2)

{
  void *pvVar1;
  
  pvVar1 = _bsearch(param_2,(void *)*param_1,param_1[8],0x18,FUN_00b25a10);
  if (pvVar1 == (void *)0x0) {
    FUN_00b1f840("File not found");
    pvVar1 = (void *)0x0;
  }
  return pvVar1 != (void *)0x0;
}

