// FUN_0053da30 @ 0053da30 body=[[0053da30, 0053dde8] [0053ddec, 0053de16] [0053de1a, 0053de3f] [0053de43, 0053de68] [0053de6c, 0053de91] [0053de95, 0053deb4] [0053deb8, 0053ded4] [0053ded8, 0053defd] [0053df01, 0053df26] [0053df2a, 0053df4f] [0053df53, 0053df76] [0053df7a, 0053e186] [0053e18a, 0053e1b4] [0053e1b8, 0053e1dd] [0053e1e1, 0053e206] [0053e20a, 0053e22f] [0053e233, 0053e258] [0053e25c, 0053e281] [0053e285, 0053e2aa] [0053e2ae, 0053e2cd] [0053e2d1, 0053e2ed] [0053e2f1, 0053e314] [0053e318, 0053e3bb] [0053e3bf, 0053e3fb] [0053e3ff, 0053e43b] [0053e43f, 0053e488] [0053e48c, 0053e4a0] [0053e4a4, 0053e4b8] [0053e4bc, 0053e4db] [0053e4df, 0053e4eb] [0053e4ef, 0053e503]]


undefined1 * FUN_0053da30(int param_1,undefined1 *param_2)

{
  char cVar1;
  void **ppvVar2;
  undefined1 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char local_1dc [32];
  uint local_1bc [4];
  int local_1ac;
  uint local_1a8;
  uint local_1a0 [4];
  undefined4 local_190;
  uint local_18c;
  uint local_184;
  undefined4 local_174;
  uint local_170;
  uint local_168 [4];
  undefined4 local_158;
  uint local_154;
  uint local_14c;
  undefined4 local_13c;
  uint local_138;
  uint local_130;
  undefined4 local_120;
  uint local_11c;
  uint local_114;
  undefined4 local_104;
  uint local_100;
  uint local_f8 [4];
  int local_e8;
  uint local_e4;
  undefined4 local_dc;
  uint local_d8 [4];
  undefined4 local_c8;
  uint local_c4;
  uint local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  uint local_a0 [4];
  undefined4 local_90;
  uint local_8c;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  undefined4 local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined4 *local_54;
  int local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b8175e;
  local_10 = ExceptionList;
  local_dc = 0;
  puVar9 = (undefined4 *)0x0;
  local_64 = (undefined4 *)0x0;
  local_60 = (undefined4 *)0x0;
  local_5c = (undefined4 *)0x0;
  puVar7 = (undefined4 *)0x0;
  local_4c = (undefined4 *)0x0;
  local_48 = (undefined4 *)0x0;
  local_44 = (undefined4 *)0x0;
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8[0] = local_f8[0] & 0xffffff00;
  local_1a8 = 0xf;
  local_1ac = 0;
  local_1bc[0] = local_1bc[0] & 0xffffff00;
  local_8 = 4;
  uStack_7 = 0;
  local_68 = DAT_012588e8;
  local_20 = *DAT_012587e4;
  local_1c = 0;
  ExceptionList = &local_10;
  ppvVar2 = &local_10;
  if (0 < local_20) {
    do {
      iVar4 = *(int *)(DAT_012587e4[1] + local_1c * 4);
      local_18 = *(undefined4 *)(iVar4 + 0x1c);
      local_14 = *(int *)(iVar4 + 0x20);
      if (local_14 != *(int *)(param_1 + 0x20)) {
        if ((&local_18 < puVar7) && (local_4c <= &local_18)) {
          local_50 = (int)&local_18 - (int)local_4c >> 3;
          if (puVar7 == local_44) {
            FUN_00810820();
            puVar7 = local_48;
          }
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = local_4c[local_50 * 2];
            iVar4 = local_4c[local_50 * 2 + 1];
LAB_0053db3f:
            puVar7[1] = iVar4;
          }
        }
        else {
          if (puVar7 == local_44) {
            FUN_00810820();
            puVar7 = local_48;
          }
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = local_18;
            iVar4 = local_14;
            goto LAB_0053db3f;
          }
        }
        local_48 = puVar7 + 2;
        if ((&local_18 < puVar9) && (local_64 <= &local_18)) {
          local_50 = (int)&local_18 - (int)local_64 >> 3;
          if (puVar9 == local_5c) {
            FUN_00810820();
            puVar9 = local_60;
          }
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = local_64[local_50 * 2];
            iVar4 = local_64[local_50 * 2 + 1];
LAB_0053dbaa:
            puVar9[1] = iVar4;
          }
        }
        else {
          if (puVar9 == local_5c) {
            FUN_00810820();
            puVar9 = local_60;
          }
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = local_18;
            iVar4 = local_14;
            goto LAB_0053dbaa;
          }
        }
        puVar9 = puVar9 + 2;
        puVar7 = local_48;
        local_60 = puVar9;
      }
      local_1c = local_1c + 1;
      ppvVar2 = ExceptionList;
    } while (local_1c < local_20);
  }
  ExceptionList = ppvVar2;
  FUN_0054c9a0(local_64,puVar9,(int)puVar9 - (int)local_64 >> 3,*(undefined4 *)(param_1 + 0x20));
  FUN_0054ca80(local_4c,local_48,(int)local_48 - (int)local_4c >> 3,*(undefined4 *)(param_1 + 0x20))
  ;
  local_1c = 0;
  local_54 = local_64;
  do {
    do {
      do {
        if ((local_54 < local_64) || (local_60 <= local_54)) goto LAB_0053df9b;
        puVar7 = local_54 + 2;
        local_18 = *local_54;
        local_14 = local_54[1];
        local_54 = puVar7;
      } while (local_14 == *(int *)(param_1 + 0x20));
      iVar4 = FUN_00445060(*(int *)(param_1 + 0x20));
    } while (iVar4 < 1);
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded950,1);
    local_8 = 5;
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8[0] = local_d8[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfc7b4,3);
    local_8c = 0xf;
    local_90 = 0;
    local_a0[0] = local_a0[0] & 0xffffff00;
    local_8 = 7;
    pcVar5 = __itoa(iVar4,local_1dc,10);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    local_8 = 8;
    uVar6 = FUN_0055dd40();
    local_8 = 9;
    local_20 = FUN_0043ec10(local_1a0,&DAT_00dfbf14,uVar6,&DAT_00df7e90,local_a0);
    local_8 = 10;
    pcVar8 = (char *)&local_18;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(&local_18,(int)pcVar8 - ((int)&local_18 + 1));
    local_8 = 0xb;
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = local_bc[0] & 0xffffff00;
    FUN_00409350(&DAT_00df9b68,1);
    local_8 = 0xc;
    FUN_00988f20(local_84);
    local_8 = 0xd;
    FUN_00988f20(local_3c);
    local_8 = 0xe;
    FUN_00988f20(local_20);
    local_8 = 0xf;
    uVar6 = FUN_00988f20(local_d8);
    local_8 = 0x10;
    FUN_00448aa0(uVar6,0,0xffffffff);
    if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_114);
    }
    local_100 = 0xf;
    local_104 = 0;
    local_114 = local_114 & 0xffffff00;
    if (0xf < local_154) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_168[0]);
    }
    local_154 = 0xf;
    local_158 = 0;
    local_168[0] = local_168[0] & 0xffffff00;
    if (0xf < local_138) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_14c);
    }
    local_138 = 0xf;
    local_13c = 0;
    local_14c = local_14c & 0xffffff00;
    if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_130);
    }
    local_11c = 0xf;
    local_120 = 0;
    local_130 = local_130 & 0xffffff00;
    if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_bc[0]);
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = local_bc[0] & 0xffffff00;
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_84[0]);
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    if (0xf < local_18c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1a0[0]);
    }
    local_18c = 0xf;
    local_190 = 0;
    local_1a0[0] = local_1a0[0] & 0xffffff00;
    if (0xf < local_170) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_184);
    }
    local_170 = 0xf;
    local_174 = 0;
    local_184 = local_184 & 0xffffff00;
    if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_a0[0]);
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0[0] = local_a0[0] & 0xffffff00;
    if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_d8[0]);
    }
    local_8 = 4;
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8[0] = local_d8[0] & 0xffffff00;
    if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_3c[0]);
    }
    local_1c = local_1c + 1;
  } while (local_1c < 0xf);
  FUN_00448740(".....",5);
