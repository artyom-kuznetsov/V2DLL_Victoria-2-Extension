// FUN_009bb460 @ 009bb460 body=[[009bb460, 009bb5ae] [009bb5b2, 009bb72c] [009bb732, 009bb74d] [009bb759, 009bb77b] [009bb781, 009bb92b] [009bb931, 009bb94c] [009bb958, 009bbae0] [009bbae4, 009bbb10] [009bbb14, 009bbb3f] [009bbb43, 009bbb6e] [009bbb72, 009bbb97] [009bbb9b, 009bbbba] [009bbbbe, 009bbbee] [009bbbf2, 009bbcb2] [009bbcb6, 009bbd08] [009bbd0c, 009bbd31] [009bbd35, 009bbd6b] [009bbd73, 009bbd8a] [009bbd8e, 009bbda7]]


/* WARNING: Removing unreachable block (ram,0x009bb710) */
/* WARNING: Removing unreachable block (ram,0x009bb631) */
/* WARNING: Removing unreachable block (ram,0x009bb764) */
/* WARNING: Removing unreachable block (ram,0x009bb770) */
/* WARNING: Removing unreachable block (ram,0x009bb776) */
/* WARNING: Removing unreachable block (ram,0x009bb781) */
/* WARNING: Removing unreachable block (ram,0x009bb793) */
/* WARNING: Removing unreachable block (ram,0x009bbd53) */
/* WARNING: Removing unreachable block (ram,0x009bbd5b) */
/* WARNING: Removing unreachable block (ram,0x009bbd60) */
/* WARNING: Removing unreachable block (ram,0x009bbd66) */
/* WARNING: Removing unreachable block (ram,0x009bbd73) */
/* WARNING: Removing unreachable block (ram,0x009bbd85) */
/* WARNING: Removing unreachable block (ram,0x009bb90c) */
/* WARNING: Removing unreachable block (ram,0x009bb918) */
/* WARNING: Removing unreachable block (ram,0x009bb920) */
/* WARNING: Removing unreachable block (ram,0x009bb926) */
/* WARNING: Removing unreachable block (ram,0x009bb931) */
/* WARNING: Removing unreachable block (ram,0x009bb943) */
/* WARNING: Removing unreachable block (ram,0x009bb820) */
/* WARNING: Removing unreachable block (ram,0x009bb838) */
/* WARNING: Removing unreachable block (ram,0x009bb850) */
/* WARNING: Removing unreachable block (ram,0x009bb85f) */
/* WARNING: Removing unreachable block (ram,0x009bb865) */
/* WARNING: Removing unreachable block (ram,0x009bb86d) */
/* WARNING: Removing unreachable block (ram,0x009bb878) */
/* WARNING: Removing unreachable block (ram,0x009bb8e2) */
/* WARNING: Removing unreachable block (ram,0x009bb8a8) */
/* WARNING: Removing unreachable block (ram,0x009bb8c0) */
/* WARNING: Removing unreachable block (ram,0x009bb8c5) */
/* WARNING: Removing unreachable block (ram,0x009bb8c8) */
/* WARNING: Removing unreachable block (ram,0x009bb8cd) */
/* WARNING: Removing unreachable block (ram,0x009bb8d5) */
/* WARNING: Removing unreachable block (ram,0x009bb8da) */
/* WARNING: Removing unreachable block (ram,0x009bb8f4) */
/* WARNING: Removing unreachable block (ram,0x009bb648) */
/* WARNING: Removing unreachable block (ram,0x009bb655) */
/* WARNING: Removing unreachable block (ram,0x009bb664) */
/* WARNING: Removing unreachable block (ram,0x009bb66a) */
/* WARNING: Removing unreachable block (ram,0x009bb672) */
/* WARNING: Removing unreachable block (ram,0x009bb759) */
/* WARNING: Removing unreachable block (ram,0x009bb67d) */
/* WARNING: Removing unreachable block (ram,0x009bb6e6) */
/* WARNING: Removing unreachable block (ram,0x009bb6ac) */
/* WARNING: Removing unreachable block (ram,0x009bb6c4) */
/* WARNING: Removing unreachable block (ram,0x009bb6c9) */
/* WARNING: Removing unreachable block (ram,0x009bb6cc) */
/* WARNING: Removing unreachable block (ram,0x009bb6d1) */
/* WARNING: Removing unreachable block (ram,0x009bb6d9) */
/* WARNING: Removing unreachable block (ram,0x009bb6de) */
/* WARNING: Removing unreachable block (ram,0x009bb6f8) */
/* WARNING: Removing unreachable block (ram,0x009bb71c) */
/* WARNING: Removing unreachable block (ram,0x009bb721) */
/* WARNING: Removing unreachable block (ram,0x009bb727) */
/* WARNING: Removing unreachable block (ram,0x009bb732) */
/* WARNING: Removing unreachable block (ram,0x009bb744) */

