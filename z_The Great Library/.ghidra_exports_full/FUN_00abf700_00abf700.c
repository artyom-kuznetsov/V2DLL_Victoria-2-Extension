// __calloc_impl @ 00abf700 body=[[00abf700, 00abf781]]


/* Library Function - Single Match
    __calloc_impl
   
   Library: Visual Studio 2010 Release */

LPVOID __calloc_impl(uint param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  LPVOID pvVar2;
  int iVar3;
  
  if ((param_1 != 0) && (0xffffffe0 / param_1 < param_2)) {
    piVar1 = __errno();
    *piVar1 = 0xc;
    return (LPVOID)0x0;
  }
  param_1 = param_1 * param_2;
  if (param_1 == 0) {
    param_1 = 1;
  }
  do {
    if ((param_1 < 0xffffffe1) &&
       (pvVar2 = HeapAlloc(hHeap_00f202e8,8,param_1), pvVar2 != (LPVOID)0x0)) {
      return pvVar2;
    }
    if (DAT_00f20440 == 0) {
      if (param_3 == (undefined4 *)0x0) {
        return (LPVOID)0x0;
      }
      *param_3 = 0xc;
      return (LPVOID)0x0;
    }
    iVar3 = __callnewh(param_1);
  } while (iVar3 != 0);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0xc;
  }
  return (LPVOID)0x0;
}

