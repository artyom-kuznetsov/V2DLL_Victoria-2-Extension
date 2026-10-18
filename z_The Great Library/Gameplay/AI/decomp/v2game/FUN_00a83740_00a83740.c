// FUN_00a83740 @ 00a83740 body=[[00a83740, 00a838fb] [00a838ff, 00a83a09] [00a83a0d, 00a83de6] [00a83f2f, 00a83f5d] [00a83f61, 00a83f80] [00a83f84, 00a83f93] [00a83f97, 00a84033]]


uint FUN_00a83740(int param_1,char *param_2)

{
  char cVar1;
  int *piVar2;
  undefined ***pppuVar3;
  FILE *pFVar4;
  int *piVar5;
  char *_DstBuf;
  char *pcVar6;
  undefined4 *puVar7;
  undefined ***pppuVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined **local_118 [4];
  undefined4 local_108 [4];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  void *local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  char *local_b8;
  undefined4 *local_b4;
  undefined4 *local_b0;
  undefined4 local_ac;
  int local_a4;
  undefined2 local_a0;
  undefined4 local_9e;
  undefined **local_98;
  undefined2 local_94;
  undefined2 local_92;
  undefined2 local_90;
  undefined1 local_8c [4];
  int local_88;
  undefined4 local_84;
  uint local_7c [2];
  char local_74 [4];
  undefined4 *local_70;
  undefined4 local_6c;
  uint local_68;
  undefined4 local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  int local_4c;
  void *local_44;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined4 local_34;
  ushort local_30 [2];
  int local_2c;
  ushort local_28 [2];
  ushort local_24 [2];
  FILE *local_20;
  char *local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4816c;
  local_10 = ExceptionList;
  pcVar6 = param_2;
  if (0xf < *(uint *)(param_2 + 0x14)) {
    pcVar6 = *(char **)param_2;
  }
  ExceptionList = &local_10;
  pFVar4 = _fopen(pcVar6,"rb");
  local_92 = 1;
  local_90 = 4;
  local_34 = 0;
  local_98 = (undefined **)0x41584450;
  local_94 = 0x42;
  local_a4 = 0x41584450;
  local_a0 = 0x42;
  local_9e = 0x40001;
  local_20 = pFVar4;
  _fread(&local_a4,10,1,pFVar4);
  uVar11 = 10;
  piVar2 = &local_a4;
  pppuVar3 = &local_98;
  do {
    pppuVar8 = pppuVar3;
    piVar5 = piVar2;
    if (*pppuVar8 != (undefined **)*piVar5) goto LAB_00a84016;
    uVar11 = uVar11 - 4;
    piVar2 = piVar5 + 1;
    pppuVar3 = pppuVar8 + 1;
  } while (3 < uVar11);
  if (((char)piVar5[1] == *(char *)(pppuVar8 + 1)) &&
     (*(char *)((int)piVar5 + 5) == *(char *)((int)pppuVar8 + 5))) {
    _fread(&local_34,2,1,pFVar4);
    _fread(&param_2,2,1,pFVar4);
    _fread(local_30,2,1,pFVar4);
    _fread((void *)(param_1 + 8),4,1,pFVar4);
    _fread((void *)(param_1 + 0x68),2,1,pFVar4);
    local_18 = 0;
    _fread(&local_18,2,1,pFVar4);
    _DstBuf = (char *)FUN_00aad56b((local_18 & 0xffff) + 1);
    _fread(_DstBuf,1,(local_18 & 0xffff) + 1,pFVar4);
    local_6c = 0;
    _DstBuf[local_18 & 0xffff] = '\0';
    local_68 = 0xf;
    local_7c[0] = local_7c[0] & 0xffffff00;
    pcVar6 = _DstBuf;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(_DstBuf,(int)pcVar6 - (int)(_DstBuf + 1));
    local_8 = 0;
    FUN_00408ed0(local_7c,0,0xffffffff);
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_7c[0]);
    }
    local_c8 = (void *)0x0;
    local_c4 = 0;
    local_c0 = 0;
    local_8 = 1;
    FUN_007d85d0((uint)param_2 & 0xffff);
    _fread(local_c8,2,(uint)param_2 & 0xffff,pFVar4);
    local_2c = 0;
    _fread(&local_2c,2,1,pFVar4);
    local_b4 = (undefined4 *)0x0;
    local_b0 = (undefined4 *)0x0;
    local_ac = 0;
    local_14 = (char *)0x0;
    if (0 < local_2c) {
      do {
        pFVar4 = local_20;
        local_8._0_1_ = 2;
        local_18 = 0;
        _fread(&local_18,2,1,local_20);
        FUN_00aaea59(_DstBuf);
        _DstBuf = (char *)FUN_00aad56b((local_18 & 0xffff) + 1);
        _fread(_DstBuf,1,(local_18 & 0xffff) + 1,pFVar4);
        _DstBuf[local_18 & 0xffff] = '\0';
        local_68 = 0xf;
        local_6c = 0;
        local_7c[0] = local_7c[0] & 0xffffff00;
        pcVar6 = _DstBuf;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(_DstBuf,(int)pcVar6 - (int)(_DstBuf + 1));
        local_8._0_1_ = 3;
        FUN_00a840b0();
        local_8._0_1_ = 2;
        if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_7c[0]);
        }
        local_14 = (char *)((int)local_14 + 1);
      } while ((int)local_14 < local_2c);
    }
    puVar13 = local_b0;
    local_8._0_1_ = 2;
    local_58 = 0;
    if ((short)local_34 == 0) {
      _fclose(local_20);
      puVar14 = local_b4;
      if (local_b4 == (undefined4 *)0x0) {
        if (local_c8 == (void *)0x0) {
          ExceptionList = local_10;
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_c8);
      }
      while( true ) {
        if (puVar14 == puVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_b4);
        }
        if (0xf < (uint)puVar14[5]) break;
        puVar14[5] = 0xf;
        puVar14[4] = 0;
        *(undefined1 *)puVar14 = 0;
        puVar14 = puVar14 + 7;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*puVar14);
    }
    local_44 = (void *)0x0;
    local_40 = (undefined4 *)0x0;
    local_3c = 0;
    puVar13 = (undefined4 *)0x0;
    local_54 = (undefined4 *)0x0;
    local_50 = (undefined4 *)0x0;
    local_4c = 0;
    local_8._0_1_ = 5;
    local_84 = 0;
    local_88 = FUN_00aae9af(0x6c);
    if (local_88 == 0) {
      local_b8 = (char *)0x0;
      std::exception::exception((exception *)local_118,&local_b8);
      local_118[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_118,&DAT_00e6fb20);
    }
    *(int *)local_88 = local_88;
    *(int *)(local_88 + 4) = local_88;
    *(int *)(local_88 + 8) = local_88;
    *(undefined1 *)(local_88 + 0x68) = 1;
    *(undefined1 *)(local_88 + 0x69) = 1;
    local_8 = CONCAT31(local_8._1_3_,6);
    _fread(local_28,2,1,local_20);
    local_1c = (char *)0x0;
    if (local_28[0] != 0) {
      local_14 = (char *)local_b4;
      puVar14 = (undefined4 *)0x0;
      do {
        uVar11 = (int)puVar14 - (int)puVar13 >> 2;
        if (uVar11 < 0x11) {
          if (uVar11 < 0x10) {
            if (0x3fffffff - (0x10 - uVar11) < uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_00aad3ad("vector<T> too long");
            }
            uVar11 = uVar11 + (0x10 - uVar11);
            uVar9 = local_4c - (int)puVar13 >> 2;
            if (uVar9 < uVar11) {
              if (0x3fffffff - (uVar9 >> 1) < uVar9) {
                uVar9 = 0;
              }
              else {
                uVar9 = uVar9 + (uVar9 >> 1);
              }
              if (uVar9 < uVar11) {
                uVar9 = uVar11;
              }
              FUN_004bf300(uVar9);
              puVar13 = local_54;
              puVar14 = local_50;
            }
            iVar12 = (int)puVar14 - (int)puVar13 >> 2;
            iVar10 = 0x10 - iVar12;
            puVar7 = local_50;
            if (iVar10 != 0) {
              for (; puVar14 = local_50, iVar10 != 0; iVar10 = iVar10 + -1) {
                *puVar7 = 0;
                puVar7 = puVar7 + 1;
              }
            }
            local_50 = puVar14 + (0x10 - iVar12);
          }
        }
        else {
          puVar7 = puVar13 + 0x10;
          if (puVar7 != puVar14) {
            FID_conflict__memcpy(puVar7,puVar14,0);
            local_50 = puVar7;
          }
        }
        _fread(puVar13,4,0x10,local_20);
        local_108[0] = *puVar13;
        local_108[1] = puVar13[1];
        local_108[2] = puVar13[2];
        local_108[3] = puVar13[3];
        local_f8 = puVar13[4];
        local_f4 = puVar13[5];
        local_f0 = puVar13[6];
        local_ec = puVar13[7];
        local_e8 = puVar13[8];
        local_e4 = puVar13[9];
        local_e0 = puVar13[10];
        local_dc = puVar13[0xb];
        local_d8 = puVar13[0xc];
        local_d4 = puVar13[0xd];
        local_d0 = puVar13[0xe];
        local_cc = puVar13[0xf];
        puVar7 = (undefined4 *)FUN_00a84180(local_8c);
        local_14 = (char *)((int)local_14 + 0x1c);
        puVar14 = local_108;
        for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar7 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar7 = puVar7 + 1;
        }
        local_1c = local_1c + 1;
        puVar14 = local_50;
      } while ((int)local_1c < (int)(uint)local_28[0]);
    }
    _fread(local_24,2,1,local_20);
    uVar11 = (uint)local_24[0];
    if (uVar11 != 0) {
      uVar9 = 0;
      if (uVar11 != 0) {
        uVar9 = uVar11;
      }
      FUN_004bf300(uVar9);
      iVar12 = uVar11 - ((int)local_40 - (int)local_44 >> 2);
      iVar10 = iVar12;
      puVar13 = local_40;
      if (iVar12 != 0) {
        for (; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
      }
      local_40 = local_40 + iVar12;
    }
    _fread(local_44,4,(uint)local_24[0],local_20);
    pcVar6 = (char *)FUN_00aae9af(0x60);
    if (pcVar6 == (char *)0x0) {
      pcVar6 = (char *)0x0;
    }
    else {
      pcVar6[4] = -0x73;
      pcVar6[5] = '\x01';
      pcVar6[6] = '\0';
      pcVar6[7] = '\0';
      *(undefined ***)pcVar6 = &PTR_FUN_00e4436c;
      pcVar6[0x1c] = '\x0f';
      pcVar6[0x1d] = '\0';
      pcVar6[0x1e] = '\0';
      pcVar6[0x1f] = '\0';
      pcVar6[0x18] = '\0';
      pcVar6[0x19] = '\0';
      pcVar6[0x1a] = '\0';
      pcVar6[0x1b] = '\0';
      pcVar6[8] = '\0';
      pcVar6[0x24] = '\0';
      pcVar6[0x25] = '\0';
      pcVar6[0x26] = '\0';
      pcVar6[0x27] = '\0';
      pcVar6[0x28] = '\0';
      pcVar6[0x29] = '\0';
      pcVar6[0x2a] = '\0';
      pcVar6[0x2b] = '\0';
      pcVar6[0x2c] = '\0';
      pcVar6[0x2d] = '\0';
      pcVar6[0x2e] = '\0';
      pcVar6[0x2f] = '\0';
      pcVar6[0x3c] = '\0';
      pcVar6[0x3d] = '\0';
      pcVar6[0x3e] = '\0';
      pcVar6[0x3f] = '\0';
      pcVar6[0x40] = '\0';
      pcVar6[0x41] = '\0';
      pcVar6[0x42] = '\0';
      pcVar6[0x43] = '\0';
      pcVar6[0x44] = '\0';
      pcVar6[0x45] = '\0';
      pcVar6[0x46] = '\0';
      pcVar6[0x47] = '\0';
      local_8 = CONCAT31(local_8._1_3_,10);
      pcVar6[0x58] = '\0';
      pcVar6[0x59] = '\0';
      pcVar6[0x5a] = '\0';
      pcVar6[0x5b] = '\0';
      local_14 = pcVar6;
      iVar10 = FUN_00aae9af(0x6c);
      if (iVar10 == 0) {
        local_1c = (char *)0x0;
        std::exception::exception((exception *)&local_98,&local_1c);
        local_98 = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(&local_98,&DAT_00e6fb20);
      }
      *(int *)(pcVar6 + 0x54) = iVar10;
      *(int *)iVar10 = iVar10;
      *(int *)(*(int *)(pcVar6 + 0x54) + 4) = *(int *)(pcVar6 + 0x54);
      *(int *)(*(int *)(pcVar6 + 0x54) + 8) = *(int *)(pcVar6 + 0x54);
      *(undefined1 *)(*(int *)(pcVar6 + 0x54) + 0x68) = 1;
      *(undefined1 *)(*(int *)(pcVar6 + 0x54) + 0x69) = 1;
    }
    local_8._0_1_ = 6;
    local_1c = pcVar6;
    local_14 = pcVar6;
    FUN_009beeb0(&local_44);
    *(uint *)(pcVar6 + 0x34) = (uint)local_30[0];
    FUN_009d5f10(&local_c8);
    FUN_00a84270(local_74,local_8c);
    local_8._0_1_ = 0xb;
    if (pcVar6 + 0x50 != local_74) {
      FUN_00a84330(**(undefined4 **)(pcVar6 + 0x54),*(undefined4 **)(pcVar6 + 0x54));
      FUN_00a843f0(local_74);
    }
    local_8._0_1_ = 0xc;
    FUN_00a84330(*local_70,local_70);
    local_8 = CONCAT31(local_8._1_3_,6);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_70);
  }
LAB_00a84016:
  uVar11 = _fclose(pFVar4);
  ExceptionList = local_10;
  return uVar11 & 0xffffff00;
}

