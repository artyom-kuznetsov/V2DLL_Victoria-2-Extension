// FUN_00972e50 @ 00972e50 body=[[00972e50, 00972eb4] [00972eb8, 00972ecd]]


void FUN_00972e50(void)

{
  undefined4 *unaff_ESI;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("noIdeology",10);
  local_8 = 0;
  FUN_00972260(unaff_ESI,DAT_0131be1c,local_2c,0);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  *unaff_ESI = CNullIdeology::vftable;
  ExceptionList = local_10;
  return;
}

