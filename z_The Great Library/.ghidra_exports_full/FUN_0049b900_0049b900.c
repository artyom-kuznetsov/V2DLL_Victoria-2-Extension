// FUN_0049b900 @ 0049b900 body=[[0049b900, 0049b970] [0049b974, 0049b9b5] [0049b9b9, 0049ba61] [0049ba65, 0049ba78] [0049ba80, 0049bbcd] [0049bbd1, 0049bbf7] [0049bbfb, 0049bc0f]]


undefined4 FUN_0049b900(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 local_1dc [16];
  undefined4 local_1cc;
  char ***local_1c8;
  char ***pppcStack_1c4;
  undefined **local_ec [5];
  uint local_d8;
  undefined4 local_c8;
  uint local_c4;
  int local_bc;
  char ***local_ac [5];
  uint local_98;
  uint local_90 [4];
  undefined4 local_80;
  uint local_7c;
  int local_74;
  int local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  int local_24;
  int local_20;
  undefined1 *local_1c [2];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5b457;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffe40;
  local_8 = 0;
  pppcStack_1c4 = (char ***)0x15;
  local_1c8 = (char ***)0xdfc538;
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  local_1cc = 0x49b947;
  ExceptionList = &local_10;
  FUN_00409350();
  pppcStack_1c4 = (char ***)local_ac;
  local_8._0_1_ = 1;
  local_1c8 = (char ***)0x49b95a;
  FUN_00496b60();
  local_8._0_1_ = 3;
  if (0xf < local_34) {
    pppcStack_1c4 = (char ***)local_48;
                    /* WARNING: Subroutine does not return */
    local_1c8 = (char ***)&UNK_0049b971;
    FUN_00aae91b();
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  if (local_98 < 0x10) {
    pppcStack_1c4 = (char ***)local_ac;
  }
  else {
    pppcStack_1c4 = local_ac[0];
    if ((char ****)local_ac[0] == (char ****)0x0) goto LAB_0049b9a2;
  }
  if (*(char *)pppcStack_1c4 != '\0') {
    local_1c8 = (char ***)0x49b99b;
    iVar2 = PHYSFS_exists();
    if (iVar2 != 0) {
      local_1c8 = local_ac[0];
      if (local_98 < 0x10) {
        local_1c8 = (char ***)local_ac;
      }
      local_7c = 0xf;
      local_80 = 0;
      local_90[0] = local_90[0] & 0xffffff00;
      pppcStack_1c4 = local_1c8;
      do {
        cVar1 = *(char *)pppcStack_1c4;
        pppcStack_1c4 = (char ***)((int)pppcStack_1c4 + 1);
      } while (cVar1 != '\0');
      pppcStack_1c4 = (char ***)((int)pppcStack_1c4 - (int)((int)local_1c8 + 1));
      local_1cc = 0x49ba16;
      FUN_00409350();
      local_1c[0] = local_1dc;
      local_8._0_1_ = 4;
      local_1c8 = (char ***)0xf;
      local_1cc = 0;
      local_1dc[0] = 0;
      FUN_00409350(&DAT_00ded94d,0);
      FUN_00992740(local_ec,local_90,0);
      local_8 = CONCAT31(local_8._1_3_,6);
      if (0xf < local_7c) {
        pppcStack_1c4 = (char ***)local_90[0];
                    /* WARNING: Subroutine does not return */
        local_1c8 = (char ***)&UNK_0049ba62;
        FUN_00aae91b();
      }
      local_7c = 0xf;
      local_80 = 0;
      local_90[0] = local_90[0] & 0xffffff00;
      local_24 = 0;
      do {
        if (*(int *)(param_1 + 0x2aa8) <= local_24) {
          local_ec[0] = &PTR_FUN_00e37dc0;
          if (local_bc != 0) {
            pppcStack_1c4 = (char ***)local_bc;
            local_1c8 = (char ***)0x49bba2;
            PHYSFS_close();
            local_bc = 0;
          }
          local_ec[0] = &PTR_FUN_00e3b540;
          if (0xf < local_c4) {
            pppcStack_1c4 = (char ***)local_d8;
                    /* WARNING: Subroutine does not return */
            local_1c8 = (char ***)&UNK_0049bbce;
            FUN_00aae91b();
          }
          local_c4 = 0xf;
          local_c8 = 0;
          local_d8 = local_d8 & 0xffffff00;
          if (0xf < local_98) {
            pppcStack_1c4 = local_ac[0];
                    /* WARNING: Subroutine does not return */
            local_1c8 = (char ***)&UNK_0049bbf8;
            FUN_00aae91b();
          }
          ExceptionList = local_10;
          return 1;
        }
        iVar2 = *(int *)(*(int *)(param_1 + 0x2aa4) + local_24 * 4);
        pppcStack_1c4 = (char ***)0x4;
        local_1c8 = (char ***)local_1c;
        local_1c[0] = (undefined1 *)0x0;
        local_1cc = 0x49baac;
        FUN_00992f20();
        for (local_20 = 0; iVar3 = 0, local_20 < (int)local_1c[0]; local_20 = local_20 + 1) {
          pppcStack_1c4 = (char ***)0x24;
          local_1c8 = (char ***)&local_74;
          local_74 = 0;
          local_70 = 0;
          local_6c = 0;
          local_68 = 0;
          local_64 = 0;
          local_1cc = 0x49badc;
          FUN_00992f20();
          local_50 = local_74;
          local_48 = local_6c;
          local_44 = local_68;
          local_40 = local_64;
          local_3c = local_60;
          local_4c = local_70;
          local_38 = local_5c;
          local_34 = local_58;
          local_30 = local_54;
          for (; iVar3 < (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24; iVar3 = iVar3 + 1)
          {
            if (*(int *)(*(int *)(iVar2 + 200) + 4 + iVar3 * 0x24) == local_70) goto LAB_0049bb53;
          }
          pppcStack_1c4 = (char ***)0x49bb53;
          FUN_004c98f0();
LAB_0049bb53:
          if ((local_6c != 0) && (local_74 == 3)) {
            *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x2aa4) + local_6c * 4) + 0x1d) = 1;
          }
        }
        local_24 = local_24 + 1;
      } while( true );
    }
  }
LAB_0049b9a2:
  if (0xf < local_98) {
    pppcStack_1c4 = local_ac[0];
                    /* WARNING: Subroutine does not return */
    local_1c8 = (char ***)&UNK_0049b9b6;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return 0;
}

