// FUN_006ea7a0 @ 006ea7a0 body=[[006ea7a0, 006ea860] [006ea864, 006ea9bb] [006ea9bf, 006ea9e8] [006ea9ec, 006eaa15] [006eaa19, 006eaa45] [006eaa4b, 006eab00] [006eab04, 006eab21] [006eab25, 006eab8a] [006eab8e, 006eabab] [006eabaf, 006eabd9] [006eabdd, 006eacda] [006eacde, 006ead04] [006ead08, 006ead2b] [006ead2f, 006ead5f] [006ead68, 006eae44] [006eae48, 006eae71] [006eae75, 006eae98] [006eae9c, 006eaebd]]


undefined1 * FUN_006ea7a0(undefined1 *param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint *local_1a0;
  uint *local_19c;
  undefined4 local_188 [5];
  uint local_174;
  undefined4 local_16c [5];
  uint local_158;
  uint local_150 [4];
  undefined4 local_140;
  uint local_13c;
  uint local_134 [4];
  undefined4 local_124;
  uint local_120;
  uint local_118 [4];
  undefined4 local_108;
  uint local_104;
  uint local_fc [4];
  undefined4 local_ec;
  uint local_e8;
  uint local_e0 [4];
  undefined4 local_d0;
  uint local_cc;
  uint local_c4 [4];
  undefined4 local_b4;
  uint local_b0;
  uint local_a8 [4];
  undefined4 local_98;
  uint local_94;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  undefined4 local_70 [5];
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b7d851;
  local_10 = ExceptionList;
  local_18 = (int *)0x0;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  local_8 = 0;
  uStack_7 = 0;
  iVar7 = *(int *)(param_3 + 0x138);
  local_1c = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  iVar8 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  if (iVar7 == 2) {
    iVar8 = *(int *)(iVar8 + 0x1504);
  }
  else if (iVar7 == 1) {
    iVar8 = *(int *)(iVar8 + 0x1514);
  }
  else {
    iVar8 = *(int *)(iVar8 + 0x1524);
  }
  puVar1 = (uint *)(iVar8 + param_2[2] * 0x18);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  if (uVar2 == 0 && uVar3 == 0) {
    local_19c = (uint *)0x0;
    ExceptionList = &local_10;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    local_1a0 = (uint *)&DAT_00ded94d;
    *param_1 = 0;
    FUN_00409350();
    if (local_40 < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
    local_19c = (uint *)local_54[0];
                    /* WARNING: Subroutine does not return */
    local_1a0 = (uint *)&UNK_006ea861;
    FUN_00aae91b();
  }
  if (iVar7 != 0) {
    if (iVar7 == 1) {
      local_19c = (uint *)0x6eaa50;
      ExceptionList = &local_10;
      iVar7 = FUN_004dad40();
      local_18 = *(int **)(iVar7 + 0xc);
      iVar7 = *(int *)(iVar7 + 0x10) - (int)local_18 >> 2;
      iVar8 = 0;
      piVar4 = local_18;
      if (0 < iVar7) {
        do {
          local_14 = piVar4;
          if (*(int *)(*local_14 + 300) == param_3) {
            uVar2 = puVar1[1];
            if ((int)uVar2 < 1) {
              if (((int)uVar2 < 0) || (*puVar1 < 0x8000)) {
                param_3 = 3;
              }
              else {
                if ((0 < (int)uVar2) || ((-1 < (int)uVar2 && (0x4ffff < *puVar1))))
                goto LAB_006eac25;
                param_3 = 2;
              }
            }
            else {
LAB_006eac25:
              param_3 = 1;
            }
            piVar4 = (int *)local_18[iVar8];
            local_19c = local_188;
            local_1a0 = param_2;
            local_18 = (int *)FUN_005659c0();
            local_14 = (int *)&local_1a0;
            local_8 = 0xb;
            local_1a0 = (uint *)*puVar1;
            local_19c = (uint *)puVar1[1];
            uVar9 = FUN_00988bb0(local_fc,param_3);
            local_8 = 0xc;
            local_19c = local_8c;
            local_1a0 = (uint *)0x6eac82;
            uVar6 = (**(code **)(*piVar4 + 0x18))();
            local_8 = 0xd;
            local_19c = (uint *)local_18;
            local_1a0 = (uint *)&DAT_00e0e9ac;
            uVar9 = FUN_0043e9a0(local_c4,&DAT_00df7e80,uVar6,"VALUE",uVar9);
            local_19c = (uint *)0xffffffff;
            local_1a0 = (uint *)0x0;
            local_8 = 0xe;
            FUN_00448aa0(uVar9);
            if (0xf < local_b0) {
              local_19c = (uint *)local_c4[0];
                    /* WARNING: Subroutine does not return */
              local_1a0 = (uint *)&UNK_006eacdb;
              FUN_00aae91b();
            }
            local_b0 = 0xf;
            local_b4 = 0;
            local_c4[0] = local_c4[0] & 0xffffff00;
            if (0xf < local_78) {
              local_19c = (uint *)local_8c[0];
                    /* WARNING: Subroutine does not return */
              local_1a0 = (uint *)&UNK_006ead05;
              FUN_00aae91b();
            }
            local_78 = 0xf;
            local_7c = 0;
            local_8c[0] = local_8c[0] & 0xffffff00;
            if (0xf < local_e8) {
              local_19c = (uint *)local_fc[0];
                    /* WARNING: Subroutine does not return */
              local_1a0 = (uint *)&UNK_006ead2c;
              FUN_00aae91b();
            }
            local_8 = 0;
            local_e8 = 0xf;
            local_ec = 0;
            local_fc[0] = local_fc[0] & 0xffffff00;
            if (0xf < local_174) {
              local_19c = (uint *)local_188[0];
                    /* WARNING: Subroutine does not return */
              local_1a0 = (uint *)&UNK_006ead60;
              FUN_00aae91b();
            }
            break;
          }
          local_14 = local_14 + 1;
          iVar8 = iVar8 + 1;
          piVar4 = local_14;
        } while (iVar8 < iVar7);
      }
      goto LAB_006eaa8f;
    }
    ExceptionList = &local_10;
    if (iVar7 != 2) goto LAB_006eaa8f;
    if ((int)uVar3 < 1) {
      if (((int)uVar3 < 0) || (uVar2 < 0x8000)) {
        uVar9 = 3;
      }
      else {
        if ((0 < (int)uVar3) || ((-1 < (int)uVar3 && (0x4ffff < uVar2)))) goto LAB_006ea8b9;
        uVar9 = 2;
      }
    }
    else {
LAB_006ea8b9:
      uVar9 = 1;
    }
    local_19c = local_16c;
    local_1a0 = param_2;
    ExceptionList = &local_10;
    uVar6 = FUN_005659c0();
    local_8 = 1;
    local_1a0 = (uint *)*puVar1;
    local_18 = (int *)&local_1a0;
    local_19c = (uint *)puVar1[1];
    local_14 = (int *)FUN_00988bb0(local_134,uVar9);
    local_8 = 2;
    uVar5 = local_8;
    local_8 = 2;
    if (DAT_0131bb34 == 0) {
      local_19c = (uint *)0x188;
      local_1a0 = (uint *)0x6ea90e;
      local_18 = (int *)FUN_00aae9af();
      local_8 = 3;
      if (local_18 == (int *)0x0) {
        local_19c = (uint *)0x0;
      }
      else {
        local_19c = (uint *)0x6ea923;
        local_19c = (uint *)FUN_0041a160();
      }
      local_8 = 2;
      local_1a0 = (uint *)0x6ea931;
      FUN_00423700();
      uVar5 = local_8;
    }
    local_8 = uVar5;
    if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 <
        *(int *)(DAT_0131bb34 + 0x184)) {
      local_19c = (uint *)0x6ea94e;
      local_1a0 = (uint *)FUN_0096bb70();
    }
    else {
      local_1a0 = *(uint **)(*(int *)(DAT_0131bb34 + 0xc) + *(int *)(DAT_0131bb34 + 0x184) * 4);
    }
    local_19c = local_e0;
    uVar9 = FUN_0096d650();
    local_1a0 = (uint *)&DAT_00e0e9ac;
    local_8 = 5;
    local_19c = (uint *)uVar6;
    uVar9 = FUN_0043e9a0(local_150,&DAT_00df7e80,uVar9,"VALUE",local_14);
    local_19c = (uint *)0xffffffff;
    local_1a0 = (uint *)0x0;
    local_8 = 6;
    FUN_00448aa0(uVar9);
    if (0xf < local_13c) {
      local_19c = (uint *)local_150[0];
                    /* WARNING: Subroutine does not return */
      local_1a0 = (uint *)&UNK_006ea9bc;
      FUN_00aae91b();
    }
    local_13c = 0xf;
    local_140 = 0;
    local_150[0] = local_150[0] & 0xffffff00;
    if (0xf < local_cc) {
      local_19c = (uint *)local_e0[0];
                    /* WARNING: Subroutine does not return */
      local_1a0 = (uint *)&UNK_006ea9e9;
      FUN_00aae91b();
    }
    local_cc = 0xf;
    local_d0 = 0;
    local_e0[0] = local_e0[0] & 0xffffff00;
    if (0xf < local_120) {
      local_19c = (uint *)local_134[0];
                    /* WARNING: Subroutine does not return */
      local_1a0 = (uint *)&UNK_006eaa16;
      FUN_00aae91b();
    }
    local_8 = 0;
    local_120 = 0xf;
    local_124 = 0;
    local_134[0] = local_134[0] & 0xffffff00;
    if (0xf < local_158) {
      local_19c = (uint *)local_16c[0];
                    /* WARNING: Subroutine does not return */
      local_1a0 = (uint *)&UNK_006eaa46;
      FUN_00aae91b();
    }
    goto LAB_006eaa8f;
  }
  if ((int)uVar3 < 1) {
    if (((int)uVar3 < 0) || (uVar2 < 0x8000)) {
      local_14 = (int *)0x3;
    }
    else {
      if ((0 < (int)uVar3) || ((-1 < (int)uVar3 && (0x4ffff < uVar2)))) goto LAB_006ead96;
      local_14 = (int *)0x2;
    }
  }
  else {
LAB_006ead96:
    local_14 = (int *)0x1;
  }
  local_19c = local_70;
  local_1a0 = param_2;
  ExceptionList = &local_10;
  uVar9 = FUN_005659c0();
  local_8 = 7;
  local_1a0 = (uint *)*puVar1;
  local_18 = (int *)&local_1a0;
  local_19c = (uint *)puVar1[1];
  local_18 = (int *)FUN_00988bb0(local_38,local_14);
  local_8 = 8;
  local_1a0 = *(uint **)(*(int *)(param_3 + 0x108) + 8);
  local_19c = local_a8;
  uVar6 = FUN_0096d650();
  local_1a0 = (uint *)&DAT_00e0e9ac;
  local_8 = 9;
  local_19c = (uint *)uVar9;
  uVar9 = FUN_0043e9a0(local_118,&DAT_00df7e80,uVar6,"VALUE",local_18);
  local_19c = (uint *)0xffffffff;
  local_1a0 = (uint *)0x0;
  local_8 = 10;
  FUN_00448aa0(uVar9);
  if (0xf < local_104) {
    local_19c = (uint *)local_118[0];
                    /* WARNING: Subroutine does not return */
    local_1a0 = (uint *)&UNK_006eae45;
    FUN_00aae91b();
  }
  local_104 = 0xf;
  local_108 = 0;
  local_118[0] = local_118[0] & 0xffffff00;
  if (0xf < local_94) {
    local_19c = (uint *)local_a8[0];
                    /* WARNING: Subroutine does not return */
    local_1a0 = (uint *)&UNK_006eae72;
    FUN_00aae91b();
  }
  local_94 = 0xf;
  local_98 = 0;
  local_a8[0] = local_a8[0] & 0xffffff00;
  if (0xf < local_24) {
    local_19c = (uint *)local_38[0];
                    /* WARNING: Subroutine does not return */
    local_1a0 = (uint *)&UNK_006eae99;
    FUN_00aae91b();
  }
  local_8 = 0;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  if (0xf < local_5c) {
    local_19c = (uint *)local_70[0];
                    /* WARNING: Subroutine does not return */
    local_1a0 = (uint *)&UNK_006eaebe;
    FUN_00aae91b();
  }
LAB_006eaa8f:
  if ((char)param_2[0xf] == '\0') {
    local_19c = (uint *)0x1;
    local_1a0 = (uint *)&DAT_00dee2cc;
    FUN_00448740();
    local_1a0 = (uint *)puVar1[2];
    local_19c = (uint *)puVar1[3];
    local_19c = (uint *)FUN_00988bb0(local_70,2);
    local_1a0 = local_38;
    local_8 = 0xf;
    uVar9 = FUN_0042c180();
    local_19c = (uint *)0xffffffff;
    local_1a0 = (uint *)0x0;
    local_8 = 0x10;
    FUN_00448aa0(uVar9);
    if (0xf < local_24) {
      local_19c = (uint *)local_38[0];
                    /* WARNING: Subroutine does not return */
      local_1a0 = (uint *)&UNK_006eab01;
      FUN_00aae91b();
    }
    local_8 = 0;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    if (0xf < local_5c) {
      local_19c = (uint *)local_70[0];
                    /* WARNING: Subroutine does not return */
      local_1a0 = (uint *)&UNK_006eab22;
      FUN_00aae91b();
    }
    local_19c = (uint *)0x1;
    local_1a0 = (uint *)&DAT_00dee2cc;
    FUN_00448740();
    local_1a0 = (uint *)puVar1[4];
    local_19c = (uint *)puVar1[5];
    local_19c = (uint *)FUN_00988bb0(local_70,2);
    local_1a0 = local_38;
    local_8 = 0x11;
    uVar9 = FUN_0042c180();
    local_19c = (uint *)0xffffffff;
    local_1a0 = (uint *)0x0;
    local_8 = 0x12;
    FUN_00448aa0(uVar9);
    if (0xf < local_24) {
      local_19c = (uint *)local_38[0];
                    /* WARNING: Subroutine does not return */
      local_1a0 = (uint *)&UNK_006eab8b;
      FUN_00aae91b();
    }
    local_8 = 0;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    if (0xf < local_5c) {
      local_19c = (uint *)local_70[0];
                    /* WARNING: Subroutine does not return */
      local_1a0 = (uint *)&UNK_006eabac;
      FUN_00aae91b();
    }
  }
  local_19c = (uint *)0xffffffff;
  local_1a0 = (uint *)0x0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00408ed0(local_54);
  if (local_40 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
  local_19c = (uint *)local_54[0];
                    /* WARNING: Subroutine does not return */
  local_1a0 = (uint *)&UNK_006eabda;
  FUN_00aae91b();
}

