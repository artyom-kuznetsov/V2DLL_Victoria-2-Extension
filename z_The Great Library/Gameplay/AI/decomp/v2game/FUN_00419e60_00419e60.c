// FUN_00419e60 @ 00419e60 body=[[00419e60, 00419fe8] [00419fec, 0041a009] [0041a00d, 0041a02a] [0041a02e, 0041a04b] [0041a04f, 0041a078]]


undefined1 * FUN_00419e60(undefined1 *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint local_90;
  uint local_7c;
  uint local_74;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  char *local_20;
  undefined4 local_1c;
  char *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b4dc4c;
  local_10 = ExceptionList;
  local_8 = 0;
  local_1c = 0;
  pcVar2 = *(char **)(param_2 + 4);
  local_18 = pcVar2 + 1;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar2,(int)pcVar3 - (int)local_18);
  local_8 = 0;
  local_1c = 1;
  if (0 < *(int *)(param_2 + 8)) {
    FUN_00448740(&DAT_00defdf4,1);
  }
  local_14 = 0;
  if (0 < *(int *)(param_2 + 8)) {
    local_18 = (char *)(param_2 + 0xc);
    do {
      pcVar2 = *(char **)local_18;
      local_20 = pcVar2 + 1;
      pcVar3 = pcVar2;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_00448740(pcVar2,(int)pcVar3 - (int)local_20);
      if (local_14 < *(int *)(param_2 + 8) + -1) {
        FUN_00448740(&DAT_00defdf8,1);
      }
      local_18 = (char *)((int)local_18 + 4);
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(param_2 + 8));
    if (0 < *(int *)(param_2 + 8)) {
      FUN_00448740(&DAT_00defdfc,1);
    }
  }
  local_14 = 0;
  if (0 < *(int *)(param_2 + 0x20)) {
    local_18 = (char *)(param_2 + 0x24);
    do {
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
      FUN_00409350(&DAT_00defe04,1);
      local_8 = 1;
      pcVar2 = *(char **)local_18;
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      pcVar3 = pcVar2;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
      local_8._0_1_ = 2;
      FUN_00988fa0(local_3c);
      local_8._0_1_ = 3;
      uVar4 = FUN_00988f20(local_58);
      local_8._0_1_ = 4;
      FUN_00448aa0(uVar4,0,0xffffffff);
      if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_74);
      }
      local_60 = 0xf;
      local_74 = local_74 & 0xffffff00;
      if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_90);
      }
      local_7c = 0xf;
      local_90 = local_90 & 0xffffff00;
      if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_3c[0]);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_58[0]);
      }
      local_18 = (char *)((int)local_18 + 4);
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(param_2 + 0x20));
  }
  ExceptionList = local_10;
  return param_1;
}

