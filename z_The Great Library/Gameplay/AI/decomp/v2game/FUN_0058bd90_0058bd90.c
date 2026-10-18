// FUN_0058bd90 @ 0058bd90 body=[[0058bd90, 0058be63] [0058be67, 0058be83] [0058be87, 0058beab] [0058beaf, 0058bf02]]


void FUN_0058bd90(void)

{
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9eb18;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (*(char *)(DAT_012588e8 + 0xd11) != '\0') {
    local_20 = 0xf;
    local_24 = 0;
    local_34 = local_34 & 0xffffff00;
    ExceptionList = &pvStack_14;
    FUN_00409350();
    local_c = 0;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350();
    local_c._0_1_ = 1;
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    FUN_00409350();
    local_c = CONCAT31(local_c._1_3_,2);
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x120))(local_6c,local_50);
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c = 0xffffffff;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34 = local_34 & 0xffffff00;
  }
  local_c = 0xffffffff;
  FUN_005238d0(1);
  ExceptionList = pvStack_14;
  return;
}

