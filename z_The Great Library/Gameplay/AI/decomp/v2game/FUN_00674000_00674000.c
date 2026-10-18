// FUN_00674000 @ 00674000 body=[[00674000, 006740e3] [006740e7, 006740fe] [00674102, 00674126] [0067412a, 00674197] [0067419b, 006741b9] [006741bd, 006741dc]]


void FUN_00674000(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  uint local_a0 [4];
  undefined4 local_90;
  uint local_8c;
  undefined1 local_84 [4];
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
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
  puStack_c = &LAB_00b6f63b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004138b0(in_ECX + 0x6f8,local_84,*(undefined4 *)(in_ECX + 0x6f8),
               *(undefined4 *)(in_ECX + 0x6fc));
  local_8c = 0xf;
  local_90 = 0;
  local_a0[0] = local_a0[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("search_edit",0xb);
  local_8._0_1_ = 1;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350("menu_message_settings",0x15);
  local_8 = CONCAT31(local_8._1_3_,2);
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x1d24) + 0x6c))(local_64);
  iVar2 = (**(code **)(*piVar1 + 0x40))(local_2c);
  (**(code **)(*(int *)(iVar2 + 0x54) + 0x40))(local_a0);
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_8 = 0xffffffff;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a0[0]);
  }
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  FUN_00409350("search_edit",0xb);
  local_8 = 3;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("menu_message_settings",0x15);
  local_8 = CONCAT31(local_8._1_3_,4);
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x1d24) + 0x6c))(local_48);
  uVar3 = (**(code **)(*piVar1 + 0x40))(local_80);
  FUN_009b6400(uVar3);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_8 = 0xffffffff;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_80[0]);
  }
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  FUN_006742d0(in_ECX);
  ExceptionList = local_10;
  return;
}

