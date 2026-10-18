// FUN_00562e80 @ 00562e80 body=[[00562e80, 00562eb8] [00562ebc, 00562ee3] [00562ee7, 00562f05] [00562f09, 00562f2e] [00562f32, 00562f55]]


void FUN_00562e80(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3cec3;
  local_10 = ExceptionList;
  local_8 = 1;
  if (0xf < *(uint *)(param_1 + 0x108)) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0xf4));
  }
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x108) = 0xf;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined1 *)(param_1 + 0xf4) = 0;
  if (*(int *)(param_1 + 0xd4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0xd4));
  }
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x7c));
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  FUN_008b32d0();
  if (0xf < *(uint *)(param_1 + 0x44)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0x30));
  }
  *(undefined4 *)(param_1 + 0x44) = 0xf;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_0044be00();
  ExceptionList = local_10;
  return;
}

