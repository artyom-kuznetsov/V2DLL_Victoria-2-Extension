// FUN_00984190 @ 00984190 body=[[00984190, 009841f5] [009841f9, 00984226]]


void FUN_00984190(void)

{
  int unaff_ESI;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbc108;
  local_10 = ExceptionList;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("everyday_needs_list",0x13);
  local_8 = 0;
  local_14 = (**(code **)(**(int **)(unaff_ESI + 0x20) + 0x7c))(local_30);
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_0097e5f0(local_14);
  ExceptionList = local_10;
  return;
}

