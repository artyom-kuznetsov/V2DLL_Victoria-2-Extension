// FUN_00a6fdc0 @ 00a6fdc0 body=[[00a6fdc0, 00a6fe1d] [00a6fe21, 00a6fe32]]


void FUN_00a6fdc0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *unaff_ESI;
  uint in_stack_0000001c;
  undefined1 local_30 [16];
  undefined4 local_20;
  undefined *local_1c;
  undefined4 uStack_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a868;
  local_10 = ExceptionList;
  local_14 = local_30;
  local_8 = 0;
  local_20 = 0;
  local_1c = (undefined *)0xf;
  local_30[0] = 0;
  ExceptionList = &local_10;
  FUN_00408ed0(&param_2,0,0xffffffff);
  FUN_009e7a90(unaff_ESI,0x29);
  *unaff_ESI = &PTR_FUN_00e37db4;
  if (0xf < in_stack_0000001c) {
    uStack_18 = param_2;
                    /* WARNING: Subroutine does not return */
    local_1c = &UNK_00a6fe1e;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

