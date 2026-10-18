// FUN_00647720 @ 00647720 body=[[00647720, 00647781] [00647785, 006477a2] [006477a6, 006477b8]]


void FUN_00647720(byte param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b53153;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CSideMenu::vftable;
  local_8 = 0;
  if ((int *)in_ECX[9] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[9] + 0x50))();
  }
  *in_ECX = &PTR___purecall_00e38700;
  local_8 = 1;
  FUN_009a4ca0();
  if (0xf < (uint)in_ECX[6]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[1]);
  }
  in_ECX[6] = 0xf;
  in_ECX[5] = 0;
  *(undefined1 *)(in_ECX + 1) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

