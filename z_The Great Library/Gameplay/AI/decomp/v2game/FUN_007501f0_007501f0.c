// FUN_007501f0 @ 007501f0 body=[[007501f0, 00750269] [0075026d, 007502c2] [007502c6, 0075030e] [00750312, 00750363] [0075036a, 0075040b] [0075040f, 00750460] [00750467, 007504d7]]


void FUN_007501f0(void)

{
  code *pcVar1;
  int iVar2;
  int in_ECX;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4b9f0;
  local_10 = ExceptionList;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("withdraw_button",0xf);
  local_8 = 0;
  iVar2 = (**(code **)(**(int **)(in_ECX + 0xd8) + 0x34))(local_50);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(in_ECX + 0x80);
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("colonize_button",0xf);
  local_8 = 1;
  iVar2 = (**(code **)(**(int **)(in_ECX + 0xd8) + 0x34))(local_50);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(in_ECX + 0xac);
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("rallypoint_checkbox",0x13);
  local_8 = 2;
  local_18 = (**(code **)(**(int **)(in_ECX + 0xd8) + 0x48))(local_34);
  local_8 = 0xffffffff;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("rallypoint_merge_checkbox",0x19);
  local_8 = 3;
  local_14 = (**(code **)(**(int **)(in_ECX + 0xd8) + 0x48))(local_50);
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  if (local_18 != 0) {
    if ((*(char *)(local_18 + 0xe4) == '\0') || (*(char *)(local_18 + 0x142) != '\0')) {
      *(undefined4 *)(local_18 + 0x6c) = 0;
      *(undefined4 *)(local_18 + 0x10c) = 0;
    }
    (**(code **)(*(int *)(local_18 + 0x54) + 4))();
  }
  if (local_14 != 0) {
    pcVar1 = *(code **)(*(int *)(local_14 + 0x54) + 4);
    *(undefined4 *)(local_14 + 0x6c) = 1;
    *(undefined4 *)(local_14 + 0x10c) = 1;
    (*pcVar1)(in_ECX + 0x20);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("rallypoint_checkbox_naval",0x19);
  local_8 = 4;
  local_18 = (**(code **)(**(int **)(in_ECX + 0xd8) + 0x48))(local_50);
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  FUN_00409350("rallypoint_merge_checkbox_naval",0x1f);
  local_8 = 5;
  local_14 = (**(code **)(**(int **)(in_ECX + 0xd8) + 0x48))(local_6c);
  local_8 = 0xffffffff;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_6c[0]);
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  if (local_18 != 0) {
    if ((*(char *)(local_18 + 0xe4) == '\0') || (*(char *)(local_18 + 0x142) != '\0')) {
      *(undefined4 *)(local_18 + 0x6c) = 0;
      *(undefined4 *)(local_18 + 0x10c) = 0;
    }
    (**(code **)(*(int *)(local_18 + 0x54) + 4))(in_ECX + 0x40);
  }
  if (local_14 != 0) {
    *(undefined4 *)(local_14 + 0x6c) = 1;
    *(undefined4 *)(local_14 + 0x10c) = 1;
    (**(code **)(*(int *)(local_14 + 0x54) + 4))(in_ECX + 0x60);
  }
  FUN_007504e0();
  ExceptionList = local_10;
  return;
}

