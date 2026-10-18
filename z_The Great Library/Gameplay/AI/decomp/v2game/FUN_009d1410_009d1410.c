// FUN_009d1410 @ 009d1410 body=[[009d1410, 009d144c]]


void FUN_009d1410(int param_1)

{
  undefined1 local_14 [4];
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b49a58;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  FUN_009d3ef0(local_14,**(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 4));
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(undefined4 *)(param_1 + 4));
}

