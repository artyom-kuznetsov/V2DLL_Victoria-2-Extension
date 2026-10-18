// FUN_00532f60 @ 00532f60 body=[[00532f60, 00533143] [00533147, 00533161] [00533165, 00533188] [0053318c, 00533207] [0053320b, 0053323b] [0053323f, 00533259] [0053325d, 005333a8] [005333ac, 005333d6] [005333da, 005333ff] [00533403, 00533428] [0053342c, 00533461] [00533465, 00533486] [0053348a, 005334b1] [005334b5, 005334ce] [005334d2, 005334eb] [005334ef, 00533715] [00533719, 00533743] [00533747, 0053376c] [00533770, 00533795] [00533799, 005337be] [005337c2, 005337e1] [005337e5, 00533801] [00533805, 0053382a] [0053382e, 0053384d] [00533851, 0053386a] [0053386e, 0053388a] [0053388e, 00533950] [00533954, 00533979] [0053397d, 0053399c] [005339a0, 005339b6] [005339ba, 005339cf]]


undefined1 * FUN_00532f60(int param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 local_178;
  undefined1 local_164 [8];
  uint local_15c;
  undefined4 local_14c;
  uint local_148;
  uint local_140 [4];
  undefined4 local_130;
  uint local_12c;
  uint local_124;
  undefined4 local_114;
  uint local_110;
  uint local_108;
  undefined4 local_f8;
  uint local_f4;
  uint local_ec;
  undefined4 local_dc;
  uint local_d8;
  uint local_d0;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b4;
  uint local_b0 [4];
  undefined4 local_a0;
  uint local_9c;
  uint local_94 [4];
  undefined4 local_84;
  uint local_80;
  uint local_78;
  undefined1 local_70 [4];
  int local_6c;
  undefined4 local_68;
  uint local_64;
  undefined1 *local_58;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  int local_38;
  uint local_34;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b738a1;
  local_10 = ExceptionList;
  local_8 = 0;
  local_b4 = 0;
  local_34 = *(uint *)(param_1 + 0x12e8) >> 0x11;
  local_38 = *(uint *)(param_1 + 0x12e8) << 0xf;
  local_14 = *(undefined1 **)(param_1 + 0x1338);
  ExceptionList = &local_10;
  if (DAT_0131bb34 == 0) {
    local_178 = 0x18800532fbf;
    ExceptionList = &local_10;
    local_58 = (undefined1 *)FUN_00aae9af();
    local_8 = 1;
    if (local_58 == (undefined1 *)0x0) {
      uVar5 = 0;
    }
    else {
      local_178 = CONCAT44(0x532fd7,(int)local_178);
      uVar5 = FUN_0041a160();
    }
    local_178 = CONCAT44(uVar5,0x532fe1);
    FUN_00423700();
  }
  uVar2 = *(uint *)((int)local_14 + *(int *)(DAT_0131bb34 + 0x17c) * 4);
  uVar1 = *(int *)(*(int *)(param_1 + 0xbcc) + 0x60) + 1000 +
          *(int *)(*(int *)(param_1 + 0xa60) + 0x380);
  local_178 = 0x1f40000;
  uVar9 = __alldiv(uVar1 * 0x40000000,
                   (((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11) << 0xf | (uVar1 & 0x1ffff) >> 2);
  local_58 = (undefined1 *)((ulonglong)uVar9 >> 0x20);
  local_178 = CONCAT44(local_34,local_38);
  uVar10 = __alldiv(uVar2 << 0x1e,uVar2 >> 2);
  local_178 = CONCAT44(local_58,(int)uVar9);
  lVar11 = __allmul(uVar10);
  local_38 = (int)(lVar11 >> 0xf);
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_178._4_4_ = local_164;
  local_8 = 0;
  local_178._0_4_ = param_1;
  local_b4 = 1;
  puVar6 = (undefined4 *)FUN_00532ea0();
  local_58 = (undefined1 *)&local_178;
  local_178 = CONCAT44(local_178._4_4_,*puVar6);
  local_178 = __allmul(*puVar6,puVar6[1],0x320000,0);
  local_178 = local_178 >> 0xf;
  local_14 = (undefined1 *)FUN_00988bb0(local_b0,1);
  local_58 = (undefined1 *)&local_178;
  local_8 = 2;
  local_178 = __allmul(local_38,(int)((ulonglong)(lVar11 >> 0xf) >> 0x20),0x320000,0);
  local_178 = local_178 >> 0xf;
  uVar5 = FUN_00988bb0(local_30,1);
  local_178 = CONCAT44(local_14,&DAT_00dfad2c);
  local_8._0_1_ = 3;
  FUN_0043ec10(local_54,&DAT_00dfb974,uVar5);
  local_8._0_1_ = 4;
  local_178 = 0xffffffff00000000;
  FUN_00408ed0();
  if (0xf < local_40) {
    local_178 = CONCAT44(local_54[0],&UNK_00533144);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  if (0xf < local_1c) {
    local_178 = CONCAT44(local_30[0],&UNK_00533162);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_1c = 0xf;
  local_20 = 0;
  uVar1 = local_30[0] >> 8;
  local_30[0] = uVar1 << 8;
  if (0xf < local_9c) {
    local_178 = CONCAT44(local_b0[0],&UNK_00533189);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_178 = 0x1000dff164;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = uVar1 << 8;
  FUN_00409350();
  local_178 = CONCAT44(local_30,local_70);
  local_8 = 5;
  local_14 = (undefined1 *)FUN_009a8ee0();
  local_8._0_1_ = 6;
  local_178 = CONCAT44(0x5331c7,(int)local_178);
  iVar7 = FUN_00475500();
  local_178 = *(undefined8 *)(iVar7 + 0x74);
  FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c));
  local_178 = 0xffffffff00000000;
  local_8._0_1_ = 7;
  FUN_00448aa0();
  if (0xf < local_40) {
    local_178 = CONCAT44(local_54[0],&UNK_00533208);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  local_8._0_1_ = 8;
  local_178 = CONCAT44(0x533224,(int)local_178);
  FUN_009adb70();
  if (local_6c != 0) {
    local_178 = CONCAT44(0x533233,(int)local_178);
    FUN_009e6a80();
    local_178 = CONCAT44(local_6c,&UNK_0053323c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  if (0xf < local_1c) {
    local_178 = CONCAT44(local_30[0],&UNK_0053325a);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_178 = 0x400dfd048;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350();
  local_8 = 9;
  local_178 = 0x400dfc940;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 10;
  local_178 = 0xa00dfd03c;
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = local_94[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0xb;
  iVar7 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x28);
  local_58 = (undefined1 *)&local_178;
  local_178._4_4_ = (undefined1 *)0x1;
  uVar9 = __allmul(iVar7,iVar7 >> 0x1f,100000,0);
  uVar5 = __alldiv(uVar9,1000,0);
  local_178 = CONCAT44(local_178._4_4_,uVar5);
  uVar5 = FUN_00988a50();
  local_178 = CONCAT44(local_94,local_70);
  local_8._0_1_ = 0xc;
  local_14 = (undefined1 *)FUN_009a8ee0();
  local_8._0_1_ = 0xd;
  local_178 = CONCAT44(0x53331e,(int)local_178);
  iVar7 = FUN_00475500();
  local_178 = *(undefined8 *)(iVar7 + 0x74);
  FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c));
  local_8._0_1_ = 0xe;
  local_178 = CONCAT44(local_30,0x533359);
  FUN_00988f20();
  local_8._0_1_ = 0xf;
  local_178 = CONCAT44(uVar5,0x53336b);
  FUN_00988f20();
  local_8._0_1_ = 0x10;
  local_178 = CONCAT44(local_54,0x533380);
  FUN_00988f20();
  local_178 = 0xffffffff00000000;
  local_8._0_1_ = 0x11;
  FUN_00448aa0();
  if (0xf < local_bc) {
    local_178 = CONCAT44(local_d0,&UNK_005333a9);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_bc = 0xf;
  local_c0 = 0;
  local_d0 = local_d0 & 0xffffff00;
  if (0xf < local_148) {
    local_178 = CONCAT44(local_15c,&UNK_005333d7);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_148 = 0xf;
  local_14c = 0;
  local_15c = local_15c & 0xffffff00;
  if (0xf < local_110) {
    local_178 = CONCAT44(local_124,&UNK_00533400);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_110 = 0xf;
  local_114 = 0;
  local_124 = local_124 & 0xffffff00;
  if (0xf < local_d8) {
    local_178 = CONCAT44(local_ec,&UNK_00533429);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_d8 = 0xf;
  local_dc = 0;
  local_ec = local_ec & 0xffffff00;
  local_8._0_1_ = 0x12;
  local_178 = CONCAT44(0x53344a,(int)local_178);
  FUN_009adb70();
  if (local_6c != 0) {
    local_178 = CONCAT44(0x533459,(int)local_178);
    FUN_009e6a80();
    local_178 = CONCAT44(local_6c,&UNK_00533462);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  if (0xf < local_f4) {
    local_178 = CONCAT44(local_108,&UNK_00533487);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_f4 = 0xf;
  local_f8 = 0;
  local_108 = local_108 & 0xffffff00;
  if (0xf < local_80) {
    local_178 = CONCAT44(local_94[0],&UNK_005334b2);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = local_94[0] & 0xffffff00;
  if (0xf < local_1c) {
    local_178 = CONCAT44(local_30[0],&UNK_005334cf);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (local_40 < 0x10) {
    local_34 = 0;
    local_58 = (undefined1 *)(*(int *)(param_1 + 0x854) - *(int *)(param_1 + 0x850) >> 2);
    if (0 < (int)local_58) {
      do {
        local_14 = (undefined1 *)(local_34 * 4);
        local_178 = CONCAT44(0x533529,(int)local_178);
        cVar4 = (**(code **)(**(int **)((int)local_14 + *(int *)(param_1 + 0x850)) + 0x34))();
        if (((cVar4 != '\0') &&
            (iVar7 = *(int *)((int)local_14 + *(int *)(param_1 + 0x850)),
            *(char *)(*(int *)(iVar7 + 0x54) + 0x58) != '\0')) && (*(int *)(iVar7 + 0x1b4) != 0)) {
          local_178 = 0x400dfd048;
          local_40 = 0xf;
          local_44 = 0;
          local_54[0] = local_54[0] & 0xffffff00;
          FUN_00409350();
          local_8 = 0x13;
          local_178 = 0x400dff178;
          local_80 = 0xf;
          local_84 = 0;
          local_94[0] = local_94[0] & 0xffffff00;
          FUN_00409350();
          local_8._0_1_ = 0x14;
          local_178 = 0x200df9638;
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          FUN_00409350();
          local_8._0_1_ = 0x15;
          piVar3 = *(int **)(*(int *)(param_1 + 0x850) + (int)local_14);
          iVar7 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x2c);
          local_178 = CONCAT44(((float)piVar3[0x6d] + 0.0005) * 1000.0,0x533600);
          FUN_00401000();
          local_178 = CONCAT44(0x533608,(int)local_178);
          iVar8 = FUN_00b31c00();
          local_178 = 1000;
          iVar7 = __alldiv((longlong)iVar8 * (longlong)iVar7);
          local_14 = (undefined1 *)&local_178;
          local_178._4_4_ = (undefined1 *)0x2;
          uVar9 = __allmul(iVar7,iVar7 >> 0x1f,100000,0);
          uVar5 = __alldiv(uVar9,1000,0);
          local_178 = CONCAT44(local_178._4_4_,uVar5);
          uVar5 = FUN_00988a50();
          local_8._0_1_ = 0x16;
          local_178 = CONCAT44(local_140,0x53365e);
          local_14 = (undefined1 *)(**(code **)(*piVar3 + 0x18))();
          local_8._0_1_ = 0x17;
          local_178 = CONCAT44(*(undefined4 *)
                                (*(int *)(*(int *)(param_1 + 0x850) + local_34 * 4) + 0x54),0x533684
                              );
          FUN_00974c50();
          local_8._0_1_ = 0x18;
          local_178 = CONCAT44(local_30,0x533699);
          FUN_00988f20();
          local_8._0_1_ = 0x19;
          local_178 = CONCAT44(local_14,0x5336ae);
          FUN_00988f20();
          local_8._0_1_ = 0x1a;
          local_178 = CONCAT44(local_94,0x5336c6);
          FUN_00988f20();
          local_8._0_1_ = 0x1b;
          local_178 = CONCAT44(uVar5,0x5336d8);
          FUN_00988f20();
          local_8._0_1_ = 0x1c;
          local_178 = CONCAT44(local_54,0x5336ed);
          FUN_00988f20();
          local_178 = 0xffffffff00000000;
          local_8._0_1_ = 0x1d;
          FUN_00448aa0();
          if (0xf < local_f4) {
            local_178 = CONCAT44(local_108,&UNK_00533716);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_f4 = 0xf;
          local_f8 = 0;
          local_108 = local_108 & 0xffffff00;
          if (0xf < local_d8) {
            local_178 = CONCAT44(local_ec,&UNK_00533744);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_d8 = 0xf;
          local_dc = 0;
          local_ec = local_ec & 0xffffff00;
          if (0xf < local_110) {
            local_178 = CONCAT44(local_124,&UNK_0053376d);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_110 = 0xf;
          local_114 = 0;
          local_124 = local_124 & 0xffffff00;
          if (0xf < local_148) {
            local_178 = CONCAT44(local_15c,&UNK_00533796);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_148 = 0xf;
          local_14c = 0;
          local_15c = local_15c & 0xffffff00;
          if (0xf < local_bc) {
            local_178 = CONCAT44(local_d0,&UNK_005337bf);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_bc = 0xf;
          local_c0 = 0;
          local_d0 = local_d0 & 0xffffff00;
          if (0xf < local_64) {
            local_178 = CONCAT44(local_78,&UNK_005337e2);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_64 = 0xf;
          local_68 = 0;
          local_78 = local_78 & 0xffffff00;
          if (0xf < local_12c) {
            local_178 = CONCAT44(local_140[0],&UNK_00533802);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_12c = 0xf;
          local_130 = 0;
          local_140[0] = local_140[0] & 0xffffff00;
          if (0xf < local_9c) {
            local_178 = CONCAT44(local_b0[0],&UNK_0053382b);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_9c = 0xf;
          local_a0 = 0;
          local_b0[0] = local_b0[0] & 0xffffff00;
          if (0xf < local_1c) {
            local_178 = CONCAT44(local_30[0],&UNK_0053384e);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          if (0xf < local_80) {
            local_178 = CONCAT44(local_94[0],&UNK_0053386b);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8 = (uint)local_8._1_3_ << 8;
          local_80 = 0xf;
          local_84 = 0;
          local_94[0] = local_94[0] & 0xffffff00;
          if (0xf < local_40) {
            local_178 = CONCAT44(local_54[0],&UNK_0053388b);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
        local_34 = local_34 + 1;
      } while ((int)local_34 < (int)local_58);
    }
    if (*(int *)(*(int *)(param_1 + 0xa60) + 0x380) != 0) {
      local_178 = 0x100dee2cc;
      local_40 = 0xf;
      local_44 = 0;
      local_54[0] = local_54[0] & 0xffffff00;
      FUN_00409350();
      local_8 = 0x1e;
      local_178 = 0xded94d;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x1f;
      local_178 = CONCAT44(local_30,1000);
      (**(code **)(*(int *)(param_1 + 0xa48) + 0x24))(local_140,0x70);
      local_8._0_1_ = 0x20;
      uVar5 = FUN_00988f20(local_54);
      local_8 = CONCAT31(local_8._1_3_,0x21);
      FUN_00448aa0(uVar5,0,0xffffffff);
      if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_b0[0]);
      }
      local_9c = 0xf;
      local_a0 = 0;
      local_b0[0] = local_b0[0] & 0xffffff00;
      if (0xf < local_12c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_140[0]);
      }
      local_12c = 0xf;
      local_130 = 0;
      local_140[0] = local_140[0] & 0xffffff00;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_54[0]);
      }
    }
    ExceptionList = local_10;
    return param_2;
  }
  local_178 = CONCAT44(local_54[0],&UNK_005334ec);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

