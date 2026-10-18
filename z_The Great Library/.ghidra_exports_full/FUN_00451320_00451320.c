// FUN_00451320 @ 00451320 body=[[00451320, 0045139b] [0045139f, 004513b0]]


void FUN_00451320(void)

{
  int local_28 [5];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4d528;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004518c0();
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_c = 0;
  FUN_00409350("south_america",0xd);
  FUN_00451930(local_28);
  FUN_00451f10();
  if (local_28[0] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_14;
  return;
}

