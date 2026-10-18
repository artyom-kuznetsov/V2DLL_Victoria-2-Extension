// FUN_0052a080 @ 0052a080 body=[[0052a080, 0052a107] [0052a10b, 0052a1b9] [0052a1bd, 0052a1db] [0052a1df, 0052a261] [0052a265, 0052a315] [0052a319, 0052a3eb] [0052a3ef, 0052a40d] [0052a411, 0052a4ae] [0052a4b2, 0052a580] [0052a584, 0052a61d] [0052a621, 0052a63f] [0052a643, 0052a690] [0052a694, 0052a73f] [0052a743, 0052a7dc] [0052a7e0, 0052a7fe] [0052a802, 0052a84f] [0052a853, 0052a88c] [0052a890, 0052a913] [0052a917, 0052a9b6] [0052a9ba, 0052a9d8] [0052a9dc, 0052aa2c] [0052aa30, 0052aaad] [0052aab1, 0052ab58] [0052ab5c, 0052ab7a] [0052ab7e, 0052abce] [0052abd2, 0052ac3a] [0052ac3e, 0052acdc] [0052ace0, 0052acfe] [0052ad02, 0052ad52] [0052ad56, 0052ade2] [0052ade6, 0052ae53] [0052ae57, 0052ae75] [0052ae79, 0052aec5] [0052aec9, 0052af02] [0052af06, 0052af83] [0052af87, 0052aff4] [0052aff8, 0052b016] [0052b01a, 0052b066] [0052b06a, 0052b09f] [0052b0a3, 0052b0d2] [0052b0d6, 0052b117] [0052b11b, 0052b15c] [0052b160, 0052b1a4] [0052b1a8, 0052b1bd]]


