// FUN_00a389c0 @ 00a389c0 body=[[00a389c0, 00a38a3a] [00a38a3e, 00a38abb] [00a38ac0, 00a38c4a] [00a38c4e, 00a38c89] [00a38c8d, 00a38cb7] [00a38cbb, 00a38d31] [00a38d35, 00a38d4d]]


undefined4 * FUN_00a389c0(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  undefined4 *****pppppuVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  uint local_1d0 [4];
  uint local_1c0;
  uint local_1bc;
  uint local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined1 local_1a8;
  undefined4 local_1a4;
  uint local_1a0;
  int local_198;
  uint local_194;
  uint local_184;
  uint local_180;
  uint local_178;
  uint local_168;
  uint local_164;
  undefined4 ****local_15c [5];
  uint local_148;
  undefined1 local_140 [36];
  char local_11c [264];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b48ac0;
  local_14 = ExceptionList;
  bVar3 = false;
  local_1a0 = 0xf;
  local_1a4 = 0;
  local_1b4 = local_1b4 & 0xffffff00;
  ExceptionList = &local_14;
  FUN_00409350(&DAT_00e40748,2);
  local_c = 0;
  FUN_00988f20(&local_1b4);
  if (0xf < local_1a0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_1b4);
  }
  local_1b4 = 0;
  local_1b0 = 0;
  local_1ac = 0;
  local_1a8 = 0;
  local_c = CONCAT31(local_c._1_3_,3);
  pppppuVar4 = (undefined4 *****)local_15c[0];
  if (local_148 < 0x10) {
    pppppuVar4 = local_15c;
  }
  local_198 = FUN_00ab003e(pppppuVar4,local_140);
  if (local_198 == -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    FUN_004097a0(&local_1b4);
  }
  else {
    do {
      if (((byte)local_140._0_4_ & 0x10) == 0x10) {
        pcVar5 = local_11c;
        local_1bc = 0xf;
        local_1c0 = 0;
        local_1d0[0] = local_1d0[0] & 0xffffff00;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(local_11c,(int)pcVar5 - (int)(local_11c + 1));
        local_c._0_1_ = 4;
        local_164 = 0xf;
        local_168 = 0;
        local_178 = local_178 & 0xffffff00;
        FUN_00409350(&DAT_00e3ba40,2);
        uVar2 = local_168;
        uVar7 = local_1c0;
        local_c = CONCAT31(local_c._1_3_,5);
        uVar8 = local_1c0;
        if (local_168 <= local_1c0) {
          uVar8 = local_168;
        }
        iVar6 = FUN_00414bd0(uVar8);
        bVar10 = false;
        if (iVar6 == 0) {
          if (uVar7 < uVar2) {
            uVar7 = 0xffffffff;
          }
          else {
            uVar7 = (uint)(uVar7 != uVar2);
          }
          bVar10 = uVar7 == 0;
        }
        if (bVar10) {
LAB_00a38c28:
          bVar10 = false;
        }
        else {
          local_180 = 0xf;
          local_184 = 0;
          local_194 = local_194 & 0xffffff00;
          FUN_00409350(&DAT_00df8140,1);
          uVar2 = local_184;
          uVar7 = local_1c0;
          bVar3 = true;
          uVar8 = local_1c0;
          if (local_184 <= local_1c0) {
            uVar8 = local_184;
          }
          iVar6 = FUN_00414bd0(uVar8);
          bVar10 = false;
          if (iVar6 == 0) {
            if (uVar7 < uVar2) {
              uVar7 = 0xffffffff;
            }
            else {
              uVar7 = (uint)(uVar7 != uVar2);
            }
            bVar10 = uVar7 == 0;
          }
          if (bVar10) goto LAB_00a38c28;
          bVar10 = true;
        }
        if (bVar3) {
          bVar3 = false;
          if (0xf < local_180) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_194);
          }
          local_180 = 0xf;
          local_184 = 0;
          local_194 = local_194 & 0xffffff00;
        }
        local_c = 4;
        if (0xf < local_164) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_178);
        }
        if (bVar10) {
          FUN_00a3a190(&local_1b4,local_1d0);
        }
        local_c = CONCAT31(local_c._1_3_,3);
        if (0xf < local_1bc) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_1d0[0]);
        }
      }
      iVar6 = local_198;
      iVar9 = FUN_00ab0165(local_198,local_140);
    } while (iVar9 == 0);
    FUN_00ab0293(iVar6);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    uVar7 = local_1b4;
    while (uVar7 != 0) {
      uVar2 = *(uint *)(uVar7 + 0x20);
      FUN_00408db0(uVar7);
      uVar7 = uVar2;
    }
    FUN_004097a0(&local_1b4);
  }
  if (0xf < local_148) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_15c[0]);
  }
  ExceptionList = local_14;
  return param_1;
}

