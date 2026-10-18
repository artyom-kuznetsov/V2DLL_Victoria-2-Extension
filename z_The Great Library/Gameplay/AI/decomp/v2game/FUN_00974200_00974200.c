// FUN_00974200 @ 00974200 body=[[00974200, 00974274] [00974278, 009742a2]]


void FUN_00974200(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3bff9;
  local_10 = ExceptionList;
  local_8 = 3;
  ExceptionList = &local_10;
  *(undefined ***)(param_1 + 0x1c8) = CIssueOnExecute::vftable;
  if (*(undefined4 **)(param_1 + 0x1d0) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x1d0))(1);
  }
  if (*(undefined4 **)(param_1 + 0x1d4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x1d4))(1);
  }
  FUN_0048d070();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_008b32d0();
  if (0xf < *(uint *)(param_1 + 0x48)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0x34));
  }
  *(undefined4 *)(param_1 + 0x48) = 0xf;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  FUN_0044be00();
  ExceptionList = local_10;
  return;
}

