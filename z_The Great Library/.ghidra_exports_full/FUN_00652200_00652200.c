// FUN_00652200 @ 00652200 body=[[00652200, 00652352] [00652356, 00652385] [00652389, 006523ad] [006523b1, 006523d3] [006523d7, 00652413] [0065242e, 006524f3] [006524f7, 00652526] [0065252a, 0065254e] [00652552, 00652574] [00652578, 006525e8] [006525ec, 00652810] [00652819, 006528b2] [006528b6, 00652988] [0065298c, 006529b7] [006529bb, 006529dd] [006529e1, 00652a0e]]


void FUN_00652200(int param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 ***pppuStack_228;
  int iStack_224;
  undefined4 ****ppppuStack_220;
  undefined4 ****ppppuStack_21c;
  undefined4 ***pppuStack_218;
  char *pcStack_214;
  undefined4 ****ppppuStack_210;
  int *piStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  int *piStack_200;
  undefined4 ****ppppuStack_1fc;
  int *piStack_1f8;
  undefined4 uStack_1dc;
  int local_1d8;
  undefined4 ****ppppuStack_1c8;
  uint local_1c4;
  uint local_1c0;
  undefined1 auStack_1bc [8];
  uint local_1b4;
  undefined4 local_1a4;
  uint local_1a0;
  uint local_198;
  undefined1 uStack_18c;
  undefined4 local_188;
  uint local_184;
  uint uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_16c;
  uint uStack_168;
  uint local_160;
  undefined4 local_150;
  undefined1 *local_14c;
  undefined1 auStack_148 [4];
  uint local_144;
  undefined4 local_134;
  uint local_130;
  char local_124 [136];
  undefined **appuStack_9c [15];
  undefined **ppuStack_60;
  undefined1 uStack_48;
  undefined1 uStack_34;
  undefined1 uStack_30;
  undefined1 uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5a1c1;
  local_14 = ExceptionList;
  if ((*(char *)(param_1 + 0x1db6) == '\0') || (DAT_013f0850 != 0)) {
LAB_006529e1:
    *(undefined1 *)(param_1 + 0x1db6) = 0;
    if (0 < DAT_013f0850) {
      DAT_013f0850 = DAT_013f0850 + -1;
    }
  }
  else {
    local_184 = 0xf;
    local_188 = 0;
    local_198 = local_198 & 0xffffff00;
    ExceptionList = &local_14;
    FUN_00409350();
    local_c._1_3_ = 0;
    local_1d8 = 1;
    do {
      local_c._0_1_ = 0;
      local_1c0 = 0xf;
      local_1c4 = 0;
      FUN_00409350();
      local_1a0 = 0xf;
      local_1a4 = 0;
      local_1b4 = local_1b4 & 0xffffff00;
      local_c._0_1_ = 2;
      piStack_1f8 = (int *)0x6522b4;
      pcVar3 = __itoa(local_1d8,local_124,10);
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_00409350();
      local_c._0_1_ = 3;
      FUN_00988f20();
      local_c = CONCAT31(local_c._1_3_,4);
      pcVar3 = (char *)FUN_00988f20();
      if (0xf < *(uint *)(pcVar3 + 0x14)) {
        pcVar3 = *(char **)pcVar3;
      }
      if (((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) || (iVar4 = PHYSFS_exists(), iVar4 == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      uStack_1dc = (undefined4 ****)CONCAT13(!bVar2,(undefined3)uStack_1dc);
      if (0xf < local_14c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_14c = (undefined1 *)0xf;
      local_150 = 0;
      local_160 = local_160 & 0xffffff00;
      if (0xf < local_130) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_130 = 0xf;
      local_134 = 0;
      local_144 = local_144 & 0xffffff00;
      if (0xf < local_1a0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c._0_1_ = 0;
      local_1a0 = 0xf;
      local_1a4 = 0;
      local_1b4 = local_1b4 & 0xffffff00;
      if (0xf < local_1c0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (!bVar2) {
        if (local_1d8 < 10000) {
          local_1c0 = 0xf;
          local_1c4 = 0;
          FUN_00409350();
          local_1a0 = 0xf;
          local_1a4 = 0;
          local_1b4 = local_1b4 & 0xffffff00;
          local_c._0_1_ = 6;
          piStack_1f8 = (int *)0x65246e;
          pcVar3 = __itoa(local_1d8,local_124,10);
          do {
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          FUN_00409350();
          local_c._0_1_ = 7;
          FUN_00988f20();
          local_c._0_1_ = 8;
          FUN_00988f20();
          local_c._0_1_ = 9;
          piStack_1f8 = (int *)0x6524d9;
          FUN_00408ed0();
          if (0xf < local_130) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_130 = 0xf;
          local_134 = 0;
          local_144 = local_144 & 0xffffff00;
          if (0xf < local_14c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_14c = (undefined1 *)0xf;
          local_150 = 0;
          local_160 = local_160 & 0xffffff00;
          if (0xf < local_1a0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_c._0_1_ = 0;
          local_1a0 = 0xf;
          local_1a4 = 0;
          local_1b4 = local_1b4 & 0xffffff00;
          if (0xf < local_1c0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_1c0 = 0xf;
          local_1c4 = 0;
          FUN_00409350();
          local_c = CONCAT31(local_c._1_3_,10);
          if (DAT_00f20c18 == (int *)0x0) {
            DAT_00f20c18 = (int *)FUN_00aae9af();
            if (DAT_00f20c18 == (int *)0x0) {
              DAT_00f20c18 = (int *)0x0;
            }
            else {
              *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
            }
          }
          (**(code **)(*DAT_00f20c18 + 0x34))();
          puStack_10 = (undefined1 *)((uint)puStack_10 & 0xffffff00);
          if (0xf < local_1c4) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          piStack_1f8 = *(int **)(*(int *)(param_1 + 0x17e4) + 100);
          ppppuStack_1fc = (undefined4 ****)0x652609;
          (**(code **)(*piStack_1f8 + 0x20))();
          ppppuStack_1fc = (undefined4 ****)0x0;
          piStack_200 = (int *)&DAT_00ded94d;
          uStack_178 = 0xf;
          uStack_17c = 0;
          uStack_18c = 0;
          uStack_204 = (undefined4 ****)0x65262f;
          FUN_00409350();
          uStack_1c = 0xb;
          piStack_20c = *(int **)(*(int *)(param_1 + 0x17e4) + 100);
          ppppuStack_1fc = &ppppuStack_1c8;
          piStack_200 = (int *)0x0;
          uStack_204 = (undefined4 ****)0x0;
          uStack_208 = 0;
          ppppuStack_210 = (undefined4 ****)0x652650;
          iVar4 = (**(code **)(*piStack_20c + 0x48))();
          if (iVar4 < 0) {
            ppppuStack_210 = (undefined4 ****)0x1b;
            pcStack_214 = "GetFrontBufferData failed: ";
            piStack_200 = (int *)((uint)piStack_200 & 0xffffff);
            pppuStack_218 = (undefined4 ****)0x652739;
            FUN_00409350();
          }
          else {
            ppppuStack_210 = (undefined4 ****)0x0;
            pcStack_214 = (char *)0x0;
            pppuStack_218 = uStack_1dc;
            ppppuStack_21c = (undefined4 ****)0x0;
            ppppuStack_220 = &ppppuStack_1fc;
            ppppuStack_1fc = (undefined4 *****)0x0;
            iStack_224 = 0x652671;
            iVar4 = D3DXSaveSurfaceToFileInMemory();
            if (iVar4 < 0) {
              ppppuStack_210 = (undefined4 ****)0x26;
              pcStack_214 = "D3DXSaveSurfaceToFileInMemory failed: ";
              piStack_200 = (int *)((uint)piStack_200 & 0xffffff);
              pppuStack_218 = (undefined4 ****)0x65268b;
              FUN_00409350();
            }
            if ((undefined4 *****)ppppuStack_1fc != (undefined4 *****)0x0) {
              local_14c = (undefined1 *)&pppuStack_228;
              pcStack_214 = (char *)0xf;
              pppuStack_218 = (undefined4 ***)0x0;
              pppuStack_228 = (undefined4 ***)((uint)pppuStack_228 & 0xffffff00);
              FUN_00409350(&DAT_00ded94d,0);
              FUN_00992740(auStack_148,auStack_1bc,1);
              uStack_30 = 0xc;
              ppppuStack_210 = ppppuStack_1fc;
              pcStack_214 = (char *)0x6526e5;
              pcStack_214 = (char *)(*(code *)(*ppppuStack_1fc)[4])();
              pppuStack_218 = (undefined4 ***)piStack_200;
              ppppuStack_21c = (undefined4 ****)0x6526f2;
              ppppuStack_21c = (undefined4 ****)(**(code **)(*piStack_200 + 0xc))();
              ppppuStack_220 = (undefined4 *****)0x6526ff;
              FUN_00993720();
              pppuStack_218 = uStack_204;
              ppppuStack_21c = (undefined4 ****)0x65270b;
              (*(code *)(*uStack_204)[2])();
              ppppuStack_1fc = (undefined4 *****)0x0;
              uStack_30 = 0xb;
              ppppuStack_210 = (undefined4 ****)0x652723;
              FUN_00992d60();
            }
          }
          ppppuStack_210 = uStack_1dc;
          pcStack_214 = (char *)0x652745;
          (*(code *)(*uStack_1dc)[2])();
          pcStack_214 = (char *)0xc;
          pppuStack_218 = (undefined4 ***)0xe08e34;
          ppppuStack_1fc = (undefined4 ****)((uint)ppppuStack_1fc & 0xffffff00);
          ppppuStack_21c = (undefined4 ****)0x652765;
          FUN_00409350();
          if (uStack_204._3_1_ == '\0') {
            pcStack_214 = (char *)0x3;
            ppppuStack_21c = &ppppuStack_1fc;
            pppuStack_218 = (undefined4 ***)0x978;
            uStack_34 = 0xf;
            ppppuStack_220 = (undefined4 ****)0x652839;
            uVar5 = FUN_004015b0();
            pcStack_214 = (char *)0x0;
            pppuStack_218 = (undefined4 ***)0x1a;
            ppppuStack_21c = (undefined4 ****)0xe04cc4;
            uStack_34 = 0x10;
            iStack_224 = 0x652854;
            ppppuStack_220 = (undefined4 ****)uVar5;
            FUN_00987d50();
            pppuStack_228 = (undefined4 ***)0x65285a;
            iStack_224 = iVar4;
            pppuStack_228 = (undefined4 ***)FUN_00a93bfc();
            uVar5 = FUN_00418e30(uVar5);
            FUN_00401280(uVar5);
            pppuStack_228 = (undefined4 ***)appuStack_9c;
            uStack_48 = 0xf;
            FUN_00987ac0();
            pppuStack_228 = (undefined4 ***)appuStack_9c;
            appuStack_9c[0] = std::ios_base::vftable;
            FUN_00aad52d();
            uStack_48 = 0xb;
            if ((undefined4 ****)0xf < ppppuStack_1fc) {
              pppuStack_228 = ppppuStack_210;
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            pppuStack_228 = (undefined4 ***)0xc;
            ppppuStack_1fc = (undefined4 ****)0xf;
            piStack_200 = (int *)0x0;
            ppppuStack_210 = (undefined4 ****)((uint)ppppuStack_210 & 0xffffff00);
            FUN_00409350("eu3idler.cpp");
            pppuStack_228 = (undefined4 ***)0x1000;
            uStack_48 = 0x11;
            uVar5 = FUN_004015b0(&ppppuStack_210,0x979);
            pppuStack_228 = (undefined4 ***)0x0;
            uStack_48 = 0x12;
            FUN_00987d50(uVar5,"Screenshot error.  ",0x13);
            if (local_1b4 < 0x10) {
              ppppuStack_1c8 = &ppppuStack_1c8;
            }
            FUN_00418e30(uVar5,ppppuStack_1c8);
            FUN_00a93bfc(iVar4);
            FUN_00418e30();
            piStack_1f8 = (int *)0x652945;
            FUN_00401280();
            local_c = CONCAT31(local_c._1_3_,0x11);
            FUN_00987ac0();
            ppuStack_60 = std::ios_base::vftable;
            FUN_00aad52d();
            if (0xf < local_1c0) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
          }
          else {
            pcStack_214 = (char *)0x3;
            ppppuStack_21c = &ppppuStack_1fc;
            pppuStack_218 = (undefined4 ***)0x974;
            uStack_34 = 0xd;
            ppppuStack_220 = (undefined4 ****)0x65278f;
            ppppuStack_220 = (undefined4 ****)FUN_004015b0();
            pcStack_214 = (char *)0x0;
            pppuStack_218 = (undefined4 ***)0x12;
            ppppuStack_21c = (undefined4 ****)0xe04cb0;
            uStack_34 = 0xe;
            iStack_224 = 0x6527aa;
            FUN_00987d50();
            FUN_00418e30();
            piStack_1f8 = (int *)0x6527ca;
            FUN_00401280();
            local_c = CONCAT31(local_c._1_3_,0xd);
            FUN_00987ac0();
            ppuStack_60 = std::ios_base::vftable;
            FUN_00aad52d();
            if (0xf < local_1c0) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
          }
          DAT_013f0850 = 10;
          *(undefined1 *)(param_1 + 0x1db7) = 1;
          if (0xf < uStack_168) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_168 = 0xf;
          uStack_16c = 0;
          uStack_17c = uStack_17c & 0xffffff00;
          if (0xf < local_184) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          goto LAB_006529e1;
        }
        break;
      }
      local_1d8 = local_1d8 + 1;
    } while (local_1d8 < 10000);
    if (0xf < local_184) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_14;
  return;
}

