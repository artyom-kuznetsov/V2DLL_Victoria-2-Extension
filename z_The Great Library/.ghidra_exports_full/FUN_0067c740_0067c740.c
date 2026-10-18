// FUN_0067c740 @ 0067c740 body=[[0067c740, 0067c7aa] [0067c7ae, 0067c7bb]]


void FUN_0067c740(void)

{
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
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
  FUN_00408ed0(unaff_EDI,0,0xffffffff);
  local_8 = 0;
  FUN_00408ed0(unaff_ESI,0,0xffffffff);
  FUN_00408ed0(local_2c,0,0xffffffff);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}

