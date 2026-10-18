// FUN_00a440b0 @ 00a440b0 body=[[00a440b0, 00a44134] [00a44138, 00a4414a]]


void FUN_00a440b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int *in_ECX;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  void *pvStack_34;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b42e78;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_00a44550();
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_c = 0;
  FUN_00a44850(&local_5c);
  (**(code **)(*in_ECX + 0x7c))(param_1,param_2,param_3,param_4,param_5,param_6,&local_5c,0);
  if (param_4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_4);
  }
  ExceptionList = pvStack_34;
  return;
}

