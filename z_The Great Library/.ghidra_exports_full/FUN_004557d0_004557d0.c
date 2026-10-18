// FUN_004557d0 @ 004557d0 body=[[004557d0, 00455838] [0045583c, 00455893] [00455897, 004558df] [004558e3, 00455926] [0045592a, 00455937]]


void FUN_004557d0(void)

{
  undefined4 uVar1;
  int unaff_ESI;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b58740;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("background",10);
  local_8 = 0;
  uVar1 = (**(code **)(**(int **)(unaff_ESI + 0x20) + 0x34))(local_2c);
  local_8 = 0xffffffff;
  *(undefined4 *)(unaff_ESI + 0x34) = uVar1;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  (**(code **)(*(int *)(*(int *)(unaff_ESI + 0x34) + 0x54) + 4))(unaff_ESI + 0x60);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("nf_overwrite_entry",0x12);
  local_8 = 1;
  (**(code **)(**(int **)(unaff_ESI + 0x34) + 0x78))(local_2c);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("nf_icon",7);
  local_8 = 2;
  uVar1 = (**(code **)(**(int **)(unaff_ESI + 0x20) + 0x44))(local_2c);
  local_8 = 0xffffffff;
  *(undefined4 *)(unaff_ESI + 0x38) = uVar1;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("nf_name",7);
  local_8 = 3;
  uVar1 = (**(code **)(**(int **)(unaff_ESI + 0x20) + 0x3c))(local_48);
  *(undefined4 *)(unaff_ESI + 0x3c) = uVar1;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return;
}

