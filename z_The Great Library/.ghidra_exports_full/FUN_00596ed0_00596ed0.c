// FUN_00596ed0 @ 00596ed0 body=[[00596ed0, 00596fc6]]


bool FUN_00596ed0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  FUN_00401000(0x47c35040);
  iVar2 = FUN_00b31c00();
  iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x6c);
  uVar4 = __allmul(iVar3,iVar3 >> 0x1f,iVar2,iVar2 >> 0x1f);
  iVar3 = __alldiv(uVar4,1000,0);
  iVar3 = iVar3 / 1000;
  if (0 < param_1) {
    iVar1 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x90);
    uVar4 = __allmul(iVar1,iVar1 >> 0x1f,iVar2,iVar2 >> 0x1f);
    iVar2 = __alldiv(uVar4,1000,0);
    iVar2 = __alldiv((longlong)((iVar2 / 1000) * 1000) * (longlong)param_1,1000,0);
    iVar3 = iVar3 + iVar2 / 1000;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (0x32 < iVar3) {
      iVar3 = 0x32;
    }
  }
  iVar2 = FUN_009b7950(6,0);
  return iVar2 % 100 <= iVar3;
}

