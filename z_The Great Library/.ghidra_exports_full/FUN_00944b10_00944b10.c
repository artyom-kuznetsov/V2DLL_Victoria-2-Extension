// FUN_00944b10 @ 00944b10 body=[[00944b10, 00944ba3] [00944ba7, 00944bf7] [00944bfb, 00944c45] [00944c49, 00944c56]]


void FUN_00944b10(void)

{
  int iVar1;
  int in_ECX;
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
  puStack_c = &LAB_00b42128;
  local_10 = ExceptionList;
  iVar1 = *(int *)(unaff_ESI + 0x6c);
  if (in_ECX == 0) {
    ExceptionList = &local_10;
    *(undefined4 *)(iVar1 + 0x50) = 0;
  }
  else if ((*(int *)(in_ECX + 0x4c) - *(int *)(in_ECX + 0x48) & 0xfffffffcU) == 0) {
    ExceptionList = &local_10;
    *(undefined4 *)(iVar1 + 0x50) = 0;
  }
  else {
    ExceptionList = &local_10;
    *(undefined4 *)(iVar1 + 0x50) = **(undefined4 **)(in_ECX + 0x48);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("wargoal_state_select",0x14);
  local_8 = 0;
  iVar1 = (**(code **)(**(int **)(unaff_ESI + 4) + 0x6c))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x18) + 0x38))();
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("wargoal_country_select",0x16);
  local_8 = 1;
  iVar1 = (**(code **)(**(int **)(unaff_ESI + 4) + 0x6c))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x18) + 0x38))();
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("wargoal_setup",0xd);
  local_8 = 2;
  iVar1 = (**(code **)(**(int **)(unaff_ESI + 4) + 0x6c))(local_48);
  (**(code **)(*(int *)(iVar1 + 0x18) + 0x34))();
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return;
}

