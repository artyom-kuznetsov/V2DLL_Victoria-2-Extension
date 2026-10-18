// FUN_00436110 @ 00436110 body=[[00436110, 00436170] [00436174, 00436191] [00436195, 004361b3]]


void FUN_00436110(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3b24e;
  local_10 = ExceptionList;
  local_8 = 2;
  ExceptionList = &local_10;
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x244),0x1c,0x10,FUN_00408ad0);
  local_8 = CONCAT31(local_8._1_3_,1);
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x84),0x1c,0x10,FUN_00408ad0);
  if (0xf < *(uint *)(param_1 + 0x3c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x3c) = 0xf;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
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

