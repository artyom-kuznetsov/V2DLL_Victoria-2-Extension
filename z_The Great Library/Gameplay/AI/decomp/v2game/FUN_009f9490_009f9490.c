// FUN_009f9490 @ 009f9490 body=[[009f9490, 009f94f9] [009f94fd, 009f9532]]


void FUN_009f9490(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b526c6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e3d3d8;
  param_1[0x53] = &PTR_LAB_00e3d548;
  local_8 = 1;
  FUN_004be200();
  (**(code **)(*(int *)param_1[0x5b] + 8))((int *)param_1[0x5b]);
  if (param_1[0x57] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x57]);
  }
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  FUN_00a203f0();
  ExceptionList = local_10;
  return;
}

