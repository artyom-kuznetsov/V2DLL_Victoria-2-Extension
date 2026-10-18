// FUN_00790e90 @ 00790e90 body=[[00790e90, 00790f69] [00790f6d, 00791109] [0079110d, 00791138] [0079113c, 00791161] [00791165, 00791327] [0079132b, 0079135b] [0079135f, 0079138c] [00791392, 007913ce] [007913d2, 00791420]]


undefined1 * FUN_00790e90(int param_1,undefined1 *param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int local_114;
  int local_110;
  int iStack_10c;
  uint auStack_100 [4];
  undefined4 uStack_f0;
  uint uStack_ec;
  uint auStack_e4 [4];
  undefined4 uStack_d4;
  uint uStack_d0;
  uint auStack_c8 [4];
  undefined4 uStack_b8;
  uint uStack_b4;
  uint auStack_a8 [4];
  undefined4 uStack_98;
  uint uStack_94;
  uint uStack_88;
  undefined4 uStack_78;
  uint uStack_74;
  uint local_6c [4];
  undefined4 uStack_5c;
  uint uStack_58;
  uint uStack_50;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 auStack_34 [5];
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6c0c2;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  cVar1 = FUN_005e5800();
  if ((cVar1 == '\0') ||
     (iVar6 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28), iVar5 = iVar6 >> 0x1f,
     iVar6 / 0x2c + iVar5 == iVar5)) {
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    FUN_00409350(&DAT_00ded94d,0);
    ExceptionList = local_14;
    return param_2;
  }
  local_114 = 0;
  piVar2 = (int *)FUN_0079dee0();
  uVar3 = FUN_009888f0(local_6c);
  local_c = 0;
  uVar3 = (**(code **)(*piVar2 + 0x20))(&DAT_00df7e7c,uVar3);
  FUN_0043ec10(auStack_34,&DAT_00e01db8,uVar3);
  local_c = CONCAT31(local_c._1_3_,2);
  if (0xf < uStack_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_6c[0]);
  }
  uStack_5c = 0;
  iStack_10c = 0;
  iVar5 = *(int *)(param_1 + 0x28);
  uStack_58 = 0xf;
  local_6c[0] = local_6c[0] & 0xffffff00;
  if (0 < (*(int *)(param_1 + 0x2c) - iVar5) / 0x2c) {
    local_110 = 0;
    do {
      iVar6 = DAT_01258a94;
      if (*(uint *)(local_110 + 4 + iVar5) < 0x1269) {
        iVar6 = DAT_01258a98;
      }
      if ((iVar6 == 0) || (iVar6 = FUN_009c1d40(), iVar6 == 0)) {
        iVar6 = 0;
      }
      else {
        iVar6 = iVar6 + -8;
      }
      *(int *)(local_110 + iVar5) = iVar6;
      if (iVar6 != 0) {
        iVar5 = *(int *)(local_110 + *(int *)(param_1 + 0x28) + 0x28);
        local_114 = local_114 + iVar5;
        iVar6 = DAT_01258a94;
        if (*(uint *)(local_110 + 4 + *(int *)(param_1 + 0x28)) < 0x1269) {
          iVar6 = DAT_01258a98;
        }
        if ((iVar6 == 0) || (iVar6 = FUN_009c1d40(), iVar6 == 0)) {
          piVar2 = (int *)0x0;
        }
        else {
          piVar2 = (int *)(iVar6 + -8);
        }
        uStack_ec = 0xf;
        uStack_f0 = 0;
        auStack_100[0] = auStack_100[0] & 0xffffff00;
        local_c._0_1_ = 3;
        pcVar4 = __itoa(iVar5,(char *)auStack_a8,10);
        pcVar7 = pcVar4;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar4,(int)pcVar7 - (int)(pcVar4 + 1));
        local_c._0_1_ = 4;
        uVar3 = (**(code **)(*piVar2 + 0x20))(&DAT_00df7e7c,auStack_100);
        uVar3 = FUN_0043ec10(auStack_c8,&DAT_00e02da4,uVar3);
        local_c._0_1_ = 5;
        uVar3 = FUN_00988fa0(uVar3);
        local_c._0_1_ = 6;
        FUN_00448aa0(uVar3,0,0xffffffff);
        if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_50);
        }
        uStack_3c = 0xf;
        uStack_40 = 0;
        uStack_50 = uStack_50 & 0xffffff00;
        if (0xf < uStack_b4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_c8[0]);
        }
        local_c = CONCAT31(local_c._1_3_,2);
        uStack_b4 = 0xf;
        uStack_b8 = 0;
        auStack_c8[0] = auStack_c8[0] & 0xffffff00;
        if (0xf < uStack_ec) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_100[0]);
        }
        uStack_ec = 0xf;
        uStack_f0 = 0;
        auStack_100[0] = auStack_100[0] & 0xffffff00;
      }
      iVar5 = *(int *)(param_1 + 0x28);
      iStack_10c = iStack_10c + 1;
      local_110 = local_110 + 0x2c;
    } while (iStack_10c < (*(int *)(param_1 + 0x2c) - iVar5) / 0x2c);
  }
  iVar5 = DAT_01258a94;
  if (*(uint *)(param_1 + 4) < 0x1269) {
    if (DAT_01258a98 != 0) {
      iVar6 = FUN_009c1d40();
      iVar5 = DAT_01258a94;
      goto LAB_007911ed;
    }
LAB_007911fe:
    iVar6 = 0;
  }
  else {
    if (DAT_01258a94 == 0) goto LAB_007911fe;
    iVar6 = FUN_009c1d40();
LAB_007911ed:
    if (iVar6 == 0) goto LAB_007911fe;
    iVar6 = iVar6 + -8;
  }
  iVar8 = 0;
  for (iVar6 = *(int *)(iVar6 + 0x38); iVar6 != 0; iVar6 = *(int *)(iVar6 + 8)) {
    iVar8 = iVar8 + 1;
  }
  if (iVar8 <= local_114) goto LAB_00791397;
  if (*(uint *)(param_1 + 4) < 0x1269) {
    if (DAT_01258a98 != 0) goto LAB_00791249;
LAB_0079125b:
    iVar5 = 0;
  }
  else {
    if (iVar5 == 0) goto LAB_0079125b;
LAB_00791249:
    iVar5 = FUN_009c1d40();
    if (iVar5 == 0) goto LAB_0079125b;
    iVar5 = iVar5 + -8;
  }
  iVar6 = 0;
  for (iVar5 = *(int *)(iVar5 + 0x38); iVar5 != 0; iVar5 = *(int *)(iVar5 + 8)) {
    iVar6 = iVar6 + 1;
  }
  uStack_d0 = 0xf;
  uStack_d4 = 0;
  auStack_e4[0] = auStack_e4[0] & 0xffffff00;
  local_c._0_1_ = 7;
  pcVar4 = __itoa(iVar6 - local_114,(char *)auStack_c8,10);
  pcVar7 = pcVar4;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar4,(int)pcVar7 - (int)(pcVar4 + 1));
  local_c._0_1_ = 8;
  uVar3 = FUN_0042c180(auStack_a8,auStack_e4);
  local_c._0_1_ = 9;
  uVar3 = FUN_00988fa0(uVar3);
  local_c._0_1_ = 10;
  FUN_00448aa0(uVar3,0,0xffffffff);
  if (0xf < uStack_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_88);
  }
  uStack_74 = 0xf;
  uStack_78 = 0;
  uStack_88 = uStack_88 & 0xffffff00;
  if (0xf < uStack_94) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_a8[0]);
  }
  local_c = CONCAT31(local_c._1_3_,2);
  uStack_94 = 0xf;
  uStack_98 = 0;
  auStack_a8[0] = auStack_a8[0] & 0xffffff00;
  if (0xf < uStack_d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_e4[0]);
  }
LAB_00791397:
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  FUN_00408ed0(auStack_34,0,0xffffffff);
  if (uStack_20 < 0x10) {
    ExceptionList = local_14;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(auStack_34[0]);
}

