// FUN_00718f30 @ 00718f30 body=[[00718f30, 00718fa0] [00718fa4, 00718ff4] [00718ff8, 00719048] [0071904c, 0071909c] [007190a0, 007190f0] [007190f4, 00719144] [00719148, 00719198] [0071919c, 007191e7] [007191eb, 007191f8]]


void FUN_00718f30(void)

{
  int *piVar1;
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
  puStack_c = &LAB_00b445f0;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("topbarbutton_production",0x17);
  local_8 = 0;
  piVar1 = (int *)(**(code **)(**(int **)(unaff_ESI + 0x20) + 0x34))(local_2c);
  (**(code **)(*piVar1 + 0x48))(1);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("topbarbutton_budget",0x13);
  local_8 = 1;
  piVar1 = (int *)(**(code **)(**(int **)(unaff_ESI + 0x20) + 0x34))(local_2c);
  (**(code **)(*piVar1 + 0x48))(1);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("topbarbutton_tech",0x11);
  local_8 = 2;
  piVar1 = (int *)(**(code **)(**(int **)(unaff_ESI + 0x20) + 0x34))(local_2c);
  (**(code **)(*piVar1 + 0x48))(1);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("topbarbutton_politics",0x15);
  local_8 = 3;
  piVar1 = (int *)(**(code **)(**(int **)(unaff_ESI + 0x20) + 0x34))(local_2c);
  (**(code **)(*piVar1 + 0x48))(1);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("topbarbutton_pops",0x11);
  local_8 = 4;
  piVar1 = (int *)(**(code **)(**(int **)(unaff_ESI + 0x20) + 0x34))(local_2c);
  (**(code **)(*piVar1 + 0x48))(1);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("topbarbutton_trade",0x12);
  local_8 = 5;
  piVar1 = (int *)(**(code **)(**(int **)(unaff_ESI + 0x20) + 0x34))(local_2c);
  (**(code **)(*piVar1 + 0x48))(1);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("topbarbutton_diplomacy",0x16);
  local_8 = 6;
  piVar1 = (int *)(**(code **)(**(int **)(unaff_ESI + 0x20) + 0x34))(local_2c);
  (**(code **)(*piVar1 + 0x48))(1);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("topbarbutton_military",0x15);
  local_8 = 7;
  piVar1 = (int *)(**(code **)(**(int **)(unaff_ESI + 0x20) + 0x34))(local_48);
  (**(code **)(*piVar1 + 0x48))(1);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return;
}

