// vscan_fn @ 00aaeb8a body=[[00aaeb8a, 00aaebf7]]


/* Library Function - Single Match
    _vscan_fn
   
   Library: Visual Studio 2010 Release */

undefined4 __cdecl vscan_fn(code *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  size_t sVar2;
  undefined4 uVar3;
  int iVar4;
  char *unaff_ESI;
  size_t *psVar5;
  size_t local_20;
  undefined4 local_18;
  
  psVar5 = &local_20;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *psVar5 = 0;
    psVar5 = psVar5 + 1;
  }
  if ((unaff_ESI != (char *)0x0) && (param_2 != 0)) {
    sVar2 = _strlen(unaff_ESI);
    local_18 = 0x49;
    local_20 = 0x7fffffff;
    if (sVar2 < 0x80000000) {
      local_20 = sVar2;
    }
    uVar3 = (*param_1)(&stack0xffffffdc,param_2,param_3,param_4);
    return uVar3;
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  FUN_00ab7c17();
  return 0xffffffff;
}

