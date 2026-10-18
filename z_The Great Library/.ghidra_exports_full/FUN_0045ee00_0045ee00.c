// FUN_0045ee00 @ 0045ee00 body=[[0045ee00, 0045ee4e] [0045ee58, 0045ee7e] [0045ee82, 0045ee9d] [0045eea1, 0045eec1]]


void FUN_0045ee00(int param_1)

{
  int *piVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b3d31c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)(param_1 + 0x5c) = CEffect::vftable;
  piVar1 = (int *)(param_1 + 100);
  local_8 = 3;
  uStack_7 = 0;
  FUN_008601b0(piVar1);
  if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar1);
  }
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  _local_8 = CONCAT31(uStack_7,1);
  FUN_008b32d0();
  if (0xf < *(uint *)(param_1 + 0x38)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0x24));
  }
  *(undefined4 *)(param_1 + 0x38) = 0xf;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  if (0xf < *(uint *)(param_1 + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  ExceptionList = local_10;
  return;
}

