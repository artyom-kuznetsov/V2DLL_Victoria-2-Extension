// FUN_00b26380 @ 00b26380 body=[[00b26380, 00b263f7]]


void * FUN_00b26380(undefined4 *param_1,void *param_2,uint *param_3)

{
  int *piVar1;
  void *pvVar2;
  
  pvVar2 = _bsearch(param_2,(void *)*param_1,param_1[8],0x18,FUN_00b25a10);
  if (pvVar2 == (void *)0x0) {
    FUN_00b1f840("File not found");
    pvVar2 = (void *)0x0;
  }
  *param_3 = (uint)(pvVar2 != (void *)0x0);
  if (pvVar2 == (void *)0x0) {
    FUN_00b1f840("File not found");
    return (void *)0x0;
  }
  if (*(int *)((int)pvVar2 + 8) == 0) {
    FUN_00b1f840("Not a file");
    return (void *)0x0;
  }
  *(undefined4 *)((int)pvVar2 + 0x14) = 0;
  piVar1 = (int *)(*(int *)((int)pvVar2 + 8) + 4);
  *piVar1 = *piVar1 + 1;
  return pvVar2;
}

