// FUN_00a37d30 @ 00a37d30 body=[[00a37d30, 00a37dca] [00a37dd0, 00a37e4f] [00a37e53, 00a37ec2]]


void FUN_00a37d30(int param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 uint param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void **ppvVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_4c;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b411e8;
  local_10 = ExceptionList;
  local_18 = param_4 - param_2;
  iVar3 = local_18;
  local_14 = param_6 - param_2;
  while (iVar2 = iVar3, iVar2 != 0) {
    iVar3 = local_14 % iVar2;
    local_14 = iVar2;
  }
  ppvVar4 = &local_10;
  uVar5 = local_2c;
  if (local_14 < (int)(param_6 - param_2)) {
    for (; ExceptionList = ppvVar4, 0 < local_14; local_14 = local_14 + -1) {
      local_44 = local_14 + param_2;
      local_2c = local_18 + local_44;
      local_20 = param_1;
      if (local_2c == param_6) {
        local_28 = param_1;
        uVar7 = param_2;
        local_2c = uVar5;
        local_1c = local_44;
      }
      else {
        local_30 = param_1;
        local_28 = param_1;
        uVar7 = local_2c;
        local_4c = local_44;
        local_1c = local_44;
      }
      do {
        uVar8 = uVar7;
        local_8 = 0xffffffff;
        uVar5 = uVar8;
        if (*(uint *)(local_28 + 8) <= uVar8) {
          uVar5 = uVar8 - *(uint *)(local_28 + 8);
        }
        uVar7 = local_1c;
        if (*(uint *)(local_20 + 8) <= local_1c) {
          uVar7 = local_1c - *(uint *)(local_20 + 8);
        }
        uVar1 = *(undefined4 *)(*(int *)(local_28 + 4) + uVar5 * 4);
        local_58 = 0xf;
        local_5c = 0;
        local_6c[0] = local_6c[0] & 0xffffff00;
        FUN_00408ed0(*(undefined4 *)(*(int *)(local_20 + 4) + uVar7 * 4),0,0xffffffff);
        local_8 = 0;
        FUN_00408ed0(uVar1,0,0xffffffff);
        FUN_00408ed0(local_6c,0,0xffffffff);
        local_8 = 0xffffffff;
        if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_6c[0]);
        }
        local_20 = local_28;
        if (local_18 < (int)(param_6 - uVar8)) {
          local_38 = local_28;
          local_34 = uVar8 + local_18;
          piVar6 = &local_38;
          local_4c = uVar8;
        }
        else {
          local_3c = (param_2 - (param_6 - uVar8)) + local_18;
          local_4c = param_2;
          local_40 = param_1;
          piVar6 = &local_40;
        }
        local_28 = *piVar6;
        uVar7 = piVar6[1];
        local_1c = uVar8;
      } while (piVar6[1] != local_44);
      ppvVar4 = ExceptionList;
      uVar5 = local_2c;
    }
  }
  ExceptionList = local_10;
  return;
}

