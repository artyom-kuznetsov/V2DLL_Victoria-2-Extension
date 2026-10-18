// FUN_004659f0 @ 004659f0 body=[[004659f0, 00465b01] [00465b05, 00465b7d] [00465b87, 00465ba0] [00465ba6, 00465ca6]]


void FUN_004659f0(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int local_160;
  int local_15c;
  int local_154;
  undefined4 *local_150;
  undefined4 *local_14c;
  undefined4 local_148;
  int local_140;
  int *local_13c;
  undefined4 local_138;
  uint local_124;
  undefined4 local_11c;
  char local_118 [260];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b608d6;
  local_14 = ExceptionList;
  iVar3 = *param_2;
  local_154 = 0;
  if (0 < (int)(param_2[1] - iVar3 & 0xfffffff0U)) {
    local_160 = 0;
    ExceptionList = &local_14;
    do {
      piVar1 = (int *)(local_160 + 4 + iVar3);
      iVar4 = (*(int *)(local_160 + 4 + iVar3) - *(int *)(local_160 + iVar3)) / 0x1c;
      local_13c = piVar1;
      if (iVar4 < 1) {
        FUN_009a0940(param_1);
        if (*(int *)(param_1 + 4) == -1) {
          *(undefined4 *)(param_1 + 4) = 0;
        }
        else {
          FUN_004013e0(param_1);
          if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
            FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
          }
          FUN_004013e0(param_1);
          FUN_004013e0(param_1);
        }
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        local_11c = 0xf;
        __snprintf(local_118,0xff,"%s",&DAT_00ded950);
        FUN_0099ff90(param_1);
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
        if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
          FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
        }
        if (*(int *)(param_1 + 4) != -1) {
          FUN_004013e0(param_1);
          FUN_004013e0(param_1);
        }
      }
      else {
        local_150 = (undefined4 *)0x0;
        local_14c = (undefined4 *)0x0;
        local_148 = 0;
        local_c._0_1_ = 0;
        local_c._1_3_ = 0;
        FUN_00419660(iVar4);
        iVar4 = *(int *)(local_160 + iVar3);
        local_140 = 0;
        if (0 < (*piVar1 - iVar4) / 0x1c) {
          local_15c = 0;
          do {
            FUN_00464430(iVar4 + local_15c);
            local_c._0_1_ = 1;
            FUN_00a840b0();
            local_c._0_1_ = 0;
            if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_138);
            }
            iVar4 = *(int *)(local_160 + iVar3);
            local_15c = local_15c + 0x1c;
            local_140 = local_140 + 1;
          } while (local_140 < (*local_13c - iVar4) / 0x1c);
        }
        FUN_00457540(0x9d0,&local_150,1);
        local_c = 0xffffffff;
        puVar2 = local_150;
        if (local_150 != (undefined4 *)0x0) {
          while( true ) {
            if (puVar2 == local_14c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_150);
            }
            if (0xf < (uint)puVar2[5]) break;
            puVar2[5] = 0xf;
            puVar2[4] = 0;
            *(undefined1 *)puVar2 = 0;
            puVar2 = puVar2 + 7;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(*puVar2);
        }
        local_150 = (undefined4 *)0x0;
        local_14c = (undefined4 *)0x0;
        local_148 = 0;
      }
      iVar3 = *param_2;
      local_160 = local_160 + 0x10;
      local_154 = local_154 + 1;
    } while (local_154 < param_2[1] - iVar3 >> 4);
  }
  ExceptionList = local_14;
  return;
}

