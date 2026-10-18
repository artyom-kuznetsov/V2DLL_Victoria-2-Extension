// FUN_006a4ea0 @ 006a4ea0 body=[[006a4ea0, 006a4edf] [006a4ee3, 006a4efc] [006a4f00, 006a4f08] [006a4f12, 006a4f3e]]


void FUN_006a4ea0(int param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3f349;
  local_10 = ExceptionList;
  piVar1 = (int *)(param_1 + 0xc);
  local_8 = 3;
  ExceptionList = &local_10;
  FUN_008601b0(piVar1);
  if (*(int *)(param_1 + 0x34) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x34));
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_006a5a90(param_1 + 0x1c);
  if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar1);
  }
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_0057afc0(param_1);
  FUN_00aaea59(*(undefined4 *)(param_1 + 8));
  ExceptionList = local_10;
  return;
}

