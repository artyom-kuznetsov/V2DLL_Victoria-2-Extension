// FUN_009e7900 @ 009e7900 body=[[009e7900, 009e7991] [009e79a7, 009e79d7]]


void FUN_009e7900(void)

{
  int in_ECX;
  undefined1 *unaff_EDI;
  undefined4 local_30 [5];
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbc108;
  local_10 = ExceptionList;
  local_14 = 0;
  if (in_ECX < (DAT_0131cb44 - DAT_0131cb40) / 0x1c) {
    ExceptionList = &local_10;
    FUN_00988f20(DAT_0131cb40 + in_ECX * 0x1c);
    local_8 = 0;
    *(undefined4 *)(unaff_EDI + 0x14) = 0xf;
    *(undefined4 *)(unaff_EDI + 0x10) = 0;
    *unaff_EDI = 0;
    FUN_00408ed0(local_30,0,0xffffffff);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
  }
  else {
    ExceptionList = &local_10;
    *(undefined4 *)(unaff_EDI + 0x14) = 0xf;
    *(undefined4 *)(unaff_EDI + 0x10) = 0;
    *unaff_EDI = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  ExceptionList = local_10;
  return;
}

