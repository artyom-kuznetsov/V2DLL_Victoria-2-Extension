// FUN_006a1fe0 @ 006a1fe0 body=[[006a1fe0, 006a2055] [006a2059, 006a2067]]


void FUN_006a1fe0(void)

{
  int unaff_ESI;
  int unaff_EDI;
  int local_24 [4];
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b94fc8;
  local_10 = ExceptionList;
  local_24[3] = ((unaff_ESI - unaff_EDI >> 2) + 1) / 2;
  local_14 = local_24;
  local_24[0] = 0;
  local_24[1] = 0;
  local_24[2] = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_006a2370();
  if (local_24[0] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

