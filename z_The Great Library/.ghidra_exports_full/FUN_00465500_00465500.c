// FUN_00465500 @ 00465500 body=[[00465500, 0046554d] [00465550, 004655e5] [004655e9, 0046564d] [00465657, 00465670] [00465676, 00465776]]


void FUN_00465500(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int local_15c;
  int local_158;
  int local_150;
  undefined4 *local_14c;
  undefined4 *local_148;
  undefined4 local_144;
  int *local_13c;
  undefined4 local_138;
  uint local_124;
  undefined4 local_11c;
  char local_118 [260];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b608f6;
  local_14 = ExceptionList;
  iVar4 = *param_2;
  local_150 = 0;
  if (0 < (int)(param_2[1] - iVar4 & 0xfffffff0U)) {
    local_15c = 0;
    ExceptionList = &local_14;
    do {
      piVar1 = (int *)(local_15c + 4 + iVar4);
      iVar3 = *(int *)(local_15c + 4 + iVar4) - *(int *)(local_15c + iVar4) >> 3;
      local_13c = piVar1;
      if (iVar3 < 1) {
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
        local_14c = (undefined4 *)0x0;
        local_148 = (undefined4 *)0x0;
        local_144 = 0;
        local_c._0_1_ = 0;
        local_c._1_3_ = 0;
        FUN_00419660(iVar3);
        local_158 = 0;
        if (0 < (int)(*piVar1 - *(int *)(local_15c + iVar4) & 0xfffffff8U)) {
          do {
            FUN_00464370();
            local_c._0_1_ = 1;
            FUN_00a840b0();
            local_c._0_1_ = 0;
            if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_138);
            }
            local_158 = local_158 + 1;
          } while (local_158 < *local_13c - *(int *)(local_15c + iVar4) >> 3);
        }
        FUN_00457540(0x9ce,&local_14c,1);
        local_c = 0xffffffff;
        puVar2 = local_14c;
        if (local_14c != (undefined4 *)0x0) {
          while( true ) {
            if (puVar2 == local_148) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_14c);
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
        local_14c = (undefined4 *)0x0;
        local_148 = (undefined4 *)0x0;
        local_144 = 0;
      }
      iVar4 = *param_2;
      local_15c = local_15c + 0x10;
      local_150 = local_150 + 1;
    } while (local_150 < param_2[1] - iVar4 >> 4);
  }
  ExceptionList = local_14;
  return;
}

