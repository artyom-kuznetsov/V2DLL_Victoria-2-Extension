// FUN_0077e650 @ 0077e650 body=[[0077e650, 0077e898] [0077e89c, 0077e8c9] [0077e8cd, 0077e8ec] [0077e8f0, 0077e916] [0077e91a, 0077e9a1] [0077e9a5, 0077e9c5] [0077e9c9, 0077e9eb] [0077e9ef, 0077eeee] [0077eef2, 0077ef9d] [0077efa1, 0077efc6] [0077efca, 0077efeb] [0077efef, 0077f01b] [0077f01f, 0077f09d] [0077f0a1, 0077f151] [0077f155, 0077f17a] [0077f17e, 0077f1a7] [0077f1ab, 0077f25f] [0077f263, 0077f28a] [0077f290, 0077f2f6] [0077f2fa, 0077f319] [0077f31d, 0077f339] [0077f33d, 0077f36c]]


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0077e650(int param_1,undefined4 param_2,int param_3,char param_4)

{
  uint *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint **ppuVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  uint ***pppuVar12;
  uint ***extraout_ECX;
  bool bVar13;
  undefined4 ****ppppuStack_248;
  undefined4 ***pppuStack_244;
  uint ***local_230;
  uint ***local_22c;
  uint **local_228 [3];
  undefined4 uStack_21c;
  uint uStack_218;
  uint local_214;
  uint ***local_20c;
  uint ***local_208;
  uint **local_204;
  uint **local_200;
  uint **local_1fc;
  uint ***pppuStack_1f8;
  uint **appuStack_1f4 [3];
  undefined4 uStack_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  uint ***pppuStack_1dc;
  uint **local_1d8 [3];
  undefined4 uStack_1cc;
  uint local_1c8;
  uint local_1c4;
  uint ***pppuStack_1c0;
  uint auStack_1bc [3];
  undefined4 uStack_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint uStack_1a0;
  uint uStack_19c;
  undefined4 **appuStack_194 [4];
  int iStack_184;
  uint uStack_180;
  undefined1 local_178;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_15c;
  undefined4 local_14c;
  undefined4 local_148;
  undefined1 local_140;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_124;
  undefined1 local_120;
  undefined1 auStack_114 [28];
  undefined1 auStack_f8 [28];
  undefined1 auStack_dc [28];
  undefined1 auStack_c0 [28];
  undefined1 auStack_a4 [56];
  undefined1 auStack_6c [28];
  undefined1 auStack_50 [60];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b7b26e;
  local_14 = ExceptionList;
  local_164 = 0xf;
  local_148 = 0xf;
  local_12c = 0xf;
  local_168 = 0;
  local_178 = 0;
  local_14c = 0;
  local_15c = 0;
  local_130 = 0;
  local_140 = 0;
  local_124 = 0;
  local_120 = 1;
  local_c._0_1_ = 0;
  local_c._1_3_ = 0;
  local_22c = *(uint ****)(param_1 + 0x2c);
  if ((local_22c != (uint ***)0x0) && (param_3 == *(int *)(param_1 + 0x40))) {
    pppuStack_244 = *(undefined4 ****)(param_1 + 0x28);
    ppppuStack_248 = (undefined4 ****)local_228;
    ExceptionList = &local_14;
    uVar3 = FUN_00597bd0(local_22c);
    pppuStack_244 = (undefined4 ***)0xffffffff;
    ppppuStack_248 = (undefined4 ****)0x0;
    local_c._0_1_ = 1;
    FUN_00408ed0(uVar3);
    local_c._0_1_ = 0;
    if (local_214 < 0x10) goto LAB_0077f33d;
    pppuStack_244 = (undefined4 ***)local_228[0];
    goto LAB_0077f335;
  }
  local_208 = *(uint ****)(param_1 + 0x28);
  pppuVar12 = (uint ***)local_208[7][4];
  if (local_208 == pppuVar12) {
    pppuVar12 = (uint ***)local_208[7][5];
  }
  ExceptionList = &local_14;
  local_20c = pppuVar12;
  if (param_4 != '\0') {
    ExceptionList = &local_14;
    if (local_22c == (uint ***)0x0) goto LAB_0077f33d;
    pppuStack_244 = (undefined4 ***)0x77e75e;
    ExceptionList = &local_14;
    iVar4 = FUN_00967f50();
    if (iVar4 == 0) goto LAB_0077f33d;
    pppuStack_244 = (undefined4 ***)0x77e76b;
    pppuStack_244 = (undefined4 ***)FUN_00967f50();
    ppppuStack_248 = (undefined4 ****)0x77e771;
    local_22c = (uint ***)FUN_00598ed0();
    local_20c = *(uint ****)(param_1 + 0x28);
    local_208 = pppuVar12;
  }
  if (local_22c == (uint ***)0x0) goto LAB_0077f33d;
  pppuStack_244 = (undefined4 ***)0xffffffff;
  ppppuStack_248 = (undefined4 ****)0x0;
  FUN_00448aa0(local_22c + 0x1b);
  local_200 = local_22c[3];
  local_1fc = local_22c[4];
  if (local_200 < (uint **)0x1269) {
    if (DAT_01258a98 == 0) goto LAB_0077e7e7;
    pppuStack_244 = (undefined4 ***)0x77e7df;
    ppuVar5 = (uint **)FUN_009c1d40();
  }
  else if (DAT_01258a94 == 0) {
LAB_0077e7e7:
    ppuVar5 = (uint **)0x0;
  }
  else {
    pppuStack_244 = (undefined4 ***)0x77e7c8;
    ppuVar5 = (uint **)FUN_009c1d40();
  }
  local_22c[2] = ppuVar5;
  local_204 = ppuVar5;
  if (ppuVar5 != (uint **)0x0) {
    pppuStack_244 = (undefined4 ***)0x2;
    ppppuStack_248 = (undefined4 ****)&DAT_00dedc20;
    local_1c4 = 0xf;
    local_1c8 = 0;
    local_1d8[0] = (uint **)((uint)local_1d8[0] & 0xffffff00);
    FUN_00409350();
    local_c._0_1_ = 2;
    pppuStack_244 = local_228;
    ppppuStack_248 = (undefined4 ****)0x77e835;
    ppppuStack_248 = (undefined4 ****)(**(code **)(*ppuVar5[0xe] + 0x18))();
    puStack_10._0_1_ = 3;
    FUN_00988fa0();
    ppppuStack_248 = &pppuStack_1dc;
    puStack_10._0_1_ = 4;
    uVar3 = FUN_00988f20();
    ppppuStack_248 = (undefined4 ****)0xffffffff;
    puStack_10._0_1_ = 5;
    FUN_00448aa0(uVar3,0);
    if (0xf < uStack_1ac) {
      ppppuStack_248 = (undefined4 ****)pppuStack_1c0;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_1ac = 0xf;
    uStack_1b0 = 0;
    pppuStack_1c0 = (uint ***)((uint)pppuStack_1c0 & 0xffffff00);
    if (0xf < uStack_1e4) {
      ppppuStack_248 = (undefined4 ****)pppuStack_1f8;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_1e4 = 0xf;
    uStack_1e8 = 0;
    pppuStack_1f8 = (uint ***)((uint)pppuStack_1f8 & 0xffffff00);
    if (0xf < uStack_218) {
      ppppuStack_248 = (undefined4 ****)local_22c;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puStack_10._0_1_ = 0;
    uStack_218 = 0xf;
    uStack_21c = 0;
    local_22c = (uint ***)((uint)local_22c & 0xffffff00);
    if (0xf < local_1c8) {
      ppppuStack_248 = (undefined4 ****)pppuStack_1dc;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puVar1 = ppuVar5[0xe];
    ppppuStack_248 = (undefined4 ****)0x0;
    local_1c8 = 0xf;
    uStack_1cc = 0;
    pppuStack_1dc = (uint ***)((uint)pppuStack_1dc & 0xffffff00);
    FUN_00409350(&DAT_00ded94d);
    ppppuStack_248 = (undefined4 ****)0x1;
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,6);
    pppuStack_244 = (undefined4 ***)(**(code **)(*puVar1 + 0x20))();
    local_c._0_1_ = 7;
    ppppuStack_248 = (undefined4 ****)0x77e977;
    uVar3 = FUN_00988fa0();
    pppuStack_244 = (undefined4 ***)0xffffffff;
    ppppuStack_248 = (undefined4 ****)0x0;
    local_c._0_1_ = 8;
    FUN_00448aa0(uVar3);
    if (0xf < local_214) {
      pppuStack_244 = (undefined4 ***)local_228[0];
                    /* WARNING: Subroutine does not return */
      ppppuStack_248 = (undefined4 ****)&UNK_0077e9a2;
      FUN_00aae91b();
    }
    local_214 = 0xf;
    uStack_218 = 0;
    local_228[0] = (uint **)((uint)local_228[0] & 0xffffff00);
    if (0xf < uStack_1e0) {
      pppuStack_244 = (undefined4 ***)appuStack_1f4[0];
                    /* WARNING: Subroutine does not return */
      ppppuStack_248 = (undefined4 ****)&UNK_0077e9c6;
      FUN_00aae91b();
    }
    local_c._0_1_ = 0;
    uStack_1e0 = 0xf;
    uStack_1e4 = 0;
    appuStack_1f4[0] = (uint **)((uint)appuStack_1f4[0] & 0xffffff00);
    if (0xf < local_1c4) {
      pppuStack_244 = (undefined4 ***)local_1d8[0];
                    /* WARNING: Subroutine does not return */
      ppppuStack_248 = (undefined4 ****)&UNK_0077e9ec;
      FUN_00aae91b();
    }
  }
  pppuStack_244 = (undefined4 ***)0x1;
  ppppuStack_248 = (undefined4 ****)&DAT_00dee2cc;
  FUN_00448740();
  switch(local_22c[0x17]) {
  case (uint **)0x1:
    pppuStack_244 = (undefined4 ***)0x77ec87;
    iVar4 = FUN_00967f50();
    if (iVar4 != 0) {
      pppuStack_244 = (undefined4 ***)0x77ec96;
      piVar10 = (int *)FUN_00967f10();
      pppuStack_244 = (undefined4 ***)0x1;
      ppppuStack_248 = (undefined4 ****)local_22c[0x19];
      uVar3 = FUN_00988a50(auStack_6c);
      pppuStack_244 = (undefined4 ***)0x1;
      local_c._0_1_ = 0x12;
      ppppuStack_248 = (undefined4 ****)local_22c[0x18];
      uVar7 = FUN_00988a50(auStack_a4);
      local_c._0_1_ = 0x13;
      pppuStack_244 = (undefined4 ***)auStack_dc;
      ppppuStack_248 = (undefined4 ****)0x77ecfd;
      uVar8 = (**(code **)(*piVar10 + 0x20))();
      ppppuStack_248 = (undefined4 ****)&DAT_00e15680;
      local_c._0_1_ = 0x14;
      pppuStack_244 = (undefined4 ***)uVar3;
      uVar3 = FUN_0043e9a0(auStack_f8,&DAT_00e156c4,uVar8,&DAT_00dff614,uVar7);
      pppuStack_244 = (undefined4 ***)0xffffffff;
      ppppuStack_248 = (undefined4 ****)0x0;
      local_c = CONCAT31(local_c._1_3_,0x15);
      FUN_00448aa0(uVar3);
      pppuStack_244 = (undefined4 ***)0x77ed54;
      FUN_00408ad0();
      pppuStack_244 = (undefined4 ***)0x77ed60;
      FUN_00408ad0();
      pppuStack_244 = (undefined4 ***)0x77ed6c;
      FUN_00408ad0();
      goto LAB_0077ed73;
    }
    break;
  case (uint **)0x2:
    pppuStack_244 = (undefined4 ***)0x77ea26;
    iVar4 = FUN_00967f50();
    if (iVar4 != 0) {
      pppuStack_244 = (undefined4 ***)0x77ea35;
      piVar10 = (int *)FUN_00967f10();
      pppuStack_244 = (undefined4 ***)0x1;
      piVar6 = (int *)FUN_005968d0(&local_200);
      iVar4 = *piVar6;
      FUN_00401000(0x47c35040);
      iVar11 = FUN_00b31c00();
      __alldiv((longlong)iVar11 * (longlong)iVar4,1000,0);
      uVar3 = FUN_00988a50(auStack_1bc);
      local_c._0_1_ = 9;
      pppuStack_244 = appuStack_1f4;
      ppppuStack_248 = (undefined4 ****)0x77eaab;
      (**(code **)(*piVar10 + 0x20))();
      ppppuStack_248 = (undefined4 ****)&DAT_00e156bc;
      local_c._0_1_ = 10;
      pppuStack_244 = (undefined4 ***)uVar3;
      uVar3 = FUN_0043ec10();
      pppuStack_244 = (undefined4 ***)0xffffffff;
      ppppuStack_248 = (undefined4 ****)0x0;
      local_c = CONCAT31(local_c._1_3_,0xb);
      FUN_00448aa0(uVar3);
      pppuStack_244 = (undefined4 ***)0x77eaf2;
      FUN_00408ad0();
      pppuStack_244 = (undefined4 ***)0x77eafb;
      FUN_00408ad0();
      goto LAB_0077ed73;
    }
    break;
  case (uint **)0x3:
    pppuStack_244 = (undefined4 ***)auStack_50;
    ppppuStack_248 = (undefined4 ****)0x77ec54;
    uVar3 = FUN_00475d50();
    pppuStack_244 = (undefined4 ***)0xffffffff;
    ppppuStack_248 = (undefined4 ****)0x0;
    local_c = CONCAT31(local_c._1_3_,0x11);
    FUN_00448aa0(uVar3);
    goto LAB_0077ed73;
  case (uint **)0x4:
    pppuStack_244 = (undefined4 ***)auStack_c0;
    ppppuStack_248 = (undefined4 ****)0x77ec1b;
    uVar3 = FUN_00475d50();
    pppuStack_244 = (undefined4 ***)0xffffffff;
    ppppuStack_248 = (undefined4 ****)0x0;
    local_c = CONCAT31(local_c._1_3_,0x10);
    FUN_00448aa0(uVar3);
    goto LAB_0077ed73;
  case (uint **)0x5:
    bVar13 = local_22c[0x28] != (uint **)0x0;
    if (bVar13) {
      pppuStack_244 = (undefined4 ***)0x77eb4b;
      pppuStack_244 = (undefined4 ***)FUN_00401320();
      local_c = 0xd;
    }
    else {
      pppuStack_244 = (undefined4 ***)0x77eb24;
      pppuStack_244 = (undefined4 ***)FUN_009885d0();
      local_c = CONCAT31(local_c._1_3_,0xc);
    }
    ppppuStack_248 = (undefined4 ****)local_1d8;
    uVar3 = FUN_0042c180();
    pppuStack_244 = (undefined4 ***)0xffffffff;
    ppppuStack_248 = (undefined4 ****)0x0;
    local_c = 0xe;
    FUN_00448aa0(uVar3);
    pppuStack_244 = (undefined4 ***)0x77eb9a;
    FUN_00408ad0();
    if (bVar13) {
      pppuStack_244 = (undefined4 ***)0x77ebb2;
      FUN_00408ad0();
    }
    local_c._0_1_ = 0;
    local_c._1_3_ = 0;
    if (bVar13) break;
    goto LAB_0077ed7a;
  case (uint **)0x6:
    pppuStack_244 = (undefined4 ***)auStack_114;
    ppppuStack_248 = (undefined4 ****)0x77ebe2;
    uVar3 = FUN_00475d50();
    pppuStack_244 = (undefined4 ***)0xffffffff;
    ppppuStack_248 = (undefined4 ****)0x0;
    local_c = CONCAT31(local_c._1_3_,0xf);
    FUN_00448aa0(uVar3);
LAB_0077ed73:
LAB_0077ed7a:
    local_c._0_1_ = 0;
    pppuStack_244 = (undefined4 ***)0x77ed7f;
    FUN_00408ad0();
  }
  pppuStack_244 = (undefined4 ***)0x0;
  ppppuStack_248 = (undefined4 ****)&DAT_00ded94d;
  uStack_180 = 0xf;
  iStack_184 = 0;
  appuStack_194[0] = (undefined4 **)((uint)appuStack_194[0] & 0xffffff00);
  FUN_00409350();
  local_c._0_1_ = 0x16;
  uVar2 = (undefined1)local_c;
  local_c._0_1_ = 0x16;
  ppuVar5 = local_20c[0x1b];
  pppuVar12 = (uint ***)((int)local_20c[0x1c] - (int)ppuVar5);
  local_230 = (uint ***)0x0;
  if (0 < (int)((uint)pppuVar12 & 0xfffffffc)) {
    do {
      puVar1 = ppuVar5[(int)local_230];
      local_200 = (uint **)puVar1[0xd];
      local_1fc = (uint **)puVar1[0xe];
      if (local_200 < (uint **)0x1269) {
        if (DAT_01258a98 == 0) goto LAB_0077ee22;
        pppuStack_244 = (undefined4 ***)0x77ee20;
        ppuVar5 = (uint **)FUN_009c1d40();
      }
      else if (DAT_01258a94 == 0) {
LAB_0077ee22:
        ppuVar5 = (uint **)0x0;
      }
      else {
        pppuStack_244 = (undefined4 ***)0x77ee07;
        ppuVar5 = (uint **)FUN_009c1d40();
      }
      puVar1[0xc] = (uint)ppuVar5;
      if ((ppuVar5 != (uint **)0x0) && (ppuVar5 == local_204)) {
        puVar1 = local_20c[0x1b][(int)local_230];
        uStack_1a0 = puVar1[3];
        uStack_19c = puVar1[4];
        if (uStack_1a0 < 0x1269) {
          if (DAT_01258a98 == 0) goto LAB_0077ee96;
          pppuStack_244 = (undefined4 ***)0x77ee94;
          uVar9 = FUN_009c1d40();
        }
        else if (DAT_01258a94 == 0) {
LAB_0077ee96:
          uVar9 = 0;
        }
        else {
          pppuStack_244 = (undefined4 ***)0x77ee78;
          uVar9 = FUN_009c1d40();
        }
        puVar1[2] = uVar9;
        if (uVar9 != 0) {
          if (iStack_184 == 0) {
            pppuStack_244 = local_228;
            ppppuStack_248 = (undefined4 ****)0x77eebb;
            uVar3 = FUN_00475d50();
            pppuStack_244 = (undefined4 ***)0xffffffff;
            ppppuStack_248 = (undefined4 ****)0x0;
            local_c._0_1_ = 0x17;
            FUN_00448aa0(uVar3);
            local_c._0_1_ = 0x16;
            if (0xf < local_214) {
              pppuStack_244 = (undefined4 ***)local_228[0];
                    /* WARNING: Subroutine does not return */
              ppppuStack_248 = (undefined4 ****)&UNK_0077eeef;
              FUN_00aae91b();
            }
          }
          pppuStack_244 = (undefined4 ***)0x2;
          ppppuStack_248 = (undefined4 ****)&DAT_00dedc20;
          local_1c4 = 0xf;
          local_1c8 = 0;
          local_1d8[0] = (uint **)((uint)local_1d8[0] & 0xffffff00);
          FUN_00409350();
          local_c._0_1_ = 0x18;
          pppuStack_244 = (undefined4 ***)0x77ef32;
          piVar10 = (int *)FUN_00967f50();
          pppuStack_244 = (undefined4 ***)auStack_1bc;
          ppppuStack_248 = (undefined4 ****)0x77ef43;
          pppuStack_244 = (undefined4 ***)(**(code **)(*piVar10 + 0x20))();
          local_c._0_1_ = 0x19;
          ppppuStack_248 = (undefined4 ****)0x77ef5a;
          FUN_00988fa0();
          pppuStack_244 = local_1d8;
          local_c._0_1_ = 0x1a;
          ppppuStack_248 = (undefined4 ****)0x77ef75;
          uVar3 = FUN_00988f20();
          pppuStack_244 = (undefined4 ***)0xffffffff;
          ppppuStack_248 = (undefined4 ****)0x0;
          local_c._0_1_ = 0x1b;
          FUN_00448aa0(uVar3);
          if (0xf < local_214) {
            pppuStack_244 = (undefined4 ***)local_228[0];
                    /* WARNING: Subroutine does not return */
            ppppuStack_248 = (undefined4 ****)&UNK_0077ef9e;
            FUN_00aae91b();
          }
          local_214 = 0xf;
          uStack_218 = 0;
          local_228[0] = (uint **)((uint)local_228[0] & 0xffffff00);
          if (0xf < uStack_1e0) {
            pppuStack_244 = (undefined4 ***)appuStack_1f4[0];
                    /* WARNING: Subroutine does not return */
            ppppuStack_248 = (undefined4 ****)&UNK_0077efc7;
            FUN_00aae91b();
          }
          uStack_1e0 = 0xf;
          uStack_1e4 = 0;
          appuStack_1f4[0] = (uint **)((uint)appuStack_1f4[0] & 0xffffff00);
          if (0xf < uStack_1a8) {
            pppuStack_244 = (undefined4 ***)auStack_1bc[0];
                    /* WARNING: Subroutine does not return */
            ppppuStack_248 = (undefined4 ****)&UNK_0077efec;
            FUN_00aae91b();
          }
          local_c._0_1_ = 0x16;
          uStack_1a8 = 0xf;
          uStack_1ac = 0;
          auStack_1bc[0] = auStack_1bc[0] & 0xffffff00;
          if (0xf < local_1c4) {
            pppuStack_244 = (undefined4 ***)local_1d8[0];
                    /* WARNING: Subroutine does not return */
            ppppuStack_248 = (undefined4 ****)&UNK_0077f01c;
            FUN_00aae91b();
          }
          local_1c4 = 0xf;
          local_1c8 = 0;
          local_1d8[0] = (uint **)((uint)local_1d8[0] & 0xffffff00);
        }
      }
      ppuVar5 = local_20c[0x1b];
      pppuVar12 = (uint ***)((int)local_230 + 1);
      local_230 = pppuVar12;
      uVar2 = (undefined1)local_c;
    } while ((int)pppuVar12 < (int)local_20c[0x1c] - (int)ppuVar5 >> 2);
  }
  local_c._0_1_ = uVar2;
  if (iStack_184 != 0) {
    pppuStack_244 = appuStack_194;
    ppppuStack_248 = (undefined4 ****)0x77f06a;
    uVar3 = FUN_00988fa0();
    pppuStack_244 = (undefined4 ***)0xffffffff;
    ppppuStack_248 = (undefined4 ****)0x0;
    local_c._0_1_ = 0x1c;
    FUN_00448aa0(uVar3);
    local_c._0_1_ = 0x16;
    pppuVar12 = extraout_ECX;
    if (0xf < local_214) {
      pppuStack_244 = (undefined4 ***)local_228[0];
                    /* WARNING: Subroutine does not return */
      ppppuStack_248 = (undefined4 ****)&UNK_0077f09e;
      FUN_00aae91b();
    }
  }
  ppuVar5 = local_208[0x1f];
  if (0 < (int)ppuVar5) {
    pppuStack_244 = (undefined4 ***)0x1;
    local_200 = (uint **)&ppppuStack_248;
    ppppuStack_248 = (undefined4 ****)pppuVar12;
    FUN_00401000(0x47c35040);
    iVar4 = FUN_00b31c00();
    ppppuStack_248 = (undefined4 ****)__alldiv((longlong)iVar4 * (longlong)(int)ppuVar5,1000,0);
    pppuStack_244 = (undefined4 ***)FUN_00988a50(auStack_1bc);
    ppppuStack_248 = (undefined4 ****)appuStack_1f4;
    local_c._0_1_ = 0x1d;
    uVar3 = FUN_0042c180();
    local_c._0_1_ = 0x1e;
    uVar3 = FUN_00988fa0(uVar3);
    pppuStack_244 = (undefined4 ***)0xffffffff;
    ppppuStack_248 = (undefined4 ****)0x0;
    local_c._0_1_ = 0x1f;
    FUN_00448aa0(uVar3);
    if (0xf < local_214) {
      pppuStack_244 = (undefined4 ***)local_228[0];
                    /* WARNING: Subroutine does not return */
      ppppuStack_248 = (undefined4 ****)&UNK_0077f152;
      FUN_00aae91b();
    }
    local_214 = 0xf;
    uStack_218 = 0;
    local_228[0] = (uint **)((uint)local_228[0] & 0xffffff00);
    if (0xf < uStack_1e0) {
      pppuStack_244 = (undefined4 ***)appuStack_1f4[0];
                    /* WARNING: Subroutine does not return */
      ppppuStack_248 = (undefined4 ****)&UNK_0077f17b;
      FUN_00aae91b();
    }
    local_c._0_1_ = 0x16;
    uStack_1e0 = 0xf;
    uStack_1e4 = 0;
    appuStack_1f4[0] = (uint **)((uint)appuStack_1f4[0] & 0xffffff00);
    if (0xf < uStack_1a8) {
      pppuStack_244 = (undefined4 ***)auStack_1bc[0];
                    /* WARNING: Subroutine does not return */
      ppppuStack_248 = (undefined4 ****)&UNK_0077f1a8;
      FUN_00aae91b();
    }
  }
  pppuStack_244 = (undefined4 ***)0x77f1b7;
  iVar4 = FUN_00967f50();
  if (iVar4 == 0) {
LAB_0077f1fd:
    iVar4 = 0;
  }
  else {
    local_208 = local_22c + 0xc;
    pppuStack_244 = (undefined4 ***)0x77f1c9;
    iVar4 = FUN_00967f50();
    if (iVar4 == 0) goto LAB_0077f1fd;
    pppuStack_244 = (undefined4 ***)0x77f1d5;
    iVar4 = FUN_00967f50();
    pppuStack_244 = (undefined4 ***)0x77f1e0;
    iVar11 = FUN_00967f50();
    if ((*(int *)(*(int *)(iVar4 + 0x38) + 0x34) == 4) ||
       (*(int *)(*(int *)(iVar11 + 0x38) + 0x34) != 4)) goto LAB_0077f1fd;
    iVar4 = *(int *)(*(int *)(iVar4 + 0x38) + 0x25c);
  }
  if (0 < iVar4) {
    pppuStack_244 = appuStack_1f4;
    ppppuStack_248 = (undefined4 ****)0x77f216;
    pppuStack_244 = (undefined4 ***)FUN_00475d50();
    local_c._0_1_ = 0x20;
    ppppuStack_248 = (undefined4 ****)0x77f230;
    uVar3 = FUN_00988fa0();
    pppuStack_244 = (undefined4 ***)0xffffffff;
    ppppuStack_248 = (undefined4 ****)0x0;
    local_c._0_1_ = 0x21;
    FUN_00448aa0(uVar3);
    if (0xf < local_214) {
      pppuStack_244 = (undefined4 ***)local_228[0];
                    /* WARNING: Subroutine does not return */
      ppppuStack_248 = (undefined4 ****)&UNK_0077f260;
      FUN_00aae91b();
    }
    local_c._0_1_ = 0x16;
    local_214 = 0xf;
    uStack_218 = 0;
    local_228[0] = (uint **)((uint)local_228[0] & 0xffffff00);
    if (0xf < uStack_1e0) {
      pppuStack_244 = (undefined4 ***)appuStack_1f4[0];
                    /* WARNING: Subroutine does not return */
      ppppuStack_248 = (undefined4 ****)&UNK_0077f28b;
      FUN_00aae91b();
    }
  }
  if ((iStack_184 != 0) && (param_4 == '\0')) {
    pppuStack_244 = appuStack_1f4;
    ppppuStack_248 = (undefined4 ****)0x77f2b2;
    pppuStack_244 = (undefined4 ***)FUN_00475d50();
    local_c._0_1_ = 0x22;
    ppppuStack_248 = (undefined4 ****)0x77f2cc;
    uVar3 = FUN_00988fa0();
    pppuStack_244 = (undefined4 ***)0xffffffff;
    ppppuStack_248 = (undefined4 ****)0x0;
    local_c._0_1_ = 0x23;
    FUN_00448aa0(uVar3);
    if (0xf < local_214) {
      pppuStack_244 = (undefined4 ***)local_228[0];
                    /* WARNING: Subroutine does not return */
      ppppuStack_248 = (undefined4 ****)&UNK_0077f2f7;
      FUN_00aae91b();
    }
    local_214 = 0xf;
    uStack_218 = 0;
    local_228[0] = (uint **)((uint)local_228[0] & 0xffffff00);
    if (0xf < uStack_1e0) {
      pppuStack_244 = (undefined4 ***)appuStack_1f4[0];
                    /* WARNING: Subroutine does not return */
      ppppuStack_248 = (undefined4 ****)&UNK_0077f31a;
      FUN_00aae91b();
    }
  }
  local_c._0_1_ = 0;
  if (uStack_180 < 0x10) {
LAB_0077f33d:
    pppuStack_244 = (undefined4 ***)param_2;
    ppppuStack_248 = (undefined4 ****)0x77f34d;
    FUN_0040c830();
    pppuStack_244 = (undefined4 ***)0x77f354;
    FUN_00459820();
    ExceptionList = local_14;
    return param_2;
  }
  pppuStack_244 = (undefined4 ***)appuStack_194[0];
LAB_0077f335:
  local_c._0_1_ = 0;
                    /* WARNING: Subroutine does not return */
  ppppuStack_248 = (undefined4 ****)&UNK_0077f33a;
  FUN_00aae91b();
}

