// FUN_0041e4e0 @ 0041e4e0 body=[[0041e4e0, 0041e593] [0041e5a0, 0041e6b3] [0041e6b7, 0041e6db] [0041e6df, 0041e712] [0041e729, 0041e74c]]


undefined1 * FUN_0041e4e0(undefined1 *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 ***pppuVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  char local_c0 [32];
  uint local_a0 [4];
  undefined4 local_90;
  uint local_8c;
  int local_84;
  undefined4 **local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64;
  undefined4 local_54;
  uint local_50;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined2 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  int local_2c;
  int *local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b47dfa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  local_24 = 1;
  if ((param_2[1] - *param_2) / 0x1c == 1) {
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = (undefined4 **)((uint)local_80[0] & 0xffffff00);
    FUN_00408ed0(*param_2,0,0xffffffff);
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    pppuVar3 = (undefined4 ***)local_80[0];
    if (local_6c < 0x10) {
      pppuVar3 = local_80;
    }
    local_2c = FUN_00aaf0c5(pppuVar3);
    param_2 = (int *)0x0;
    if (0 < local_2c) {
      local_1c = 0x2d2d2d;
      do {
        local_8c = 0xf;
        local_90 = 0;
        local_a0[0] = local_a0[0] & 0xffffff00;
        local_8._0_1_ = 2;
        pcVar4 = __itoa((int)param_2,local_c0,10);
        pcVar6 = pcVar4;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar4,(int)pcVar6 - (int)(pcVar4 + 1));
        local_8._0_1_ = 3;
        local_50 = 0xf;
        local_54 = 0;
        local_64 = local_64 & 0xffffff00;
        FUN_00408ed0(local_a0,0,0xffffffff);
        local_48 = (int)param_2 + 10;
        local_44 = local_1c;
        local_40 = 0;
        local_3c = 0x100;
        local_38 = 0;
        local_34 = 0;
        local_30 = DAT_01259abc;
        local_8._0_1_ = 4;
        local_14 = *(int *)(DAT_012588e8 + 0x1c);
        local_20 = DAT_012588e8;
        piVar7 = (int *)(DAT_012588e8 + 0x18);
        local_28 = piVar7;
        iVar5 = FUN_00aae9af(0x44);
        local_8._0_1_ = 5;
        local_84 = iVar5;
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          FUN_0064a460();
          *(int *)(iVar5 + 0x38) = local_14;
          *(undefined4 *)(iVar5 + 0x3c) = 0;
          *(undefined1 *)(iVar5 + 0x40) = 0;
          piVar7 = local_28;
        }
        iVar2 = piVar7[2];
        piVar7[1] = iVar5;
        piVar7[2] = iVar2 + 1;
        if (iVar2 == 0) {
          *piVar7 = iVar5;
        }
        else {
          *(int *)(local_14 + 0x3c) = iVar5;
        }
        *(undefined1 *)(local_20 + 0x60) = 1;
        if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_64);
        }
        local_8._0_1_ = 1;
        local_50 = 0xf;
        local_54 = 0;
        local_64 = local_64 & 0xffffff00;
        if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_a0[0]);
        }
        param_2 = (int *)((int)param_2 + 1);
      } while ((int)param_2 < local_2c);
    }
    *param_1 = 1;
    FUN_00409350("Humans added",0xc);
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_80[0]);
    }
  }
  else {
    *param_1 = 0;
    FUN_00409350("Please specify the amount of humans",0x23);
  }
  ExceptionList = local_10;
  return param_1;
}

