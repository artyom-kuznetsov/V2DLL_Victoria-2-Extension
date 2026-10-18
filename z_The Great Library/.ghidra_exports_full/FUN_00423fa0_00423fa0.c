// FUN_00423fa0 @ 00423fa0 body=[[00423fa0, 004240c7] [004240cb, 004240e4] [004240e8, 00424104] [00424108, 00424127] [0042412b, 00424144] [00424148, 004241b2]]


undefined1 * FUN_00423fa0(int *param_1,undefined1 *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pvVar4 = ExceptionList;
  puStack_c = &LAB_00b51fa7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  iVar5 = *param_1;
  local_18 = 1;
  local_14 = 0;
  if ((int)(param_1[1] - iVar5 & 0xfffffffcU) < 1) {
    ExceptionList = pvVar4;
    return param_2;
  }
  do {
    pcVar2 = *(char **)(iVar5 + local_14 * 4);
    if ((*pcVar2 != '\0') && (pcVar2[1] == '\0')) {
      pcVar3 = *(char **)(pcVar2 + 0x18);
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      pcVar6 = pcVar3;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
      local_8 = 1;
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      FUN_00409350(&DAT_00df25a0,4);
      local_8._0_1_ = 2;
      FUN_00419e60(local_a4,pcVar2);
      local_8._0_1_ = 3;
      FUN_00988f20(local_34);
      local_8._0_1_ = 4;
      uVar7 = FUN_00988f20(local_50);
      local_8._0_1_ = 5;
      FUN_00448aa0(uVar7,0,0xffffffff);
      if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_88);
      }
      local_74 = 0xf;
      local_78 = 0;
      local_88 = local_88 & 0xffffff00;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_6c);
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c = local_6c & 0xffffff00;
      if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_a4[0]);
      }
      local_90 = 0xf;
      local_94 = 0;
      local_a4[0] = local_a4[0] & 0xffffff00;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
      if (local_14 < (param_1[1] - *param_1 >> 2) + -1) {
        FUN_00448740(&DAT_00dee2cc,1);
      }
    }
    iVar5 = *param_1;
    local_14 = local_14 + 1;
    if (param_1[1] - iVar5 >> 2 <= local_14) {
      ExceptionList = local_10;
      return param_2;
    }
  } while( true );
}

