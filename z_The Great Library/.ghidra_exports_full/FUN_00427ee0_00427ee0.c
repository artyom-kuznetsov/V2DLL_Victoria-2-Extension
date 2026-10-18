// FUN_00427ee0 @ 00427ee0 body=[[00427ee0, 00427fb0]]


void FUN_00427ee0(void)

{
  int iVar1;
  int iVar2;
  int *unaff_EDI;
  
  iVar1 = DAT_012586dc;
  FUN_00401000(((float)((int)((double)((*(int *)(DAT_012586dc + 8) + -43800000) / 0x18) / -365.0) -
                       (int)((double)((*(int *)(DAT_012588e8 + 0xb0c) + -43800000) / 0x18) / -365.0)
                       ) + 0.0005) * 1000.0);
  iVar2 = FUN_00b31c00();
  iVar1 = *(int *)(iVar1 + 0x30);
  iVar2 = __alldiv((longlong)*(int *)(iVar1 + 0x504) * (longlong)iVar2,1000,0);
  *unaff_EDI = *(int *)(iVar1 + 0x500) + iVar2;
  return;
}

