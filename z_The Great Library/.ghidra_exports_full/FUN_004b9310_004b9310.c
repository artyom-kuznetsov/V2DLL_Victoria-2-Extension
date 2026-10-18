// FUN_004b9310 @ 004b9310 body=[[004b9310, 004b93b5]]


void FUN_004b9310(void)

{
  int unaff_ESI;
  int unaff_EDI;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b5b0d0;
  local_10 = ExceptionList;
  local_14 = *(undefined4 *)(unaff_ESI + 0x58);
  ExceptionList = &local_10;
  if (DAT_01258728 == (int *)0x0) {
    ExceptionList = &local_10;
    DAT_01258728 = (int *)FUN_00aae9af(0x14);
    if (DAT_01258728 == (int *)0x0) {
      DAT_01258728 = (int *)0x0;
    }
    else {
      *DAT_01258728 = 0;
      DAT_01258728[1] = 0;
      DAT_01258728[2] = 0;
      *(undefined1 *)(DAT_01258728 + 4) = 0;
    }
  }
  FUN_004ee550(*(int *)(unaff_EDI + 0x58) * 0xb0 + 0x10 + *DAT_01258728,&local_14);
  FUN_004d1020(unaff_ESI,&local_14);
  FUN_004be0f0();
  ExceptionList = local_10;
  return;
}

