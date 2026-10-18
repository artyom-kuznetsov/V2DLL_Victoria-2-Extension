// FUN_008b7f70 @ 008b7f70 body=[[008b7f70, 008b8089] [008b808d, 008b80f2] [008b80f6, 008b8164] [008b816a, 008b81a9] [008b81ad, 008b81c0] [008b81c4, 008b8200] [008b8204, 008b8217]]


undefined1 *
FUN_008b7f70(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5)

{
  int *piVar1;
  uint uVar2;
  void **ppvVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int in_ECX;
  bool bVar8;
  undefined *puVar9;
  undefined4 local_94 [4];
  uint local_84;
  uint local_80;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  int local_40;
  uint local_3c [4];
  uint local_2c;
  uint local_28;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 local_12;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b424c3;
  local_10 = ExceptionList;
  local_11 = param_4 < 0;
  if ((bool)local_11) {
    param_4 = -param_4;
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  uStack_7 = 0;
  local_18 = 0;
  local_1c = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2;
  ExceptionList = &local_10;
  ppvVar3 = &local_10;
  local_40 = in_ECX;
  if (0 < local_1c) {
    do {
      ExceptionList = ppvVar3;
      local_8 = 0;
      piVar1 = *(int **)(*(int *)(local_40 + 8) + local_18 * 4);
      (**(code **)(*piVar1 + 0x28))(local_94,param_2,param_3,param_4);
      local_8 = 1;
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      uVar2 = local_28;
      uVar6 = local_84;
      if (local_2c <= local_84) {
        uVar6 = local_2c;
      }
      iVar5 = FUN_00414bd0(uVar6);
      bVar8 = false;
      if (iVar5 == 0) {
        if (local_84 < local_2c) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(local_84 != local_2c);
        }
        bVar8 = uVar6 == 0;
      }
      local_12 = !bVar8;
      local_8 = 1;
      if (0xf < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_3c[0]);
      }
      if ((bool)local_12) {
        local_64 = 0xf;
        local_68 = 0;
        local_78[0] = local_78[0] & 0xffffff00;
        if (0 < param_4) {
          local_20 = param_4;
          do {
            local_8 = 3;
            local_28 = 0xf;
            local_2c = 0;
            local_3c[0] = local_3c[0] & 0xffffff00;
            FUN_00409350(&DAT_00e29ba0,3);
            local_8 = 4;
            FUN_00448aa0(local_3c,0,0xffffffff);
            local_8 = 3;
            if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_3c[0]);
            }
            local_20 = local_20 + -1;
          } while (local_20 != 0);
        }
        local_8 = 3;
        FUN_00448aa0(local_78,0,0xffffffff);
        if (((param_4 == 0) || (local_11 != '\0')) && ((char)param_5 != '\0')) {
          cVar4 = (**(code **)(*piVar1 + 0x18))(param_2);
          if (cVar4 == (char)param_3) {
            puVar9 = &DAT_00e2cfe8;
          }
          else {
            puVar9 = &DAT_00e2cff0;
          }
          FUN_00448740(puVar9,7);
        }
        FUN_00448aa0(local_94,0,0xffffffff);
        local_8 = 1;
        if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_78[0]);
        }
      }
      local_8 = 1;
      uVar7 = (**(code **)(*piVar1 + 0x2c))(local_78,param_2,param_3,param_4,param_5);
      local_8 = 5;
      FUN_00448aa0(uVar7,0,0xffffffff);
      if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_78[0]);
      }
      local_8 = 0;
      if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_94[0]);
      }
      local_18 = local_18 + 1;
      ppvVar3 = ExceptionList;
    } while (local_18 < local_1c);
  }
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00408ed0(local_5c,0,0xffffffff);
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_5c[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

