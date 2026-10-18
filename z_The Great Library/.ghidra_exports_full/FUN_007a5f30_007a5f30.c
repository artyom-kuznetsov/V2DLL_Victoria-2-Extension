// FUN_007a5f30 @ 007a5f30 body=[[007a5f30, 007a5fd0] [007a5fd4, 007a601b] [007a601f, 007a6088] [007a608c, 007a60dc] [007a60e0, 007a6112]]


void FUN_007a5f30(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 local_118 [28];
  undefined1 local_fc [56];
  uint local_c4 [4];
  undefined4 local_b4;
  uint local_b0;
  undefined4 local_a8 [5];
  uint local_94;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  undefined4 local_1c;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6b9b1;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xfffffed4;
  local_1c = 0;
  ExceptionList = &pvStack_10;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0xc) + 0x100))();
  (**(code **)(**(int **)(iVar1 + 0xe4) + 0x10))(1);
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  FUN_00409350("LoginNameEditbox",0x10);
  local_8 = 0;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x394) + 0x40))(local_58);
  (**(code **)(*(int *)(iVar1 + 0x54) + 0x4c))(local_118);
  local_8._0_1_ = 2;
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58[0]);
  }
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  uVar2 = FUN_00989330(local_a8);
  local_8._0_1_ = 3;
  FUN_00408ed0(uVar2,0,0xffffffff);
  local_8._0_1_ = 2;
  if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a8[0]);
  }
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4[0] = local_c4[0] & 0xffffff00;
  FUN_00409350("LoginPassEditbox",0x10);
  local_8._0_1_ = 4;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x394) + 0x40))(local_c4);
  (**(code **)(*(int *)(iVar1 + 0x54) + 0x4c))(local_fc);
  local_8._0_1_ = 6;
  if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_c4[0]);
  }
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4[0] = local_c4[0] & 0xffffff00;
  uVar2 = FUN_00989330(local_a8);
  local_8._0_1_ = 7;
  FUN_00408ed0(uVar2,0,0xffffffff);
  local_8._0_1_ = 6;
  if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a8[0]);
  }
  FUN_00475500();
  FUN_00408ed0(local_118,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,8);
  FUN_00475500();
  FUN_009d7fa0();
  local_8 = 6;
  FUN_007a6125();
  return;
}

