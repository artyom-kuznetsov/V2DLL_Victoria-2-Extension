// FUN_0091b1d0 @ 0091b1d0 body=[[0091b1d0, 0091b34d] [0091b350, 0091b7c6] [0091b7ca, 0091b9fd] [0091ba00, 0091bc17] [0091bc1b, 0091c1f6] [0091c200, 0091c429] [0091c430, 0091c44c] [0091c450, 0091c67f] [0091c683, 0091c76e] [0091c772, 0091c844] [0091c848, 0091c8c5] [0091c8c9, 0091c8e7] [0091c8eb, 0091c8f7] [0091c8fb, 0091c913]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_0091b1d0(undefined4 *param_1)

{
  uint *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  char cVar49;
  int iVar50;
  int iVar51;
  undefined4 *puVar52;
  uint uVar53;
  int iVar54;
  int *piVar55;
  undefined4 uVar56;
  int in_ECX;
  undefined4 *puVar57;
  int iVar58;
  int *piVar59;
  undefined4 *puVar60;
  int iVar61;
  uint uVar62;
  undefined1 *puVar63;
  undefined1 *puVar64;
  undefined4 *puVar66;
  int iVar67;
  undefined8 uVar68;
  uint uStack_150;
  undefined8 uStack_14c;
  undefined8 local_144;
  uint local_120 [4];
  undefined4 local_110;
  uint local_10c;
  uint local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  undefined **local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 *local_bc;
  undefined4 local_b8;
  uint local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  uint local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  int *local_90;
  undefined1 *local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 *local_74;
  undefined4 *local_70;
  undefined4 local_6c;
  undefined4 *local_64;
  undefined4 *local_60;
  undefined4 local_5c;
  undefined1 *local_54;
  undefined4 local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  int local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  bool local_12;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  undefined4 *puVar65;
  
  puStack_c = &LAB_00bb8738;
  local_10 = ExceptionList;
  iVar51 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
  if (iVar51 == 0) {
    return;
  }
  local_38 = *(undefined4 *)(in_ECX + 8);
  local_34 = *(undefined1 **)(in_ECX + 0xc);
  local_48 = *(undefined4 *)(in_ECX + 0x10);
  local_44 = *(undefined1 **)(in_ECX + 0x14);
  if (*(char *)(in_ECX + 0x30) == '\0') {
    local_38 = *(undefined4 *)(in_ECX + 0x10);
    local_34 = *(undefined1 **)(in_ECX + 0x14);
    local_48 = *(undefined4 *)(in_ECX + 8);
    local_44 = *(undefined1 **)(in_ECX + 0xc);
  }
  local_64 = (undefined4 *)0x0;
  local_60 = (undefined4 *)0x0;
  local_5c = 0;
  local_74 = (undefined4 *)0x0;
  local_70 = (undefined4 *)0x0;
  local_6c = 0;
  local_8 = 1;
  local_144._4_4_ = (undefined1 **)0x91b268;
  ExceptionList = &local_10;
  local_2c = in_ECX;
  local_20 = iVar51;
  FUN_004d61d0();
  local_144._4_4_ = (undefined1 **)0x91b273;
  FUN_004d61d0();
  local_144._4_4_ = (undefined1 **)0x91b280;
  iVar50 = FUN_00425a40();
  local_11 = *(undefined1 **)(iVar50 + 4) == local_34;
  if (!(bool)local_11) {
    if (local_74 != local_70) {
      puVar52 = local_74;
      do {
        if (puVar52[1] == *(int *)(iVar51 + 0x18)) {
          if (puVar52 != local_70) goto LAB_0091b3d8;
          break;
        }
        puVar52 = puVar52 + 2;
      } while (puVar52 != local_70);
    }
    local_144._4_4_ = (undefined1 **)0x91b3d2;
    FUN_004d61d0();
LAB_0091b3d8:
    puVar52 = local_70;
    uVar53 = *(uint *)(iVar51 + 0x2c);
    puVar60 = local_74;
LAB_0091b3db:
    do {
      if ((uVar53 < *(uint *)(local_20 + 0x2c)) || (*(uint *)(local_20 + 0x30) <= uVar53))
      goto LAB_0091b426;
      uVar62 = uVar53 + 8;
      if (puVar60 == puVar52) {
LAB_0091b416:
        local_144._4_4_ = (undefined1 **)0x91b41e;
        FUN_004d61d0();
        puVar52 = local_70;
        uVar53 = uVar62;
        puVar60 = local_74;
      }
      else {
        puVar57 = puVar60;
        do {
          if (puVar57[1] == *(int *)(uVar53 + 4)) {
            uVar53 = uVar62;
            if (puVar57 == puVar52) goto LAB_0091b416;
            goto LAB_0091b3db;
          }
          puVar57 = puVar57 + 2;
        } while (puVar57 != puVar52);
        local_144._4_4_ = (undefined1 **)0x91b40a;
        FUN_004d61d0();
        puVar52 = local_70;
        uVar53 = uVar62;
        puVar60 = local_74;
      }
    } while( true );
  }
  if (local_64 != local_60) {
    puVar52 = local_64;
    do {
      if (puVar52[1] == *(int *)(iVar51 + 0x18)) {
        if (puVar52 != local_60) goto LAB_0091b2c6;
        break;
      }
      puVar52 = puVar52 + 2;
    } while (puVar52 != local_60);
  }
  local_144._4_4_ = (undefined1 **)0x91b2c0;
  FUN_004d61d0();
LAB_0091b2c6:
  puVar52 = local_60;
  uVar53 = *(uint *)(iVar51 + 0x2c);
  puVar60 = local_64;
LAB_0091b2c9:
  do {
    if ((uVar53 < *(uint *)(local_20 + 0x2c)) || (*(uint *)(local_20 + 0x30) <= uVar53))
    goto LAB_0091b314;
    uVar62 = uVar53 + 8;
    if (puVar60 == puVar52) {
LAB_0091b304:
      local_144._4_4_ = (undefined1 **)0x91b30c;
      FUN_004d61d0();
      puVar52 = local_60;
      uVar53 = uVar62;
      puVar60 = local_64;
    }
    else {
      puVar57 = puVar60;
      do {
        if (puVar57[1] == *(int *)(uVar53 + 4)) {
          uVar53 = uVar62;
          if (puVar57 == puVar52) goto LAB_0091b304;
          goto LAB_0091b2c9;
        }
        puVar57 = puVar57 + 2;
      } while (puVar57 != puVar52);
      local_144._4_4_ = (undefined1 **)0x91b2f8;
      FUN_004d61d0();
      puVar52 = local_60;
      uVar53 = uVar62;
      puVar60 = local_64;
    }
  } while( true );
LAB_0091b426:
  if (local_64 != local_60) {
    puVar52 = local_64;
    do {
      if (puVar52[1] == *(int *)(local_20 + 0x20)) {
        if (puVar52 != local_60) goto LAB_0091b45e;
        break;
      }
      puVar52 = puVar52 + 2;
    } while (puVar52 != local_60);
  }
  local_144._4_4_ = (undefined1 **)0x91b458;
  FUN_004d61d0();
LAB_0091b45e:
  puVar52 = local_60;
  uVar53 = *(uint *)(local_20 + 0x3c);
  puVar60 = local_64;
LAB_0091b464:
  do {
    if ((uVar53 < *(uint *)(local_20 + 0x3c)) || (*(uint *)(local_20 + 0x40) <= uVar53))
    goto LAB_0091b4b0;
    uVar62 = uVar53 + 8;
    if (puVar60 == puVar52) {
LAB_0091b4a0:
      local_144._4_4_ = (undefined1 **)0x91b4a8;
      FUN_004d61d0();
      puVar52 = local_60;
      uVar53 = uVar62;
      puVar60 = local_64;
    }
    else {
      puVar57 = puVar60;
      do {
        if (puVar57[1] == *(int *)(uVar53 + 4)) {
          uVar53 = uVar62;
          if (puVar57 == puVar52) goto LAB_0091b4a0;
          goto LAB_0091b464;
        }
        puVar57 = puVar57 + 2;
      } while (puVar57 != puVar52);
      local_144._4_4_ = (undefined1 **)0x91b494;
      FUN_004d61d0();
      puVar52 = local_60;
      uVar53 = uVar62;
      puVar60 = local_64;
    }
  } while( true );
LAB_0091b314:
  if (local_74 != local_70) {
    puVar52 = local_74;
    do {
      if (puVar52[1] == *(int *)(local_20 + 0x20)) {
        if (puVar52 != local_70) goto LAB_0091b349;
        break;
      }
      puVar52 = puVar52 + 2;
    } while (puVar52 != local_70);
  }
  local_144._4_4_ = (undefined1 **)0x91b340;
  FUN_004d61d0();
LAB_0091b349:
  puVar52 = local_70;
  uVar53 = *(uint *)(local_20 + 0x3c);
  puVar60 = local_74;
LAB_0091b353:
  do {
    if ((uVar53 < *(uint *)(local_20 + 0x3c)) || (*(uint *)(local_20 + 0x40) <= uVar53))
    goto LAB_0091b4b0;
    uVar62 = uVar53 + 8;
    if (puVar60 == puVar52) {
LAB_0091b396:
      local_144._4_4_ = (undefined1 **)0x91b39e;
      FUN_004d61d0();
      puVar52 = local_70;
      uVar53 = uVar62;
      puVar60 = local_74;
    }
    else {
      puVar57 = puVar60;
      do {
        if (puVar57[1] == *(int *)(uVar53 + 4)) {
          uVar53 = uVar62;
          if (puVar57 == puVar52) goto LAB_0091b396;
          goto LAB_0091b353;
        }
        puVar57 = puVar57 + 2;
      } while (puVar57 != puVar52);
      local_144._4_4_ = (undefined1 **)0x91b38a;
      FUN_004d61d0();
      puVar52 = local_70;
      uVar53 = uVar62;
      puVar60 = local_74;
    }
  } while( true );
code_r0x0091b8d6:
  if (*(int *)(iVar58 + 0x124) < 0) {
    *(undefined4 *)(iVar58 + 0x120) = 0;
    *(undefined4 *)(iVar58 + 0x124) = 0;
  }
  if ((-1 < *(int *)(iVar58 + 0x124)) &&
     ((0 < *(int *)(iVar58 + 0x124) || (0x50000 < *(uint *)(iVar58 + 0x120))))) {
LAB_0091b906:
    *(undefined4 *)(iVar58 + 0x120) = 0x50000;
    *(undefined4 *)(iVar58 + 0x124) = 0;
  }
  goto joined_r0x0091b854;
code_r0x0091c328:
  piVar55 = (int *)piVar55[2];
  if (piVar55 == (int *)0x0) goto LAB_0091c3f0;
  goto LAB_0091c320;
code_r0x0091c458:
  piVar55 = (int *)piVar55[2];
  if (piVar55 == (int *)0x0) goto LAB_0091c525;
  goto LAB_0091c450;
LAB_0091b4b0:
  local_12 = local_11 == '\0';
  iVar51 = *(int *)(local_2c + 0x68) - *(int *)(local_2c + 100) >> 6;
  if (0 < iVar51) {
    piVar55 = *(int **)(local_2c + 0x44);
    do {
      if (*piVar55 != 0) {
        local_12 = true;
      }
      piVar55 = piVar55 + 1;
      iVar51 = iVar51 + -1;
    } while (iVar51 != 0);
  }
  iVar51 = *(int *)(DAT_012586dc + 0x30);
  local_40 = *(undefined1 **)(iVar51 + 0x508);
  local_88 = *(undefined1 **)(iVar51 + 0x50c);
  local_30 = *(int *)(iVar51 + 0x510);
  if (local_12 == false) {
    if (local_11 == '\0') {
      local_144._4_4_ = (undefined1 **)0x91b52e;
      puVar52 = (undefined4 *)FUN_00425a40();
      local_50 = *puVar52;
      goto LAB_0091b53f;
    }
  }
  else if (local_11 != '\0') {
    local_144._4_4_ = (undefined1 **)0x91b51e;
    puVar52 = (undefined4 *)FUN_00425a40();
    local_50 = *puVar52;
    goto LAB_0091b53f;
  }
  local_144._4_4_ = (undefined1 **)0x91b53a;
  puVar52 = (undefined4 *)FUN_00425ac0();
  local_50 = *puVar52;
LAB_0091b53f:
  iVar51 = puVar52[1];
  local_144._4_4_ = (undefined1 **)0x91b552;
  local_4c = (undefined1 *)iVar51;
  FUN_00425ac0();
  local_144._4_4_ = (undefined1 **)0x91b55f;
  iVar50 = FUN_00425ac0();
  puVar64 = local_34;
  if (iVar51 == *(int *)(iVar50 + 4)) {
    local_144._4_4_ = (undefined1 **)0x91b571;
    puVar52 = (undefined4 *)FUN_00425a40();
    local_38 = *puVar52;
    puVar64 = (undefined1 *)puVar52[1];
  }
  iVar51 = DAT_012587e4;
  *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + (int)puVar64 * 4) + 0x80) =
       *(int *)(DAT_012588e8 + 0xb0c) + 0xab18;
  local_54 = (undefined1 *)(*(int *)(local_2c + 0x68) - *(int *)(local_2c + 100) >> 6);
  local_28 = 0;
  if (0 < (int)local_54) {
    local_24 = (undefined4 *)0x0;
    do {
      iVar51 = local_28;
      if (local_11 == '\0') {
        local_144._4_4_ = (undefined1 **)0x91b5e4;
        puVar52 = (undefined4 *)FUN_00425ac0();
      }
      else {
        local_144._4_4_ = (undefined1 **)0x91b5d7;
        puVar52 = (undefined4 *)FUN_00425a40();
      }
      local_98 = *puVar52;
      iVar50 = *(int *)(local_2c + 100);
      local_d0 = *(undefined4 *)((int)local_24 + iVar50 + 8);
      local_cc = *(int *)((int)local_24 + iVar50 + 0xc);
      local_c8 = *(undefined4 *)((int)local_24 + iVar50 + 0x10);
      local_c4 = *(undefined4 *)((int)local_24 + iVar50 + 0x14);
      local_c0 = *(undefined4 *)((int)local_24 + iVar50 + 0x18);
      iVar54 = puVar52[1];
      local_bc = *(undefined1 **)((int)local_24 + iVar50 + 0x1c);
      local_b8 = *(undefined4 *)((int)local_24 + iVar50 + 0x20);
      local_b4 = *(uint *)((int)local_24 + iVar50 + 0x24);
      local_b0 = *(undefined4 *)((int)local_24 + iVar50 + 0x28);
      local_ac = *(undefined4 *)((int)local_24 + iVar50 + 0x2c);
      local_a8 = *(undefined4 *)((int)local_24 + iVar50 + 0x30);
      local_a4 = *(undefined4 *)((int)local_24 + iVar50 + 0x34);
      local_9c = *(undefined4 *)((int)local_24 + iVar50 + 0x3c);
      local_d4 = 0x18d;
      local_d8 = CWarGoal::vftable;
      local_a0 = CONCAT31(local_a0._1_3_,*(undefined1 *)((int)local_24 + iVar50 + 0x38));
      local_94 = iVar54;
      if (*(int *)(*(int *)(local_2c + 0x44) + iVar51 * 4) == 0) {
        iVar51 = *(int *)(DAT_012586dc + 0x30);
        local_1c = *(int *)(iVar51 + 0x518);
        iVar50 = *(int *)(iVar51 + 0x2e0);
        local_38 = *puVar52;
        iVar54 = *(int *)(DAT_012587e4 + 4);
        iVar58 = *(int *)(iVar54 + puVar52[1] * 4);
        uStack_14c = (longlong)
                     (*(int *)(iVar58 + 0xea0) + *(int *)(*(int *)(iVar58 + 0xbcc) + 0x28c)) *
                     (longlong)-*(int *)(iVar51 + 0x2e4);
        local_144._4_4_ = (undefined1 **)0x0;
        local_144._0_4_ = (undefined ***)0x3e8;
        uStack_150 = 0x91b6f9;
        iVar51 = __alldiv();
        if (iVar51 < -iVar50) {
          iVar51 = -iVar50;
        }
        uStack_14c = (longlong)*(int *)(local_cc + 0x100) * (longlong)iVar51;
        local_144._4_4_ = (undefined1 **)0x0;
        local_144._0_4_ = (undefined ***)0x3e8;
        uStack_150 = 0x91b71d;
        iVar51 = __alldiv();
        uStack_14c = (longlong)-iVar51 * (longlong)local_1c;
        local_144._4_4_ = (undefined1 **)0x0;
        local_144._0_4_ = (undefined ***)0x3e8;
        uStack_150 = 0x91b72f;
        iVar50 = __alldiv();
        local_38 = *puVar52;
        iVar51 = *(int *)(iVar54 + puVar52[1] * 4);
        if (0 < iVar50) {
          uStack_14c = (longlong)(*(int *)(*(int *)(iVar51 + 0xbcc) + 0x288) + 1000) *
                       (longlong)iVar50;
          local_144._4_4_ = (undefined1 **)0x0;
          local_144._0_4_ = (undefined ***)0x3e8;
          uStack_150 = 0x91b760;
          iVar50 = __alldiv();
        }
        *(int *)(iVar51 + 0xea0) = *(int *)(iVar51 + 0xea0) + iVar50;
        if (*(int *)(iVar51 + 0xea0) < 0) {
          *(undefined4 *)(iVar51 + 0xea0) = 0;
        }
        if (DAT_0131bb34 == 0) {
          local_144._4_4_ = (undefined1 **)0x188;
          local_144._0_4_ = (undefined ***)0x91b78a;
          local_34 = (undefined1 *)FUN_00aae9af();
          local_8._0_1_ = 2;
          if (local_34 == (undefined1 *)0x0) {
            iVar51 = 0;
          }
          else {
            local_144._4_4_ = (undefined1 **)0x91b79f;
            iVar51 = FUN_0041a160();
          }
          iVar50 = DAT_0131bb34;
          local_8 = CONCAT31(local_8._1_3_,3);
          local_34 = (undefined1 *)0x0;
          if ((iVar51 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
            local_144._4_4_ = (undefined1 **)DAT_0131bb34;
            local_144._0_4_ = (undefined ***)0x91b7c1;
            FUN_0096dd80();
            local_144._4_4_ = (undefined1 **)iVar50;
                    /* WARNING: Subroutine does not return */
            local_144._0_4_ = (undefined ***)&UNK_0091b7c7;
            FUN_00aae91b();
          }
          local_8 = CONCAT31(local_8._1_3_,1);
          DAT_0131bb34 = iVar51;
        }
        iVar51 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_94 * 4);
        piVar55 = *(int **)(iVar51 + 0x9d8);
        iVar50 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
        local_84 = iVar50;
        local_80 = iVar51;
        while ((*(int **)(iVar51 + 0x9d8) <= piVar55 && (piVar55 < *(int **)(iVar51 + 0x9dc)))) {
          local_1c = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar55 * 4);
          piVar55 = piVar55 + 1;
          local_90 = piVar55;
          if (0 < iVar50) {
            local_3c = 0;
            local_18 = (undefined4 *)iVar50;
            do {
              iVar54 = *(int *)(local_3c + *(int *)(local_1c + 0x194));
              piVar55 = local_90;
              iVar50 = local_84;
              iVar51 = local_80;
joined_r0x0091b854:
              iVar58 = iVar54;
              local_90 = piVar55;
              local_84 = iVar50;
              local_80 = iVar51;
              if (iVar58 != 0) {
                iVar51 = *(int *)(DAT_012586dc + 0x30);
                uStack_14c = (longlong)*(int *)(iVar51 + 0x2dc) *
                             (longlong)*(int *)(local_cc + 0x100);
                local_144._4_4_ = (undefined1 **)0x0;
                local_144._0_4_ = (undefined ***)0x3e8;
                iVar54 = *(int *)(iVar58 + 0x27c);
                uStack_150 = 0x91b893;
                iVar50 = __alldiv();
                uStack_14c = (longlong)*(int *)(iVar51 + 0x51c) * (longlong)iVar50;
                local_144._4_4_ = (undefined1 **)0x0;
                local_144._0_4_ = (undefined ***)0x3e8;
                uStack_150 = 0x91b8ab;
                uVar53 = __alldiv();
                local_144._4_4_ = (undefined1 **)0x0;
                local_144._0_4_ = (undefined ***)0x1f40000;
                uStack_14c = CONCAT44(((int)uVar53 >> 0x1f) << 0x1e | uVar53 >> 2,uVar53 << 0x1e);
                uStack_150 = 0x91b8c1;
                uVar68 = __alldiv();
                puVar1 = (uint *)(iVar58 + 0x120);
                uVar53 = *puVar1;
                *puVar1 = *puVar1 + (uint)uVar68;
                *(int *)(iVar58 + 0x124) =
                     *(int *)(iVar58 + 0x124) + (int)((ulonglong)uVar68 >> 0x20) +
                     (uint)CARRY4(uVar53,(uint)uVar68);
                piVar55 = local_90;
                iVar50 = local_84;
                iVar51 = local_80;
                if (*(int *)(iVar58 + 0x124) < 1) goto code_r0x0091b8d6;
                goto LAB_0091b906;
              }
              local_3c = local_3c + 0x10;
              local_18 = (undefined4 *)((int)local_18 + -1);
            } while (local_18 != (undefined4 *)0x0);
            local_18 = (undefined4 *)0x0;
          }
        }
      }
      else {
        iVar51 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x518);
        local_144._4_4_ = &local_44;
        local_144._0_4_ = &local_d8;
        uStack_14c = CONCAT44(0x91b964,(undefined4)uStack_14c);
        piVar55 = (int *)FUN_009503d0();
        uStack_14c = (longlong)*piVar55 * (longlong)iVar51;
        local_144._4_4_ = (undefined1 **)0x0;
        local_144._0_4_ = (undefined ***)0x3e8;
        uStack_150 = 0x91b976;
        iVar50 = __alldiv();
        iVar51 = *(int *)(*(int *)(DAT_012587e4 + 4) + iVar54 * 4);
        if (0 < iVar50) {
          uStack_14c = (longlong)(*(int *)(*(int *)(iVar51 + 0xbcc) + 0x288) + 1000) *
                       (longlong)iVar50;
          local_144._4_4_ = (undefined1 **)0x0;
          local_144._0_4_ = (undefined ***)0x3e8;
          uStack_150 = 0x91b9a8;
          iVar50 = __alldiv();
        }
        *(int *)(iVar51 + 0xea0) = *(int *)(iVar51 + 0xea0) + iVar50;
        if (*(int *)(iVar51 + 0xea0) < 0) {
          *(undefined4 *)(iVar51 + 0xea0) = 0;
        }
      }
      local_24 = local_24 + 0x10;
      local_28 = local_28 + 1;
      iVar51 = DAT_012587e4;
    } while (local_28 < (int)local_54);
  }
  local_1c = *(int *)(local_2c + 0x58) - *(int *)(local_2c + 0x54) >> 6;
  local_3c = 0;
  if (0 < local_1c) {
    local_18 = (undefined4 *)0x0;
    do {
      iVar50 = local_2c;
      if (local_11 == '\0') {
        local_144._4_4_ = (undefined1 **)0x91ba24;
        puVar52 = (undefined4 *)FUN_00425a40();
      }
      else {
        local_144._4_4_ = (undefined1 **)0x91ba17;
        puVar52 = (undefined4 *)FUN_00425ac0();
      }
      local_98 = *puVar52;
      local_94 = puVar52[1];
      iVar50 = *(int *)(iVar50 + 0x54) + (int)local_18;
      local_d4 = 0x18d;
      local_d0 = *(undefined4 *)(iVar50 + 8);
      local_cc = *(int *)(iVar50 + 0xc);
      local_c8 = *(undefined4 *)(iVar50 + 0x10);
      local_c4 = *(undefined4 *)(iVar50 + 0x14);
      local_c0 = *(undefined4 *)(iVar50 + 0x18);
      local_bc = *(undefined1 **)(iVar50 + 0x1c);
      local_b8 = *(undefined4 *)(iVar50 + 0x20);
      local_b4 = *(uint *)(iVar50 + 0x24);
      local_b0 = *(undefined4 *)(iVar50 + 0x28);
      local_ac = *(undefined4 *)(iVar50 + 0x2c);
      local_a8 = *(undefined4 *)(iVar50 + 0x30);
      local_a4 = *(undefined4 *)(iVar50 + 0x34);
      local_9c = *(undefined4 *)(iVar50 + 0x3c);
      local_a0 = CONCAT31(local_a0._1_3_,*(undefined1 *)(iVar50 + 0x38));
      local_d8 = CWarGoal::vftable;
      if (*(int *)(*(int *)(local_2c + 0x34) + local_3c * 4) == 0) {
        local_38 = *puVar52;
        iVar50 = *(int *)(DAT_012586dc + 0x30);
        iVar54 = *(int *)(iVar50 + 0x2e0);
        iVar58 = *(int *)(iVar50 + 0x518);
        iVar4 = *(int *)(*(int *)(iVar51 + 4) + puVar52[1] * 4);
        uStack_14c = (longlong)(*(int *)(iVar4 + 0xea0) + *(int *)(*(int *)(iVar4 + 0xbcc) + 0x28c))
                     * (longlong)-*(int *)(iVar50 + 0x2e4);
        local_144._4_4_ = (undefined1 **)0x0;
        local_144._0_4_ = (undefined ***)0x3e8;
        uStack_150 = 0x91bb31;
        iVar50 = __alldiv();
        if (iVar50 < -iVar54) {
          iVar50 = -iVar54;
        }
        uStack_14c = (longlong)iVar50 * (longlong)*(int *)(local_cc + 0x100);
        local_144._4_4_ = (undefined1 **)0x0;
        local_144._0_4_ = (undefined ***)0x3e8;
        uStack_150 = 0x91bb52;
        iVar50 = __alldiv();
        uStack_14c = (longlong)iVar58 * (longlong)-iVar50;
        local_144._4_4_ = (undefined1 **)0x0;
        local_144._0_4_ = (undefined ***)0x3e8;
        uStack_150 = 0x91bb68;
        iVar54 = __alldiv();
        local_144._4_4_ = (undefined1 **)0x91bb75;
        puVar52 = (undefined4 *)FUN_00425a40();
        local_38 = *puVar52;
        iVar50 = *(int *)(*(int *)(iVar51 + 4) + puVar52[1] * 4);
        if (0 < iVar54) {
          uStack_14c = (longlong)(*(int *)(*(int *)(iVar50 + 0xbcc) + 0x288) + 1000) *
                       (longlong)iVar54;
          local_144._4_4_ = (undefined1 **)0x0;
          local_144._0_4_ = (undefined ***)0x3e8;
          uStack_150 = 0x91bba8;
          iVar54 = __alldiv();
        }
        *(int *)(iVar50 + 0xea0) = *(int *)(iVar50 + 0xea0) + iVar54;
        if (*(int *)(iVar50 + 0xea0) < 0) {
          *(undefined4 *)(iVar50 + 0xea0) = 0;
        }
        if (DAT_0131bb34 == 0) {
          local_144._4_4_ = (undefined1 **)0x188;
          local_144._0_4_ = (undefined ***)0x91bbd7;
          local_34 = (undefined1 *)FUN_00aae9af();
          local_8._0_1_ = 4;
          if (local_34 == (undefined1 *)0x0) {
            iVar50 = 0;
          }
          else {
            local_144._4_4_ = (undefined1 **)0x91bbec;
            iVar50 = FUN_0041a160();
          }
          iVar51 = DAT_0131bb34;
          local_8 = CONCAT31(local_8._1_3_,5);
          local_34 = (undefined1 *)0x0;
          if ((iVar50 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
            local_144._4_4_ = (undefined1 **)DAT_0131bb34;
            local_144._0_4_ = (undefined ***)0x91bc12;
            FUN_0096dd80();
            local_144._4_4_ = (undefined1 **)iVar51;
                    /* WARNING: Subroutine does not return */
            local_144._0_4_ = (undefined ***)&UNK_0091bc18;
            FUN_00aae91b();
          }
          local_8 = CONCAT31(local_8._1_3_,1);
          iVar51 = DAT_012587e4;
          DAT_0131bb34 = iVar50;
        }
        iVar50 = *(int *)(*(int *)(iVar51 + 4) + local_94 * 4);
        piVar55 = *(int **)(iVar50 + 0x9d8);
        iVar54 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
        local_84 = iVar54;
        local_80 = iVar50;
        while ((*(int **)(iVar50 + 0x9d8) <= piVar55 && (piVar55 < *(int **)(iVar50 + 0x9dc)))) {
          local_54 = *(undefined1 **)(*(int *)(DAT_012588e8 + 0xacc) + *piVar55 * 4);
          piVar55 = piVar55 + 1;
          local_90 = piVar55;
          if (0 < iVar54) {
            local_24 = (undefined4 *)0x0;
            local_28 = iVar54;
            do {
              iVar58 = *(int *)((int)local_24 + *(int *)((int)local_54 + 0x194));
              iVar51 = DAT_012587e4;
              piVar55 = local_90;
              iVar54 = local_84;
              iVar50 = local_80;
              while (DAT_012587e4 = iVar51, local_90 = piVar55, local_84 = iVar54, local_80 = iVar50
                    , iVar58 != 0) {
                iVar51 = *(int *)(DAT_012586dc + 0x30);
                uStack_14c = (longlong)*(int *)(iVar51 + 0x2dc) *
                             (longlong)*(int *)(local_cc + 0x100);
                local_144._4_4_ = (undefined1 **)0x0;
                local_144._0_4_ = (undefined ***)0x3e8;
                iVar58 = *(int *)(iVar58 + 0x27c);
                uStack_150 = 0x91bce3;
                iVar50 = __alldiv();
                uStack_14c = (longlong)*(int *)(iVar51 + 0x51c) * (longlong)iVar50;
                local_144._4_4_ = (undefined1 **)0x0;
                local_144._0_4_ = (undefined ***)0x3e8;
                uStack_150 = 0x91bcfb;
                uVar53 = __alldiv();
                local_34 = (undefined1 *)&local_144;
                uStack_150 = ((int)uVar53 >> 0x1f) << 0x1e | uVar53 >> 2;
                uStack_14c = 0x1f40000;
                local_144 = __alldiv(uVar53 << 0x1e);
                uStack_14c = CONCAT44(0x91bd25,(undefined4)uStack_14c);
                FUN_0095fbf0();
                iVar51 = DAT_012587e4;
                piVar55 = local_90;
                iVar54 = local_84;
                iVar50 = local_80;
              }
              local_24 = local_24 + 4;
              local_28 = local_28 + -1;
            } while (local_28 != 0);
            local_28 = 0;
          }
        }
      }
      else {
        iVar51 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x518);
        local_144._4_4_ = &local_44;
        local_144._0_4_ = &local_d8;
        uStack_14c = CONCAT44(0x91bd71,(undefined4)uStack_14c);
        piVar55 = (int *)FUN_009503d0();
        uStack_14c = (longlong)*piVar55 * (longlong)iVar51;
        local_144._4_4_ = (undefined1 **)0x0;
        local_144._0_4_ = (undefined ***)0x3e8;
        uStack_150 = 0x91bd83;
        iVar54 = __alldiv();
        iVar51 = DAT_012587e4;
        iVar50 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_94 * 4);
        if (0 < iVar54) {
          uStack_14c = (longlong)(*(int *)(*(int *)(iVar50 + 0xbcc) + 0x288) + 1000) *
                       (longlong)iVar54;
          local_144._4_4_ = (undefined1 **)0x0;
          local_144._0_4_ = (undefined ***)0x3e8;
          uStack_150 = 0x91bdbc;
          iVar54 = __alldiv();
        }
        *(int *)(iVar50 + 0xea0) = *(int *)(iVar50 + 0xea0) + iVar54;
        if (*(int *)(iVar50 + 0xea0) < 0) {
          *(undefined4 *)(iVar50 + 0xea0) = 0;
        }
      }
      local_18 = (undefined4 *)((int)local_18 + 0x40);
      local_3c = local_3c + 1;
    } while (local_3c < local_1c);
  }
  uStack_14c = (longlong)
               (((int)((double)((*(int *)(DAT_012588e8 + 0xb0c) + -43800000) / 0x18) / 365.0) -
                (int)((double)((*(int *)(DAT_012586dc + 8) + -43800000) / 0x18) / 365.0)) * 1000) *
               (longlong)(int)local_88;
  local_144._4_4_ = (undefined1 **)0x0;
  local_144._0_4_ = (undefined ***)0x3e8;
  uStack_150 = 0x91be71;
  local_1c = __alldiv();
  local_1c = local_1c + (int)local_40;
  if (local_12 == false) {
    local_20 = (int)local_70 - (int)local_74 >> 3;
    if (0 < local_20) {
      local_24 = local_74;
      local_28 = local_20;
      do {
        local_44 = (undefined1 *)local_24[1];
        local_48 = *local_24;
        local_34 = (undefined1 *)((int)&local_144 + 4);
        local_144._4_4_ = (undefined1 **)local_1c;
        local_144._0_4_ = (undefined ***)0x91c035;
        FUN_005341a0();
        iVar51 = *(int *)(local_2c + 0x58) - *(int *)(local_2c + 0x54) >> 6;
        local_12 = false;
        if (iVar51 < 1) {
LAB_0091c0a0:
          local_144._4_4_ = (undefined1 **)local_30;
        }
        else {
          local_18 = (undefined4 *)0x0;
          iVar50 = 0;
          do {
            local_144._4_4_ = (undefined1 **)0x91c064;
            FUN_0094be20();
            if ((*(int *)(*(int *)(local_2c + 0x34) + iVar50 * 4) == 0) && (local_bc == local_44)) {
              local_12 = true;
            }
            local_18 = (undefined4 *)((int)local_18 + 0x40);
            iVar50 = iVar50 + 1;
          } while (iVar50 < iVar51);
          if (local_12 == false) goto LAB_0091c0a0;
          local_144._4_4_ = (undefined1 **)-local_30;
        }
        local_34 = (undefined1 *)((int)&local_144 + 4);
        local_144._0_4_ = (undefined ***)0x91c0bc;
        FUN_005179e0();
        local_24 = local_24 + 2;
        local_28 = local_28 + -1;
      } while (local_28 != 0);
    }
    local_3c = (int)local_60 - (int)local_64 >> 3;
    if (0 < local_3c) {
      local_40 = (undefined1 *)-local_30;
      puVar52 = local_64;
      local_1c = local_3c;
      do {
        local_7c = *puVar52;
        local_34 = (undefined1 *)((int)&local_144 + 4);
        local_144._4_4_ = (undefined1 **)local_40;
        local_144._0_4_ = (undefined ***)0x91c10e;
        FUN_005179e0();
        puVar52 = puVar52 + 2;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
  }
  else {
    local_3c = (int)local_60 - (int)local_64 >> 3;
    if (0 < local_3c) {
      local_24 = local_64;
      local_28 = local_3c;
      do {
        local_48 = *local_24;
        local_44 = (undefined1 *)local_24[1];
        if (local_44 != *(undefined1 **)(local_20 + 0x18)) {
          local_7c = *local_24;
          iVar50 = *(int *)(*(int *)(iVar51 + 4) + local_24[1] * 4);
          iVar54 = local_1c;
          if (0 < local_1c) {
            uStack_14c = (longlong)(*(int *)(*(int *)(iVar50 + 0xbcc) + 0x288) + 1000) *
                         (longlong)local_1c;
            local_144._4_4_ = (undefined1 **)0x0;
            local_144._0_4_ = (undefined ***)0x3e8;
            uStack_150 = 0x91beee;
            iVar54 = __alldiv();
          }
          *(int *)(iVar50 + 0xea0) = *(int *)(iVar50 + 0xea0) + iVar54;
          if (*(int *)(iVar50 + 0xea0) < 0) {
            *(undefined4 *)(iVar50 + 0xea0) = 0;
          }
        }
        iVar54 = 0;
        iVar50 = *(int *)(local_2c + 0x68) - *(int *)(local_2c + 100) >> 6;
        local_12 = false;
        if (iVar50 < 1) {
LAB_0091bf70:
          local_144._4_4_ = (undefined1 **)local_30;
        }
        else {
          local_18 = (undefined4 *)0x0;
          do {
            local_144._4_4_ = (undefined1 **)0x91bf34;
            FUN_0094be20();
            if ((*(int *)(*(int *)(local_2c + 0x44) + iVar54 * 4) == 0) && (local_bc == local_44)) {
              local_12 = true;
            }
            local_18 = (undefined4 *)((int)local_18 + 0x40);
            iVar54 = iVar54 + 1;
          } while (iVar54 < iVar50);
          if (local_12 == false) goto LAB_0091bf70;
          local_144._4_4_ = (undefined1 **)-local_30;
        }
        local_34 = (undefined1 *)((int)&local_144 + 4);
        local_144._0_4_ = (undefined ***)0x91bf8c;
        FUN_005179e0();
        local_24 = local_24 + 2;
        local_28 = local_28 + -1;
      } while (local_28 != 0);
    }
    local_20 = (int)local_70 - (int)local_74 >> 3;
    if (0 < local_20) {
      local_40 = (undefined1 *)-local_30;
      puVar52 = local_74;
      local_28 = local_20;
      do {
        local_7c = *puVar52;
        local_34 = (undefined1 *)((int)&local_144 + 4);
        local_144._4_4_ = (undefined1 **)local_40;
        local_144._0_4_ = (undefined ***)0x91bfe7;
        FUN_005179e0();
        puVar52 = puVar52 + 2;
        local_28 = local_28 + -1;
      } while (local_28 != 0);
      local_28 = 0;
    }
  }
  iVar51 = local_2c;
  local_144._4_4_ = (undefined1 **)local_120;
  local_144._0_4_ = (undefined ***)0x91c12a;
  FUN_00929480();
  iVar50 = 0;
  local_8 = CONCAT31(local_8._1_3_,6);
  local_11 = '\0';
  local_24 = (undefined4 *)0x0;
  local_30 = 0;
  local_144._0_4_ = (undefined ***)0x91c13f;
  FUN_0092ab70();
  local_18 = (undefined4 *)0x0;
  iVar54 = *(int *)(iVar51 + 0x68) - *(int *)(iVar51 + 100) >> 6;
  if (0 < iVar54) {
    do {
      iVar58 = *(int *)(iVar51 + 100) + iVar50;
      for (piVar55 = *(int **)(*(int *)(*(int *)(iVar51 + 100) + 0xc + iVar50) + 0x120);
          piVar55 != (int *)0x0; piVar55 = (int *)piVar55[2]) {
        if (*piVar55 == 0x8a1) {
          local_7c = *(undefined4 *)(iVar58 + 0x20);
          local_24 = (undefined4 *)
                     ((int)local_24 +
                     *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar58 + 0x24) * 4) +
                             0xe4c));
          goto LAB_0091c1cb;
        }
      }
      if (*(int *)(*(int *)(iVar51 + 0x44) + (int)local_18 * 4) == 0) {
LAB_0091c1a1:
        local_144._0_4_ = (undefined ***)(*(int *)(iVar51 + 100) + iVar50);
        uStack_14c = CONCAT44(0x91c1ac,(undefined4)uStack_14c);
        FUN_00951ed0();
      }
      else {
        local_144._0_4_ = (undefined ***)0x0;
        uStack_14c = 0;
        uStack_150 = 0x91c18c;
        cVar49 = FUN_00952850();
        if (cVar49 == '\0') goto LAB_0091c1a1;
        local_144._0_4_ = (undefined ***)(*(int *)(iVar51 + 100) + iVar50);
        uStack_14c = CONCAT44(0x91c19b,(undefined4)uStack_14c);
        FUN_0094e660();
        local_11 = '\x01';
      }
LAB_0091c1cb:
      local_18 = (undefined4 *)((int)local_18 + 1);
      iVar50 = iVar50 + 0x40;
    } while ((int)local_18 < iVar54);
  }
  iVar50 = *(int *)(iVar51 + 0x58) - *(int *)(iVar51 + 0x54) >> 6;
  local_1c = 0;
  if (0 < iVar50) {
    iVar54 = 0;
    do {
      iVar58 = *(int *)(iVar51 + 0x54) + iVar54;
      for (piVar55 = *(int **)(*(int *)(*(int *)(iVar51 + 0x54) + 0xc + iVar54) + 0x120);
          piVar55 != (int *)0x0; piVar55 = (int *)piVar55[2]) {
        if (*piVar55 == 0x8a1) {
          local_7c = *(undefined4 *)(iVar58 + 0x20);
          local_30 = local_30 +
                     *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar58 + 0x24) * 4) +
                             0xe4c);
          goto LAB_0091c276;
        }
      }
      if (*(int *)(*(int *)(iVar51 + 0x34) + local_1c * 4) == 0) {
LAB_0091c24b:
        local_144._0_4_ = (undefined ***)(*(int *)(iVar51 + 0x54) + iVar54);
        uStack_14c = CONCAT44(0x91c256,(undefined4)uStack_14c);
        FUN_00951ed0();
      }
      else {
        local_144._0_4_ = (undefined ***)0x0;
        uStack_14c = 0;
        uStack_150 = 0x91c236;
        cVar49 = FUN_00952850();
        if (cVar49 == '\0') goto LAB_0091c24b;
        local_144._0_4_ = (undefined ***)(*(int *)(iVar51 + 0x54) + iVar54);
        uStack_14c = CONCAT44(0x91c245,(undefined4)uStack_14c);
        FUN_0094e660();
        local_11 = '\x01';
      }
