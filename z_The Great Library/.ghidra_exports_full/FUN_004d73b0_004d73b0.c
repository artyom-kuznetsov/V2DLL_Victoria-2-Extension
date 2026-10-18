// FUN_004d73b0 @ 004d73b0 body=[[004d73b0, 004d763c] [004d7640, 004d7663] [004d7667, 004d76c2] [004d76c6, 004d76fc] [004d7717, 004d773b]]


void FUN_004d73b0(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int in_ECX;
  uint local_168 [4];
  undefined4 local_158;
  uint local_154;
  uint local_14c;
  undefined4 local_13c;
  uint local_138;
  uint local_130 [4];
  undefined4 local_120;
  uint local_11c;
  uint local_114;
  undefined4 local_104;
  uint local_100;
  undefined1 local_f4 [220];
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5fbd2;
  local_14 = ExceptionList;
  if (param_2 < 0x350) {
    if (param_2 != 0x34f) {
      if (param_2 < 0x2b7) {
        if (param_2 == 0x2b6) {
          ExceptionList = &local_14;
          FUN_009a1ce0();
          FUN_00401000(0x41280000);
          iVar4 = FUN_00b31c00();
          if (iVar4 < *(int *)(in_ECX + 0x8c)) {
            ExceptionList = local_14;
            return;
          }
          *(int *)(in_ECX + 0x8c) = iVar4;
          FUN_009885d0();
          local_c = 0;
          FUN_004015b0(local_f4,0x49,0x10004);
          local_c._0_1_ = 1;
          uVar2 = FUN_00987d20();
          FUN_00401280(uVar2);
          local_c = (uint)local_c._1_3_ << 8;
          FUN_00401650();
          FUN_00408ad0();
          ExceptionList = local_14;
          return;
        }
        if (param_2 == 0x55) {
          ExceptionList = &local_14;
          (**(code **)(*(int *)(in_ECX + 0x54) + 0xc))(param_1);
          ExceptionList = pvStack_18;
          return;
        }
        if (param_2 == 0x174) goto LAB_004d771d;
      }
      else if (param_2 == 0x306) {
        ExceptionList = &local_14;
        FUN_009a1bb0(in_ECX + 0x90);
        ExceptionList = local_14;
        return;
      }
      goto LAB_004d756f;
    }
  }
  else if (param_2 < 0x4e9) {
    if ((param_2 != 0x4e8) && (param_2 != 0x350)) {
      if (param_2 == 0x454) {
        ExceptionList = &local_14;
        FUN_009a1bb0(in_ECX + 0xa0);
        ExceptionList = local_14;
        return;
      }
LAB_004d756f:
      local_11c = 0xf;
      local_120 = 0;
      local_130[0] = local_130[0] & 0xffffff00;
      pcVar3 = (char *)(param_1 + 0x24);
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      ExceptionList = &local_14;
      FUN_00409350((char *)(param_1 + 0x24),(int)pcVar3 - (param_1 + 0x25));
      local_c = 2;
      iVar4 = FUN_005484e0(local_130,"min_build_",10);
      if (iVar4 == 0) {
        local_154 = 0xf;
        local_158 = 0;
        local_168[0] = local_168[0] & 0xffffff00;
        FUN_00409350(&DAT_00ded94d,0);
        local_c._0_1_ = 3;
        local_138 = 0xf;
        local_13c = 0;
        local_14c = local_14c & 0xffffff00;
        FUN_00409350("min_build_",10);
        local_c._0_1_ = 4;
        FUN_009896d0(local_168);
        if (0xf < local_138) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_14c);
        }
        local_c._0_1_ = 2;
        local_138 = 0xf;
        local_13c = 0;
        local_14c = local_14c & 0xffffff00;
        if (0xf < local_154) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_168[0]);
        }
        local_154 = 0xf;
        local_158 = 0;
        local_168[0] = local_168[0] & 0xffffff00;
        FUN_00aaf0c5(param_1 + 0x22c);
        FUN_004d8730();
        local_c = CONCAT31(local_c._1_3_,5);
        FUN_00a72850();
        if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_114);
        }
        local_100 = 0xf;
        local_104 = 0;
        local_114 = local_114 & 0xffffff00;
      }
      else {
        FUN_0044bef0(param_1,param_2);
      }
      if (local_11c < 0x10) {
        ExceptionList = local_14;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_130[0]);
    }
  }
  else if (param_2 != 0x556) goto LAB_004d756f;
LAB_004d771d:
  ExceptionList = &local_14;
  FUN_009a1ce0();
  ExceptionList = local_14;
  return;
}

