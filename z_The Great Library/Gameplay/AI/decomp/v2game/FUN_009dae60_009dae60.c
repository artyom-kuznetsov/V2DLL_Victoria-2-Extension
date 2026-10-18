// FUN_009dae60 @ 009dae60 body=[[009dae60, 009daf33] [009daf37, 009daf4b]]


undefined4 *
FUN_009dae60(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint in_stack_00000028;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4f06b;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00408ed0(&param_5,0,0xffffffff);
  FUN_009d7860(param_2);
  *param_1 = &PTR_FUN_00e3ba98;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0x13] = 0xf;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_00408ed0();
  FUN_00408ed0();
  *(undefined1 *)((int)param_1 + 0xf) = 0;
  FUN_00408ed0(&param_5,0,0xffffffff);
  FUN_009daf80(param_2,param_3,param_4);
  if (0xf < in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

