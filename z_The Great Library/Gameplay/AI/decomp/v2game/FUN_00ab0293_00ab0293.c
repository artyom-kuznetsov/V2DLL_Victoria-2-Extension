// FUN_00ab0293 @ 00ab0293 body=[[00ab0293, 00ab02b8]]


undefined4 FUN_00ab0293(HANDLE param_1)

{
  BOOL BVar1;
  int *piVar2;
  
  BVar1 = FindClose(param_1);
  if (BVar1 == 0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    return 0xffffffff;
  }
  return 0;
}

