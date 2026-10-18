// FUN_00787150 @ 00787150 body=[[00787150, 00787229] [0078722d, 0078736e] [00787372, 00787393] [00787397, 0078744f] [00787453, 0078747a] [0078747e, 007874a2] [007874a6, 007874ba]]


void FUN_00787150(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  char cVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  char *in_ECX;
  int iVar9;
  int local_d4;
  int local_d0;
  uint local_cc [4];
  undefined4 local_bc;
  uint local_b8;
  int local_b0;
  int local_ac;
  uint auStack_a4 [4];
  undefined4 uStack_94;
  uint uStack_90;
  uint uStack_88;
  undefined4 uStack_78;
  uint uStack_74;
  uint uStack_6c;
  undefined4 uStack_5c;
  uint uStack_58;
  uint auStack_50 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  uint auStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b7accf;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_0125eadc == (int *)0x0) {
    ExceptionList = &local_14;
    local_ac = FUN_00aae9af(0x9c);
    local_c = 0;
    if (local_ac == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_00576fe0(local_ac);
    }
    local_c = 0xffffffff;
    FUN_0057ab10(uVar6);
  }
  piVar4 = DAT_0125eadc;
  local_b8 = 0xf;
  local_bc = 0;
  local_cc[0] = local_cc[0] & 0xffffff00;
  pcVar7 = in_ECX;
  do {
    cVar5 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar5 != '\0');
  FUN_00409350(in_ECX,(int)pcVar7 - (int)(in_ECX + 1));
  local_c = 1;
  iVar8 = FUN_005c2ad0(local_cc);
  local_c = 0xffffffff;
  if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_cc[0]);
  }
  local_b8 = 0xf;
  local_bc = 0;
  local_cc[0] = local_cc[0] & 0xffffff00;
  if (iVar8 != 0) {
    local_b0 = *(int *)(iVar8 + 0x40);
    local_ac = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 4) * 4) + 0xbcc);
    iVar9 = piVar4[1] - *piVar4 >> 2;
    iVar8 = 0;
    local_d4 = 0;
    local_d0 = 0;
    if (0 < iVar9) {
      do {
        cVar5 = (**(code **)(**(int **)(*piVar4 + iVar8 * 4) + 0x20))();
        if (((cVar5 != '\0') &&
            (iVar1 = *(int *)(*piVar4 + iVar8 * 4),
            *(int *)(*(int *)(iVar1 + 0x310) + 0x40) == local_b0)) &&
           (local_d4 = local_d4 + 1,
           *(int *)(*(int *)(local_ac + 0x2b8) + *(int *)(iVar1 + 0x2e4) * 4) != 0)) {
          local_d0 = local_d0 + 1;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar9);
    }
    if (param_4 == '\0') {
      uStack_90 = 0xf;
      uStack_94 = 0;
      auStack_a4[0] = auStack_a4[0] & 0xffffff00;
      FUN_00409350(&DAT_00dee2cc,1);
      local_c = 5;
      FUN_004d6040(auStack_34,&DAT_00df7e90,&local_d0,&local_d4);
      local_c._0_1_ = 6;
      uVar6 = FUN_00988f20(auStack_a4);
      local_c = CONCAT31(local_c._1_3_,7);
      FUN_00448aa0(uVar6,0,0xffffffff);
      if (0xf < uStack_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_6c);
      }
      uStack_58 = 0xf;
      uStack_5c = 0;
      uStack_6c = uStack_6c & 0xffffff00;
      if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_34[0]);
      }
      uStack_20 = 0xf;
      uStack_24 = 0;
      auStack_34[0] = auStack_34[0] & 0xffffff00;
      uVar2 = auStack_a4[0];
      uVar3 = uStack_90;
    }
    else {
      local_b8 = 0xf;
      local_bc = 0;
      local_cc[0] = local_cc[0] & 0xffffff00;
      FUN_00409350(&DAT_00dee2cc,1);
      local_c = 2;
      FUN_004d6040(auStack_50,&DAT_00df7e90,&local_d0,&local_d4);
      local_c._0_1_ = 3;
      uVar6 = FUN_00988f20(local_cc);
      local_c = CONCAT31(local_c._1_3_,4);
      FUN_00448aa0(uVar6,0,0xffffffff);
      if (0xf < uStack_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_88);
      }
      uStack_74 = 0xf;
      uStack_78 = 0;
      uStack_88 = uStack_88 & 0xffffff00;
      if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_50[0]);
      }
      uStack_3c = 0xf;
      uStack_40 = 0;
      auStack_50[0] = auStack_50[0] & 0xffffff00;
      uVar2 = local_cc[0];
      uVar3 = local_b8;
    }
    if (0xf < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uVar2);
    }
  }
  ExceptionList = local_14;
  return;
}

