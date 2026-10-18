// FUN_00514ea0 @ 00514ea0 body=[[00514ea0, 00514f1b]]


int FUN_00514ea0(void)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0xcc) / 1000;
  iVar1 = FUN_005db9b0();
  if (iVar2 < iVar1) {
    iVar2 = iVar1;
  }
  iVar1 = *(int *)(*(int *)(unaff_EDI + 0xa60) + 0x360);
  if (iVar1 < -1000) {
    iVar1 = -1000;
  }
  iVar2 = __alldiv((longlong)(iVar2 * 1000) * (longlong)(iVar1 + 1000),1000,0);
  return iVar2 / 1000;
}

