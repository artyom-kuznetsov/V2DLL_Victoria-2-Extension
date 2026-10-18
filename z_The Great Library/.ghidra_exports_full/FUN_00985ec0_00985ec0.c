// FUN_00985ec0 @ 00985ec0 body=[[00985ec0, 00985f31] [00985f35, 00985f88] [00985f8c, 00985fda] [00985fde, 00985fed]]


void FUN_00985ec0(undefined4 param_1)

{
  int *piVar1;
  int unaff_EDI;
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
  puStack_c = &LAB_00b42128;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("closebutton",0xb);
  local_8 = 0;
  piVar1 = (int *)(**(code **)(**(int **)(unaff_EDI + 0x20) + 0x34))(local_2c);
  (**(code **)(*piVar1 + 0x84))(param_1);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("next_chapter",0xc);
  local_8 = 1;
  piVar1 = (int *)(**(code **)(**(int **)(unaff_EDI + 0x20) + 0x34))(local_2c);
  (**(code **)(*piVar1 + 0x84))(param_1);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("next_stage",10);
  local_8 = 2;
  piVar1 = (int *)(**(code **)(**(int **)(unaff_EDI + 0x20) + 0x34))(local_48);
  (**(code **)(*piVar1 + 0x84))(param_1);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return;
}

