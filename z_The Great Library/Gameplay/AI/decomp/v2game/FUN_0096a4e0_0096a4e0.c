// FUN_0096a4e0 @ 0096a4e0 body=[[0096a4e0, 0096a7c7] [0096a7cb, 0096a7ef] [0096a7f3, 0096a818] [0096a81c, 0096a841] [0096a845, 0096a86a] [0096a86e, 0096a88d] [0096a891, 0096a8aa] [0096a8ae, 0096a965] [0096a969, 0096a986] [0096a98a, 0096aa1b] [0096aa1f, 0096aa41] [0096aa45, 0096aa6b] [0096aa6f, 0096aa92] [0096aa96, 0096aaed] [0096aaf1, 0096ab0b] [0096ab0f, 0096acd7] [0096acdb, 0096acfc] [0096ad00, 0096ad25] [0096ad29, 0096ad4e] [0096ad52, 0096ad93] [0096ad97, 0096adc1] [0096adc5, 0096adef] [0096adf3, 0096ae12] [0096ae16, 0096ae32] [0096ae36, 0096af34] [0096af38, 0096af61] [0096af65, 0096af88] [0096af8c, 0096afa9] [0096afad, 0096afc1]]


/* WARNING: Removing unreachable block (ram,0x0096a645) */

undefined1 *
FUN_0096a4e0(undefined4 param_1,undefined1 *param_2,int *param_3,int param_4,int param_5)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 local_170;
  uint local_158 [4];
  undefined4 local_148;
  uint local_144;
  uint local_13c;
  undefined4 local_12c;
  uint local_128;
  undefined8 local_120;
  uint local_114 [3];
  int local_108;
  undefined4 local_104;
  uint local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong local_f0;
  uint local_e4;
  undefined4 local_d4;
  uint local_d0;
  undefined8 local_c8;
  uint local_c0;
  undefined4 local_b0;
  uint local_ac;
  uint local_a4;
  undefined4 local_94;
  uint local_90;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  undefined1 *local_6c;
  int local_68;
  int local_64;
  int *local_60;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined1 *local_24;
  longlong local_20;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b78ccd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  local_170._4_4_ = (uint *)0x0;
  local_170._0_4_ = (char *)0xc3500000;
  local_f8 = 1;
  local_20 = 0;
  local_f0 = __alldiv();
  if (local_f0 != 0) {
    if (DAT_0131bb34 == 0) {
      local_170._4_4_ = (uint *)0x188;
      local_170._0_4_ = (char *)0x96a570;
      local_24 = (undefined1 *)FUN_00aae9af();
      local_8 = 1;
      if (local_24 == (undefined1 *)0x0) {
        local_170._4_4_ = (uint *)0x0;
      }
      else {
        local_170._4_4_ = (uint *)0x96a584;
        local_170._4_4_ = (uint *)FUN_0041a160();
      }
      local_8 = local_8 & 0xffffff00;
      local_170._0_4_ = (char *)0x96a591;
      FUN_00423700();
    }
    piVar5 = (int *)(DAT_0131bb34 + 0xc);
    iVar2 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
    local_64 = 0;
    local_68 = iVar2;
    local_60 = piVar5;
    if (0 < iVar2) {
      do {
        iVar6 = local_64;
        if (piVar5[1] - *piVar5 >> 2 < local_64) {
          local_170._4_4_ = (uint *)0x96a5c7;
          iVar3 = FUN_0096bb70();
          iVar2 = local_68;
          piVar5 = local_60;
        }
        else {
          iVar3 = *(int *)(*piVar5 + local_64 * 4);
        }
        if (*(char *)(iVar3 + 0x3d0) != '\0') {
          local_170._4_4_ = (uint *)0x0;
          local_170._0_4_ = (char *)0xc3500000;
          __alldiv();
          local_170 = local_f0;
          uVar7 = __alldiv();
          local_170._4_4_ = *(uint **)(iVar3 + 0x6c);
          local_170._0_4_ = *(char **)(iVar3 + 0x68);
          local_120 = uVar7;
          local_170 = __alldiv();
          if (0x8000 < local_170) {
            local_170 = 0x8000;
          }
          lVar8 = __allmul();
          local_c8 = lVar8 >> 0xf;
          uVar1 = (ulonglong)local_c8 >> 0x20;
          iVar2 = local_68;
          piVar5 = local_60;
          iVar6 = local_64;
          if (local_c8 != 0) {
            local_170._4_4_ = (uint *)0x1;
            local_170._0_4_ = (char *)&DAT_00dee2cc;
            local_2c = 0xf;
            local_30 = 0;
            local_40[0] = local_40[0] & 0xffffff00;
            FUN_00409350();
            local_24 = (undefined1 *)&local_170;
            local_8 = 2;
            local_170._0_4_ = (char *)(undefined4)local_c8;
            local_170._4_4_ = (uint *)(int)uVar1;
            local_f4 = FUN_00988bb0();
            local_24 = (undefined1 *)&local_170;
            local_8._0_1_ = 3;
            local_170 = __allmul();
            local_170 = local_170 >> 0xf;
            local_24 = (undefined1 *)FUN_00988bb0();
            local_6c = (undefined1 *)&local_170;
            local_8._0_1_ = 4;
            lVar8 = __allmul();
            local_170 = lVar8 >> 0xf;
            FUN_00988bb0();
            local_170._4_4_ = local_114;
            local_8._0_1_ = 5;
            local_170._0_4_ = (char *)iVar3;
            FUN_0096d650();
            local_170._4_4_ = (uint *)local_f4;
            local_170._0_4_ = "VALUE";
            local_8._0_1_ = 6;
            FUN_0047b810();
            local_170._4_4_ = local_40;
            local_8._0_1_ = 7;
            local_170._0_4_ = (char *)0x96a7a2;
            FUN_00988f20();
            local_170._4_4_ = (uint *)0xffffffff;
            local_170._0_4_ = (char *)0x0;
            local_8._0_1_ = 8;
            FUN_00448aa0();
            if (0xf < local_74) {
              local_170._4_4_ = (uint *)local_88;
                    /* WARNING: Subroutine does not return */
              local_170._0_4_ = &UNK_0096a7c8;
              FUN_00aae91b();
            }
            local_74 = 0xf;
            local_78 = 0;
            local_88 = local_88 & 0xffffff00;
            if (0xf < local_d0) {
              local_170._4_4_ = (uint *)local_e4;
                    /* WARNING: Subroutine does not return */
              local_170._0_4_ = &UNK_0096a7f0;
              FUN_00aae91b();
            }
            local_d0 = 0xf;
            local_d4 = 0;
            local_e4 = local_e4 & 0xffffff00;
            if (0xf < local_100) {
              local_170._4_4_ = (uint *)local_114[0];
                    /* WARNING: Subroutine does not return */
              local_170._0_4_ = &UNK_0096a819;
              FUN_00aae91b();
            }
            local_100 = 0xf;
            local_104 = 0;
            local_114[0] = local_114[0] & 0xffffff00;
            if (0xf < local_ac) {
              local_170._4_4_ = (uint *)local_c0;
                    /* WARNING: Subroutine does not return */
              local_170._0_4_ = &UNK_0096a842;
              FUN_00aae91b();
            }
            local_ac = 0xf;
            local_b0 = 0;
            local_c0 = local_c0 & 0xffffff00;
            if (0xf < local_90) {
              local_170._4_4_ = (uint *)local_a4;
                    /* WARNING: Subroutine does not return */
              local_170._0_4_ = &UNK_0096a86b;
              FUN_00aae91b();
            }
            local_90 = 0xf;
            local_94 = 0;
            local_a4 = local_a4 & 0xffffff00;
            if (0xf < local_48) {
              local_170._4_4_ = (uint *)local_5c[0];
                    /* WARNING: Subroutine does not return */
              local_170._0_4_ = &UNK_0096a88e;
              FUN_00aae91b();
            }
            local_8 = (uint)local_8._1_3_ << 8;
            local_48 = 0xf;
            local_4c = 0;
            local_5c[0] = local_5c[0] & 0xffffff00;
            if (0xf < local_2c) {
              local_170._4_4_ = (uint *)local_40[0];
                    /* WARNING: Subroutine does not return */
              local_170._0_4_ = &UNK_0096a8ab;
              FUN_00aae91b();
            }
            local_20 = local_c8 + local_20;
            iVar2 = local_68;
            piVar5 = local_60;
            iVar6 = local_64;
          }
        }
        local_64 = iVar6 + 1;
      } while (local_64 < iVar2);
    }
  }
  local_170._4_4_ = (uint *)0x0;
  local_170._0_4_ = (char *)0x1f40000;
  lVar8 = __alldiv();
  local_20 = lVar8 + local_20;
  local_170._4_4_ = (uint *)0x0;
  local_170._0_4_ = &DAT_00ded94d;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350();
  local_170._4_4_ = local_40;
  local_8 = 9;
  local_170._0_4_ = (char *)0x3e8;
  (**(code **)(*param_3 + 0x24))();
  local_8._0_1_ = 10;
  FUN_00448aa0();
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350();
  local_8 = 0xb;
  FUN_00988bb0();
  local_8._0_1_ = 0xc;
  FUN_0042c180();
  local_8._0_1_ = 0xd;
  FUN_00988f20();
  local_8._0_1_ = 0xe;
  FUN_00448aa0();
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_90 = 0xf;
  local_94 = 0;
  local_a4 = local_a4 & 0xffffff00;
  if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_ac = 0xf;
  local_b0 = 0;
  local_c0 = local_c0 & 0xffffff00;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350();
  local_8 = 0xf;
  (**(code **)(*param_3 + 0x24))();
  local_8._0_1_ = 0x10;
  FUN_00448aa0();
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  param_3 = (int *)(*(int *)(param_3[6] + 0x80) + 1000);
  if (param_4 != 0 || param_5 != 0) {
    local_74 = 0xf;
    local_78 = 0;
    local_88 = local_88 & 0xffffff00;
    FUN_00409350();
    local_8 = 0x11;
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x12;
    __allmul(param_4,param_5,0x320000,0);
    local_24 = (undefined1 *)FUN_00988bb0(local_158,2);
    local_8._0_1_ = 0x13;
    local_d0 = 0xf;
    local_d4 = 0;
    local_e4 = local_e4 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x14;
    FUN_009a8ee0();
    local_8._0_1_ = 0x15;
    puVar4 = DAT_0125b5e0;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      local_6c = (undefined1 *)FUN_00aae9af();
      local_8._0_1_ = 0x16;
      if (local_6c == (undefined1 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = (undefined4 *)FUN_00475150();
      }
      local_8._0_1_ = 0x17;
      local_6c = (undefined1 *)0x0;
      if ((puVar4 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        (**(code **)*DAT_0125b5e0)();
      }
    }
    DAT_0125b5e0 = puVar4;
    local_8._0_1_ = 0x15;
    FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b));
    local_8._0_1_ = 0x18;
    FUN_00988f20();
    local_8._0_1_ = 0x19;
    FUN_00988f20();
    local_8._0_1_ = 0x1a;
    FUN_00988f20();
    local_8._0_1_ = 0x1b;
    FUN_00448aa0();
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_90 = 0xf;
    local_94 = 0;
    local_a4 = local_a4 & 0xffffff00;
    if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ac = 0xf;
    local_b0 = 0;
    local_c0 = local_c0 & 0xffffff00;
    if (0xf < local_128) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_128 = 0xf;
    local_12c = 0;
    local_13c = local_13c & 0xffffff00;
    local_8._0_1_ = 0x1c;
    FUN_009adb70();
    if (local_108 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_108 = 0;
    local_104 = 0;
    local_100 = 0;
    if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d0 = 0xf;
    local_d4 = 0;
    local_e4 = local_e4 & 0xffffff00;
    if (0xf < local_144) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_144 = 0xf;
    local_148 = 0;
    local_158[0] = local_158[0] & 0xffffff00;
    if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    lVar8 = __allmul(param_4,param_5);
    param_3 = (int *)(((uint)(lVar8 >> 0xf) >> 0xf |
                      (int)((ulonglong)(lVar8 >> 0xf) >> 0x20) << 0x11) + (int)param_3);
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
  FUN_00409350();
  local_8 = 0x1d;
  uVar7 = __alldiv((int)param_3 << 0x1e,
                   (((int)param_3 >> 0x1f) << 0xf | (uint)param_3 >> 0x11) << 0xf |
                   ((uint)param_3 & 0x1ffff) >> 2);
  __allmul(uVar7,local_20);
  FUN_00988bb0(local_5c,2);
  local_8._0_1_ = 0x1e;
  FUN_0042c180();
  local_8._0_1_ = 0x1f;
  FUN_00988f20();
  local_8 = CONCAT31(local_8._1_3_,0x20);
  FUN_00448aa0();
  if (0xf < local_144) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_144 = 0xf;
  local_148 = 0;
  local_158[0] = local_158[0] & 0xffffff00;
  if (0xf < local_128) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_128 = 0xf;
  local_12c = 0;
  local_13c = local_13c & 0xffffff00;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_2;
}

