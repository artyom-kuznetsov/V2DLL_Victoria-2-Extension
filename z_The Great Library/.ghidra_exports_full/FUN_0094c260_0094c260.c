// FUN_0094c260 @ 0094c260 body=[[0094c260, 0094c35f] [0094c363, 0094c388] [0094c38c, 0094c3b1] [0094c3b5, 0094c3d4] [0094c3d8, 0094c3f4] [0094c3f8, 0094c41a] [0094c41e, 0094c524] [0094c528, 0094c54a] [0094c54e, 0094c56b] [0094c56f, 0094c5b4] [0094c5b8, 0094c5cb] [0094c5cf, 0094c5f9]]


undefined4 FUN_0094c260(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 local_130 [5];
  uint local_11c;
  uint local_114;
  undefined4 local_104;
  uint local_100;
  uint local_f8;
  undefined4 local_e8;
  uint local_e4;
  uint local_dc;
  undefined4 local_cc;
  uint local_c8;
  uint local_c0 [4];
  undefined4 local_b0;
  uint local_ac;
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  char local_34 [4];
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00bab421;
  local_10 = ExceptionList;
  local_8 = 0;
  local_14 = 0;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00dee2cc,1);
  local_8 = 1;
  local_90 = 0xf;
  local_94 = 0;
  local_a4[0] = local_a4[0] & 0xffffff00;
  FUN_00409350(&DAT_00df8514,2);
  local_8._0_1_ = 2;
  uVar2 = FUN_0094c240();
  local_8._0_1_ = 3;
  FUN_00988fa0(uVar2);
  local_8._0_1_ = 4;
  uVar2 = FUN_00988f20(local_a4);
  local_8._0_1_ = 5;
  FUN_0042c180(local_c0,uVar2);
  local_8._0_1_ = 6;
  FUN_00988f20(local_50);
  iVar3 = param_1;
  local_14 = 1;
  if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_c0[0]);
  }
  local_ac = 0xf;
  local_b0 = 0;
  local_c0[0] = local_c0[0] & 0xffffff00;
  if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_dc);
  }
  local_c8 = 0xf;
  local_cc = 0;
  local_dc = local_dc & 0xffffff00;
  if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_114);
  }
  local_100 = 0xf;
  local_104 = 0;
  local_114 = local_114 & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a4[0]);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_90 = 0xf;
  local_94 = 0;
  local_a4[0] = local_a4[0] & 0xffffff00;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  if (*(int *)(param_1 + 0xc) != 0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x1c))();
    if (cVar1 != '\0') {
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      FUN_00409350(&DAT_00df8514,2);
      local_8 = 7;
      FUN_00951920(iVar3,&param_1,0);
      local_74 = 0xf;
      local_78 = 0;
      local_88[0] = local_88[0] & 0xffffff00;
      local_8._0_1_ = 8;
      pcVar4 = local_34;
      iVar3 = param_1;
      if (param_1 < 0) {
        iVar3 = -param_1;
        local_34[0] = '-';
        pcVar4 = local_34 + 1;
      }
      __itoa(iVar3 / 1000,pcVar4,10);
      pcVar4 = local_34;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(local_34,(int)pcVar4 - (int)(local_34 + 1));
      local_8._0_1_ = 9;
      FUN_00988fa0(local_88);
      local_8._0_1_ = 10;
      FUN_00988f20(local_6c);
      if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_f8);
      }
      local_e4 = 0xf;
      local_e8 = 0;
      local_f8 = local_f8 & 0xffffff00;
      if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_88[0]);
      }
      local_74 = 0xf;
      local_78 = 0;
      local_88[0] = local_88[0] & 0xffffff00;
      local_8._0_1_ = 0xe;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_6c[0]);
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      uVar5 = FUN_0042c180(local_30,local_130);
      uVar2 = param_2;
      local_8 = CONCAT31(local_8._1_3_,0xf);
      FUN_00448aa0(uVar5,0,0xffffffff);
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_130[0]);
      }
      ExceptionList = local_10;
      return uVar2;
    }
  }
  ExceptionList = local_10;
  return param_2;
}

