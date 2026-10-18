// FUN_00698910 @ 00698910 body=[[00698910, 00698b15] [00698b19, 00698b3c] [00698b40, 00698b54]]


bool FUN_00698910(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  undefined1 uVar2;
  undefined1 local_e4 [40];
  undefined4 ***local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  int local_98;
  uint local_94;
  int local_90;
  uint local_8c;
  int local_88;
  uint local_7c [10];
  undefined4 ***local_54 [5];
  uint local_40;
  int local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8b789;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00698880();
  uVar2 = 0;
  local_8 = 0;
  FUN_00698880();
  local_8._0_1_ = 1;
  (**(code **)(in_ECX + 8))(param_1,*(undefined4 *)(in_ECX + 4),local_7c,0);
  (**(code **)(in_ECX + 8))(param_2,*(undefined4 *)(in_ECX + 4),local_e4,0);
  if (*(char *)(in_ECX + 0xc) == '\0') {
    if (local_1c != 0xf) {
      local_7c[0] = local_1c;
    }
  }
  else if (local_18 != 0xf) {
    local_7c[0] = local_18;
  }
  switch(local_7c[0]) {
  case 0:
  case 1:
  case 2:
    FUN_0055dd40();
    local_8._0_1_ = 2;
    FUN_0055dd40();
    local_8._0_1_ = 3;
    uVar2 = FUN_0098ab20();
    FUN_00408ad0();
    FUN_00408ad0();
    break;
  case 4:
    if (local_40 < 0x10) {
      local_54[0] = local_54;
    }
    iVar1 = FUN_00aaf0c5(local_54[0]);
    if (local_a8 < 0x10) {
      local_bc[0] = local_bc;
    }
    local_98 = FUN_00aaf0c5(local_bc[0]);
    if (iVar1 != local_98) goto LAB_00698a2c;
  case 3:
    uVar2 = FUN_0098ab20();
    break;
  case 5:
  case 6:
  case 7:
    iVar1 = local_30;
LAB_00698a2c:
    FUN_00698b90();
    FUN_00698b90();
    ExceptionList = local_10;
    return iVar1 < local_98;
  case 8:
  case 9:
  case 10:
    if ((local_28 <= local_90) && ((local_28 < local_90 || (local_2c < local_94)))) {
      uVar2 = 1;
    }
    break;
  case 0xb:
  case 0xc:
    uVar2 = (int)local_24 < (int)local_8c;
    break;
  case 0xd:
    uVar2 = local_24 < local_8c;
    break;
  case 0xe:
    uVar2 = local_20 < local_88;
    break;
  default:
    if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_bc[0]);
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = (undefined4 ***)((uint)local_bc[0] & 0xffffff00);
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54[0]);
    }
    ExceptionList = local_10;
    return false;
  }
  FUN_00698b90();
  FUN_00698b90();
  ExceptionList = local_10;
  return (bool)uVar2;
}

