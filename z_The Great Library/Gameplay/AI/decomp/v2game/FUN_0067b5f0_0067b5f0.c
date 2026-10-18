// FUN_0067b5f0 @ 0067b5f0 body=[[0067b5f0, 0067b66a] [0067b66e, 0067b67b]]


void FUN_0067b5f0(undefined4 param_1)

{
  undefined1 *in_ECX;
  int unaff_ESI;
  int unaff_EDI;
  uint in_stack_00000018;
  undefined1 local_30 [16];
  undefined4 local_20;
  undefined *local_1c;
  undefined4 uStack_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4c568;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  local_14 = in_ECX;
  if (1 < (unaff_ESI - unaff_EDI) / 0x1c) {
    local_14 = local_30;
    local_1c = (undefined *)0xf;
    local_20 = 0;
    local_30[0] = 0;
    ExceptionList = &local_10;
    FUN_00408ed0(&param_1,0,0xffffffff);
    FUN_0067bea0();
  }
  if (0xf < in_stack_00000018) {
    uStack_18 = param_1;
                    /* WARNING: Subroutine does not return */
    local_1c = &UNK_0067b66b;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

