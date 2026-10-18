// FUN_00a34200 @ 00a34200 body=[[00a34200, 00a342cc] [00a342d0, 00a342f6] [00a342fa, 00a3431e] [00a34322, 00a34344] [00a34348, 00a34397] [00a3439b, 00a343ed] [00a343f1, 00a34403]]


void FUN_00a34200(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 local_a0;
  uint local_8c;
  undefined4 local_84;
  uint local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  int *local_30;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4e473;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00df8148,2);
  local_8 = 0;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("chat_input",10);
  local_8._0_1_ = 1;
  iVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x28) + 0x30) + 0x40))(local_4c);
  local_30 = (int *)(iVar1 + 0x54);
  uVar2 = FUN_00a32ba0();
  FUN_00988fa0(uVar2);
  local_8._0_1_ = 2;
  uVar2 = FUN_00988f20(local_2c);
  local_8 = CONCAT31(local_8._1_3_,3);
  (**(code **)(*local_30 + 0x40))(uVar2);
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_84);
  }
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a0);
  }
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_8 = 0xffffffff;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("chat_input",10);
  local_8 = 4;
  uVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x28) + 0x30) + 0x40))(local_2c);
  FUN_009b6400(uVar2);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  FUN_00409350("chat_input",10);
  local_8 = 5;
  iVar1 = *DAT_01258a80;
  uVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x28) + 0x30) + 0x40))(local_68);
  (**(code **)(iVar1 + 100))(uVar2);
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  ExceptionList = local_10;
  return;
}

