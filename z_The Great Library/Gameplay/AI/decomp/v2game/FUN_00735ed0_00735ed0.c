// FUN_00735ed0 @ 00735ed0 body=[[00735ed0, 00736039] [0073603d, 0073606c] [00736070, 007360c1] [007360c5, 007360d7]]


/* WARNING: Removing unreachable block (ram,0x00736064) */

void FUN_00735ed0(uint param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  uint *puVar6;
  uint local_50;
  uint local_3c;
  uint local_34 [4];
  int *local_24;
  int local_1c;
  int *local_18;
  uint *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b44310;
  local_10 = ExceptionList;
  local_24 = *(int **)(param_1 + 0x70);
  local_1c = DAT_012588e8;
  local_14 = (uint *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x74) * 4) + 0x9d8);
  local_34[0] = 0;
  local_34[1] = 0;
  local_34[2] = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x6c) != 0) {
    local_18 = *(int **)(*(int *)(param_1 + 0x6c) + 0x58);
    ExceptionList = &local_10;
    FUN_004e9b90();
    local_14 = local_34;
  }
  if (*param_2 != param_2[1]) {
    iVar2 = FUN_005e5ce0(param_2[1],param_2);
    FUN_005e5d30(param_2);
    param_2[1] = iVar2;
  }
  piVar5 = (int *)*local_14;
  puVar6 = local_14;
  do {
    do {
      if ((piVar5 < (int *)*puVar6) || ((int *)puVar6[1] <= piVar5)) {
        param_1 = param_1 & 0xffffff00;
        FUN_00738930(*param_2,param_2[1],(param_2[1] - *param_2) / 0x28,param_1);
        if (local_34[0] != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_34[0]);
        }
        ExceptionList = local_10;
        return;
      }
      piVar3 = *(int **)(*(int *)(*(int *)(local_1c + 0xacc) + *piVar5 * 4) + 0xd8);
      local_24 = piVar5 + 1;
      piVar5 = local_24;
    } while (piVar3 == (int *)0x0);
    do {
      piVar5 = (int *)*piVar3;
      local_18 = (int *)piVar3[2];
      cVar1 = (**(code **)(*piVar5 + 0x34))();
      if (cVar1 != '\0') {
        if (*(char *)(param_1 + 0x78) == '\0') {
LAB_00735fdf:
          if (*(char *)(piVar5[0x22] + 0x3a) == '\0') goto LAB_00736070;
        }
        else if (*(char *)(piVar5[0x22] + 0x39) == '\0') {
          if (*(char *)(param_1 + 0x78) != '\0') goto LAB_00736070;
          goto LAB_00735fdf;
        }
        local_8._0_1_ = 1;
        uVar4 = FUN_00632170(piVar5);
        local_8._0_1_ = 2;
        FUN_00408ed0(uVar4,0,0xffffffff);
        if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_50);
        }
        local_3c = 0xf;
        local_50 = local_50 & 0xffffff00;
        local_8._0_1_ = 3;
        FUN_005e5bb0();
        local_8 = (uint)local_8._1_3_ << 8;
      }
LAB_00736070:
      piVar3 = local_18;
      piVar5 = local_24;
      puVar6 = local_14;
    } while (local_18 != (int *)0x0);
  } while( true );
}

