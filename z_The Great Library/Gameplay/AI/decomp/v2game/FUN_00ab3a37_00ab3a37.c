// FUN_00ab3a37 @ 00ab3a37 body=[[00ab3a37, 00ab3a69]]


undefined4 FUN_00ab3a37(LPCSTR param_1,LPCSTR param_2)

{
  BOOL BVar1;
  ulong uVar2;
  
  BVar1 = MoveFileA(param_1,param_2);
  if (BVar1 == 0) {
    uVar2 = GetLastError();
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    __dosmaperr(uVar2);
    return 0xffffffff;
  }
  return 0;
}

