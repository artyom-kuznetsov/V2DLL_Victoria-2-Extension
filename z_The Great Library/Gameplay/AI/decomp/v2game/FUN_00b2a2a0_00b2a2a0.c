// FUN_00b2a2a0 @ 00b2a2a0 body=[[00b2a2a0, 00b2a2e9]]


ulonglong FUN_00b2a2a0(undefined4 *param_1,LPCVOID param_2,uint param_3,int param_4)

{
  uint uVar1;
  BOOL BVar2;
  undefined4 uVar3;
  
  uVar1 = param_3;
  BVar2 = WriteFile((HANDLE)*param_1,param_2,param_3 * param_4,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    uVar3 = FUN_00b29110();
    FUN_00b1f840(uVar3);
    return 0xffffffffffffffff;
  }
  return ZEXT48(param_1) / (ulonglong)uVar1;
}

