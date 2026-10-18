// FUN_00439880 @ 00439880 body=[[00439880, 00439917] [00439920, 004399a5] [004399a9, 00439a04] [00439a08, 00439b29] [00439b2d, 00439c85] [00439c89, 00439cad] [00439cb1, 00439ccc] [00439cd0, 00439cef] [00439cf3, 00439dab] [00439daf, 00439dcb] [00439dcf, 00439df1] [00439df5, 00439e1e] [00439e22, 00439f2e] [00439f32, 00439f51] [00439f55, 00439f69]]


/* WARNING: Removing unreachable block (ram,0x00439aac) */

undefined1 * FUN_00439880(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 local_b0;
  uint local_9c [4];
  undefined4 local_8c;
  uint local_88;
  undefined4 local_80;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  int local_44;
  int local_40;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  int local_20;
  int local_1c;
  undefined8 local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b7780d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  local_80 = 1;
  local_20 = in_ECX;
  if (DAT_0131bb34 == 0) {
    local_b0._4_4_ = (uint *)0x188;
    local_b0._0_4_ = (uint *)0x4398d6;
    local_1c = FUN_00aae9af();
    local_8 = 1;
    if (local_1c == 0) {
      local_b0._4_4_ = (uint *)0x0;
    }
    else {
      local_b0._4_4_ = (uint *)0x4398ea;
      local_b0._4_4_ = (uint *)FUN_0041a160();
    }
    local_8 = local_8 & 0xffffff00;
    local_b0._0_4_ = (uint *)0x4398f8;
    FUN_00423700();
  }
  iVar7 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  local_40 = 0;
  iVar5 = DAT_0131bb34;
  local_1c = iVar7;
  if (0 < iVar7) {
    do {
      iVar1 = local_40 * 8;
      iVar2 = *(int *)(local_20 + 0x28 + DAT_00f0973c * 0x10);
      iVar3 = *(int *)(iVar1 + 4 + iVar2);
      if ((-1 < iVar3) && ((0 < iVar3 || (*(int *)(iVar1 + iVar2) != 0)))) {
        if (iVar5 == 0) {
          local_b0._4_4_ = (uint *)0x188;
          local_b0._0_4_ = (uint *)0x43995b;
          local_44 = FUN_00aae9af();
          local_8 = 2;
          if (local_44 == 0) {
            iVar5 = 0;
          }
          else {
            local_b0._4_4_ = (uint *)0x439973;
            iVar5 = FUN_0041a160();
          }
          local_8 = 3;
          local_18._4_4_ = (undefined8 *)0x0;
          if ((iVar5 != DAT_0131bb34) && (local_44 = DAT_0131bb34, DAT_0131bb34 != 0)) {
            local_b0._4_4_ = (uint *)DAT_0131bb34;
            local_b0._0_4_ = (uint *)0x43999d;
            FUN_0096dd80();
            local_b0._4_4_ = (uint *)local_44;
                    /* WARNING: Subroutine does not return */
            local_b0._0_4_ = (uint *)&UNK_004399a6;
            FUN_00aae91b();
          }
          local_8 = 0;
          DAT_0131bb34 = iVar5;
        }
        if (*(int *)(iVar5 + 0x10) - *(int *)(iVar5 + 0xc) >> 2 < local_40) {
          local_b0._4_4_ = (uint *)0x4399c9;
          local_b0._0_4_ = (uint *)FUN_0096bb70();
        }
        else {
          local_b0._0_4_ = *(uint **)(*(int *)(iVar5 + 0xc) + local_40 * 4);
        }
        local_b0._4_4_ = local_3c;
        uVar6 = FUN_0096d650();
        local_b0._4_4_ = (uint *)0xffffffff;
        local_b0._0_4_ = (uint *)0x0;
        local_8 = 4;
        FUN_00448aa0(uVar6);
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_28) {
          local_b0._4_4_ = (uint *)local_3c[0];
                    /* WARNING: Subroutine does not return */
          local_b0._0_4_ = (uint *)&UNK_00439a05;
          FUN_00aae91b();
        }
        local_b0._4_4_ = (uint *)0x3;
        local_b0._0_4_ = (uint *)&DAT_00df7f68;
        FUN_00448740();
        iVar5 = *(int *)(local_20 + 0x28 + DAT_00f0973c * 0x10);
        local_b0._4_4_ = (uint *)param_3;
        local_b0._0_4_ = (uint *)param_2;
        uVar8 = __allmul(*(undefined4 *)(iVar5 + iVar1),*(undefined4 *)(iVar5 + 4 + iVar1));
        local_b0._4_4_ = (uint *)DAT_00f0aacc;
        local_b0._0_4_ = (uint *)DAT_00f0aac8;
        local_b0 = __alldiv((uint)uVar8 & 0xffff8000,(int)((ulonglong)uVar8 >> 0x20));
        if (local_b0 < 0x100000000) {
          if ((local_b0 < 0) || ((uint)local_b0 < 0x50000)) {
            local_18._4_4_ = &local_b0;
            uVar6 = FUN_00988bb0(local_3c,3);
            local_b0._4_4_ = (uint *)0xffffffff;
            local_b0._0_4_ = (uint *)0x0;
            local_8 = 5;
            FUN_00448aa0(uVar6);
            local_8 = local_8 & 0xffffff00;
            if (0xf < local_28) {
              local_b0._4_4_ = (uint *)local_3c[0];
              goto LAB_00439b25;
            }
          }
          else {
            if (0x31ffff < local_b0) goto LAB_00439aed;
            local_18._4_4_ = &local_b0;
            uVar6 = FUN_00988bb0(local_3c,2);
            local_b0._4_4_ = (uint *)0xffffffff;
            local_b0._0_4_ = (uint *)0x0;
            local_8 = 6;
            FUN_00448aa0(uVar6);
            local_8 = local_8 & 0xffffff00;
            if (0xf < local_28) {
              local_b0._4_4_ = (uint *)local_3c[0];
              goto LAB_00439b25;
            }
          }
        }
        else {
LAB_00439aed:
          local_18._4_4_ = &local_b0;
          uVar6 = FUN_00988bb0(local_3c,1);
          local_b0._4_4_ = (uint *)0xffffffff;
          local_b0._0_4_ = (uint *)0x0;
          local_8 = 7;
          FUN_00448aa0(uVar6);
          local_8 = local_8 & 0xffffff00;
          if (0xf < local_28) {
            local_b0._4_4_ = (uint *)local_3c[0];
LAB_00439b25:
                    /* WARNING: Subroutine does not return */
            local_b0._0_4_ = (uint *)&UNK_00439b2a;
            FUN_00aae91b();
          }
        }
        local_b0._4_4_ = (uint *)0x4;
        local_b0._0_4_ = (uint *)&DAT_00df7f6c;
        FUN_00448740();
        iVar5 = DAT_0131bb34;
        iVar7 = local_1c;
      }
      local_40 = local_40 + 1;
    } while (local_40 < iVar7);
  }
  local_b0._4_4_ = (uint *)0x1;
  local_b0._0_4_ = (uint *)&DAT_00dee2cc;
  FUN_00448740();
  local_b0._4_4_ = (uint *)0x1;
  local_b0._0_4_ = (uint *)&DAT_00dee2cc;
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  FUN_00409350();
  local_8 = 8;
  iVar5 = *(int *)(local_20 + 8);
  uVar4 = *(uint *)(*(int *)(iVar5 + 0xa60) + 0xa8);
  local_b0._4_4_ = (uint *)0x0;
  local_b0._0_4_ = (uint *)0x1f40000;
  local_18 = __alldiv(uVar4 << 0x1e,
                      (((int)uVar4 >> 0x1f) << 0xf | uVar4 >> 0x11) << 0xf | (uVar4 & 0x1ffff) >> 2)
  ;
  lVar10 = *(longlong *)(*(int *)(iVar5 + 0xbcc) + 0xd8);
  uVar4 = *(uint *)(*(int *)(DAT_012586dc + 0x40) + 0xc);
  local_b0._4_4_ = (uint *)0x0;
  local_b0._0_4_ = (uint *)0x1f40000;
  lVar9 = __alldiv(uVar4 << 0x1e,
                   (((int)uVar4 >> 0x1f) << 0xf | uVar4 >> 0x11) << 0xf | (uVar4 & 0x1ffff) >> 2);
  lVar10 = local_18 + lVar9 + lVar10;
  local_18._4_4_ = &local_b0;
  local_b0 = __allmul(lVar10,0x320000,0);
  local_b0 = local_b0 >> 0xf;
  uVar6 = FUN_00988bb0(local_3c,2);
  local_b0._0_4_ = local_7c;
  local_8._0_1_ = 9;
  local_b0._4_4_ = (uint *)uVar6;
  FUN_0042c180();
  local_b0._4_4_ = local_60;
  local_8._0_1_ = 10;
  local_b0._0_4_ = (uint *)0x439c5e;
  uVar6 = FUN_00988f20();
  local_b0._4_4_ = (uint *)0xffffffff;
  local_b0._0_4_ = (uint *)0x0;
  local_8._0_1_ = 0xb;
  FUN_00448aa0(uVar6);
  if (0xf < local_88) {
    local_b0._4_4_ = (uint *)local_9c[0];
                    /* WARNING: Subroutine does not return */
    local_b0._0_4_ = (uint *)&UNK_00439c86;
    FUN_00aae91b();
  }
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = local_9c[0] & 0xffffff00;
  if (0xf < local_68) {
    local_b0._4_4_ = (uint *)local_7c[0];
                    /* WARNING: Subroutine does not return */
    local_b0._0_4_ = (uint *)&UNK_00439cae;
    FUN_00aae91b();
  }
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = local_7c[0] & 0xffffff00;
  if (0xf < local_28) {
    local_b0._4_4_ = (uint *)local_3c[0];
                    /* WARNING: Subroutine does not return */
    local_b0._0_4_ = (uint *)&UNK_00439ccd;
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  if (0xf < local_4c) {
    local_b0._4_4_ = (uint *)local_60[0];
                    /* WARNING: Subroutine does not return */
    local_b0._0_4_ = (uint *)&UNK_00439cf0;
    FUN_00aae91b();
  }
  local_b0._4_4_ = (uint *)0x1;
  local_b0._0_4_ = (uint *)&DAT_00dee2cc;
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  FUN_00409350();
  local_18._4_4_ = &local_b0;
  local_8 = 0xc;
  iVar5 = *(int *)(*(int *)(local_20 + 8) + 0xbcc);
  local_b0 = __allmul(*(undefined4 *)(iVar5 + 0xd8),*(undefined4 *)(iVar5 + 0xdc),0x320000,0);
  local_b0 = local_b0 >> 0xf;
  uVar6 = FUN_00988bb0(local_9c,2);
  local_b0._0_4_ = local_7c;
  local_8._0_1_ = 0xd;
  local_b0._4_4_ = (uint *)uVar6;
  FUN_0042c180();
  local_b0._4_4_ = local_60;
  local_8._0_1_ = 0xe;
  local_b0._0_4_ = (uint *)0x439d8c;
  uVar6 = FUN_00988f20();
  local_b0._4_4_ = (uint *)0xffffffff;
  local_b0._0_4_ = (uint *)0x0;
  local_8._0_1_ = 0xf;
  FUN_00448aa0(uVar6);
  if (0xf < local_28) {
    local_b0._4_4_ = (uint *)local_3c[0];
                    /* WARNING: Subroutine does not return */
    local_b0._0_4_ = (uint *)&UNK_00439dac;
    FUN_00aae91b();
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  if (0xf < local_68) {
    local_b0._4_4_ = (uint *)local_7c[0];
                    /* WARNING: Subroutine does not return */
    local_b0._0_4_ = (uint *)&UNK_00439dcc;
    FUN_00aae91b();
  }
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = local_7c[0] & 0xffffff00;
  if (0xf < local_88) {
    local_b0._4_4_ = (uint *)local_9c[0];
                    /* WARNING: Subroutine does not return */
    local_b0._0_4_ = (uint *)&UNK_00439df2;
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = local_9c[0] & 0xffffff00;
  if (0xf < local_4c) {
    local_b0._4_4_ = (uint *)local_60[0];
                    /* WARNING: Subroutine does not return */
    local_b0._0_4_ = (uint *)&UNK_00439e1f;
    FUN_00aae91b();
  }
  local_1c = *(int *)(local_20 + 8);
  uVar4 = *(uint *)(*(int *)(local_1c + 0xa60) + 0xa8);
  local_b0._4_4_ = (uint *)0x0;
  local_b0._0_4_ = (uint *)0x1f40000;
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  lVar10 = __alldiv(uVar4 << 0x1e,
                    (((int)uVar4 >> 0x1f) << 0xf | uVar4 >> 0x11) << 0xf | (uVar4 & 0x1ffff) >> 2);
  local_18._0_4_ = *(undefined4 *)(*(int *)(local_1c + 0xbcc) + 0xd8);
  local_18._4_4_ = *(undefined8 **)(*(int *)(local_1c + 0xbcc) + 0xdc);
  uVar4 = *(uint *)(*(int *)(DAT_012586dc + 0x40) + 0xc);
  local_b0._4_4_ = (uint *)0x0;
  local_b0._0_4_ = (uint *)0x1f40000;
  lVar9 = __alldiv(uVar4 << 0x1e,
                   (((int)uVar4 >> 0x1f) << 0xf | uVar4 >> 0x11) << 0xf | (uVar4 & 0x1ffff) >> 2);
  local_b0._4_4_ = (uint *)param_3;
  local_b0._0_4_ = (uint *)param_2;
  lVar10 = __allmul(lVar10 + lVar9 + CONCAT44(local_18._4_4_,(undefined4)local_18));
  local_18._4_4_ = &local_b0;
  local_b0 = __allmul(lVar10 >> 0xf,0x320000,0);
  local_b0 = local_b0 >> 0xf;
  uVar6 = FUN_00988bb0(local_7c,2);
  local_b0._0_4_ = local_3c;
  local_8 = 0x10;
  local_b0._4_4_ = (uint *)uVar6;
  uVar6 = FUN_0042c180();
  local_b0._4_4_ = (uint *)0xffffffff;
  local_8 = CONCAT31(local_8._1_3_,0x11);
  local_b0._0_4_ = (uint *)0x0;
  FUN_00448aa0(uVar6);
  if (0xf < local_28) {
    local_b0._4_4_ = (uint *)local_3c[0];
                    /* WARNING: Subroutine does not return */
    local_b0._0_4_ = (uint *)&UNK_00439f2f;
    FUN_00aae91b();
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  if (0xf < local_68) {
    local_b0._4_4_ = (uint *)local_7c[0];
                    /* WARNING: Subroutine does not return */
    local_b0._0_4_ = (uint *)&UNK_00439f52;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