LAB_0091c276:
      local_1c = local_1c + 1;
      iVar54 = iVar54 + 0x40;
    } while (local_1c < iVar50);
  }
  puVar52 = local_24;
  local_144._0_4_ = (undefined ***)0x91c296;
  local_88 = (undefined1 *)((int)&local_144 + (int)local_24 * -4 + 4);
  iVar5 = (int)local_24 * -0xc;
  iVar61 = (int)local_24 * -0xc;
  iVar28 = (int)local_24 * -0xc;
  iVar29 = (int)local_24 * -0xc;
  iVar30 = (int)local_24 * -0xc;
  iVar31 = (int)local_24 * -0xc;
  iVar32 = (int)local_24 * -0xc;
  iVar33 = (int)local_24 * -0xc;
  iVar34 = (int)local_24 * -0xc;
  iVar35 = (int)local_24 * -0xc;
  iVar36 = (int)local_24 * -0xc;
  iVar37 = (int)local_24 * -0xc;
  iVar38 = (int)local_24 * -0xc;
  iVar39 = (int)local_24 * -0xc;
  iVar40 = (int)local_24 * -0xc;
  iVar41 = (int)local_24 * -0xc;
  iVar27 = (int)local_24 * -0xc;
  iVar42 = (int)local_24 * -0xc;
  iVar43 = (int)local_24 * -0xc;
  iVar44 = (int)local_24 * -0xc;
  iVar45 = (int)local_24 * -0xc;
  iVar46 = (int)local_24 * -0xc;
  iVar47 = (int)local_24 * -0xc;
  *(undefined4 *)((int)&local_144 + (int)local_24 * -4) = 0x91c2a3;
  local_40 = (undefined1 *)((int)&local_144 + (int)local_24 * -8 + 4);
  *(undefined4 *)(&local_144 + -(int)local_24) = 0x91c2ad;
  iVar48 = local_30;
  local_18 = (undefined4 *)0x0;
  local_54 = (undefined1 *)((int)&local_144 + (int)local_24 * -0xc + 4);
  *(undefined4 *)((int)&local_144 + (int)local_24 * -0xc) = 0x91c2c3;
  local_44 = (undefined1 *)((int)&local_144 + local_30 * -4 + (int)local_24 * -0xc + 4);
  iVar6 = local_30 * -0xc;
  iVar67 = local_30 * -0xc;
  iVar54 = local_30 * -0xc;
  iVar58 = local_30 * -0xc;
  iVar4 = local_30 * -0xc;
  iVar10 = local_30 * -0xc;
  iVar11 = local_30 * -0xc;
  iVar12 = local_30 * -0xc;
  iVar13 = local_30 * -0xc;
  iVar14 = local_30 * -0xc;
  iVar15 = local_30 * -0xc;
  iVar16 = local_30 * -0xc;
  iVar17 = local_30 * -0xc;
  iVar18 = local_30 * -0xc;
  iVar19 = local_30 * -0xc;
  iVar20 = local_30 * -0xc;
  puVar64 = (undefined1 *)((int)&local_144 + local_30 * -0xc + (int)local_24 * -0xc + 4);
  iVar50 = local_30 * -0xc;
  iVar21 = local_30 * -0xc;
  iVar22 = local_30 * -0xc;
  iVar23 = local_30 * -0xc;
  iVar24 = local_30 * -0xc;
  iVar25 = local_30 * -0xc;
  iVar26 = local_30 * -0xc;
  *(undefined4 *)((int)&local_144 + local_30 * -4 + (int)local_24 * -0xc) = 0x91c2cd;
  local_4c = (undefined1 *)((int)&local_144 + local_30 * -8 + (int)local_24 * -0xc + 4);
  *(undefined4 *)((int)&local_144 + local_30 * -8 + (int)local_24 * -0xc) = 0x91c2d7;
  iVar51 = *(int *)(iVar51 + 0x68) - *(int *)(iVar51 + 100) >> 6;
  local_30 = 0;
  local_24 = (undefined4 *)0x0;
  local_34 = (undefined1 *)((int)&local_144 + iVar67 + iVar61 + 4);
  local_28 = iVar51;
  if (0 < iVar51) {
    local_1c = 0;
    local_34 = (undefined1 *)((int)&local_144 + iVar6 + iVar5 + 4);
    do {
      iVar67 = local_1c;
      iVar6 = local_2c;
      piVar55 = *(int **)(*(int *)(*(int *)(local_2c + 100) + 0xc + local_1c) + 0x120);
      if (piVar55 != (int *)0x0) {
LAB_0091c320:
        if (*piVar55 != 0x8a1) goto code_r0x0091c328;
        if (*(int *)(*(int *)(local_2c + 0x44) + (int)local_24 * 4) == 0) {
LAB_0091c3e5:
          *(int *)((int)&local_144 + iVar12 + iVar33) = *(int *)(iVar6 + 100) + iVar67;
          *(undefined4 *)((int)&uStack_14c + iVar13 + iVar34 + 4) = 0x91c3f0;
          FUN_00951ed0();
        }
        else {
          *(undefined4 *)((int)&local_144 + iVar54 + iVar28) = 0;
          *(undefined4 *)((int)&uStack_14c + iVar58 + iVar29 + 4) = 0;
          *(undefined4 *)((int)&uStack_14c + iVar4 + iVar30) = 0;
          (&uStack_150)[(int)puVar52 * -3 + iVar48 * -3] = 0x91c351;
          cVar49 = FUN_00952850();
          if (cVar49 == '\0') goto LAB_0091c3e5;
          uVar56 = *(undefined4 *)(*(int *)(iVar6 + 100) + 0x20 + iVar67);
          iVar61 = *(int *)(iVar6 + 100) + iVar67;
          iVar5 = *(int *)(*(int *)(iVar6 + 100) + 0x24 + iVar67);
          piVar55 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar61 + 0x24) * 4) +
                             0xe44);
          iVar6 = *(int *)(*(int *)(iVar6 + 100) + 0x1c + iVar67);
          if (piVar55 != (int *)0x0) {
            piVar59 = (int *)(local_40 + (int)local_18 * 4);
            do {
              uVar8 = **(undefined4 **)(*piVar55 + 0x48);
              piVar55 = (int *)piVar55[2];
              iVar3 = (int)local_18 + 1;
              *(int *)(((int)local_88 - (int)local_40) + (int)piVar59) = iVar5;
              *piVar59 = iVar6;
              *(undefined4 *)(((int)local_54 - (int)local_40) + (int)piVar59) = uVar8;
              piVar59 = piVar59 + 1;
              iVar51 = local_28;
              iVar67 = local_1c;
              local_18 = (undefined4 *)iVar3;
            } while (piVar55 != (int *)0x0);
          }
          local_94 = iVar61;
          local_84 = iVar5;
          local_80 = iVar6;
          local_7c = uVar56;
          *(int *)((int)&local_144 + iVar10 + iVar31) = iVar61;
          *(undefined4 *)((int)&uStack_14c + iVar11 + iVar32 + 4) = 0x91c3df;
          FUN_0094e660();
          local_11 = '\x01';
        }
      }
