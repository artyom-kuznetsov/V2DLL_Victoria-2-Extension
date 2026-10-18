// FUN_00a70250 @ 00a70250 body=[[00a70250, 00a7042f] [00a70433, 00a70458] [00a7045c, 00a70532] [00a70536, 00a70551] [00a70555, 00a70570] [00a70574, 00a70592] [00a70596, 00a705aa]]


/* WARNING: Removing unreachable block (ram,0x00a70450) */

undefined4 *
FUN_00a70250(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  uint in_stack_0000002c;
  uint in_stack_00000034;
  undefined4 in_stack_00000044;
  uint in_stack_00000048;
  uint in_stack_00000050;
  undefined4 in_stack_00000060;
  uint in_stack_00000064;
  undefined4 in_stack_0000006c;
  uint in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 local_38;
  uint local_24;
  undefined4 *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4e051;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 3;
  ExceptionList = &local_10;
  FUN_009ee0b0(param_1,param_3);
  *param_1 = &PTR_FUN_00e42d48;
  param_1[0x15] = &PTR_LAB_00e42e60;
  param_1[0x26] = param_2;
  param_1[0x27] = param_5;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  local_8._0_1_ = 5;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x34] = 0xf;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  FUN_00408ed0(&stack0x00000034,0,0xffffffff);
  local_8._0_1_ = 6;
  param_1[0x3b] = 0xf;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  FUN_00408ed0(&stack0x00000050,0,0xffffffff);
  local_8._0_1_ = 7;
  param_1[0x42] = 0xf;
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  FUN_00408ed0(&stack0x0000006c,0,0xffffffff);
  local_8._0_1_ = 8;
  param_1[0x1c] = 0;
  piVar4 = (int *)FUN_00996520(param_4,in_stack_00000088,&DAT_00f0ffbc);
  local_14 = (uint)*(short *)((int)param_1 + 0x9e);
  local_18 = (undefined4 *)(int)*(short *)(param_1 + 0x27);
  param_1[0x25] = piVar4;
  (**(code **)(*piVar4 + 0xcc))(&local_18);
  local_14 = param_1[0x25];
  local_18 = param_1;
  FUN_0099e960();
  (**(code **)(*(int *)param_1[0x25] + 0x5c))(1);
  FUN_00409350("NOTOOLTIP",9);
  local_8 = CONCAT31(local_8._1_3_,9);
  local_14 = 1;
  cVar3 = FUN_00416db0();
  if (cVar3 == '\0') {
    local_24 = 0xf;
    local_38 = 0;
    FUN_00409350(&DAT_00ded94d,0);
    local_8 = 10;
    local_14 = 3;
    cVar3 = FUN_00416db0();
    bVar2 = true;
    if (cVar3 == '\0') goto LAB_00a70417;
  }
  bVar2 = false;
LAB_00a70417:
  if (((local_14 & 2) != 0) && (local_14 = local_14 & 0xfffffffd, 0xf < local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38);
  }
  local_8 = 8;
  if (bVar2) {
    iVar5 = (**(code **)(*param_3 + 0x38))(&stack0x00000034);
    param_1[0x2b] = iVar5;
    if (*(char *)(iVar5 + 200) != '\0') {
      (**(code **)(**(int **)(iVar5 + 0x58) + 0x38))();
    }
    *(undefined1 *)(iVar5 + 200) = 0;
    param_3 = (int *)CONCAT22(param_5._2_2_ + 10,(short)param_5 + 0x1e);
    FUN_009e7350(param_3);
    FUN_009e7500();
  }
  if (DAT_00f20c18 == (int *)0x0) {
    DAT_00f20c18 = (int *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)0x0;
    }
    else {
      *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
    }
  }
  puVar6 = (undefined4 *)(**(code **)(*DAT_00f20c18 + 4))();
  puVar1 = (undefined4 *)param_1[0x2a];
  if ((puVar6 != puVar1) && (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  param_1[0x2a] = puVar6;
  if (0xf < in_stack_0000002c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_6);
  }
  if (0xf < in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_stack_00000034);
  }
  in_stack_00000048 = 0xf;
  in_stack_00000044 = 0;
  in_stack_00000034 = in_stack_00000034 & 0xffffff00;
  if (in_stack_00000064 < 0x10) {
    in_stack_00000064 = 0xf;
    in_stack_00000060 = 0;
    in_stack_00000050 = in_stack_00000050 & 0xffffff00;
    if (in_stack_00000080 < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_stack_0000006c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_stack_00000050);
}