LAB_0053df9b:
  local_1c = 0;
  local_54 = local_4c;
  uVar3 = local_8;
  do {
    do {
      do {
        local_8 = uVar3;
        if ((local_54 < local_4c) || (local_48 <= local_54)) goto LAB_0053e339;
        local_18 = *local_54;
        local_14 = local_54[1];
        local_54 = local_54 + 2;
        uVar3 = local_8;
      } while (local_14 == *(int *)(param_1 + 0x20));
      iVar4 = FUN_00445060(local_14);
      uVar3 = local_8;
    } while (iVar4 < 1);
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded950,1);
    local_8 = 0x11;
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = local_bc[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfc7b4,3);
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    local_8 = 0x13;
    pcVar5 = __itoa(iVar4,local_1dc,10);
    pcVar8 = pcVar5;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
    local_8 = 0x14;
    uVar6 = FUN_0055dd40();
    local_8 = 0x15;
    local_20 = FUN_0043ec10(local_168,&DAT_00dfbf14,uVar6,&DAT_00df7e90,local_84);
    local_8 = 0x16;
    pcVar8 = (char *)&local_18;
    local_8c = 0xf;
    local_90 = 0;
    local_a0[0] = local_a0[0] & 0xffffff00;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(&local_18,(int)pcVar8 - ((int)&local_18 + 1));
    local_8 = 0x17;
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8[0] = local_d8[0] & 0xffffff00;
    FUN_00409350(&DAT_00df9b68,1);
    local_8 = 0x18;
    FUN_00988f20(local_a0);
    local_8 = 0x19;
    FUN_00988f20(local_3c);
    local_8 = 0x1a;
    FUN_00988f20(local_20);
    local_8 = 0x1b;
    uVar6 = FUN_00988f20(local_bc);
    local_8 = 0x1c;
    FUN_00448aa0(uVar6,0,0xffffffff);
    if (0xf < local_170) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_184);
    }
    local_170 = 0xf;
    local_174 = 0;
    local_184 = local_184 & 0xffffff00;
    if (0xf < local_18c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1a0[0]);
    }
    local_18c = 0xf;
    local_190 = 0;
    local_1a0[0] = local_1a0[0] & 0xffffff00;
    if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_130);
    }
    local_11c = 0xf;
    local_120 = 0;
    local_130 = local_130 & 0xffffff00;
    if (0xf < local_138) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_14c);
    }
    local_138 = 0xf;
    local_13c = 0;
    local_14c = local_14c & 0xffffff00;
    if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_d8[0]);
    }
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8[0] = local_d8[0] & 0xffffff00;
    if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_a0[0]);
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0[0] = local_a0[0] & 0xffffff00;
    if (0xf < local_154) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_168[0]);
    }
    local_154 = 0xf;
    local_158 = 0;
    local_168[0] = local_168[0] & 0xffffff00;
    if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_114);
    }
    local_100 = 0xf;
    local_104 = 0;
    local_114 = local_114 & 0xffffff00;
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_84[0]);
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_bc[0]);
    }
    local_8 = 4;
    uVar3 = local_8;
    local_8 = 4;
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = local_bc[0] & 0xffffff00;
    if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_3c[0]);
    }
    local_1c = local_1c + 1;
  } while (local_1c < 0xf);
  FUN_00448740(".....",5);