int * FUN_009bb460(int param_1,int *param_2,int *param_3,char param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  undefined4 ***pppuVar8;
  int iVar9;
  int iVar10;
  undefined4 local_218;
  undefined4 local_214;
  int local_210;
  int local_20c;
  undefined4 local_208;
  undefined4 **local_1f8 [4];
  undefined4 local_1e8;
  uint local_1e4;
  uint local_1d8 [4];
  undefined4 local_1c8;
  uint local_1c4;
  uint local_1bc [4];
  undefined4 local_1ac;
  uint local_1a8;
  uint local_1a0 [4];
  undefined4 local_190;
  uint local_18c;
  uint local_184 [4];
  undefined4 local_174;
  uint local_170;
  uint local_168 [4];
  undefined4 local_158;
  uint local_154;
  undefined4 local_148 [5];
  uint local_134;
  uint local_12c;
  undefined4 local_11c;
  uint local_118;
  uint local_110;
  undefined4 local_100;
  uint local_fc;
  uint local_f4;
  undefined4 local_e4;
  uint local_e0;
  undefined **local_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b56e90;
  local_14 = ExceptionList;
  local_210 = 0;
  local_20c = 0;
  local_208 = 0;
  local_c = 1;
  iVar9 = (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc)) / 0x18;
  iVar10 = 0;
  if (0 < iVar9) {
    piVar5 = *(int **)(param_1 + 0xc);
    do {
      if ((*piVar5 == *param_3) && (piVar5[1] == param_3[1])) {
        local_218 = *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar10 * 0x18);
        iVar9 = *(int *)(param_1 + 0xc) + iVar10 * 0x18;
        local_214 = *(undefined4 *)(iVar9 + 4);
        ExceptionList = &local_14;
        FUN_009beeb0(iVar9 + 8);
        if (param_4 == '\0') {
          FUN_009bbdb0(param_1,&local_218);
          goto LAB_009bb595;
        }
        iVar10 = local_20c - local_210 >> 2;
        iVar6 = 0;
        iVar9 = 1000;
        if (iVar10 < 1) goto LAB_009bb57c;
        do {
          iVar2 = *(int *)(local_210 + iVar6 * 4);
          if (iVar2 < iVar9) {
            iVar9 = iVar2;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar10);
        if (iVar9 == 1000) {
LAB_009bb57c:
          iVar9 = 0x3c;
        }
        *(int *)(param_1 + 0x40) = iVar9;
LAB_009bb595:
        iVar9 = param_3[1];
        *param_2 = *param_3;
        param_2[1] = iVar9;
        if (local_210 == 0) {
          ExceptionList = local_14;
          return param_2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_210);
      }
      iVar10 = iVar10 + 1;
      piVar5 = piVar5 + 6;
    } while (iVar10 < iVar9);
  }
  if (*(char *)(param_1 + 0x44) == '\0') {
    iVar9 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = iVar9;
    return param_2;
  }
  iVar10 = 0;
  ExceptionList = &local_14;
  if (0 < iVar9) {
    iVar9 = 0;
    ExceptionList = &local_14;
    do {
      if (*(int *)(*(int *)(param_1 + 0xc) + iVar9 + 4) == param_3[1]) {
        FUN_009bbee0();
      }
      iVar10 = iVar10 + 1;
      iVar9 = iVar9 + 0x18;
    } while (iVar10 < (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc)) / 0x18);
  }
  iVar9 = 0;
  if (0 < (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc)) / 0x18) {
    iVar10 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0xc) + iVar10) == *param_3) {
        FUN_009bbee0();
      }
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 0x18;
    } while (iVar9 < (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc)) / 0x18);
  }
  local_18c = 0xf;
  local_190 = 0;
  local_1a0[0] = local_1a0[0] & 0xffffff00;
  FUN_00409350("\" (or something similar) isn\'t supported by your screen. Please change resolution in settings.txt."
               ,0x62);
  local_c._0_1_ = 2;
  local_1a8 = 0xf;
  local_1ac = 0;
  local_1bc[0] = local_1bc[0] & 0xffffff00;
  FUN_00409350(&DAT_00dfd420,1);
  local_1c4 = 0xf;
  local_1c8 = 0;
  local_1d8[0] = local_1d8[0] & 0xffffff00;
  local_c._0_1_ = 4;
  pcVar3 = __itoa(param_3[1],(char *)local_168,10);
  pcVar7 = pcVar3;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar3,(int)pcVar7 - (int)(pcVar3 + 1));
  local_170 = 0xf;
  local_174 = 0;
  local_184[0] = local_184[0] & 0xffffff00;
  local_c._0_1_ = 6;
  pcVar3 = __itoa(*param_3,(char *)local_168,10);
  pcVar7 = pcVar3;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar3,(int)pcVar7 - (int)(pcVar3 + 1));
  local_c._0_1_ = 7;
  FUN_00988fa0(local_184);
  local_c._0_1_ = 8;
  FUN_00988f20(local_1bc);
  local_c._0_1_ = 9;
  FUN_00988f20(local_1d8);
  local_c._0_1_ = 10;
  FUN_00988f20(local_1a0);
  if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_f4);
  }
  local_e0 = 0xf;
  local_e4 = 0;
  local_f4 = local_f4 & 0xffffff00;
  if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_12c);
  }
  local_118 = 0xf;
  local_11c = 0;
  local_12c = local_12c & 0xffffff00;
  if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_110);
  }
  local_fc = 0xf;
  local_100 = 0;
  local_110 = local_110 & 0xffffff00;
  if (0xf < local_170) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_184[0]);
  }
  local_170 = 0xf;
  local_174 = 0;
  local_184[0] = local_184[0] & 0xffffff00;
  if (0xf < local_1c4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_1d8[0]);
  }
  local_1c4 = 0xf;
  local_1c8 = 0;
  local_1d8[0] = local_1d8[0] & 0xffffff00;
  if (0xf < local_1a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_1bc[0]);
  }
  local_1a8 = 0xf;
  local_1ac = 0;
  local_1bc[0] = local_1bc[0] & 0xffffff00;
  local_c._0_1_ = 0x12;
  if (local_18c < 0x10) {
    local_18c = 0xf;
    local_190 = 0;
    local_1a0[0] = local_1a0[0] & 0xffffff00;
    local_154 = 0xf;
    local_158 = 0;
    local_168[0] = local_168[0] & 0xffffff00;
    FUN_00409350("graphicssettings.cpp",0x14);
    local_c._0_1_ = 0x13;
    local_1e4 = 0xf;
    local_1e8 = 0;
    local_1f8[0] = (undefined4 **)((uint)local_1f8[0] & 0xffffff00);
    FUN_00408ed0(local_148,0,0xffffffff);
    local_c._0_1_ = 0x14;
    uVar4 = FUN_004015b0(local_168,0x304,0x1000);
    local_c._0_1_ = 0x17;
    pppuVar8 = (undefined4 ***)local_1f8[0];
    if (local_1e4 < 0x10) {
      pppuVar8 = local_1f8;
    }
    FUN_00418e30(uVar4,pppuVar8);
    if (0xf < local_1e4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1f8[0]);
    }
    local_1e4 = 0xf;
    local_1e8 = 0;
    local_1f8[0] = (undefined4 **)((uint)local_1f8[0] & 0xffffff00);
    local_c = CONCAT31(local_c._1_3_,0x13);
    FUN_00987ac0(local_60);
    local_60[0] = std::ios_base::vftable;
    FUN_00aad52d(local_60);
    if (0xf < local_154) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_168[0]);
    }
    *param_2 = 0x400;
    param_2[1] = 0x300;
    if (local_134 < 0x10) {
      ExceptionList = local_14;
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_148[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_1a0[0]);
}

