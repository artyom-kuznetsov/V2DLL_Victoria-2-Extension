// FUN_007d03f0 @ 007d03f0 body=[[007d03f0, 007d04b7] [007d04bb, 007d04c8]]


void FUN_007d03f0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48 [5];
  uint local_34;
  undefined4 local_28;
  undefined8 local_24;
  undefined8 local_1c;
  undefined1 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3ee58;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_007c91b0();
  local_8 = 0;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  FUN_00408ed0(param_1 + 3,0,0xffffffff);
  in_ECX[0xb] = param_1[0xb];
  *(undefined8 *)(in_ECX + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)(in_ECX + 0xe) = *(undefined8 *)(param_1 + 0xe);
  *(undefined1 *)(in_ECX + 0x10) = *(undefined1 *)(param_1 + 0x10);
  *param_1 = local_54;
  param_1[1] = local_50;
  param_1[2] = local_4c;
  FUN_00408ed0(local_48,0,0xffffffff);
  *(undefined8 *)(param_1 + 0xc) = local_24;
  param_1[0xb] = local_28;
  *(undefined8 *)(param_1 + 0xe) = local_1c;
  *(undefined1 *)(param_1 + 0x10) = local_14;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return;
}

