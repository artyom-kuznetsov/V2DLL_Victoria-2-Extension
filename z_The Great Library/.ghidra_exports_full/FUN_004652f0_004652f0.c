// FUN_004652f0 @ 004652f0 body=[[004652f0, 00465344] [00465348, 00465390] [00465394, 004653a4]]


/* WARNING: Removing unreachable block (ram,0x00465334) */

void FUN_004652f0(undefined4 param_1,undefined4 param_2)

{
  int *in_ECX;
  uint in_stack_0000001c;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b53c70;
  local_10 = ExceptionList;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  ExceptionList = &local_10;
  FUN_00462dc0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00408ed0(&param_2,0,0xffffffff);
  FUN_004668c0(((in_ECX[1] - *in_ECX & 0xfffffff0U) - 0x10) + *in_ECX);
  if (in_stack_0000001c < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

