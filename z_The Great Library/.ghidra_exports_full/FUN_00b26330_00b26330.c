// FUN_00b26330 @ 00b26330 body=[[00b26330, 00b2637d]]


undefined1 FUN_00b26330(undefined4 *param_1,void *param_2,uint *param_3)

{
  void *pvVar1;
  
  pvVar1 = _bsearch(param_2,(void *)*param_1,param_1[8],0x18,FUN_00b25a10);
  if (pvVar1 == (void *)0x0) {
    FUN_00b1f840("File not found");
    pvVar1 = (void *)0x0;
  }
  *param_3 = (uint)(pvVar1 != (void *)0x0);
  if (pvVar1 == (void *)0x0) {
    return 0;
  }
  return *(undefined1 *)(*(int *)((int)pvVar1 + 0xc) + 0x1a);
}

