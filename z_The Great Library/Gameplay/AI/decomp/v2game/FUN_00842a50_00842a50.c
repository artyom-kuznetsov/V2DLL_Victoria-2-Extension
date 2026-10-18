// FUN_00842a50 @ 00842a50  (requested 00842A50, first bytes: 55 8B EC 83 E4 F8 6A FF)


int FUN_00842a50(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  uint uVar8;
  undefined **local_228;
  undefined4 local_224;
  undefined4 local_220;
  int local_21c;
  undefined4 local_218;
  int local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined1 local_208;
  undefined4 local_204;
  uint local_200 [4];
  undefined4 local_1f0;
  uint local_1ec;
  uint local_1e4;
  undefined4 local_1d4;
  uint local_1d0;
  uint local_1c8;
  undefined4 local_1b8;
  uint local_1b4;
  uint local_1ac;
  undefined4 local_19c;
  uint local_198;
  uint local_190;
  undefined4 local_180;
  uint local_17c;
  uint local_174;
  undefined4 local_164;
  uint local_160;
  uint local_158;
  undefined4 local_148;
  uint local_144;
  uint local_128;
  undefined1 local_104 [56];
  undefined1 local_cc [20];
  undefined1 local_b8 [164];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6a284;
  local_14 = ExceptionList;
  if (*(int *)(in_ECX + 0xc) != param_4) {
    iVar7 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_4 * 4);
    if (*(char *)(iVar7 + 0x67c) != '\0') {
      piVar4 = *(int **)(iVar7 + 0x430);
      while (piVar4 != (int *)0x0) {
        iVar1 = *piVar4;
        piVar4 = (int *)piVar4[2];
        if (*(int *)(iVar1 + 0xc) == *(int *)(in_ECX + 0xc)) {
          if (param_1 != 0) {
            ExceptionList = &local_14;
            FUN_009885d0();
            local_c = 1;
            FUN_009885d0();
            local_c._0_1_ = 2;
            FUN_009885d0();
            local_c._0_1_ = 3;
            FUN_009888f0();
            local_c._0_1_ = 4;
            FUN_009a8ee0(local_cc,local_104);
            local_c._0_1_ = 5;
            iVar7 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
            local_c._0_1_ = 6;
            FUN_00988f20();
            local_c._0_1_ = 7;
            FUN_00988f20();
            local_c._0_1_ = 8;
            FUN_00988f20();
            local_c._0_1_ = 9;
            FUN_00448aa0();
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
            local_c = CONCAT31(local_c._1_3_,4);
            FUN_009a9740();
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
          }
          ExceptionList = local_14;
          return 1000;
        }
      }
    }
    piVar4 = *(int **)(iVar7 + 0x4a4);
    local_21c = *(int *)(in_ECX + 0xc);
    do {
      if (piVar4 == (int *)0x0) {
        local_220 = *(undefined4 *)(in_ECX + 8);
        local_210 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
        local_224 = 0x18d;
        local_218 = param_3;
        local_214 = param_4;
        local_208 = 0;
        local_204 = 0;
        local_228 = CAskMilitaryAccessAction::vftable;
        local_c = 0x13;
        ExceptionList = &local_14;
        local_20c = local_210;
        iVar7 = FUN_0083db20(&local_228,param_3,param_4,0,0,param_1,param_2);
        ExceptionList = local_14;
        return iVar7;
      }
      iVar7 = *piVar4;
      piVar4 = (int *)piVar4[2];
    } while (*(int *)(iVar7 + 0xc) != local_21c);
    if (param_1 != 0) {
      ExceptionList = &local_14;
      FUN_009885d0();
      local_c = 10;
      FUN_009885d0();
      local_c._0_1_ = 0xb;
      FUN_009885d0();
      local_c._0_1_ = 0xc;
      FUN_009888f0();
      local_c._0_1_ = 0xd;
      FUN_009a8ee0(local_b8,local_200);
      local_c._0_1_ = 0xe;
      iVar7 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
      local_c._0_1_ = 0xf;
      FUN_00988f20();
      local_c._0_1_ = 0x10;
      FUN_00988f20();
      local_c._0_1_ = 0x11;
      FUN_00988f20();
      local_c._0_1_ = 0x12;
      FUN_00448aa0();
      if (0xf < local_17c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_17c = 0xf;
      local_180 = 0;
      local_190 = local_190 & 0xffffff00;
      if (0xf < local_144) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_144 = 0xf;
      local_148 = 0;
      local_158 = local_158 & 0xffffff00;
      if (0xf < local_198) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_198 = 0xf;
      local_19c = 0;
      local_1ac = local_1ac & 0xffffff00;
      if (0xf < local_160) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_160 = 0xf;
      local_164 = 0;
      local_174 = local_174 & 0xffffff00;
      local_c = CONCAT31(local_c._1_3_,0xd);
      FUN_009a9740();
      if (0xf < local_1b4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1b4 = 0xf;
      local_1b8 = 0;
      local_1c8 = local_1c8 & 0xffffff00;
      if (0xf < local_1ec) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1ec = 0xf;
      local_1f0 = 0;
      local_200[0] = local_200[0] & 0xffffff00;
      if (0xf < local_1d0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1d0 = 0xf;
      local_1d4 = 0;
      local_1e4 = local_1e4 & 0xffffff00;
      if (0xf < local_128) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    ExceptionList = local_14;
    return -1000;
  }
  iVar7 = *(int *)(DAT_012587e4 + 4);
  if ((*(char *)(*(int *)(iVar7 + *(int *)(in_ECX + 0x14) * 4) + 0x67c) != '\0') &&
     (*(int *)(*(int *)(*(int *)(*(int *)(iVar7 + *(int *)(in_ECX + 0x14) * 4) + 0xbe8) +
                       *(int *)(in_ECX + 0xc) * 4) + 0x20) == 0)) {
    iVar1 = *(int *)(iVar7 + *(int *)(in_ECX + 0x14) * 4);
    uVar2 = *(uint *)(iVar1 + 0xda8);
    uVar5 = uVar2;
    while ((uVar8 = uVar5, uVar2 <= uVar8 && (uVar8 < *(uint *)(iVar1 + 0xdac)))) {
      iVar6 = *(int *)(iVar7 + param_4 * 4);
      iVar3 = *(int *)(iVar6 + 0xd8c);
      iVar6 = *(int *)(iVar6 + 0xd88);
      uVar5 = uVar8 + 8;
      if (iVar6 != iVar3) {
        do {
          if (*(int *)(iVar6 + 4) == *(int *)(uVar8 + 4)) break;
          iVar6 = iVar6 + 8;
        } while (iVar6 != iVar3);
        if (iVar6 != iVar3) {
          ExceptionList = &local_14;
          FUN_00832280(*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0x14),param_3,param_4
                      );
          local_c = 0;
          iVar7 = FUN_0083db20(&local_228,param_3,param_4,0,1,0,0);
          ExceptionList = local_14;
          return iVar7 + -0x1e;
        }
      }
    }
  }
  return 0;
}

