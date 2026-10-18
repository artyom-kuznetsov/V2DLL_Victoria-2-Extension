// FUN_00786ce0 @ 00786ce0 body=[[00786ce0, 00786d8a] [00786d8e, 00786e81] [00786e85, 00786eb0] [00786eb4, 00786ee5] [00786ee9, 00786f5c] [00786f60, 00787099] [0078709d, 007870c0] [007870c4, 0078711e] [00787122, 0078713d]]


void FUN_00786ce0(int param_1,int param_2,int *param_3,char param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int *piVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  char local_108 [36];
  undefined4 local_e4;
  uint local_e0;
  undefined4 local_d0;
  uint local_cc;
  uint local_c4 [4];
  undefined4 local_b4;
  uint local_b0;
  int local_a8;
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  char *local_4c [6];
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4b727;
  local_10 = ExceptionList;
  local_14 = 0;
  local_4c[0] = "dice";
  local_4c[1] = "digin";
  local_4c[2] = "crossing";
  local_4c[3] = "terrain";
  local_4c[4] = "leader";
  local_4c[5] = "gas";
  iVar10 = 0;
  ExceptionList = &local_10;
  do {
    local_8 = 0xffffffff;
    pcVar9 = local_4c[iVar10];
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    pcVar4 = pcVar9;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar9,(int)pcVar4 - (int)(pcVar9 + 1));
    local_8 = 0;
    piVar5 = (int *)(**(code **)(*param_3 + 0x30))(local_34);
    (**(code **)(*piVar5 + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    iVar10 = iVar10 + 1;
    local_20 = 0xf;
    local_24 = 0;
    uVar3 = local_34[0] >> 8;
    local_34[0] = uVar3 << 8;
  } while (iVar10 < 6);
  piVar5 = *(int **)(DAT_012588e8 + 0xb24);
  if (*(char *)(param_1 + 0xa20) == '\0') {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = uVar3 << 8;
    FUN_00409350("modifier_start",0xe);
    local_8 = 3;
    puVar6 = local_34;
    local_14 = 4;
  }
  else {
    pcVar9 = "_R";
    if (param_4 == '\0') {
      pcVar9 = "_L";
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    pcVar4 = pcVar9;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar9,(int)pcVar4 - (int)(pcVar9 + 1));
    local_8 = 1;
    local_14 = 1;
    puVar6 = (uint *)FUN_00988fa0(local_6c);
    local_8 = 2;
    local_14 = 3;
  }
  piVar7 = (int *)(**(code **)(*piVar5 + 0x34))();
  iVar10 = (**(code **)(*piVar7 + 0x48))(puVar6);
  if ((local_14 & 4) != 0) {
    local_14 = local_14 & 0xfffffffb;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
  }
  if ((local_14 & 2) != 0) {
    local_14 = local_14 & 0xfffffffd;
    if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_e0);
    }
    local_cc = 0xf;
    local_d0 = 0;
    local_e0 = local_e0 & 0xffffff00;
  }
  local_8 = 0xffffffff;
  if ((local_14 & 1) != 0) {
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c[0]);
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
  }
  local_90 = 0xf;
  local_94 = 0;
  local_a4[0] = local_a4[0] & 0xffffff00;
  FUN_00409350("modifier_offset",0xf);
  local_8 = 4;
  piVar5 = (int *)(**(code **)(*piVar5 + 0x34))();
  iVar8 = (**(code **)(*piVar5 + 0x48))(local_a4);
  local_8 = 0xffffffff;
  if (local_90 < 0x10) {
    local_18 = *(int *)(iVar10 + 100);
    local_14 = *(undefined4 *)(iVar10 + 0x68);
    local_90 = 0xf;
    local_94 = 0;
    local_a4[0] = local_a4[0] & 0xffffff00;
    iVar10 = *(int *)(param_2 + 8);
    do {
      if (iVar10 == 0) {
        ExceptionList = local_10;
        return;
      }
      local_8 = 0xffffffff;
      iVar2 = *(int *)(iVar10 + 0x24);
      local_b0 = 0xf;
      local_b4 = 0;
      local_c4[0] = local_c4[0] & 0xffffff00;
      FUN_00408ed0(iVar10,0,0xffffffff);
      local_a8 = *(int *)(iVar10 + 0x1c);
      local_8 = 5;
      piVar5 = (int *)(**(code **)(*param_3 + 0x30))(local_c4);
      if ((piVar5 != (int *)0x0) && (piVar7 = piVar5 + -6, piVar7 != (int *)0x0)) {
        local_74 = 0xf;
        local_78 = 0;
        local_88[0] = local_88[0] & 0xffffff00;
        FUN_00409350("modifier_value",0xe);
        local_4c[4] = (char *)0xf;
        local_4c[3] = (char *)0x0;
        local_50 = local_50 & 0xffffff00;
        local_8._0_1_ = 7;
        pcVar4 = __itoa(local_a8,local_108,10);
        pcVar9 = pcVar4;
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar4,(int)pcVar9 - (int)(pcVar4 + 1));
        local_8._0_1_ = 8;
        (**(code **)(*piVar7 + 0x3c))(local_88);
        FUN_00408ed0(&local_50,0,0xffffffff);
        FUN_00a5ecc0(&local_50,0);
        iVar10 = local_18;
        if (0xf < local_4c[4]) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_50);
        }
        local_8 = CONCAT31(local_8._1_3_,5);
        local_4c[4] = (char *)0xf;
        local_4c[3] = (char *)0x0;
        local_50 = local_50 & 0xffffff00;
        if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_88[0]);
        }
        local_74 = 0xf;
        local_78 = 0;
        local_88[0] = local_88[0] & 0xffffff00;
        (**(code **)(*piVar7 + 0xa8))(local_18,local_14);
        (**(code **)(*piVar5 + 0x34))();
        local_e4 = *(undefined4 *)(iVar8 + 0x68);
        local_18 = iVar10 + *(int *)(iVar8 + 100);
      }
      local_8 = 0xffffffff;
      iVar10 = iVar2;
      if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_c4[0]);
      }
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_a4[0]);
}

