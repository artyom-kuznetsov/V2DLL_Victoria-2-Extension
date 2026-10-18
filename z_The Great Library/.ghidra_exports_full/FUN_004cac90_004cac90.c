// FUN_004cac90 @ 004cac90 body=[[004cac90, 004cacd7] [004cacdb, 004cacf8] [004cacfc, 004cad22]]


void FUN_004cac90(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3d0d1;
  local_10 = ExceptionList;
  local_8 = 2;
  ExceptionList = &local_10;
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x8c),0x1c,4,FUN_004010c0);
  if (0xf < *(uint *)(param_1 + 0x48)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0x34));
  }
  *(undefined4 *)(param_1 + 0x48) = 0xf;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  if (0xf < *(uint *)(param_1 + 0x2c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x2c) = 0xf;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_00849e90();
  ExceptionList = local_10;
  return;
}

