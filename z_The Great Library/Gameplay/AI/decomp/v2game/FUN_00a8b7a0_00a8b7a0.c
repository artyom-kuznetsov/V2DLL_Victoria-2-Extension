// FUN_00a8b7a0 @ 00a8b7a0 body=[[00a8b7a0, 00a8b841] [00a8b845, 00a8b867]]


void FUN_00a8b7a0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b3b353;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_LAB_00e449a0;
  in_ECX[0x15] = &PTR_LAB_00e44a70;
  in_ECX[0x1b] = &PTR_LAB_00e44978;
  local_8 = 1;
  (**(code **)(*(int *)in_ECX[0x1e] + 0x38))();
  (**(code **)(*(int *)in_ECX[0x1e] + 0x80))();
  FUN_009963d0(in_ECX[0x1e]);
  local_8 = local_8 & 0xffffff00;
  in_ECX[0x15] = &PTR_FUN_00e4497c;
  FUN_00a8b870();
  *in_ECX = &PTR_FUN_00e387f8;
  if (*(undefined4 **)(in_ECX[0xd] + 0x98) == in_ECX) {
    *(undefined4 *)(in_ECX[0xd] + 0x98) = 0;
  }
  DAT_01258a84 = DAT_01258a84 + -1;
  if (0xf < (uint)in_ECX[10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[5]);
  }
  in_ECX[10] = 0xf;
  in_ECX[9] = 0;
  *(undefined1 *)(in_ECX + 5) = 0;
  ExceptionList = local_10;
  return;
}

