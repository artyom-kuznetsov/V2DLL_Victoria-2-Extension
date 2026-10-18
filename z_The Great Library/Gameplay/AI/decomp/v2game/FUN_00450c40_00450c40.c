// FUN_00450c40 @ 00450c40 body=[[00450c40, 00450ca9] [00450cad, 00450cbf]]


void FUN_00450c40(void)

{
  int local_28 [5];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b4d528;
  local_14 = ExceptionList;
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_c = 0;
  ExceptionList = &local_14;
  FUN_00451df0(DAT_012588e8 + 0xb5c,local_28);
  FUN_00451ab0(local_28);
  if (local_28[0] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_28[0]);
  }
  ExceptionList = local_14;
  return;
}