LAB_0053e339:
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_dc = 1;
  if (local_e8 != 0) {
    FUN_00448aa0(local_f8,0,0xffffffff);
  }
  if (local_1ac != 0) {
    if (local_e8 != 0) {
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      FUN_00409350(&DAT_00dee2cc,1);
      local_8 = 0x1d;
      FUN_00448aa0(local_3c,0,0xffffffff);
      local_8 = 4;
      if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_3c[0]);
      }
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      FUN_00409350("-------------------",0x13);
      local_8 = 0x1e;
      FUN_00448aa0(local_3c,0,0xffffffff);
      local_8 = 4;
      if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_3c[0]);
      }
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      FUN_00409350(&DAT_00dee2cc,1);
      local_8 = 0x1f;
      FUN_00448aa0(local_3c,0,0xffffffff);
      local_8 = 4;
      if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_3c[0]);
      }
    }
    FUN_00448aa0(local_1bc,0,0xffffffff);
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8 = 0x20;
    FUN_00448aa0(local_3c,0,0xffffffff);
    if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_3c[0]);
    }
  }
  if (0xf < local_1a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_1bc[0]);
  }
  if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_f8[0]);
  }
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8[0] = local_f8[0] & 0xffffff00;
  if (local_4c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c);
  }
  if (local_64 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64);
  }
  ExceptionList = local_10;
  return param_2;
}

