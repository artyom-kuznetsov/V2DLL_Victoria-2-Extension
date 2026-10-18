// FUN_004391a0 @ 004391a0 body=[[004391a0, 004391e3] [004391e7, 004391fb] [004391ff, 00439212]]


void FUN_004391a0(byte param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3b20b;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  _eh_vector_destructor_iterator_((void *)(in_ECX + 0x28),0x10,2,FUN_00aa8540);
  if (*(int *)(in_ECX + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(in_ECX + 0x18));
  }
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

