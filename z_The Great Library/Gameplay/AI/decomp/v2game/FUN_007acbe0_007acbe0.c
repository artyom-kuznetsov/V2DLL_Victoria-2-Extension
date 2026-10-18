// FUN_007acbe0 @ 007acbe0 body=[[007acbe0, 007accfb] [007accff, 007acd32] [007acd36, 007acd4c] [007acd50, 007acd72] [007acd76, 007acdf7] [007acdfb, 007ace18] [007ace1c, 007aceea] [007aceee, 007acf13] [007acf17, 007acfd8] [007acfdc, 007ad000] [007ad004, 007ad029] [007ad02d, 007ad062] [007ad066, 007ad085] [007ad089, 007ad0ff] [007ad103, 007ad1db] [007ad1df, 007ad1f2] [007ad1f6, 007ad208]]


void FUN_007acbe0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_100 [20];
  uint local_ec;
  uint local_e4;
  undefined4 local_d4;
  uint local_d0;
  uint local_c8;
  undefined4 local_b8;
  uint local_b4;
  uint local_ac;
  undefined4 local_9c;
  uint local_98;
  undefined4 local_90;
  int local_8c;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  int local_6c;
  uint local_68 [2];
  undefined1 local_60 [4];
  int local_5c;
  undefined4 local_58;
  uint local_54;
  undefined4 local_4c;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6b7c1;
  local_10 = ExceptionList;
  local_90 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  local_8c = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (*(int *)(local_8c + 0x4cc) == 0) {
    local_34 = 0xf;
    ExceptionList = &local_10;
    FUN_00409350("TECHNOLOGYVIEW_NO_RESEARCH",0x1a);
    local_8 = 0;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("research_progress_name",0x16);
    local_8._0_1_ = 1;
    FUN_009a8ee0(local_60,local_48);
    local_8._0_1_ = 2;
    iVar2 = FUN_00475500();
    uVar3 = FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8._0_1_ = 3;
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x3c))();
    FUN_00408ed0(uVar3,0,0xffffffff);
    FUN_00a5ecc0();
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_88);
    }
    local_74 = 0xf;
    local_78 = 0;
    local_88 = local_88 & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_009adb70();
    if (local_5c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5c);
    }
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_8 = 0xffffffff;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    FUN_00409350();
    local_8 = 5;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350();
    local_8 = CONCAT31(local_8._1_3_,6);
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x3c))(local_2c);
    FUN_00408ed0();
    FUN_00a5ecc0(local_68,0);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("research_progress",0x11);
    local_8 = 7;
    iVar2 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x44))();
    (**(code **)(**(int **)(iVar2 + 0x94) + 0x60))(0);
    local_ec = local_34;
  }
  else {
    iVar2 = *(int *)(local_8c + 0x4c4);
    local_34 = 0xf;
    ExceptionList = &local_10;
    local_6c = iVar2;
    FUN_00409350("research_progress_name",0x16);
    local_8 = 8;
    uVar3 = (**(code **)(**(int **)(iVar2 + 0x24) + 0x18))();
    local_8 = CONCAT31(local_8._1_3_,9);
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x3c))(local_48);
    FUN_00408ed0();
    FUN_00a5ecc0(uVar3,0);
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    local_74 = 0xf;
    local_78 = 0;
    local_88 = local_88 & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350(&DAT_00df8148,2);
    local_8 = 10;
    puVar1 = *(undefined4 **)(*(int *)(local_6c + 0x24) + 0x310);
    local_4c = FUN_009a8ee0(local_60,*(int *)(local_6c + 0x24) + 0x314);
    local_8._0_1_ = 0xb;
    iVar2 = FUN_00475500();
    local_4c = FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8._0_1_ = 0xc;
    (**(code **)*puVar1)();
    local_8._0_1_ = 0xd;
    FUN_00988f20(local_2c);
    local_8._0_1_ = 0xe;
    FUN_00988f20(local_4c);
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_88);
    }
    local_74 = 0xf;
    local_78 = 0;
    local_88 = local_88 & 0xffffff00;
    if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_e4);
    }
    local_d0 = 0xf;
    local_d4 = 0;
    local_e4 = local_e4 & 0xffffff00;
    if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_c8);
    }
    local_b4 = 0xf;
    local_b8 = 0;
    local_c8 = local_c8 & 0xffffff00;
    local_8._0_1_ = 0x14;
    FUN_009adb70();
    if (local_5c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5c);
    }
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    local_8._0_1_ = 0x15;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x16;
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x3c))(local_48);
    FUN_00408ed0(local_100,0,0xffffffff);
    FUN_00a5ecc0(local_100,0);
    local_8._0_1_ = 0x15;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar2 = *(int *)(local_6c + 8);
    iVar4 = FUN_0057a4c0(*(undefined4 *)(local_8c + 0x1c),*(undefined4 *)(local_8c + 0x20));
    uVar5 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
    iVar2 = __alldiv(uVar5,iVar4 * 1000,iVar4 * 1000 >> 0x1f);
    uVar5 = __allmul(iVar2,iVar2 >> 0x1f,100000,0);
    iVar2 = __alldiv(uVar5,1000,0);
    local_98 = 0xf;
    local_9c = 0;
    local_ac = local_ac & 0xffffff00;
    FUN_00409350("research_progress",0x11);
    local_8 = CONCAT31(local_8._1_3_,0x17);
    iVar4 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x44))();
    (**(code **)(**(int **)(iVar4 + 0x94) + 0x60))(iVar2 / 1000);
    if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (local_ec < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

