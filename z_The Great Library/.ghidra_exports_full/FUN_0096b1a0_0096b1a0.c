// FUN_0096b1a0 @ 0096b1a0 body=[[0096b1a0, 0096b48c] [0096b490, 0096b4ba] [0096b4be, 0096b4e3] [0096b4e7, 0096b509] [0096b50d, 0096b529] [0096b52d, 0096b543] [0096b547, 0096b560] [0096b564, 0096b61b] [0096b61f, 0096b63c] [0096b640, 0096b6cf] [0096b6d3, 0096b6ef] [0096b6f3, 0096b70d] [0096b711, 0096b731] [0096b735, 0096b78c] [0096b790, 0096b7aa] [0096b7ae, 0096b877] [0096b87b, 0096b895] [0096b899, 0096b8b6] [0096b8ba, 0096b8da] [0096b8de, 0096b8f2]]


/* WARNING: Removing unreachable block (ram,0x0096b307) */

undefined1 * FUN_0096b1a0(undefined4 param_1,undefined1 *param_2,int *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 local_12c;
  uint local_118;
  uint local_104;
  uint local_fc [4];
  undefined4 local_ec;
  uint local_e8;
  uint local_e0;
  undefined4 local_d0;
  uint local_cc;
  undefined1 *local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a8;
  undefined8 local_a0;
  uint local_98 [4];
  undefined4 local_88;
  uint local_84;
  uint local_7c;
  undefined4 local_6c;
  uint local_68;
  int *local_60;
  int local_5c;
  int local_58;
  uint local_54;
  undefined4 local_44;
  uint local_40;
  undefined1 *local_38;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  longlong local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b78b64;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  local_12c._4_4_ = (uint *)0x0;
  local_12c._0_4_ = (char *)0xc3500000;
  local_b0 = 1;
  local_18 = 0;
  local_a8 = __alldiv();
  if (local_a8 != 0) {
    if (DAT_0131bb34 == 0) {
      local_12c._4_4_ = (uint *)0x188;
      local_12c._0_4_ = (char *)0x96b230;
      local_38 = (undefined1 *)FUN_00aae9af();
      local_8 = 1;
      if (local_38 == (undefined1 *)0x0) {
        local_12c._4_4_ = (uint *)0x0;
      }
      else {
        local_12c._4_4_ = (uint *)0x96b244;
        local_12c._4_4_ = (uint *)FUN_0041a160();
      }
      local_8 = local_8 & 0xffffff00;
      local_12c._0_4_ = (char *)0x96b251;
      FUN_00423700();
    }
    local_60 = (int *)(DAT_0131bb34 + 0xc);
    iVar5 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
    local_5c = 0;
    local_58 = iVar5;
    if (0 < iVar5) {
      do {
        iVar6 = local_5c;
        if (local_60[1] - *local_60 >> 2 < local_5c) {
          local_12c._4_4_ = (uint *)0x96b286;
          iVar3 = FUN_0096bb70();
          iVar5 = local_58;
        }
        else {
          iVar3 = *(int *)(*local_60 + local_5c * 4);
        }
        if (*(int *)(iVar3 + 0x48) != 0 || *(int *)(iVar3 + 0x4c) != 0) {
          local_12c._4_4_ = (uint *)0x0;
          local_12c._0_4_ = (char *)0xc3500000;
          __alldiv();
          local_12c = local_a8;
          uVar7 = __alldiv();
          local_12c._4_4_ = *(uint **)(iVar3 + 0x6c);
          local_12c._0_4_ = *(char **)(iVar3 + 0x68);
          local_bc = local_12c._4_4_;
          local_b8 = uVar7;
          local_12c = __alldiv();
          if (0x8000 < local_12c) {
            local_12c = 0x8000;
          }
          lVar8 = __allmul();
          local_a0 = lVar8 >> 0xf;
          uVar2 = (ulonglong)local_a0 >> 0x20;
          iVar5 = local_58;
          iVar6 = local_5c;
          if (local_a0 != 0) {
            local_12c._4_4_ = (uint *)0x1;
            local_12c._0_4_ = (char *)&DAT_00dee2cc;
            local_20 = 0xf;
            local_24 = 0;
            local_34[0] = local_34[0] & 0xffffff00;
            FUN_00409350();
            local_38 = (undefined1 *)&local_12c;
            local_8 = 2;
            local_12c._0_4_ = (char *)(undefined4)local_a0;
            local_12c._4_4_ = (uint *)(int)uVar2;
            local_ac = FUN_00988bb0();
            local_38 = (undefined1 *)&local_12c;
            local_8._0_1_ = 3;
            local_12c = __allmul();
            local_12c = local_12c >> 0xf;
            local_38 = (undefined1 *)FUN_00988bb0();
            local_c4 = (undefined1 *)&local_12c;
            local_8._0_1_ = 4;
            lVar8 = __allmul();
            local_12c = lVar8 >> 0xf;
            FUN_00988bb0();
            local_12c._4_4_ = local_fc;
            local_8._0_1_ = 5;
            local_12c._0_4_ = (char *)iVar3;
            FUN_0096d650();
            local_12c._4_4_ = (uint *)local_ac;
            local_12c._0_4_ = "VALUE";
            local_8._0_1_ = 6;
            FUN_0047b810();
            local_12c._4_4_ = local_34;
            local_8._0_1_ = 7;
            local_12c._0_4_ = (char *)0x96b464;
            FUN_00988f20();
            local_12c._4_4_ = (uint *)0xffffffff;
            local_12c._0_4_ = (char *)0x0;
            local_8._0_1_ = 8;
            FUN_00448aa0();
            if (0xf < local_104) {
              local_12c._4_4_ = (uint *)local_118;
                    /* WARNING: Subroutine does not return */
              local_12c._0_4_ = &UNK_0096b48d;
              FUN_00aae91b();
            }
            local_104 = 0xf;
            local_118 = local_118 & 0xffffff00;
            if (0xf < local_cc) {
              local_12c._4_4_ = (uint *)local_e0;
                    /* WARNING: Subroutine does not return */
              local_12c._0_4_ = &UNK_0096b4bb;
              FUN_00aae91b();
            }
            local_cc = 0xf;
            local_d0 = 0;
            local_e0 = local_e0 & 0xffffff00;
            if (0xf < local_e8) {
              local_12c._4_4_ = (uint *)local_fc[0];
                    /* WARNING: Subroutine does not return */
              local_12c._0_4_ = &UNK_0096b4e4;
              FUN_00aae91b();
            }
            local_e8 = 0xf;
            local_ec = 0;
            local_fc[0] = local_fc[0] & 0xffffff00;
            if (0xf < local_84) {
              local_12c._4_4_ = (uint *)local_98[0];
                    /* WARNING: Subroutine does not return */
              local_12c._0_4_ = &UNK_0096b50a;
              FUN_00aae91b();
            }
            local_84 = 0xf;
            local_88 = 0;
            local_98[0] = local_98[0] & 0xffffff00;
            if (0xf < local_68) {
              local_12c._4_4_ = (uint *)local_7c;
                    /* WARNING: Subroutine does not return */
              local_12c._0_4_ = &UNK_0096b52a;
              FUN_00aae91b();
            }
            local_68 = 0xf;
            local_6c = 0;
            local_7c = local_7c & 0xffffff00;
            if (0xf < local_40) {
              local_12c._4_4_ = (uint *)local_54;
                    /* WARNING: Subroutine does not return */
              local_12c._0_4_ = &UNK_0096b544;
              FUN_00aae91b();
            }
            local_8 = (uint)local_8._1_3_ << 8;
            local_40 = 0xf;
            local_44 = 0;
            local_54 = local_54 & 0xffffff00;
            if (0xf < local_20) {
              local_12c._4_4_ = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
              local_12c._0_4_ = &UNK_0096b561;
              FUN_00aae91b();
            }
            local_18 = local_a0 + local_18;
            iVar5 = local_58;
            iVar6 = local_5c;
          }
        }
        local_5c = iVar6 + 1;
      } while (local_5c < iVar5);
    }
  }
  local_12c._4_4_ = (uint *)0x0;
  local_12c._0_4_ = (char *)0x1f40000;
  lVar8 = __alldiv();
  local_18 = lVar8 + local_18;
  local_12c._4_4_ = (uint *)0x0;
  local_12c._0_4_ = &DAT_00ded94d;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350();
  local_12c._4_4_ = local_34;
  local_8 = 9;
  local_12c._0_4_ = (char *)0x3e8;
  (**(code **)(*param_3 + 0x24))();
  local_8._0_1_ = 10;
  FUN_00448aa0();
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350();
  local_8 = 0xb;
  FUN_00988bb0();
  local_8._0_1_ = 0xc;
  FUN_0042c180();
  local_8._0_1_ = 0xd;
  FUN_00988f20();
  local_8._0_1_ = 0xe;
  FUN_00448aa0();
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_68 = 0xf;
  local_6c = 0;
  local_7c = local_7c & 0xffffff00;
  if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_84 = 0xf;
  local_88 = 0;
  local_98[0] = local_98[0] & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350();
  local_8 = 0xf;
  uVar4 = (**(code **)(*param_3 + 0x24))();
  local_8._0_1_ = 0x10;
  FUN_00448aa0(uVar4);
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar5 = *(int *)(param_3[6] + 0x40);
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350();
  uVar1 = iVar5 + 1000;
  local_8 = 0x11;
  uVar7 = __alldiv(iVar5 * 0x40000000,
                   (((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11) << 0xf | (uVar1 & 0x1ffff) >> 2);
  __allmul(uVar7,local_18);
  FUN_00988bb0(local_98,2);
  local_8._0_1_ = 0x12;
  FUN_0042c180();
  local_8._0_1_ = 0x13;
  uVar4 = FUN_00988f20();
  local_8 = CONCAT31(local_8._1_3_,0x14);
  FUN_00448aa0(uVar4);
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_68 = 0xf;
  local_6c = 0;
  local_7c = local_7c & 0xffffff00;
  if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_84 = 0xf;
  local_88 = 0;
  local_98[0] = local_98[0] & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_2;
}

