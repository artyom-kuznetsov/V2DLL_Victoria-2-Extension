// FUN_00892dd0 @ 00892dd0 body=[[00892dd0, 00892f40] [00892f44, 00892f6b] [00892f6f, 00892f90] [00892f94, 00892fb0] [00892fb4, 00893048] [00893051, 008930dd] [008930e1, 00893131] [00893135, 00893150] [00893154, 0089316f] [00893173, 008931b3] [008931b7, 008931cb]]


undefined1 * FUN_00892dd0(undefined1 *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  LPSTR **lpsz;
  int in_ECX;
  uint in_stack_00000024;
  undefined1 *in_stack_0000002c;
  undefined1 auStack_130 [16];
  undefined4 uStack_120;
  LPSTR *ppCStack_11c;
  undefined1 local_100 [8];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_e8;
  uint local_b8;
  undefined4 local_a8;
  uint local_a4;
  uint local_9c;
  undefined4 local_8c;
  uint local_88;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  LPSTR *local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c;
  int local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4aab6;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_008931d0();
  if ((int)(*(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c) & 0xfffffffcU) < 1) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350();
    if (0xf < in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ExceptionList = local_10;
    return param_1;
  }
  uVar4 = *(int *)(param_2 + 0x40) * 0x343fd + 0x269ec3;
  uVar5 = uVar4 * 0x343fd + 0x269ec3;
  *(uint *)(param_2 + 0x40) = uVar5;
  iVar1 = *(int *)(in_ECX + 0x40);
  iVar2 = *(int *)(in_ECX + 0x3c);
  FUN_008a88d0();
  local_f4 = 0;
  local_f8 = 0x2d2d2d;
  piVar6 = *(int **)(*(int *)(in_ECX + 0x3c) +
                    (int)((longlong)(ulonglong)((uVar5 >> 0x10 & 0x7fff) * (uVar4 >> 0x10 & 0x7fff))
                         % (longlong)(iVar1 - iVar2 >> 2)) * 4);
  if (piVar6 == (int *)0x0) {
    local_e8 = 0;
  }
  else if ((piVar6[0x13] - piVar6[0x12] & 0xfffffffcU) == 0) {
    local_e8 = 0;
  }
  else {
    local_e8 = *(undefined4 *)piVar6[0x12];
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  local_8._0_1_ = 1;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 2;
  (**(code **)(*piVar6 + 0x20))();
  local_8._0_1_ = 3;
  FUN_00988fa0();
  local_8._0_1_ = 4;
  ppCStack_11c = (LPSTR *)FUN_00988f20();
  local_8._0_1_ = 5;
  uStack_120 = 0x892f2c;
  FUN_00448aa0();
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_88 = 0xf;
  local_8c = 0;
  local_9c = local_9c & 0xffffff00;
  if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a4 = 0xf;
  local_a8 = 0;
  local_b8 = local_b8 & 0xffffff00;
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 1;
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ppCStack_11c = (LPSTR *)0xf;
  uStack_120 = 0;
  auStack_130[0] = 0;
  FUN_00408ed0(&param_4,0,0xffffffff);
  FUN_0087a6c0(local_64,local_100,param_3 + 1);
  local_8._0_1_ = 6;
  ppCStack_11c = (LPSTR *)0x892ffe;
  piVar6 = (int *)FUN_00989510();
  if (((piVar6[1] - *piVar6) / 0x1c < 3) ||
     (bVar3 = true, (*(int *)(in_ECX + 0x2c) - *(int *)(in_ECX + 0x28) & 0xfffffffcU) != 0)) {
    bVar3 = false;
  }
  if (local_20 != 0) {
    FUN_00413860();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (bVar3) {
    ppCStack_11c = (LPSTR *)0x893066;
    FUN_00448740();
  }
  else {
    ppCStack_11c = (LPSTR *)0x89307c;
    FUN_00448740();
    in_stack_0000002c = auStack_130;
    ppCStack_11c = (LPSTR *)0xf;
    uStack_120 = 0;
    auStack_130[0] = 0;
    FUN_00408ed0(&param_4,0,0xffffffff);
    ppCStack_11c = (LPSTR *)FUN_0087a6c0(local_80,local_100,0);
    local_8._0_1_ = 7;
    uStack_120 = 0x8930c7;
    FUN_00408ed0();
    local_8._0_1_ = 6;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    lpsz = (LPSTR **)local_64[0];
    if (local_50 < 0x10) {
      lpsz = local_64;
    }
    ppCStack_11c = (LPSTR *)0x8930f5;
    CharLowerBuffA((LPSTR)lpsz,1);
  }
  ppCStack_11c = (LPSTR *)local_64;
  uStack_120 = 0x893105;
  FUN_00448aa0();
  ppCStack_11c = (LPSTR *)local_48;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  uStack_120 = 0x893124;
  FUN_00408ed0();
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = (LPSTR *)((uint)local_64[0] & 0xffffff00);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

