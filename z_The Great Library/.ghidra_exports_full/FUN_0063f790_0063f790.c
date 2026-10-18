// FUN_0063f790 @ 0063f790 body=[[0063f790, 0063f7e2]]


void FUN_0063f790(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b456a8;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if ((undefined4 *)param_1[0xc0] != (undefined4 *)0x0) {
    ExceptionList = &local_10;
    (*(code *)**(undefined4 **)param_1[0xc0])(1);
  }
  *param_1 = C3dObject::vftable;
  FUN_009f8f70();
  ExceptionList = local_10;
  return;
}