undefined1 * FUN_0052a080(int param_1,undefined1 *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 local_120;
  undefined1 local_fc [4];
  int local_f8;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined1 local_dc [4];
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_c8 [4];
  int local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b4 [4];
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a0;
  uint local_9c [4];
  undefined4 local_8c;
  uint local_88;
  undefined4 *local_80;
  undefined1 local_7c [4];
  int local_78;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b7438d;
  local_10 = ExceptionList;
  local_8 = 0;
  local_e8 = 0;
  local_120 = 0x1300dfecd4;
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = local_9c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350();
  local_120 = CONCAT44(local_9c,local_fc);
  local_8 = 1;
  FUN_009a8ee0();
  local_8._0_1_ = 3;
  if (0xf < local_88) {
    local_120 = CONCAT44(local_9c[0],&UNK_0052a108);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_120 = 0x300df7e90;
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = local_9c[0] & 0xffffff00;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  FUN_00409350();
  local_14 = (undefined4 *)&local_120;
  local_8._0_1_ = 4;
  FUN_0052b610(param_1,param_3);
  uVar3 = FUN_00988b20();
  local_8._0_1_ = 5;
  local_120 = 0x400052a164;
  local_14 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 6;
  if (local_14 == (undefined4 *)0x0) {
    local_a0 = 0;
  }
  else {
    local_120 = CONCAT44(uVar3,local_fc);
    local_a0 = FUN_009a9ce0();
  }
  local_8._0_1_ = 5;
  local_120 = CONCAT44(&local_a0,local_68);
  FUN_009e6810();
  if (0xf < local_38) {
    local_120 = CONCAT44(local_4c[0],&UNK_0052a1ba);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 3;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_54) {
    local_120 = CONCAT44(local_68[0],&UNK_0052a1dc);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 0x30) = 0xf;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  param_2[0x1c] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0xf;
  *(undefined4 *)(param_2 + 0x48) = 0;
  param_2[0x38] = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  param_2[0x58] = 1;
  local_e8 = 1;
  local_120 = CONCAT44(0x52a219,(undefined4)local_120);
  iVar4 = FUN_00475500();
  local_120 = *(undefined8 *)(iVar4 + 0x74);
  FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
  local_120 = 0xffffffff00000000;
  local_8._0_1_ = 7;
  FUN_00408ed0();
  local_8._0_1_ = 3;
  if (0xf < local_1c) {
    local_120 = CONCAT44(local_30[0],&UNK_0052a262);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a0 = 0;
  if (0 < (int)(*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) & 0xfffffffcU)) {
    do {
      local_8._0_1_ = 3;
      if (local_a0 == 0) {
        local_120 = *(undefined8 *)*param_3;
        uVar6 = __allmul(*(undefined4 *)(**(int **)(param_1 + 0xa0) + 0x48 + DAT_00f0973c * 8),
                         *(undefined4 *)(**(int **)(param_1 + 0xa0) + 0x4c + DAT_00f0973c * 8));
        local_120 = CONCAT44(DAT_00f0aacc,DAT_00f0aac8);
        local_120 = __alldiv((uint)uVar6 & 0xffff8000,(int)((ulonglong)uVar6 >> 0x20));
        uVar6 = local_120;
        local_120 = 0xa00dfece8;
        local_54 = 0xf;
        local_58 = 0;
        local_68[0] = local_68[0] & 0xffffff00;
        FUN_00409350();
        local_120 = CONCAT44(local_68,local_7c);
        local_8._0_1_ = 8;
        FUN_009a8ee0();
        local_8._0_1_ = 10;
        if (0xf < local_54) {
          local_120 = CONCAT44(local_68[0],&UNK_0052a316);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_120 = 0x300df7e90;
        local_54 = 0xf;
        local_58 = 0;
        local_68[0] = local_68[0] & 0xffffff00;
        local_38 = 0xf;
        local_3c = 0;
        local_4c[0] = local_4c[0] & 0xffffff00;
        FUN_00409350();
        local_14 = (undefined4 *)&local_120;
        local_8._0_1_ = 0xb;
        local_120 = uVar6;
        local_14 = (undefined4 *)FUN_00988bb0(local_30,1);
        local_8._0_1_ = 0xc;
        local_120 = 0x400052a36a;
        puVar5 = (undefined4 *)FUN_00aae9af();
        local_8._0_1_ = 0xd;
        local_80 = puVar5;
        if (puVar5 == (undefined4 *)0x0) {
          local_14 = (undefined4 *)0x0;
        }
        else {
          puVar5[1] = local_7c;
          *puVar5 = &PTR_FUN_00e38ecc;
          local_120 = 0xffffffff00000000;
          puVar5[7] = 0xf;
          puVar5[6] = 0;
          *(undefined1 *)(puVar5 + 2) = 0;
          FUN_00408ed0();
          local_8._0_1_ = 0xe;
          *puVar5 = &PTR_FUN_00e38ef4;
          local_120 = 0xffffffff00000000;
          puVar5[0xe] = 0xf;
          puVar5[0xd] = 0;
          *(undefined1 *)(puVar5 + 9) = 0;
          FUN_00408ed0();
          local_14 = puVar5;
        }
        local_8._0_1_ = 0xc;
        local_120 = CONCAT44(&local_14,local_4c);
        FUN_009e6810();
        if (0xf < local_1c) {
          local_120 = CONCAT44(local_30[0],&UNK_0052a3ec);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 10;
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        if (0xf < local_38) {
          local_120 = CONCAT44(local_4c[0],&UNK_0052a40e);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        puVar5 = DAT_0125b5e0;
        if (DAT_0125b5e0 == (undefined4 *)0x0) {
          local_120 = 0x1800052a424;
          local_80 = (undefined4 *)FUN_00aae9af();
          local_8._0_1_ = 0xf;
          if (local_80 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            local_120 = CONCAT44(local_80,0x52a438);
            puVar5 = (undefined4 *)FUN_00475150();
          }
          local_8._0_1_ = 0x10;
          local_80 = (undefined4 *)0x0;
          if ((puVar5 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
            local_120 = 0x10052a45b;
            (**(code **)*DAT_0125b5e0)();
          }
        }
        DAT_0125b5e0 = puVar5;
        local_8._0_1_ = 10;
        local_120 = *(undefined8 *)(DAT_0125b5e0 + 0x1d);
        FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b));
        local_8._0_1_ = 0x11;
        local_120 = 0xffffffff00000000;
        FUN_00448aa0();
        local_8._0_1_ = 10;
        if (0xf < local_1c) {
          local_120 = CONCAT44(local_30[0],&UNK_0052a4af);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_120 = 0x100dee2cc;
        FUN_00448740();
        local_8._0_1_ = 0x12;
        local_120 = CONCAT44(0x52a4d0,(undefined4)local_120);
        FUN_009adb70();
        local_8._0_1_ = 3;
        if (local_78 != 0) {
          local_120 = CONCAT44(0x52a4e7,(undefined4)local_120);
          FUN_009e6a80();
          local_120._4_4_ = local_78;
          goto LAB_0052a888;
        }
      }
      else {
        if (local_a0 == 1) {
          local_120 = *(undefined8 *)(*param_3 + 8);
          iVar4 = *(int *)(*(int *)(param_1 + 0xa0) + 4);
          uVar6 = __allmul(*(undefined4 *)(iVar4 + 0x48 + DAT_00f0973c * 8),
                           *(undefined4 *)(iVar4 + 0x4c + DAT_00f0973c * 8));
          local_120 = CONCAT44(DAT_00f0aacc,DAT_00f0aac8);
          local_120 = __alldiv((uint)uVar6 & 0xffff8000,(int)((ulonglong)uVar6 >> 0x20));
          uVar6 = local_120;
          local_120 = 0xc00dfecf4;
          local_54 = 0xf;
          local_58 = 0;
          local_68[0] = local_68[0] & 0xffffff00;
          FUN_00409350();
          local_120 = CONCAT44(local_68,local_7c);
          local_8._0_1_ = 0x13;
          FUN_009a8ee0();
          local_8._0_1_ = 0x15;
          if (0xf < local_54) {
            local_120 = CONCAT44(local_68[0],&UNK_0052a581);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_120 = 0x300df7e90;
          local_54 = 0xf;
          local_58 = 0;
          local_68[0] = local_68[0] & 0xffffff00;
          local_38 = 0xf;
          local_3c = 0;
          local_4c[0] = local_4c[0] & 0xffffff00;
          FUN_00409350();
          local_80 = (undefined4 *)&local_120;
          local_8._0_1_ = 0x16;
          local_120 = uVar6;
          uVar3 = FUN_00988bb0(local_30,1);
          local_8._0_1_ = 0x17;
          local_120 = 0x400052a5d4;
          local_80 = (undefined4 *)FUN_00aae9af();
          local_8._0_1_ = 0x18;
          if (local_80 == (undefined4 *)0x0) {
            local_14 = (undefined4 *)0x0;
          }
          else {
            local_120 = CONCAT44(uVar3,local_7c);
            local_14 = (undefined4 *)FUN_009a9ce0();
          }
          local_8._0_1_ = 0x17;
          local_120 = CONCAT44(&local_14,local_4c);
          FUN_009e6810();
          if (0xf < local_1c) {
            local_120 = CONCAT44(local_30[0],&UNK_0052a61e);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8._0_1_ = 0x15;
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          if (0xf < local_38) {
            local_120 = CONCAT44(local_4c[0],&UNK_0052a640);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_120 = CONCAT44(0x52a648,(undefined4)local_120);
          iVar4 = FUN_00475500();
          local_120 = *(undefined8 *)(iVar4 + 0x74);
          FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
          local_8._0_1_ = 0x19;
          local_120 = 0xffffffff00000000;
          FUN_00448aa0();
          local_8._0_1_ = 0x15;
          if (0xf < local_1c) {
            local_120 = CONCAT44(local_30[0],&UNK_0052a691);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_120 = 0x100dee2cc;
          FUN_00448740();
          local_8._0_1_ = 0x1a;
        }
        else {
          if (local_a0 != 2) goto LAB_0052a890;
          local_120 = *(undefined8 *)(*param_3 + 0x10);
          iVar4 = *(int *)(*(int *)(param_1 + 0xa0) + 8);
          uVar6 = __allmul(*(undefined4 *)(iVar4 + 0x48 + DAT_00f0973c * 8),
                           *(undefined4 *)(iVar4 + 0x4c + DAT_00f0973c * 8));
          local_120 = CONCAT44(DAT_00f0aacc,DAT_00f0aac8);
          uVar6 = __alldiv((uint)uVar6 & 0xffff8000,(int)((ulonglong)uVar6 >> 0x20));
          local_e0 = (undefined4)((ulonglong)uVar6 >> 0x20);
          local_120 = 0xa00dfed04;
          local_54 = 0xf;
          local_58 = 0;
          local_68[0] = local_68[0] & 0xffffff00;
          FUN_00409350();
          local_120 = CONCAT44(local_68,local_7c);
          local_8._0_1_ = 0x1b;
          FUN_009a8ee0();
          local_8._0_1_ = 0x1d;
          if (0xf < local_54) {
            local_120 = CONCAT44(local_68[0],&UNK_0052a740);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_120 = 0x300df7e90;
          local_54 = 0xf;
          local_58 = 0;
          local_68[0] = local_68[0] & 0xffffff00;
          local_38 = 0xf;
          local_3c = 0;
          local_4c[0] = local_4c[0] & 0xffffff00;
          FUN_00409350();
          local_80 = (undefined4 *)&local_120;
          local_8._0_1_ = 0x1e;
          local_120 = CONCAT44(local_e0,(int)uVar6);
          uVar3 = FUN_00988bb0(local_30,1);
          local_8._0_1_ = 0x1f;
          local_120 = 0x400052a793;
          local_80 = (undefined4 *)FUN_00aae9af();
          local_8._0_1_ = 0x20;
          if (local_80 == (undefined4 *)0x0) {
            local_14 = (undefined4 *)0x0;
          }
          else {
            local_120 = CONCAT44(uVar3,local_7c);
            local_14 = (undefined4 *)FUN_009a9ce0();
          }
          local_8._0_1_ = 0x1f;
          local_120 = CONCAT44(&local_14,local_4c);
          FUN_009e6810();
          if (0xf < local_1c) {
            local_120 = CONCAT44(local_30[0],&UNK_0052a7dd);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8._0_1_ = 0x1d;
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          if (0xf < local_38) {
            local_120 = CONCAT44(local_4c[0],&UNK_0052a7ff);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_120 = CONCAT44(0x52a807,(undefined4)local_120);
          iVar4 = FUN_00475500();
          local_120 = *(undefined8 *)(iVar4 + 0x74);
          FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
          local_8._0_1_ = 0x21;
          local_120 = 0xffffffff00000000;
          FUN_00448aa0();
          local_8._0_1_ = 0x1d;
          if (0xf < local_1c) {
            local_120 = CONCAT44(local_30[0],&UNK_0052a850);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_120 = 0x100dee2cc;
          FUN_00448740();
          local_8._0_1_ = 0x22;
        }
        local_120 = CONCAT44(0x52a871,(undefined4)local_120);
        FUN_009adb70();
        local_8._0_1_ = 3;
        if (local_78 != 0) {
          local_120 = CONCAT44(0x52a884,(undefined4)local_120);
          FUN_009e6a80();
          local_120._4_4_ = local_78;
LAB_0052a888:
          local_120 = CONCAT44(local_120._4_4_,&UNK_0052a88d);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
LAB_0052a890:
      local_a0 = local_a0 + 1;
    } while (local_a0 < *(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 2);
  }
  local_8._0_1_ = 3;
  iVar4 = *(int *)(param_1 + (DAT_00f096c8 + 0xd) * 0x10);
  uVar3 = *(undefined4 *)(iVar4 + 0x18);
  local_e0 = *(undefined4 *)(iVar4 + 0x1c);
  local_120 = 0xe00dfed10;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  FUN_00409350();
  local_120 = CONCAT44(local_68,local_c8);
  local_8._0_1_ = 0x23;
  FUN_009a8ee0();
  local_8._0_1_ = 0x25;
  if (0xf < local_54) {
    local_120 = CONCAT44(local_68[0],&UNK_0052a914);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_120 = 0x300df7e90;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350();
  param_3 = (int *)&local_120;
  local_8._0_1_ = 0x26;
  local_120 = CONCAT44(local_e0,uVar3);
  uVar3 = FUN_00988bb0(local_30,1);
  local_8._0_1_ = 0x27;
  local_120 = 0x400052a967;
  param_3 = (int *)FUN_00aae9af();
  local_8._0_1_ = 0x28;
  if (param_3 == (int *)0x0) {
    param_3 = (int *)0x0;
  }
  else {
    local_120 = CONCAT44(uVar3,local_c8);
    param_3 = (int *)FUN_009a9ce0();
  }
  local_8._0_1_ = 0x27;
  local_120 = CONCAT44(&param_3,local_4c);
  FUN_009e6810();
  if (0xf < local_1c) {
    local_120 = CONCAT44(local_30[0],&UNK_0052a9b7);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x25;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_38) {
    local_120 = CONCAT44(local_4c[0],&UNK_0052a9d9);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_120 = CONCAT44(0x52a9e1,(undefined4)local_120);
  iVar4 = FUN_00475500();
  local_120 = *(undefined8 *)(iVar4 + 0x74);
  FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
  local_8._0_1_ = 0x29;
  local_120 = 0xffffffff00000000;
  FUN_00448aa0();
  local_8._0_1_ = 0x25;
  if (0xf < local_1c) {
    local_120 = CONCAT44(local_30[0],&UNK_0052aa2d);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_120 = 0x100dee2cc;
  FUN_00448740();
  uVar6 = *(undefined8 *)(*(int *)(param_1 + (DAT_00f096c8 + 0xd) * 0x10) + 0x20);
  local_120 = 0xe00dfed20;
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = local_9c[0] & 0xffffff00;
  FUN_00409350();
  local_120 = CONCAT44(local_9c,local_dc);
  local_8._0_1_ = 0x2a;
  FUN_009a8ee0();
  local_8._0_1_ = 0x2c;
  if (0xf < local_88) {
    local_120 = CONCAT44(local_9c[0],&UNK_0052aaae);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_120 = 0x300df7e90;
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = local_9c[0] & 0xffffff00;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350();
  param_3 = (int *)&local_120;
  local_8._0_1_ = 0x2d;
  local_120 = uVar6;
  uVar3 = FUN_00988bb0(local_30,1);
  local_8._0_1_ = 0x2e;
  local_120 = 0x400052ab09;
  param_3 = (int *)FUN_00aae9af();
  local_8._0_1_ = 0x2f;
  if (param_3 == (int *)0x0) {
    param_3 = (int *)0x0;
  }
  else {
    local_120 = CONCAT44(uVar3,local_dc);
    param_3 = (int *)FUN_009a9ce0();
  }
  local_8._0_1_ = 0x2e;
  local_120 = CONCAT44(&param_3,local_4c);
  FUN_009e6810();
  if (0xf < local_1c) {
    local_120 = CONCAT44(local_30[0],&UNK_0052ab59);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x2c;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_38) {
    local_120 = CONCAT44(local_4c[0],&UNK_0052ab7b);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_120 = CONCAT44(0x52ab83,(undefined4)local_120);
  iVar4 = FUN_00475500();
  local_120 = *(undefined8 *)(iVar4 + 0x74);
  FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
  local_8._0_1_ = 0x30;
  local_120 = 0xffffffff00000000;
  FUN_00448aa0();
  local_8._0_1_ = 0x2c;
  if (0xf < local_1c) {
    local_120 = CONCAT44(local_30[0],&UNK_0052abcf);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_120 = 0x100dee2cc;
  FUN_00448740();
  uVar6 = *(undefined8 *)(*(int *)(param_1 + (DAT_00f096c8 + 0xd) * 0x10) + 0x28);
  local_120 = 0xb00dfed30;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  FUN_00409350();
  local_120 = CONCAT44(local_68,local_b4);
  local_8._0_1_ = 0x31;
  FUN_009a8ee0();
  local_8._0_1_ = 0x33;
  if (0xf < local_54) {
    local_120 = CONCAT44(local_68[0],&UNK_0052ac3b);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_120 = 0x300df7e90;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350();
  param_3 = (int *)&local_120;
  local_8._0_1_ = 0x34;
  local_120 = uVar6;
  uVar3 = FUN_00988bb0(local_30,1);
  local_8._0_1_ = 0x35;
  local_120 = 0x400052ac8d;
  param_3 = (int *)FUN_00aae9af();
  local_8._0_1_ = 0x36;
  if (param_3 == (int *)0x0) {
    param_3 = (int *)0x0;
  }
  else {
    local_120 = CONCAT44(uVar3,local_b4);
    param_3 = (int *)FUN_009a9ce0();
  }
  local_8._0_1_ = 0x35;
  local_120 = CONCAT44(&param_3,local_4c);
  FUN_009e6810();
  if (0xf < local_1c) {
    local_120 = CONCAT44(local_30[0],&UNK_0052acdd);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x33;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_38) {
    local_120 = CONCAT44(local_4c[0],&UNK_0052acff);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_120 = CONCAT44(0x52ad07,(undefined4)local_120);
  iVar4 = FUN_00475500();
  local_120 = *(undefined8 *)(iVar4 + 0x74);
  FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
  local_8._0_1_ = 0x37;
  local_120 = 0xffffffff00000000;
  FUN_00448aa0();
  local_8._0_1_ = 0x33;
  if (0xf < local_1c) {
    local_120 = CONCAT44(local_30[0],&UNK_0052ad53);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_120 = 0x100dee2cc;
  FUN_00448740();
  iVar4 = *(int *)(param_1 + (DAT_00f096c8 + 0xd) * 0x10);
  iVar2 = *(int *)(iVar4 + 0x3c);
  piVar1 = (int *)(iVar4 + 0x38);
  uVar6 = *(undefined8 *)piVar1;
  if ((-1 < iVar2) && ((0 < iVar2 || (*piVar1 != 0)))) {
    local_120 = 0x1500dfec9c;
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = local_9c[0] & 0xffffff00;
    FUN_00409350();
    local_120 = CONCAT44(local_9c,local_7c);
    local_8._0_1_ = 0x38;
    FUN_009a8ee0();
    local_8._0_1_ = 0x3a;
    if (0xf < local_88) {
      local_120 = CONCAT44(local_9c[0],&UNK_0052ade3);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_120 = 0x300df7e90;
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = local_9c[0] & 0xffffff00;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00409350();
    param_3 = (int *)&local_120;
    local_8._0_1_ = 0x3b;
    local_120 = uVar6;
    uVar3 = FUN_00988bb0(local_30,1);
    local_8._0_1_ = 0x3c;
    local_120 = CONCAT44(uVar3,0x52ae41);
    FUN_009a9980();
    if (0xf < local_1c) {
      local_120 = CONCAT44(local_30[0],&UNK_0052ae54);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x3a;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_38) {
      local_120 = CONCAT44(local_4c[0],&UNK_0052ae76);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_120 = CONCAT44(0x52ae7e,(undefined4)local_120);
    iVar4 = FUN_00475500();
    local_120 = *(undefined8 *)(iVar4 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
    local_8._0_1_ = 0x3d;
    local_120 = 0xffffffff00000000;
    FUN_00448aa0();
    local_8._0_1_ = 0x3a;
    if (0xf < local_1c) {
      local_120 = CONCAT44(local_30[0],&UNK_0052aec6);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_120 = 0x100dee2cc;
    FUN_00448740();
    local_8._0_1_ = 0x3e;
    local_120 = CONCAT44(0x52aee7,(undefined4)local_120);
    FUN_009adb70();
    local_8._0_1_ = 0x33;
    if (local_78 != 0) {
      local_120 = CONCAT44(0x52aefa,(undefined4)local_120);
      FUN_009e6a80();
      local_120 = CONCAT44(local_78,&UNK_0052af03);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  iVar4 = *(int *)(param_1 + (DAT_00f096c8 + 0xd) * 0x10);
  iVar2 = *(int *)(iVar4 + 0x4c);
  piVar1 = (int *)(iVar4 + 0x48);
  uVar6 = *(undefined8 *)piVar1;
  if ((-1 < iVar2) && ((0 < iVar2 || (*piVar1 != 0)))) {
    local_120 = 0x2000dfed3c;
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = local_9c[0] & 0xffffff00;
    FUN_00409350();
    local_120 = CONCAT44(local_9c,local_7c);
    local_8._0_1_ = 0x3f;
    FUN_009a8ee0();
    local_8._0_1_ = 0x41;
    if (0xf < local_88) {
      local_120 = CONCAT44(local_9c[0],&UNK_0052af84);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_120 = 0x300df7e90;
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = local_9c[0] & 0xffffff00;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x42;
    local_120 = uVar6;
    uVar3 = FUN_00988bb0(local_30,1);
    local_8._0_1_ = 0x43;
    local_120 = CONCAT44(uVar3,0x52afe2);
    FUN_009a9980();
    if (0xf < local_1c) {
      local_120 = CONCAT44(local_30[0],&UNK_0052aff5);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x41;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_38) {
      local_120 = CONCAT44(local_4c[0],&UNK_0052b017);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_120 = CONCAT44(0x52b01f,(undefined4)local_120);
    iVar4 = FUN_00475500();
    local_120 = *(undefined8 *)(iVar4 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
    local_8._0_1_ = 0x44;
    local_120 = 0xffffffff00000000;
    FUN_00448aa0();
    local_8._0_1_ = 0x41;
    if (0xf < local_1c) {
      local_120 = CONCAT44(local_30[0],&UNK_0052b067);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_120 = 0x100dee2cc;
    FUN_00448740();
    local_8._0_1_ = 0x45;
    local_120 = CONCAT44(0x52b088,(undefined4)local_120);
    FUN_009adb70();
    if (local_78 != 0) {
      local_120 = CONCAT44(0x52b097,(undefined4)local_120);
      FUN_009e6a80();
      local_120 = CONCAT44(local_78,&UNK_0052b0a0);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_8._0_1_ = 0x46;
  local_120 = CONCAT44(0x52b0b2,(undefined4)local_120);
  FUN_009adb70();
  if (local_b0 != 0) {
    local_120 = CONCAT44(0x52b0c7,(undefined4)local_120);
    FUN_009e6a80();
    local_120 = CONCAT44(local_b0,&UNK_0052b0d3);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_8._0_1_ = 0x47;
  local_120 = CONCAT44(0x52b0f7,(undefined4)local_120);
  FUN_009adb70();
  if (local_d8 != 0) {
    local_120 = CONCAT44(0x52b10c,(undefined4)local_120);
    FUN_009e6a80();
    local_120 = CONCAT44(local_d8,&UNK_0052b118);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0;
  local_8 = CONCAT31(local_8._1_3_,0x48);
  local_120 = CONCAT44(0x52b13c,(undefined4)local_120);
  FUN_009adb70();
  if (local_c4 != 0) {
    local_120 = CONCAT44(0x52b151,(undefined4)local_120);
    FUN_009e6a80();
    local_120 = CONCAT44(local_c4,&UNK_0052b15d);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0;
  local_8 = 0x49;
  local_120 = CONCAT44(0x52b184,(undefined4)local_120);
  FUN_009adb70();
  if (local_f8 == 0) {
    ExceptionList = local_10;
    return param_2;
  }
  local_120 = CONCAT44(0x52b199,(undefined4)local_120);
  FUN_009e6a80();
  local_120 = CONCAT44(local_f8,&UNK_0052b1a5);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

