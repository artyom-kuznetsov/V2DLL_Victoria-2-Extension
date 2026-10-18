// FUN_004cb8d0 @ 004cb8d0 body=[[004cb8d0, 004cb9be] [004cb9c2, 004cb9dd] [004cb9e1, 004cb9fa] [004cb9fe, 004cba1a] [004cba1e, 004cbad5] [004cbad9, 004cbaf7] [004cbafb, 004cbb11] [004cbb15, 004cbb2e] [004cbb32, 004cbb5b]]


undefined1 * FUN_004cb8d0(int param_1,undefined1 *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  char local_ac [32];
  uint local_8c;
  undefined4 local_7c;
  uint local_78;
  uint local_70;
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  undefined4 local_38;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b82577;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  param_1 = param_1 + 0x94;
  local_8 = 0;
  local_38 = 1;
  local_11 = '\x01';
  local_18 = 4;
  do {
    if (*(int *)(param_1 + 4) != 0) {
      if (local_11 == '\0') {
        FUN_00448740(&DAT_00dee2cc,1);
      }
      else {
        local_11 = '\0';
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      FUN_00409350(&DAT_00dfd504,4);
      local_8 = 1;
      uVar3 = FUN_0055dd40();
      local_8._0_1_ = 2;
      FUN_00988fa0(uVar3);
      local_8._0_1_ = 3;
      uVar3 = FUN_00988f20(local_34);
      local_8._0_1_ = 4;
      FUN_00448aa0(uVar3,0,0xffffffff);
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_54[0]);
      }
      local_40 = 0xf;
      local_44 = 0;
      uVar2 = local_54[0] >> 8;
      local_54[0] = uVar2 << 8;
      if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_70);
      }
      local_5c = 0xf;
      local_60 = 0;
      local_70 = local_70 & 0xffffff00;
      if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_8c);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_78 = 0xf;
      local_7c = 0;
      local_8c = local_8c & 0xffffff00;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
      local_40 = 0xf;
      local_44 = 0;
      local_54[0] = uVar2 << 8;
      FUN_00409350(&DAT_00dedc20,2);
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      local_8._0_1_ = 6;
      local_8._1_3_ = 0;
      pcVar4 = __itoa(*(int *)(param_1 + 8),local_ac,10);
      pcVar5 = pcVar4;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar4,(int)pcVar5 - (int)(pcVar4 + 1));
      local_8._0_1_ = 7;
      FUN_00988fa0(local_34);
      local_8._0_1_ = 8;
      uVar3 = FUN_00988f20(local_54);
      local_8._0_1_ = 9;
      FUN_00448aa0(uVar3,0,0xffffffff);
      if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_8c);
      }
      local_78 = 0xf;
      local_7c = 0;
      local_8c = local_8c & 0xffffff00;
      if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_70);
      }
      local_5c = 0xf;
      local_60 = 0;
      local_70 = local_70 & 0xffffff00;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_54[0]);
      }
    }
    param_1 = param_1 + 0x1c;
    local_18 = local_18 + -1;
    if (local_18 == 0) {
      ExceptionList = local_10;
      return param_2;
    }
  } while( true );
}

