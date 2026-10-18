// FUN_00888c40 @ 00888c40 body=[[00888c40, 00888cd4] [00888cd8, 00888cf2] [00888cf6, 00888d64] [00888d68, 00888e8a] [00888e8e, 00888ed6] [00888eda, 00888ef2] [00888ef6, 00888f09] [00888f0d, 00888f30] [00888f34, 00888f49]]


/* WARNING: Removing unreachable block (ram,0x00888ee7) */

undefined1 * FUN_00888c40(undefined1 *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  LPSTR ***lpsz;
  int in_ECX;
  uint in_stack_00000024;
  undefined4 in_stack_0000002c;
  uint local_9c;
  undefined **local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined1 local_77;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_4c;
  uint local_48;
  int local_3c;
  undefined4 local_38;
  uint local_34;
  LPSTR **local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = param_3;
  puStack_c = &LAB_00b4abb7;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_4c = 1;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (LPSTR **)((uint)local_2c[0] & 0xffffff00);
  FUN_00409350();
  local_8._0_1_ = 2;
  (**(code **)(**(int **)(in_ECX + 0x3c) + 0x18))();
  local_8._0_1_ = 3;
  FUN_00988f20();
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0 < param_3) {
    do {
      local_8._0_1_ = 7;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = (LPSTR **)((uint)local_2c[0] & 0xffffff00);
      FUN_00409350();
      local_8._0_1_ = 8;
      FUN_00448aa0();
      local_8._0_1_ = 7;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  local_8._0_1_ = 7;
  FUN_00448aa0();
  local_80 = *(undefined4 *)(param_2 + 0x14);
  local_78 = *(undefined1 *)(param_2 + 0x1c);
  local_77 = *(undefined1 *)(param_2 + 0x1d);
  local_74 = *(undefined4 *)(param_2 + 0x20);
  local_70 = *(undefined4 *)(param_2 + 0x24);
  local_6c = *(undefined4 *)(param_2 + 0x28);
  local_68 = *(undefined4 *)(param_2 + 0x2c);
  local_64 = *(undefined4 *)(param_2 + 0x30);
  local_60 = *(undefined4 *)(param_2 + 0x34);
  local_5c = *(undefined4 *)(param_2 + 0x38);
  local_58 = *(undefined4 *)(param_2 + 0x3c);
  local_34 = 0x2d2d2d;
  local_90 = 0x18d;
  local_94 = CEventScope::vftable;
  local_54 = 1;
  local_7c = 0;
  local_8c = 0x2d2d2d;
  local_88 = 0;
  local_84 = 0;
  if (*(int *)(*(int *)(in_ECX + 0x3c) + 8) != 0) {
    local_84 = 0;
    FUN_00408ed0(&param_4,0,0xffffffff);
    FUN_0087a6c0(local_2c,&local_94,iVar1 + 1);
    local_8._0_1_ = 9;
    piVar2 = (int *)FUN_00989510();
    if (local_3c != 0) {
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if ((piVar2[1] - *piVar2) / 0x1c < 3) {
      lpsz = (LPSTR ***)local_2c[0];
      if (local_18 < 0x10) {
        lpsz = local_2c;
      }
      CharLowerBuffA((LPSTR)lpsz,1);
    }
    else {
      FUN_00448740();
    }
    FUN_00448aa0();
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

