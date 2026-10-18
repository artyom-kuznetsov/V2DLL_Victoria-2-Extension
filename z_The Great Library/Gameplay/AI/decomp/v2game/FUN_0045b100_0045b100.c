// FUN_0045b100 @ 0045b100 body=[[0045b100, 0045b152] [0045b158, 0045b175] [0045b17b, 0045b19d] [0045b1a3, 0045b1f4]]


void FUN_0045b100(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int local_28 [4];
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3d377;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CNewsPaperSet::vftable;
  local_8 = 0;
  local_18 = param_1 + 3;
  local_14 = 3;
  piVar2 = local_18;
  do {
    if (piVar2 != local_28) {
      if (*piVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*piVar2);
      }
      *piVar2 = 0;
      piVar2[1] = 0;
      piVar2[2] = 0;
    }
    piVar1 = piVar2 + 0xc;
    if (piVar1 != local_28) {
      if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*piVar1);
      }
      *piVar1 = 0;
      piVar2[0xd] = 0;
      piVar2[0xe] = 0;
    }
    piVar2 = piVar2 + 4;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  if (0xf < (uint)param_1[0x20]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x1b]);
  }
  param_1[0x20] = 0xf;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  local_8 = 0;
  _eh_vector_destructor_iterator_(param_1 + 0xf,0x10,3,FUN_00aa8540);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_18,0x10,3,FUN_00aa8540);
  ExceptionList = local_10;
  return;
}

