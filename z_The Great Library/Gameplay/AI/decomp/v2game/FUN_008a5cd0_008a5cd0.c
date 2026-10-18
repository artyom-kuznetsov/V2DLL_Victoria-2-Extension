// FUN_008a5cd0 @ 008a5cd0 body=[[008a5cd0, 008a5d02] [008a5d06, 008a5d3d] [008a5d47, 008a5d70]]


void FUN_008a5cd0(int param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3aa86;
  local_10 = ExceptionList;
  local_8 = 0;
  if (0xf < *(uint *)(param_1 + 0x5c)) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0x48));
  }
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x5c) = 0xf;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined ***)(param_1 + 0x28) = CEffect::vftable;
  piVar1 = (int *)(param_1 + 0x30);
  local_8 = 1;
  FUN_008601b0(piVar1);
  if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar1);
  }
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  local_8 = 0xffffffff;
  FUN_008ae2f0();
  ExceptionList = local_10;
  return;
}

