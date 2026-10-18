// FUN_007851c0 @ 007851c0 body=[[007851c0, 007852d0] [007852d4, 00785326] [0078532a, 00785380] [00785384, 007853c4] [007853c8, 007853e8] [007853ec, 007853fb]]


void FUN_007851c0(int *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int *piVar7;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  char *local_34 [4];
  char *local_24;
  undefined *local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b43acb;
  local_10 = ExceptionList;
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("combat_modifier",0xf);
  local_8._1_3_ = 0;
  local_1c = *(int **)(DAT_012588e8 + 0xb24);
  local_34[0] = "dice";
  local_34[1] = "digin";
  local_34[2] = "crossing";
  local_34[3] = "terrain";
  local_24 = "leader";
  local_20 = &DAT_00e01d64;
  local_14 = 0;
  while( true ) {
    piVar7 = local_1c;
    local_8._0_1_ = 0;
    local_18 = (int *)(**(code **)(*local_1c + 0x34))();
    iVar4 = *local_18;
    uVar3 = (**(code **)(*piVar7 + 0x3c))();
    iVar4 = (**(code **)(iVar4 + 0x2c))(local_88,uVar3);
    if (iVar4 == 0) {
      local_18 = (int *)0x0;
    }
    else {
      local_18 = (int *)(iVar4 + 0x18);
    }
    pcVar2 = local_34[local_14];
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    local_8._0_1_ = 1;
    (**(code **)(*param_1 + 0x58))(local_50,local_18);
    local_8._0_1_ = 0;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    pcVar5 = pcVar2;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
    local_8._0_1_ = 2;
    iVar4 = (**(code **)(*param_1 + 0x30))(local_50);
    if (iVar4 == 0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = (int *)(iVar4 + -0x18);
    }
    local_8._0_1_ = 0;
    if (0xf < local_3c) break;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    FUN_00409350("modifier_icon",0xd);
    local_8._0_1_ = 3;
    piVar6 = (int *)(**(code **)(*piVar7 + 0x44))(local_6c);
    iVar4 = local_14 + 1;
    (**(code **)(*piVar6 + 0x48))(iVar4);
    local_8._0_1_ = 0;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c[0]);
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    FUN_00409350("combat_view",0xb);
    local_8._0_1_ = 4;
    (**(code **)(piVar7[6] + 0x78))(local_6c);
    local_8._0_1_ = 0;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c[0]);
    }
    local_14 = iVar4;
    if (5 < iVar4) {
      if (local_74 < 0x10) {
        ExceptionList = local_10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_88[0]);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_50[0]);
}

