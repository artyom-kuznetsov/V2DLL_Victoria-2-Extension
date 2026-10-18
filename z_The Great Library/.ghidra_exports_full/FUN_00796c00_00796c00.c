// FUN_00796c00 @ 00796c00 body=[[00796c00, 00796ca6] [00796caa, 00796d38] [00796d41, 00796d8c] [00796d90, 00796ea4] [00796ea8, 00796ed1] [00796ed5, 00796f6e] [00796f72, 00796fc8]]


undefined1 * FUN_00796c00(undefined1 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined1 local_ac [92];
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  uint local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b7a936;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xf;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x58] = 1;
  local_8 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  local_18 = 1;
  local_20 = 0xf;
  local_24 = 0;
  FUN_00409350("unitleader_personality",0x16);
  local_8 = 1;
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x3c))(local_34);
  local_11 = param_2 == iVar2;
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  if ((bool)local_11) {
    iVar2 = FUN_00967f50();
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    piVar3 = (int *)FUN_009c16d0(*(undefined4 *)(in_ECX + 0x2c),*(undefined4 *)(in_ECX + 0x30));
    cVar1 = (**(code **)(*piVar3 + 0x20))();
    if (cVar1 == '\0') {
      ExceptionList = local_10;
      return param_1;
    }
    iVar2 = FUN_009c16d0(*(undefined4 *)(in_ECX + 0x2c),*(undefined4 *)(in_ECX + 0x30));
    uVar4 = (**(code **)(**(int **)(iVar2 + 0x7c) + 0x1c))(local_50);
    local_8 = 2;
    FUN_00408ed0(uVar4,0,0xffffffff);
    if (local_3c < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("unitleader_background",0x15);
  local_8 = 3;
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x3c))(local_34);
  local_11 = param_2 == iVar2;
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  if ((bool)local_11) {
    iVar2 = FUN_00967f50();
    if (iVar2 == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    piVar3 = (int *)FUN_009c16d0(*(undefined4 *)(in_ECX + 0x2c),*(undefined4 *)(in_ECX + 0x30));
    cVar1 = (**(code **)(*piVar3 + 0x20))();
    if (cVar1 == '\0') {
      ExceptionList = local_10;
      return param_1;
    }
    iVar2 = FUN_009c16d0(*(undefined4 *)(in_ECX + 0x2c),*(undefined4 *)(in_ECX + 0x30));
    uVar4 = (**(code **)(**(int **)(iVar2 + 0x80) + 0x1c))(local_50);
    local_8 = 4;
    goto LAB_00796fa4;
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("photo",5);
  local_8 = 5;
  local_18 = 3;
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x44))(local_50);
  if (param_2 == iVar2) {
LAB_00796e88:
    local_11 = '\x01';
  }
  else {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("leader_name",0xb);
    local_8 = 6;
    local_18 = 7;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x3c))(local_34);
    local_11 = '\0';
    if (param_2 == iVar2) goto LAB_00796e88;
  }
  if ((local_18 & 4) != 0) {
    local_18 = local_18 & 0xfffffffb;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
  }
  local_8 = 0;
  if (((local_18 & 2) != 0) && (local_18 = local_18 & 0xfffffffd, 0xf < local_3c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  if (local_11 != '\0') {
    piVar3 = (int *)FUN_009c16d0(*(undefined4 *)(in_ECX + 0x2c),*(undefined4 *)(in_ECX + 0x30));
    (**(code **)(*piVar3 + 0x24))(local_ac);
    local_8 = 7;
    FUN_004115d0();
    FUN_00459820();
    ExceptionList = local_10;
    return param_1;
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("leader_prestige_bar",0x13);
  local_8 = 8;
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x44))(local_50);
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  if (param_2 != iVar2) {
    ExceptionList = local_10;
    return param_1;
  }
  uVar4 = FUN_009c16d0(*(undefined4 *)(in_ECX + 0x2c),*(undefined4 *)(in_ECX + 0x30));
  uVar4 = FUN_005b70c0(uVar4,local_50);
  local_8 = 9;
LAB_00796fa4:
  FUN_00408ed0(uVar4,0,0xffffffff);
  FUN_00408ad0();
  ExceptionList = local_10;
  return param_1;
}