LAB_0091c3f0:
      local_24 = (undefined4 *)((int)local_24 + 1);
      local_1c = iVar67 + 0x40;
    } while ((int)local_24 < iVar51);
  }
  local_18 = (undefined4 *)0x0;
  puVar63 = (undefined1 *)(*(int *)(local_2c + 0x58) - *(int *)(local_2c + 0x54) >> 6);
  local_54 = puVar63;
  if (0 < (int)puVar63) {
    local_1c = 0;
    do {
      iVar54 = local_1c;
      iVar51 = local_2c;
      piVar55 = *(int **)(*(int *)(local_1c + 0xc + *(int *)(local_2c + 0x54)) + 0x120);
      if (piVar55 != (int *)0x0) {
LAB_0091c450:
        if (*piVar55 != 0x8a1) goto code_r0x0091c458;
        if (*(int *)(*(int *)(local_2c + 0x34) + (int)local_18 * 4) == 0) {
LAB_0091c51a:
          *(int *)((int)&local_144 + iVar19 + iVar40) = *(int *)(iVar51 + 0x54) + iVar54;
          *(undefined4 *)((int)&uStack_14c + iVar20 + iVar41 + 4) = 0x91c525;
          FUN_00951ed0();
        }
        else {
          *(undefined4 *)((int)&local_144 + iVar14 + iVar35) = 0;
          *(undefined4 *)((int)&uStack_14c + iVar15 + iVar36 + 4) = 0;
          *(undefined4 *)((int)&uStack_14c + iVar16 + iVar37) = 0;
          (&uStack_150)[(int)puVar52 * -3 + iVar48 * -3] = 0x91c482;
          cVar49 = FUN_00952850();
          if (cVar49 == '\0') goto LAB_0091c51a;
          uVar56 = *(undefined4 *)(iVar54 + 0x20 + *(int *)(iVar51 + 0x54));
          puVar2 = (undefined1 *)(iVar54 + *(int *)(iVar51 + 0x54));
          iVar58 = *(int *)(*(int *)(iVar51 + 0x54) + 0x24 + iVar54);
          piVar55 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(puVar2 + 0x24) * 4) +
                             0xe44);
          puVar7 = *(undefined1 **)(*(int *)(iVar51 + 0x54) + 0x1c + iVar54);
          if (piVar55 != (int *)0x0) {
            puVar60 = (undefined4 *)(local_4c + local_30 * 4);
            do {
              uVar8 = **(undefined4 **)(*piVar55 + 0x48);
              piVar55 = (int *)piVar55[2];
              iVar51 = local_30 + 1;
              *(int *)(((int)local_44 - (int)local_4c) + (int)puVar60) = iVar58;
              *puVar60 = puVar7;
              *(undefined4 *)(((int)local_34 - (int)local_4c) + (int)puVar60) = uVar8;
              puVar60 = puVar60 + 1;
              puVar63 = local_54;
              iVar54 = local_1c;
              local_30 = iVar51;
            } while (piVar55 != (int *)0x0);
          }
          local_94 = iVar58;
          local_88 = puVar2;
          local_7c = uVar56;
          local_40 = puVar7;
          *(undefined1 **)((int)&local_144 + iVar17 + iVar38) = puVar2;
          *(undefined4 *)((int)&uStack_14c + iVar18 + iVar39 + 4) = 0x91c514;
          FUN_0094e660();
          local_11 = '\x01';
        }
      }
