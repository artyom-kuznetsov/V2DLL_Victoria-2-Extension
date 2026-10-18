// FUN_0061c440 @ 0061c440 body=[[0061c440, 0061c506] [0061c50a, 0061c521] [0061c525, 0061c543] [0061c547, 0061c56b]]


void FUN_0061c440(void)

{
  int iVar1;
  int *in_ECX;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = DAT_012588e8;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b458c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  in_ECX[0xe5] = 2;
  if (*(char *)(iVar1 + 0xd11) != '\0') {
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    local_14 = in_ECX;
    FUN_00409350(&DAT_00ded94d,0);
    local_8 = 0;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_8._0_1_ = 1;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("gpview_open",0xb);
    local_8 = CONCAT31(local_8._1_3_,2);
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x120))(local_30,local_4c,local_68,0);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
    local_8 = 0xffffffff;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68[0]);
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    in_ECX = local_14;
  }
  local_8 = 0xffffffff;
  (**(code **)(*in_ECX + 0x2c))();
  ExceptionList = local_10;
  return;
}

