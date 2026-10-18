// FUN_00519ec0 @ 00519ec0 body=[[00519ec0, 00519f71]]


void FUN_00519ec0(void)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  FUN_00408ed0(*(int *)(unaff_EDI + 0xc00) + 8,0,0xffffffff);
  FUN_00408ed0(*(int *)(unaff_EDI + 0xc00) + 8,0,0xffffffff);
  iVar2 = FUN_008b1a40();
  *(undefined4 *)(unaff_EDI + 0xbfc) = *(undefined4 *)(iVar2 + 4);
  *(undefined4 *)(unaff_EDI + 0xc00) = *(undefined4 *)(iVar2 + 8);
  FUN_00504750();
  FUN_00504750();
  *(undefined4 *)(unaff_EDI + 0xc94) = *(undefined4 *)(iVar2 + 0x9c);
  iVar1 = DAT_012588e8;
  *(undefined4 *)(unaff_EDI + 0xc98) = *(undefined4 *)(iVar2 + 0xa0);
  *(undefined4 *)(unaff_EDI + 0xc9c) = *(undefined4 *)(iVar2 + 0xa4);
  *(undefined4 *)(unaff_EDI + 0xca0) = *(undefined4 *)(iVar1 + 0xb0c);
  return;
}