LAB_0091c525:
      local_18 = (undefined4 *)((int)local_18 + 1);
      local_1c = iVar54 + 0x40;
    } while ((int)local_18 < (int)puVar63);
  }
  if (0 < local_3c) {
    local_18 = local_64;
    local_28 = local_3c;
    do {
      local_90 = (int *)*local_18;
      uVar56 = local_18[1];
      if (0 < local_20) {
        local_1c = local_20;
        puVar52 = local_74;
        do {
          local_7c = *puVar52;
          uVar8 = *puVar52;
          *(undefined4 *)((int)&local_144 + iVar21 + iVar42) = puVar52[1];
          *(undefined4 *)((int)&uStack_14c + iVar22 + iVar43 + 4) = uVar8;
          *(undefined4 *)((int)&uStack_14c + iVar23 + iVar44) = 0x91c58a;
          FUN_00517c40();
          piVar55 = local_90;
          *(undefined4 *)((int)&local_144 + iVar24 + iVar45) = uVar56;
          *(int **)((int)&uStack_14c + iVar25 + iVar46 + 4) = piVar55;
          *(undefined4 *)((int)&uStack_14c + iVar26 + iVar47) = 0x91c5a2;
          FUN_00517c40();
          puVar52 = puVar52 + 2;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
      local_18 = local_18 + 2;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  local_50 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  local_4c = *(undefined1 **)(DAT_012588e8 + 0xb60);
  if (0 < local_3c) {
    local_1c = local_3c;
    puVar64 = (undefined1 *)((int)&local_144 + iVar50 + iVar27 + 4);
    puVar52 = local_64;
    do {
      local_7c = *puVar52;
      iVar51 = puVar52[1];
      if (local_11 != '\0') {
        *(undefined4 *)(puVar64 + -4) = *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + iVar51 * 4);
        *(undefined4 *)(puVar64 + -8) = 0x91c609;
        FUN_00520150();
      }
      *(undefined4 *)(puVar64 + -4) = 0x91c61e;
      FUN_0085ccb0();
      if ((undefined1 *)iVar51 == local_4c) {
        *(undefined4 *)(puVar64 + -4) = 5;
        *(char **)(puVar64 + -8) = "peace";
        local_a0 = 0xf;
        local_a4 = 0;
        local_b4 = local_b4 & 0xffffff00;
        *(undefined4 *)(puVar64 + -0xc) = 0x91c64e;
        FUN_00409350();
        local_8._0_1_ = 7;
        *(undefined4 *)(puVar64 + -4) = 0x91c657;
        piVar55 = (int *)FUN_009c7290();
        pcVar9 = *(code **)(*piVar55 + 0x60);
        *(uint **)(puVar64 + -4) = &local_b4;
        puVar65 = (undefined4 *)(puVar64 + -8);
        puVar64 = puVar64 + -8;
        *puVar65 = 0x91c667;
        (*pcVar9)();
        local_8 = CONCAT31(local_8._1_3_,6);
        if (0xf < local_a0) {
          *(uint *)(puVar64 + -4) = local_b4;
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar64 + -8) = &UNK_0091c680;
          FUN_00aae91b();
        }
        local_a0 = 0xf;
        local_a4 = 0;
        local_b4 = local_b4 & 0xffffff00;
      }
      puVar52 = puVar52 + 2;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  local_34 = *(undefined1 **)(*(int *)(DAT_012586dc + 0x40) + 0x150);
  if (0 < local_20) {
    local_1c = local_20;
    puVar52 = local_74;
    do {
      local_7c = *puVar52;
      iVar51 = puVar52[1];
      iVar50 = *(int *)(DAT_012587e4 + 4);
      *(int *)(puVar64 + -4) = DAT_012587e4;
      uVar56 = *(undefined4 *)(iVar50 + iVar51 * 4);
      local_44 = puVar64 + -4;
      *(undefined1 **)(puVar64 + -4) = local_34;
      *(undefined4 *)(puVar64 + -8) = 0x91c6f2;
      FUN_0053efa0();
      if (local_11 != '\0') {
        *(undefined4 *)(puVar64 + -4) = uVar56;
        *(undefined4 *)(puVar64 + -8) = 0x91c6fe;
        FUN_00520150();
      }
      *(undefined4 *)(puVar64 + -4) = 0x91c709;
      FUN_0085ccb0();
      if ((undefined1 *)iVar51 == local_4c) {
        *(undefined4 *)(puVar64 + -4) = 5;
        *(char **)(puVar64 + -8) = "peace";
        local_e0 = 0xf;
        local_e4 = 0;
        local_f4[0] = local_f4[0] & 0xffffff00;
        *(undefined4 *)(puVar64 + -0xc) = 0x91c73d;
        FUN_00409350();
        local_8._0_1_ = 8;
        *(undefined4 *)(puVar64 + -4) = 0x91c746;
        piVar55 = (int *)FUN_009c7290();
        pcVar9 = *(code **)(*piVar55 + 0x60);
        *(uint **)(puVar64 + -4) = local_f4;
        puVar66 = (undefined4 *)(puVar64 + -8);
        puVar64 = puVar64 + -8;
        *puVar66 = 0x91c756;
        (*pcVar9)();
        local_8 = CONCAT31(local_8._1_3_,6);
        if (0xf < local_e0) {
          *(uint *)(puVar64 + -4) = local_f4[0];
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar64 + -8) = &UNK_0091c76f;
          FUN_00aae91b();
        }
        local_e0 = 0xf;
        local_e4 = 0;
        local_f4[0] = local_f4[0] & 0xffffff00;
      }
      puVar52 = puVar52 + 2;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  *(undefined4 *)(puVar64 + -4) = 5;
  *(char **)(puVar64 + -8) = "TERMS";
  local_e0 = 0xf;
  local_e4 = 0;
  local_f4[0] = local_f4[0] & 0xffffff00;
  *(undefined4 *)(puVar64 + -0xc) = 0x91c7be;
  FUN_00409350();
  *(uint **)(puVar64 + -4) = local_120;
  *(uint **)(puVar64 + -8) = local_f4;
  *(undefined4 **)(puVar64 + -0xc) = &local_d0;
  local_8._0_1_ = 9;
  *(undefined4 *)(puVar64 + -0x10) = 0x91c7dc;
  FUN_00424aa0();
  local_8._0_1_ = 10;
  iVar51 = param_1[1];
  *(undefined4 *)(puVar64 + -4) = 0x44;
  *(undefined4 *)(puVar64 + -8) = 0x91c7ef;
  iVar50 = FUN_00aae9af();
  local_8._0_1_ = 0xb;
  if (iVar50 == 0) {
    uVar56 = 0;
  }
  else {
    *(int *)(puVar64 + -4) = iVar51;
    *(int *)(puVar64 + -8) = iVar50;
    *(undefined4 *)(puVar64 + -0xc) = 0x91c806;
    uVar56 = FUN_0042b900();
  }
  iVar50 = param_1[2];
  param_1[1] = uVar56;
  param_1[2] = iVar50 + 1;
  if (iVar50 == 0) {
    *param_1 = uVar56;
  }
  else {
    *(undefined4 *)(iVar51 + 0x3c) = uVar56;
  }
  *(undefined4 *)(puVar64 + -4) = 0x91c82c;
  FUN_00a39a80();
  local_8 = CONCAT31(local_8._1_3_,6);
  if (0xf < local_e0) {
    *(uint *)(puVar64 + -4) = local_f4[0];
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar64 + -8) = &UNK_0091c845;
    FUN_00aae91b();
  }
  local_e0 = 0xf;
  local_e4 = 0;
  local_f4[0] = local_f4[0] & 0xffffff00;
  *(undefined4 *)(puVar64 + -4) = *(undefined4 *)(DAT_012588e8 + 0xcf8);
  *(undefined4 *)(puVar64 + -8) = 0x91c873;
  FUN_0042b270();
  if (*(char *)(DAT_012588e8 + 0xd1c) != '\0') {
    iVar51 = *(int *)(DAT_012588e8 + 0xb24);
    *(uint *)(iVar51 + 0x74) = *(uint *)(iVar51 + 0x74) | 0xf;
    if ((*(int *)(iVar51 + 0x7c) - *(int *)(iVar51 + 0x78) & 0xfffffffcU) == 0) {
      *(undefined4 *)(puVar64 + -4) = 0x91c8a7;
      FUN_004e9b90();
    }
    else {
      **(undefined4 **)(iVar51 + 0x78) = 0xffffffff;
    }
  }
  if (0xf < local_10c) {
    *(uint *)(puVar64 + -4) = local_120[0];
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar64 + -8) = &UNK_0091c8c6;
    FUN_00aae91b();
  }
  local_10c = 0xf;
  local_110 = 0;
  local_120[0] = local_120[0] & 0xffffff00;
  if (local_74 != (undefined4 *)0x0) {
    *(undefined4 **)(puVar64 + -4) = local_74;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar64 + -8) = &UNK_0091c8e8;
    FUN_00aae91b();
  }
  if (local_64 == (undefined4 *)0x0) {
    ExceptionList = local_10;
    return;
  }
  *(undefined4 **)(puVar64 + -4) = local_64;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar64 + -8) = &UNK_0091c8f8;
  FUN_00aae91b();
}

