// FUN_00b262a0 @ 00b262a0 body=[[00b262a0, 00b26322]]


longlong FUN_00b262a0(undefined4 *param_1,void *param_2,uint *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  longlong lVar3;
  
  pvVar2 = _bsearch(param_2,(void *)*param_1,param_1[8],0x18,FUN_00b25a10);
  if (pvVar2 == (void *)0x0) {
    FUN_00b1f840("File not found");
    pvVar2 = (void *)0x0;
  }
  *param_3 = (uint)(pvVar2 != (void *)0x0);
  if ((pvVar2 != (void *)0x0) &&
     (puVar1 = *(undefined4 **)((int)pvVar2 + 0xc), *(char *)(puVar1 + 7) != '\0')) {
    lVar3 = __aulldiv(*puVar1,puVar1[1],10000000,0);
    return lVar3 + -0x2b6109100;
  }
  FUN_00b1f840(0);
  return -1;
}

