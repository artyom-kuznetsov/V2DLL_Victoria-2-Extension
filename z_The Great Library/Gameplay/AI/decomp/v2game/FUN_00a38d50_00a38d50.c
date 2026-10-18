// FUN_00a38d50 @ 00a38d50 body=[[00a38d50, 00a38dbb] [00a38dbf, 00a38e31] [00a38e35, 00a38e50] [00a38e54, 00a38e78] [00a38e80, 00a38f89] [00a38f8d, 00a39019] [00a3901d, 00a39054] [00a3905a, 00a39098] [00a3909c, 00a39182] [00a39186, 00a391a1] [00a391a5, 00a391b9]]


/* WARNING: Removing unreachable block (ram,0x00a38f27) */
/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_00a38d50(undefined4 *param_1,undefined4 param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 *******pppppppuVar5;
  int iVar6;
  char *pcVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  bool bVar15;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  char cStack00000028;
  undefined1 local_1d8 [24];
  int local_1c0;
  char local_1b4 [260];
  uint local_b0;
  undefined4 local_a0;
  uint local_9c;
  int local_90;
  int local_8c;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 *******local_5c [4];
  undefined1 *local_4c;
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4e3a8;
  local_10 = ExceptionList;
  local_14 = (undefined1 *)0x0;
  local_8 = 0;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00e40748,2);
  local_8._0_1_ = 1;
  FUN_00988f20(local_40);
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40[0]);
  }
  local_24 = (undefined1 *)0x0;
  local_20 = (undefined1 *)0x0;
  local_1c = 0;
  local_18 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_8._0_1_ = 5;
  pppppppuVar5 = local_5c[0];
  if (local_48 < 0x10) {
    pppppppuVar5 = local_5c;
  }
  iVar6 = FUN_00ab003e(pppppppuVar5,local_1d8);
  if (iVar6 == -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    FUN_00a3a2d0(&local_6c);
    FUN_004097a0(&local_24);
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5c[0]);
    }
    local_48 = 0xf;
    local_4c = (undefined1 *)0x0;
    local_5c[0] = (undefined4 *******)((uint)local_5c[0] & 0xffffff00);
    if (in_stack_00000020 < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  local_8._0_1_ = 6;
  do {
    if (((byte)local_1d8._0_4_ & 0x10) != 0x10) {
      pcVar7 = local_1b4;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(local_1b4,(int)pcVar7 - (int)(local_1b4 + 1));
      pbVar8 = param_3;
      if (in_stack_00000020 < 0x10) {
        pbVar8 = (byte *)&param_3;
      }
      pbVar13 = &DAT_00ded94d;
      do {
        bVar2 = *pbVar8;
        bVar15 = bVar2 < *pbVar13;
        if (bVar2 != *pbVar13) {
LAB_00a38ef0:
          iVar9 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
          goto LAB_00a38ef5;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar8[1];
        bVar15 = bVar2 < pbVar13[1];
        if (bVar2 != pbVar13[1]) goto LAB_00a38ef0;
        pbVar8 = pbVar8 + 2;
        pbVar13 = pbVar13 + 2;
      } while (bVar2 != 0);
      iVar9 = 0;
LAB_00a38ef5:
      if (iVar9 == 0) {
LAB_00a38f65:
        bVar15 = true;
      }
      else {
        iVar9 = FUN_009895f0(local_30);
        uVar4 = in_stack_0000001c;
        local_14 = (undefined1 *)((uint)local_14 | 2);
        uVar10 = *(uint *)(iVar9 + 0x10);
        uVar14 = uVar10;
        if (in_stack_0000001c <= uVar10) {
          uVar14 = in_stack_0000001c;
        }
        iVar9 = FUN_00414bd0(uVar14);
        bVar15 = false;
        if (iVar9 == 0) {
          if (uVar10 < uVar4) {
            uVar10 = 0xffffffff;
          }
          else {
            uVar10 = (uint)(uVar10 != uVar4);
          }
          bVar15 = uVar10 == 0;
        }
        if (bVar15) goto LAB_00a38f65;
        bVar15 = false;
      }
      iVar9 = local_1c0;
      local_8._0_1_ = 6;
      local_8._1_3_ = 0;
      if ((((uint)local_14 & 2) != 0) &&
         (local_14 = (undefined1 *)((uint)local_14 & 0xfffffffd), 0xf < local_74)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_88[0]);
      }
      if (bVar15) {
        if (cStack00000028 == '\0') {
          FUN_00a3a190(&local_24,local_40);
        }
        else {
          local_74 = 0xf;
          local_78 = 0;
          local_88[0] = local_88[0] & 0xffffff00;
          FUN_00408ed0(local_40,0,0xffffffff);
          local_9c = 0xf;
          local_a0 = 0;
          local_b0 = local_b0 & 0xffffff00;
          local_8._0_1_ = 9;
          FUN_00408ed0(local_88,0,0xffffffff);
          local_8c = iVar9 >> 0x1f;
          local_90 = iVar9;
          if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_88[0]);
          }
          local_74 = 0xf;
          local_78 = 0;
          local_88[0] = local_88[0] & 0xffffff00;
          local_8._0_1_ = 10;
          FUN_00a3a330(&local_6c);
          local_8._0_1_ = 6;
          if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_b0);
          }
        }
      }
    }
    iVar9 = FUN_00ab0165(iVar6,local_1d8);
    if (iVar9 != 0) {
      local_8._0_1_ = 5;
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_40[0]);
      }
      FUN_00ab0293(iVar6);
      iVar9 = _cStack00000028;
      iVar6 = local_6c;
      puVar11 = local_24;
      if (cStack00000028 != '\0') {
        while (puVar3 = local_20, local_24 = puVar11, _cStack00000028 = iVar6, local_20 = puVar3,
              _cStack00000028 != 0) {
          iVar6 = *(int *)(_cStack00000028 + 0x2c);
          puVar11 = (undefined1 *)FUN_00aae9af(0x28);
          local_8._0_1_ = 0xb;
          local_14 = puVar11;
          if (puVar11 == (undefined1 *)0x0) {
            local_20 = (undefined1 *)0x0;
          }
          else {
            *(undefined4 *)(puVar11 + 0x14) = 0xf;
            *(undefined4 *)(puVar11 + 0x10) = 0;
            *puVar11 = 0;
            FUN_00408ed0(_cStack00000028,0,0xffffffff);
            *(undefined1 **)(puVar11 + 0x1c) = puVar3;
            *(undefined4 *)(puVar11 + 0x20) = 0;
            puVar11[0x24] = 0;
            local_20 = puVar11;
          }
          local_8._0_1_ = 5;
          iVar12 = local_1c + 1;
          bVar15 = local_1c != 0;
          iVar9 = _cStack00000028;
          puVar11 = local_20;
          local_1c = iVar12;
          if (bVar15) {
            *(undefined1 **)(puVar3 + 0x20) = local_20;
            puVar11 = local_24;
          }
        }
      }
      _cStack00000028 = iVar9;
      puVar11 = (undefined1 *)0x0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      *(undefined1 *)(param_1 + 3) = 0;
      puVar3 = local_24;
      while (puVar3 != (undefined1 *)0x0) {
        puVar11 = *(undefined1 **)(puVar3 + 0x20);
        FUN_00408db0(puVar3);
        puVar3 = puVar11;
      }
      FUN_00a3a2d0(&local_6c);
      FUN_004097a0(&local_24);
      if (local_48 < 0x10) {
        local_48 = 0xf;
        local_5c[0] = (undefined4 *******)((uint)local_5c[0] & 0xffffff00);
        if (in_stack_00000020 < 0x10) {
          ExceptionList = local_10;
          return param_1;
        }
        local_4c = puVar11;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(param_3);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5c[0]);
    }
  } while( true );
}

