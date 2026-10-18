// FUN_00a149d0 @ 00a149d0 body=[[00a149d0, 00a14a56] [00a14a5a, 00a14a69]]


void FUN_00a149d0(int param_1)

{
  char cVar1;
  int unaff_EDI;
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
  FUN_00408ed0(param_1 + 0x24,0,0xffffffff);
  local_8 = 0;
  cVar1 = FUN_00416db0();
  if (cVar1 == '\0') {
    *(undefined1 *)(unaff_EDI + 0xd8) = 0;
  }
  FUN_00408ed0(local_2c,0,0xffffffff);
  *(undefined4 *)(unaff_EDI + 0xd4) = *(undefined4 *)(param_1 + 0x40);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}

