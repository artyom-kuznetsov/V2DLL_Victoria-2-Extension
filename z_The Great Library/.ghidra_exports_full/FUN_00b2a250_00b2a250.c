// FUN_00b2a250 @ 00b2a250 body=[[00b2a250, 00b2a299]]


ulonglong FUN_00b2a250(undefined4 *param_1,LPVOID param_2,uint param_3,int param_4)

{
  uint uVar1;
  BOOL BVar2;
  undefined4 uVar3;
  
  uVar1 = param_3;
  BVar2 = ReadFile((HANDLE)*param_1,param_2,param_3 * param_4,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    uVar3 = FUN_00b29110();
    FUN_00b1f840(uVar3);
    return 0xffffffffffffffff;
  }
  return ZEXT48(param_1) / (ulonglong)uVar1;
}

