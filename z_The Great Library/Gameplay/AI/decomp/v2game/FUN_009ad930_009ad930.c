// FUN_009ad930 @ 009ad930 body=[[009ad930, 009ad9b9] [009ad9bd, 009ad9ce]]


/* WARNING: Removing unreachable block (ram,0x009ad9b4) */

int FUN_009ad930(void)

{
  int iVar1;
  int unaff_ESI;
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b41c12;
  local_10 = ExceptionList;
  if (*(int *)(unaff_ESI + 0x10) != 0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00a727a0(unaff_ESI);
    if (iVar1 == 0) {
      local_8 = 0;
      FUN_009ad870(unaff_EDI,unaff_ESI,&stack0xffffffd8);
      iVar1 = FUN_00a727a0(unaff_ESI);
      local_8 = 1;
      FUN_009adbb0();
    }
    ExceptionList = local_10;
    return iVar1 + 0x1c;
  }
  return unaff_EDI + 0x24;
}

