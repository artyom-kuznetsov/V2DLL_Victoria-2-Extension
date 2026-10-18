// FUN_00a6b930 @ 00a6b930 body=[[00a6b930, 00a6bb1c] [00a6bb20, 00a6bb45] [00a6bb49, 00a6bc50] [00a6bc54, 00a6bc6f] [00a6bc73, 00a6bc8e] [00a6bc92, 00a6bcb0] [00a6bcb4, 00a6bcc8]]


/* WARNING: Removing unreachable block (ram,0x00a6bb3d) */

undefined4 *
FUN_00a6b930(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  uint uVar2;
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
  undefined3 uStack00000088;
  char cStack0000008b;
  undefined4 local_38;
  uint local_24;
  undefined4 *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = _uStack00000088;
  puStack_c = &LAB_00b4e0f1;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 3;
  ExceptionList = &local_10;
  FUN_009ee0b0(param_1,param_3);
  *param_1 = &PTR_FUN_00e42930;
  param_1[0x15] = &PTR_LAB_00e42a48;
  param_1[0x25] = param_2;
  param_1[0x26] = param_5;
  param_1[0x29] = 0;
  local_8._0_1_ = 5;
  param_1[0x30] = 0xf;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  FUN_00408ed0(&stack0x00000034,0,0xffffffff);
  local_8._0_1_ = 6;
  param_1[0x37] = 0xf;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  FUN_00408ed0(&stack0x00000050,0,0xffffffff);
  local_8._0_1_ = 7;
  param_1[0x3e] = 0xf;
  param_1[0x3d] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  FUN_00408ed0(&stack0x0000006c,0,0xffffffff);
  local_8._0_1_ = 8;
  param_1[0x40] = uVar2;
  param_1[0x1c] = 0;
  piVar4 = (int *)FUN_00996520(param_4,uVar2,&DAT_00f0ff68);
  param_1[0x28] = piVar4;
  (**(code **)(*piVar4 + 0x34))();
  local_18 = (undefined4 *)(int)*(short *)(param_1 + 0x26);
  local_14 = (uint)*(short *)((int)param_1 + 0x9a);
  (**(code **)(*(int *)param_1[0x28] + 0xcc))(&local_18);
  local_14 = param_1[0x28];
  local_18 = param_1;
  FUN_0099e960();
  (**(code **)(*(int *)param_1[0x28] + 0x5c))(1);
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
    _uStack00000088 = CONCAT13(1,uStack00000088);
    if (cVar3 == '\0') goto LAB_00a6bb04;
  }
  _uStack00000088 = _uStack00000088 & 0xffffff;
LAB_00a6bb04:
  if (((local_14 & 2) != 0) && (local_14 = local_14 & 0xfffffffd, 0xf < local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38);
  }
  local_8 = 8;
  if (cStack0000008b != '\0') {
    iVar5 = (**(code **)(*(int *)param_1[0xd] + 0x38))(&stack0x00000034);
    param_1[0x2a] = iVar5;
    if (*(char *)(iVar5 + 200) != '\0') {
      (**(code **)(**(int **)(iVar5 + 0x58) + 0x38))();
    }
    *(undefined1 *)(iVar5 + 200) = 0;
    _uStack00000088 = CONCAT22(param_5._2_2_ + 10,(short)param_5 + 0x1e);
    FUN_009e7350(_uStack00000088);
    (**(code **)(*(int *)param_1[0x2a] + 0x20))(0x41200000);
    FUN_009e7500();
  }
  piVar4 = DAT_00f20c18;
  param_1[0x2a] = 0;
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)FUN_00aae9af(4);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
      DAT_00f20c18 = piVar4;
    }
    else {
      *piVar4 = (int)&PTR_FUN_00e38b28;
      DAT_00f20c18 = piVar4;
    }
  }
  puVar6 = (undefined4 *)(**(code **)(*piVar4 + 4))();
  puVar1 = (undefined4 *)param_1[0x29];
  if ((puVar6 != puVar1) && (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  param_1[0x29] = puVar6;
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

