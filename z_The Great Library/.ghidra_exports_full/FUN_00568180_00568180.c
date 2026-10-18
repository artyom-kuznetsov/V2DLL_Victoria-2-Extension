// FUN_00568180 @ 00568180 body=[[00568180, 005681cb] [005681cf, 005681ec] [005681f0, 005681f8] [00568202, 00568228] [00568232, 0056825f] [00568263, 00568284] [00568288, 005682a6] [005682aa, 005682c5]]


void FUN_00568180(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ce3e;
  local_10 = ExceptionList;
  local_8 = 6;
  ExceptionList = &local_10;
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x170),0x10,0x10,FUN_00aa8540);
  if (*(int *)(param_1 + 0x160) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x160));
  }
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(int *)(param_1 + 200) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 200));
  }
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(int *)(param_1 + 0xb8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0xb8));
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  FUN_004097a0(param_1 + 0xa8);
  if (*(int *)(param_1 + 0x98) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x98));
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(int *)(param_1 + 0x88) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x88));
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  ExceptionList = local_10;
  return;
}

