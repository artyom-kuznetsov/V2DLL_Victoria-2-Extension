// FUN_00799420 @ 00799420 body=[[00799420, 007995ac] [007995b0, 007995e6] [007995ea, 0079968d] [00799691, 007996f1] [007996f5, 0079970f] [00799718, 007997f4] [007997f8, 00799833] [00799837, 0079985d] [00799861, 007998f8] [007998fc, 00799937] [0079993b, 00799965] [0079996e, 00799a23] [00799a27, 00799a63] [00799a67, 00799afe] [00799b02, 00799b42] [00799b4b, 0079b7fb]]


/* WARNING: Type propagation algorithm not settling */

int **** FUN_00799420(int ****param_1,int ****param_2)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  int **ppiVar7;
  int ****ppppiVar8;
  int ***pppiVar9;
  int ****in_ECX;
  int *piVar10;
  char *pcVar11;
  int ****ppppiVar12;
  bool bVar13;
  undefined8 uVar14;
  int ****ppppiStack_2bc;
  int ****ppppiStack_2b8;
  int ****ppppiStack_2b4;
  undefined4 uStack_2a0;
  int ****local_29c;
  int ****local_298;
  int ****local_294;
  int ****ppppiStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 local_284;
  int ***local_280;
  int ***pppiStack_27c;
  int ****appppiStack_278 [4];
  int iStack_268;
  uint uStack_264;
  int ***pppiStack_260;
  int ***apppiStack_25c [6];
  int ***pppiStack_244;
  int ****ppppiStack_240;
  int ****local_23c [3];
  undefined4 uStack_230;
  uint local_22c;
  undefined1 *local_228;
  int iStack_224;
  int ****appppiStack_220 [2];
  int ****ppppiStack_218;
  int ****ppppiStack_214;
  int ***apppiStack_20c [7];
  undefined1 local_1f0;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined1 local_1d4;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined1 local_1b8;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_19c;
  undefined1 local_198;
  int ***apppiStack_18c [3];
  undefined1 auStack_180 [16];
  int ***apppiStack_170 [7];
  int ***apppiStack_154 [2];
  undefined1 auStack_14c [44];
  int ***apppiStack_120 [4];
  undefined1 auStack_110 [44];
  int ***apppiStack_e4 [27];
  int ***pppiStack_78;
  int ***local_74 [21];
  undefined1 uStack_20;
  undefined1 uStack_1c;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  puStack_10 = &LAB_00b91a6d;
  local_14 = ExceptionList;
  local_29c = (int ****)0x0;
  local_1dc = 0xf;
  local_1c0 = 0xf;
  local_1a4 = 0xf;
  local_1e0 = 0;
  local_1f0 = 0;
  local_1c4 = 0;
  local_1d4 = 0;
  local_1a8 = 0;
  local_1b8 = 0;
  local_19c = 0;
  local_198 = 1;
  local_c = 0;
  ppppiVar12 = (int ****)in_ECX[0xd];
  ExceptionList = &local_14;
  local_298 = in_ECX;
  if ((ppppiVar12 != (int ****)0x0) &&
     (ExceptionList = &local_14, *(char *)((int)*ppppiVar12 + 0x67) != '\0')) {
    ppppiStack_2b4 = param_2;
    ppppiStack_2b8 = local_74;
    ExceptionList = &local_14;
    ppppiStack_2bc = ppppiVar12;
    FUN_00798420();
    local_c._0_1_ = 1;
    ppppiStack_2b4 = (int ****)0x7994e8;
    FUN_004115d0();
    local_c._0_1_ = 0;
    ppppiStack_2b4 = (int ****)0x7994fb;
    FUN_00459820();
    ppppiStack_2b4 = (int ****)0x0;
    ppppiStack_2b8 = (int ****)&DAT_00ded94d;
    local_228 = (undefined1 *)0xf;
    local_22c = 0;
    local_23c[0] = (int ****)((uint)local_23c[0] & 0xffffff00);
    ppppiStack_2bc = (int ****)0x799520;
    FUN_00409350();
    local_c = CONCAT31(local_c._1_3_,2);
    local_29c = (int ****)0x1;
    ppppiStack_2b4 = (int ****)0x799540;
    cVar3 = FUN_00416db0();
    if (cVar3 == '\0') {
LAB_0079958b:
      uStack_2a0 = CONCAT13(1,(undefined3)uStack_2a0);
    }
    else {
      ppppiStack_2b4 = (int ****)0x0;
      ppppiStack_2b8 = (int ****)&DAT_00ded94d;
      local_280 = (int ***)0xf;
      local_284 = 0;
      local_294 = (int ****)((uint)local_294 & 0xffffff00);
      ppppiStack_2bc = (int ****)0x799563;
      FUN_00409350();
      local_c = 3;
      local_29c = (int ****)0x3;
      ppppiStack_2b4 = (int ****)0x799583;
      cVar3 = FUN_00416db0();
      uStack_2a0 = uStack_2a0 & 0xffffff;
      if (cVar3 == '\0') goto LAB_0079958b;
    }
    if (((uint)local_29c & 2) != 0) {
      local_29c = (int ****)((uint)local_29c & 0xfffffffd);
      if ((int **)0xf < local_280) {
        ppppiStack_2b4 = local_294;
                    /* WARNING: Subroutine does not return */
        ppppiStack_2b8 = (int ****)&UNK_007995ad;
        FUN_00aae91b();
      }
      local_280 = (int ***)0xf;
      local_284 = 0;
      local_294 = (int ****)((uint)local_294 & 0xffffff00);
    }
    local_c = 0;
    if ((((uint)local_29c & 1) != 0) &&
       (local_29c = (int ****)((uint)local_29c & 0xfffffffe), (undefined1 *)0xf < local_228)) {
      ppppiStack_2b4 = local_23c[0];
                    /* WARNING: Subroutine does not return */
      ppppiStack_2b8 = (int ****)&UNK_007995e7;
      FUN_00aae91b();
    }
    if (uStack_2a0._3_1_ != '\0') goto LAB_0079b7cc;
  }
  local_c = 0;
  ppppiStack_2b4 = (int ****)0x7995fe;
  pbVar4 = (byte *)(*(code *)(*param_2)[0x11])();
  ppppiVar12 = local_298;
  if (0xf < *(uint *)(pbVar4 + 0x14)) {
    pbVar4 = *(byte **)pbVar4;
  }
  pcVar11 = "unitattrition";
  do {
    bVar1 = *pbVar4;
    bVar13 = bVar1 < (byte)*pcVar11;
    if (bVar1 != *pcVar11) {
LAB_00799630:
      iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      goto LAB_00799635;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar13 = bVar1 < (byte)pcVar11[1];
    if (bVar1 != pcVar11[1]) goto LAB_00799630;
    pbVar4 = pbVar4 + 2;
    pcVar11 = pcVar11 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_00799635:
  if (iVar5 == 0) {
    if (local_298[10][0x10] != (int **)0x0) {
      ppppiStack_2b4 = (int ****)local_23c;
      ppppiStack_2b8 = (int ****)0x79965c;
      uVar6 = (*(code *)(*local_298[10])[0x26])();
      ppppiStack_2b8 = (int ****)0xffffffff;
      ppppiStack_2bc = (int ****)0x0;
      puStack_10._0_1_ = 4;
      FUN_00408ed0(uVar6);
      puStack_10 = (undefined1 *)((uint)puStack_10._1_3_ << 8);
      if (0xf < local_22c) {
        ppppiStack_2b8 = ppppiStack_240;
                    /* WARNING: Subroutine does not return */
        ppppiStack_2bc = (int ****)&UNK_0079968e;
        FUN_00aae91b();
      }
      ppppiStack_2b8 = &pppiStack_27c;
      ppppiStack_2bc = (int ****)0x7996a3;
      (*(code *)(*ppppiVar12[10])[0x27])();
      local_c._0_1_ = 5;
      if (iStack_268 != 0) {
        ppppiStack_2b4 = (int ****)appppiStack_278;
        ppppiStack_2b8 = (int ****)0x7996c4;
        ppppiStack_2bc = (int ****)FUN_00988fa0();
        ppppiStack_2b4 = (int ****)0xffffffff;
        ppppiStack_2b8 = (int ****)0x0;
        local_c._0_1_ = 6;
        FUN_00448aa0();
        if ((undefined1 *)0xf < local_228) {
          ppppiStack_2b4 = local_23c[0];
                    /* WARNING: Subroutine does not return */
          ppppiStack_2b8 = (int ****)&UNK_007996f2;
          FUN_00aae91b();
        }
      }
      local_c = (uint)local_c._1_3_ << 8;
      if (0xf < uStack_264) {
        ppppiStack_2b4 = appppiStack_278[0];
                    /* WARNING: Subroutine does not return */
        ppppiStack_2b8 = (int ****)&UNK_00799710;
        FUN_00aae91b();
      }
    }
    goto LAB_0079b7cc;
  }
  ppppiStack_2b4 = (int ****)0x799722;
  pbVar4 = (byte *)(*(code *)(*param_2)[0x11])();
  if (0xf < *(uint *)(pbVar4 + 0x14)) {
    pbVar4 = *(byte **)pbVar4;
  }
  pcVar11 = "disbandbutton";
  do {
    bVar1 = *pbVar4;
    bVar13 = bVar1 < (byte)*pcVar11;
    if (bVar1 != *pcVar11) {
LAB_00799750:
      iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      goto LAB_00799755;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar13 = bVar1 < (byte)pcVar11[1];
    if (bVar1 != pcVar11[1]) goto LAB_00799750;
    pbVar4 = pbVar4 + 2;
    pcVar11 = pcVar11 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_00799755:
  if (iVar5 == 0) {
    ppppiStack_2b4 = (int ****)0xc;
    ppppiStack_2b8 = (int ****)0xe16630;
    local_228 = (undefined1 *)0xf;
    local_22c = 0;
    local_23c[0] = (int ****)((uint)local_23c[0] & 0xffffff00);
    ppppiStack_2bc = (int ****)0x799783;
    FUN_00409350();
    ppppiStack_2b4 = (int ****)local_23c;
    ppppiStack_2b8 = (int ****)&local_294;
    local_c._0_1_ = 7;
    ppppiStack_2bc = (int ****)0x79979a;
    FUN_009a8ee0();
    local_c._0_1_ = 8;
    ppppiStack_2b4 = (int ****)0x7997a9;
    iVar5 = FUN_00475500();
    ppppiStack_2bc = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x6c) >> 0x20);
    ppppiStack_2b8 = (int ****)*(undefined8 *)(iVar5 + 0x74);
    ppppiStack_2b4 = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20);
    ppppiStack_2bc = (int ****)FUN_009a9880((int)*(undefined8 *)(iVar5 + 0x6c));
    ppppiStack_2b4 = (int ****)0xffffffff;
    ppppiStack_2b8 = (int ****)0x0;
    local_c._0_1_ = 9;
    FUN_00408ed0();
    if (0xf < uStack_264) {
      ppppiStack_2b4 = appppiStack_278[0];
                    /* WARNING: Subroutine does not return */
      ppppiStack_2b8 = (int ****)&UNK_007997f5;
      FUN_00aae91b();
    }
    uStack_264 = 0xf;
    iStack_268 = 0;
    appppiStack_278[0] = (int ****)((uint)appppiStack_278[0] & 0xffffff00);
    local_c._0_1_ = 10;
    ppppiStack_2b4 = (int ****)0x799819;
    FUN_009adb70();
    if (ppppiStack_290 != (int ****)0x0) {
      ppppiStack_2b4 = (int ****)0x79982a;
      FUN_009e6a80();
      ppppiStack_2b4 = ppppiStack_290;
                    /* WARNING: Subroutine does not return */
      ppppiStack_2b8 = (int ****)&UNK_00799834;
      FUN_00aae91b();
    }
    local_c._0_1_ = 0;
    ppppiStack_290 = (int ****)0x0;
    uStack_28c = 0;
    uStack_288 = 0;
    if (0xf < local_228) {
      ppppiStack_2b4 = local_23c[0];
                    /* WARNING: Subroutine does not return */
      ppppiStack_2b8 = (int ****)&UNK_0079985e;
      FUN_00aae91b();
    }
    ppppiStack_2b4 = (int ****)0x10;
    ppppiStack_2b8 = (int ****)0xe16640;
    local_228 = (undefined1 *)0xf;
    local_22c = 0;
    local_23c[0] = (int ****)((uint)local_23c[0] & 0xffffff00);
    ppppiStack_2bc = (int ****)0x799887;
    FUN_00409350();
    ppppiStack_2b4 = (int ****)local_23c;
    ppppiStack_2b8 = (int ****)&local_294;
    local_c._0_1_ = 0xb;
    ppppiStack_2bc = (int ****)0x79989e;
    FUN_009a8ee0();
    local_c._0_1_ = 0xc;
    ppppiStack_2b4 = (int ****)0x7998ad;
    iVar5 = FUN_00475500();
    ppppiStack_2bc = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x6c) >> 0x20);
    ppppiStack_2b8 = (int ****)*(undefined8 *)(iVar5 + 0x74);
    ppppiStack_2b4 = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20);
    ppppiStack_2bc = (int ****)FUN_009a9880((int)*(undefined8 *)(iVar5 + 0x6c));
    ppppiStack_2b4 = (int ****)0xffffffff;
    ppppiStack_2b8 = (int ****)0x0;
    local_c._0_1_ = 0xd;
    FUN_00408ed0();
    if (0xf < uStack_264) {
      ppppiStack_2b4 = appppiStack_278[0];
                    /* WARNING: Subroutine does not return */
      ppppiStack_2b8 = (int ****)&UNK_007998f9;
      FUN_00aae91b();
    }
    uStack_264 = 0xf;
    iStack_268 = 0;
    appppiStack_278[0] = (int ****)((uint)appppiStack_278[0] & 0xffffff00);
    local_c._0_1_ = 0xe;
    ppppiStack_2b4 = (int ****)0x79991d;
    FUN_009adb70();
    if (ppppiStack_290 != (int ****)0x0) {
      ppppiStack_2b4 = (int ****)0x79992e;
      FUN_009e6a80();
      ppppiStack_2b4 = ppppiStack_290;
                    /* WARNING: Subroutine does not return */
      ppppiStack_2b8 = (int ****)&UNK_00799938;
      FUN_00aae91b();
    }
    local_c = (uint)local_c._1_3_ << 8;
    ppppiStack_290 = (int ****)0x0;
    uStack_28c = 0;
    uStack_288 = 0;
    if ((undefined1 *)0xf < local_228) {
      ppppiStack_2b4 = local_23c[0];
                    /* WARNING: Subroutine does not return */
      ppppiStack_2b8 = (int ****)&UNK_00799966;
      FUN_00aae91b();
    }
    goto LAB_0079b7cc;
  }
  ppppiStack_2b4 = (int ****)0x79997a;
  (*(code *)(*param_2)[0x11])();
  ppppiStack_2b4 = (int ****)0x799984;
  cVar3 = FUN_0040b360();
  if (cVar3 != '\0') {
    ppppiStack_2b4 = (int ****)0x16;
    ppppiStack_2b8 = (int ****)0xe16654;
    local_228 = (undefined1 *)0xf;
    local_22c = 0;
    local_23c[0] = (int ****)((uint)local_23c[0] & 0xffffff00);
    ppppiStack_2bc = (int ****)0x7999b2;
    FUN_00409350();
    ppppiStack_2b4 = (int ****)local_23c;
    ppppiStack_2b8 = (int ****)&local_294;
    local_c._0_1_ = 0xf;
    ppppiStack_2bc = (int ****)0x7999c9;
    FUN_009a8ee0();
    local_c._0_1_ = 0x10;
    ppppiStack_2b4 = (int ****)0x7999d8;
    iVar5 = FUN_00475500();
    ppppiStack_2bc = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x6c) >> 0x20);
    ppppiStack_2b8 = (int ****)*(undefined8 *)(iVar5 + 0x74);
    ppppiStack_2b4 = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20);
    ppppiStack_2bc = (int ****)FUN_009a9880((int)*(undefined8 *)(iVar5 + 0x6c));
    ppppiStack_2b4 = (int ****)0xffffffff;
    ppppiStack_2b8 = (int ****)0x0;
    local_c._0_1_ = 0x11;
    FUN_00408ed0();
    if (0xf < uStack_264) {
      ppppiStack_2b4 = appppiStack_278[0];
                    /* WARNING: Subroutine does not return */
      ppppiStack_2b8 = (int ****)&UNK_00799a24;
      FUN_00aae91b();
    }
    ppppiStack_2b4 = (int ****)&local_294;
    uStack_264 = 0xf;
    iStack_268 = 0;
    appppiStack_278[0] = (int ****)((uint)appppiStack_278[0] & 0xffffff00);
    local_c._0_1_ = 0xf;
    ppppiStack_2b8 = (int ****)0x799a49;
    FUN_009a9740();
    local_c._0_1_ = 0;
    if (0xf < local_228) {
      ppppiStack_2b4 = local_23c[0];
                    /* WARNING: Subroutine does not return */
      ppppiStack_2b8 = (int ****)&UNK_00799a64;
      FUN_00aae91b();
    }
    ppppiStack_2b4 = (int ****)0x1a;
    ppppiStack_2b8 = (int ****)0xe1666c;
    local_228 = (undefined1 *)0xf;
    local_22c = 0;
    local_23c[0] = (int ****)((uint)local_23c[0] & 0xffffff00);
    ppppiStack_2bc = (int ****)0x799a8d;
    FUN_00409350();
    ppppiStack_2b4 = (int ****)local_23c;
    ppppiStack_2b8 = (int ****)&local_294;
    local_c._0_1_ = 0x12;
    ppppiStack_2bc = (int ****)0x799aa4;
    FUN_009a8ee0();
    local_c._0_1_ = 0x13;
    ppppiStack_2b4 = (int ****)0x799ab3;
    iVar5 = FUN_00475500();
    ppppiStack_2bc = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x6c) >> 0x20);
    ppppiStack_2b8 = (int ****)*(undefined8 *)(iVar5 + 0x74);
    ppppiStack_2b4 = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20);
    ppppiStack_2bc = (int ****)FUN_009a9880((int)*(undefined8 *)(iVar5 + 0x6c));
    ppppiStack_2b4 = (int ****)0xffffffff;
    ppppiStack_2b8 = (int ****)0x0;
    local_c._0_1_ = 0x14;
    FUN_00408ed0();
    if (0xf < uStack_264) {
      ppppiStack_2b4 = appppiStack_278[0];
                    /* WARNING: Subroutine does not return */
      ppppiStack_2b8 = (int ****)&UNK_00799aff;
      FUN_00aae91b();
    }
    ppppiStack_2b4 = (int ****)&local_294;
    uStack_264 = 0xf;
    iStack_268 = 0;
    appppiStack_278[0] = (int ****)((uint)appppiStack_278[0] & 0xffffff00);
    local_c._0_1_ = 0x12;
    ppppiStack_2b8 = (int ****)0x799b24;
    FUN_009a9740();
    local_c = (uint)local_c._1_3_ << 8;
    if ((undefined1 *)0xf < local_228) {
      ppppiStack_2b4 = local_23c[0];
                    /* WARNING: Subroutine does not return */
      ppppiStack_2b8 = (int ****)&UNK_00799b43;
      FUN_00aae91b();
    }
    goto LAB_0079b7cc;
  }
  ppppiStack_2b4 = (int ****)0x799b54;
  (*(code *)(*param_2)[0x11])();
  ppppiStack_2b4 = (int ****)0x799b5e;
  cVar3 = FUN_0040b360();
  if (cVar3 == '\0') {
    ppppiStack_2b4 = (int ****)0x799c94;
    (*(code *)(*param_2)[0x11])();
    ppppiStack_2b4 = (int ****)0x799c9e;
    cVar3 = FUN_0040b360();
    if (cVar3 == '\0') {
      ppppiStack_2b4 = (int ****)0x799dd4;
      (*(code *)(*param_2)[0x11])();
      ppppiStack_2b4 = (int ****)0x799dde;
      cVar3 = FUN_0040b360();
      if (cVar3 == '\0') {
        ppppiStack_2b4 = (int ****)0x799e7e;
        (*(code *)(*param_2)[0x11])();
        ppppiStack_2b4 = (int ****)0x799e88;
        cVar3 = FUN_0040b360();
        ppppiVar12 = local_298;
        if (cVar3 == '\0') {
          ppppiStack_2b4 = (int ****)0x79a58b;
          (*(code *)(*param_2)[0x11])();
          ppppiStack_2b4 = (int ****)0x79a595;
          cVar3 = FUN_0040b360();
          if (cVar3 == '\0') {
            ppppiStack_2b4 = (int ****)0x79a6d1;
            (*(code *)(*param_2)[0x11])();
            ppppiStack_2b4 = (int ****)0x79a6db;
            cVar3 = FUN_0040b360();
            if (cVar3 == '\0') {
              ppppiStack_2b4 = (int ****)0x79a851;
              FUN_009885d0();
              ppppiVar12 = local_298;
              local_c._0_1_ = 0x55;
              ppppiStack_2b4 = apppiStack_20c;
              ppppiStack_2b8 = (int ****)0x79a86f;
              ppppiVar8 = (int ****)(*(code *)(*local_298[8])[0xd])();
              uStack_2a0 = CONCAT13(param_2 == ppppiVar8,(undefined3)uStack_2a0);
              local_c._0_1_ = 0;
              ppppiStack_2b4 = (int ****)0x79a88a;
              FUN_00408ad0();
              if (param_2 == ppppiVar8) {
                ppppiStack_2b4 = (int ****)0x79a8a5;
                FUN_009885d0();
                ppppiStack_2b8 = (int ****)&local_294;
                local_c._0_1_ = 0x56;
                ppppiStack_2bc = (int ****)0x79a8ba;
                ppppiStack_2b4 = apppiStack_20c;
                FUN_009a8ee0();
                local_c._0_1_ = 0x57;
                ppppiStack_2b4 = (int ****)0x79a8c9;
                iVar5 = FUN_00475500();
                ppppiStack_2bc = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x6c) >> 0x20);
                ppppiStack_2b8 = (int ****)*(undefined8 *)(iVar5 + 0x74);
                ppppiStack_2b4 = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20);
                ppppiStack_2bc = (int ****)FUN_009a9880((int)*(undefined8 *)(iVar5 + 0x6c));
                ppppiStack_2b4 = (int ****)0xffffffff;
                ppppiStack_2b8 = (int ****)0x0;
                local_c._0_1_ = 0x58;
                FUN_00408ed0();
                ppppiStack_2b4 = (int ****)0x79a90b;
                FUN_00408ad0();
                ppppiStack_2b4 = (int ****)&local_294;
                local_c._0_1_ = 0x56;
                ppppiStack_2b8 = (int ****)0x79a91d;
                FUN_009a9740();
                local_c._0_1_ = 0;
                ppppiStack_2b4 = (int ****)0x79a930;
                FUN_00408ad0();
                ppppiStack_2b4 = (int ****)0x79a93e;
                FUN_009885d0();
                ppppiStack_2b8 = (int ****)&local_294;
                local_c._0_1_ = 0x59;
                ppppiStack_2bc = (int ****)0x79a953;
                ppppiStack_2b4 = (int ****)appppiStack_278;
                FUN_009a8ee0();
                local_c._0_1_ = 0x5a;
                ppppiStack_2b4 = (int ****)0x79a962;
                iVar5 = FUN_00475500();
                ppppiStack_2bc = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x6c) >> 0x20);
                ppppiStack_2b8 = (int ****)*(undefined8 *)(iVar5 + 0x74);
                ppppiStack_2b4 = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20);
                ppppiStack_2bc = (int ****)FUN_009a9880((int)*(undefined8 *)(iVar5 + 0x6c));
                ppppiStack_2b4 = (int ****)0xffffffff;
                ppppiStack_2b8 = (int ****)0x0;
                local_c._0_1_ = 0x5b;
                FUN_00408ed0();
                ppppiStack_2b4 = (int ****)0x79a9a4;
                FUN_00408ad0();
                ppppiStack_2b4 = (int ****)&local_294;
                local_c = CONCAT31(local_c._1_3_,0x59);
                ppppiStack_2b8 = (int ****)0x79a9b6;
                FUN_009a9740();
              }
              else {
                ppppiStack_2b4 = (int ****)0x79a9cb;
                (*(code *)(*param_2)[0x11])();
                ppppiStack_2b4 = (int ****)0x79a9d5;
                cVar3 = FUN_0040b360();
                if (cVar3 == '\0') {
                  ppppiStack_2b4 = (int ****)0x79ab11;
                  (*(code *)(*param_2)[0x11])();
                  ppppiStack_2b4 = (int ****)0x79ab1b;
                  cVar3 = FUN_0040b360();
                  if (cVar3 == '\0') {
                    ppppiStack_2b4 = (int ****)0x79b212;
                    FUN_009885d0();
                    local_c = CONCAT31(local_c._1_3_,0x83);
                    ppppiStack_2b8 = (int ****)0x79b22c;
                    ppppiStack_2b4 = apppiStack_18c;
                    ppppiVar8 = (int ****)(*(code *)(*ppppiVar12[8])[0xf])();
                    if (param_2 == ppppiVar8) {
LAB_0079b265:
                      bVar13 = true;
                    }
                    else {
                      ppppiStack_2b8 = (int ****)0x79b23f;
                      FUN_009885d0();
                      puStack_10 = (undefined1 *)0x84;
                      uStack_2a0 = uStack_2a0 | 0x10;
                      ppppiStack_2bc = (int ****)0x79b25c;
                      ppppiStack_2b8 = &pppiStack_260;
                      ppppiVar8 = (int ****)(*(code *)(*ppppiVar12[8])[0x11])();
                      bVar13 = false;
                      if (param_2 == ppppiVar8) goto LAB_0079b265;
                    }
                    if ((uStack_2a0 & 0x10) != 0) {
                      uStack_2a0 = uStack_2a0 & 0xffffffef;
                      ppppiStack_2b8 = (int ****)0x79b27f;
                      FUN_00408ad0();
                    }
                    puStack_10 = (undefined1 *)0x0;
                    if ((uStack_2a0 & 8) != 0) {
                      ppppiStack_2b8 = (int ****)0x79b299;
                      FUN_00408ad0();
                    }
                    if (bVar13) {
                      ppppiStack_2b8 = &pppiStack_78;
                      ppppiStack_2bc = (int ****)0x79b2bb;
                      (**(code **)(**(int **)(*(int *)(((uint)local_29c | 8) + 0x28) + 0xd8) + 0x24)
                      )();
                      local_c._0_1_ = 0x85;
                      ppppiStack_2b4 = (int ****)0x79b2d1;
                      FUN_004115d0();
                      local_c = (uint)local_c._1_3_ << 8;
                      ppppiStack_2b4 = (int ****)0x79b2e4;
                      FUN_00459820();
                      goto LAB_0079b7cc;
                    }
                    ppppiStack_2b8 = (int ****)0x79b2f7;
                    FUN_009885d0();
                    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x86);
                    ppppiStack_2bc = (int ****)0x79b30c;
                    ppppiStack_2b8 = &pppiStack_260;
                    ppppiVar8 = (int ****)(*(code *)(*ppppiVar12[8])[0x11])();
                    local_c = local_c & 0xffffff00;
                    ppppiStack_2b4 = (int ****)0x79b322;
                    FUN_00408ad0();
                    if (param_2 == ppppiVar8) {
                      ppppiStack_2b8 = (int ****)ppppiVar12[10][0x36];
                      ppppiStack_2b4 = apppiStack_170;
                      ppppiStack_2bc = (int ****)0x79b33f;
                      ppppiStack_2bc = (int ****)FUN_005b70c0();
                      ppppiStack_2b4 = (int ****)0xffffffff;
                      ppppiStack_2b8 = (int ****)0x0;
                      local_c = CONCAT31(local_c._1_3_,0x87);
                      FUN_00408ed0();
                    }
                    else {
                      ppppiStack_2b4 = (int ****)0x79b36f;
                      (*(code *)(*param_2)[0x11])();
                      ppppiStack_2b4 = (int ****)0x79b379;
                      cVar3 = FUN_0040b360();
                      if (cVar3 == '\0') {
                        ppppiStack_2b4 = (int ****)0x79b56e;
                        (*(code *)(*param_2)[0x11])();
                        ppppiStack_2b4 = (int ****)0x79b578;
                        cVar3 = FUN_0040b360();
                        if (cVar3 == '\0') goto LAB_0079b7cc;
                        ppppiStack_2b4 = (int ****)&ppppiStack_218;
                        ppppiStack_2b8 = (int ****)0x79b592;
                        ppppiStack_240 = (int ****)(*(code *)(*ppppiVar12[10])[0x14])();
                        ppppiStack_2b4 = (int ****)ppppiVar12[10];
                        ppppiStack_2b8 = (int ****)0x79b5a6;
                        piVar10 = (int *)FUN_005cd690();
                        ppppiVar12 = (int ****)*ppppiStack_240;
                        if (ppppiVar12 == (int ****)0x0) {
                          iVar5 = -1;
                        }
                        else {
                          iVar5 = *piVar10;
                          if ((iVar5 < -0x189373) || (0x20c49a < iVar5)) {
                            ppppiStack_2bc = (int ****)(iVar5 >> 0x1f);
                            ppppiStack_2b4 = (int ****)0x0;
                            ppppiStack_2b8 = (int ****)0x3e8;
                            ppppiStack_214 = (int ****)((int)ppppiVar12 >> 0x1f);
                            ppppiStack_218 = ppppiVar12;
                            uVar14 = __allmul(iVar5);
                            ppppiStack_2bc = (int ****)((ulonglong)uVar14 >> 0x20);
                            ppppiStack_2b4 = ppppiStack_214;
                            ppppiStack_2b8 = ppppiStack_218;
                            iVar5 = __alldiv((int)uVar14);
                            ppppiStack_214 = (int ****)(iVar5 >> 0x1f);
                          }
                          else {
                            iVar5 = (iVar5 * 1000) / (int)ppppiVar12;
                          }
                        }
                        ppppiStack_2b4 = (int ****)0x79b625;
                        FUN_009885d0();
                        local_c._0_1_ = 0x92;
                        ppppiStack_2b4 = (int ****)0x79b63b;
                        FUN_009885d0();
                        ppppiStack_2b4 = (int ****)0x1;
                        ppppiStack_218 = (int ****)&ppppiStack_2b8;
                        local_c._0_1_ = 0x93;
                        ppppiStack_2bc = (int ****)0x0;
                        uVar14 = __allmul(iVar5,iVar5 >> 0x1f,100000);
                        ppppiStack_2bc = (int ****)0x0;
                        ppppiStack_2b8 = (int ****)__alldiv(uVar14,1000);
                        ppppiStack_2bc = apppiStack_e4;
                        ppppiVar12 = (int ****)FUN_00988a50();
                        local_c._0_1_ = 0x94;
                        ppppiStack_2b4 = (int ****)0x79b696;
                        appppiStack_220[0] = (int ****)FUN_009885d0();
                        ppppiStack_2b4 = apppiStack_25c;
                        ppppiStack_2b8 = (int ****)&local_294;
                        local_c._0_1_ = 0x95;
                        ppppiStack_2bc = (int ****)0x79b6b4;
                        ppppiStack_240 = (int ****)FUN_009a8ee0();
                        local_c._0_1_ = 0x96;
                        ppppiStack_2b4 = (int ****)0x79b6c5;
                        iVar5 = FUN_00475500();
                        ppppiStack_2bc =
                             (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x6c) >> 0x20);
                        ppppiStack_2b8 = (int ****)*(undefined8 *)(iVar5 + 0x74);
                        ppppiStack_2b4 =
                             (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20);
                        FUN_009a9880((int)*(undefined8 *)(iVar5 + 0x6c));
                        local_c._0_1_ = 0x97;
                        ppppiStack_2b4 = appppiStack_220[0];
                        ppppiStack_2b8 = (int ****)0x79b70e;
                        FUN_00988f20();
                        local_c._0_1_ = 0x98;
                        ppppiStack_2b8 = (int ****)0x79b725;
                        ppppiStack_2b4 = ppppiVar12;
                        FUN_00988f20();
                        ppppiStack_2b4 = apppiStack_18c;
                        local_c._0_1_ = 0x99;
                        ppppiStack_2b8 = (int ****)0x79b743;
                        ppppiStack_2bc = (int ****)FUN_00988f20();
                        ppppiStack_2b4 = (int ****)0xffffffff;
                        local_c._0_1_ = 0x9a;
                        ppppiStack_2b8 = (int ****)0x0;
                        FUN_00448aa0();
                        ppppiStack_2b4 = (int ****)0x79b762;
                        FUN_00408ad0();
                        ppppiStack_2b4 = (int ****)0x79b76e;
                        FUN_00408ad0();
                        ppppiStack_2b4 = (int ****)0x79b77a;
                        FUN_00408ad0();
                        ppppiStack_2b4 = (int ****)0x79b786;
                        FUN_00408ad0();
                        ppppiStack_2b4 = (int ****)&local_294;
                        local_c = CONCAT31(local_c._1_3_,0x95);
                        ppppiStack_2b8 = (int ****)0x79b798;
                        FUN_009a9740();
                        ppppiStack_2b4 = (int ****)0x79b7a4;
                        FUN_00408ad0();
                        ppppiStack_2b4 = (int ****)0x79b7b0;
                        FUN_00408ad0();
                        ppppiStack_2b4 = (int ****)0x79b7b9;
                        FUN_00408ad0();
                      }
                      else {
                        ppppiStack_2b4 = (int ****)appppiStack_220;
                        ppppiStack_2b8 = (int ****)0x79b393;
                        (*(code *)(*ppppiVar12[10])[0x11])();
                        ppppiStack_2b4 = (int ****)0x79b3a4;
                        FUN_009885d0();
                        local_c._0_1_ = 0x88;
                        ppppiStack_2b4 = (int ****)0x79b3ba;
                        FUN_009885d0();
                        ppppiStack_2b4 = (int ****)0x1;
                        ppppiStack_218 = (int ****)&ppppiStack_2b8;
                        local_c._0_1_ = 0x89;
                        ppppiStack_2bc = apppiStack_e4;
                        ppppiStack_2b8 = appppiStack_220[0];
                        ppppiStack_240 = (int ****)FUN_00988a50();
                        local_c._0_1_ = 0x8a;
                        ppppiStack_2b4 = (int ****)0x79b401;
                        ppppiVar12 = (int ****)FUN_009885d0();
                        ppppiStack_2b4 = apppiStack_25c;
                        ppppiStack_2b8 = (int ****)&local_294;
                        local_c._0_1_ = 0x8b;
                        ppppiStack_2bc = (int ****)0x79b41c;
                        local_298 = (int ****)FUN_009a8ee0();
                        local_c._0_1_ = 0x8c;
                        ppppiStack_2b4 = (int ****)0x79b42d;
                        iVar5 = FUN_00475500();
                        ppppiStack_2bc =
                             (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x6c) >> 0x20);
                        ppppiStack_2b8 = (int ****)*(undefined8 *)(iVar5 + 0x74);
                        ppppiStack_2b4 =
                             (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20);
                        FUN_009a9880((int)*(undefined8 *)(iVar5 + 0x6c));
                        local_c._0_1_ = 0x8d;
                        ppppiStack_2b8 = (int ****)0x79b470;
                        ppppiStack_2b4 = ppppiVar12;
                        FUN_00988f20();
                        local_c._0_1_ = 0x8e;
                        ppppiStack_2b4 = ppppiStack_240;
                        ppppiStack_2b8 = (int ****)0x79b48b;
                        FUN_00988f20();
                        ppppiStack_2b4 = apppiStack_18c;
                        local_c._0_1_ = 0x8f;
                        ppppiStack_2b8 = (int ****)0x79b4a9;
                        ppppiStack_2bc = (int ****)FUN_00988f20();
                        ppppiStack_2b4 = (int ****)0xffffffff;
                        ppppiStack_2b8 = (int ****)0x0;
                        local_c._0_1_ = 0x90;
                        FUN_00448aa0();
                        ppppiStack_2b4 = (int ****)0x79b4c8;
                        FUN_00408ad0();
                        ppppiStack_2b4 = (int ****)0x79b4d4;
                        FUN_00408ad0();
                        ppppiStack_2b4 = (int ****)0x79b4e0;
                        FUN_00408ad0();
                        ppppiStack_2b4 = (int ****)0x79b4ec;
                        FUN_00408ad0();
                        ppppiStack_2b4 = (int ****)&local_294;
                        local_c._0_1_ = 0x8b;
                        ppppiStack_2b8 = (int ****)0x79b4fe;
                        FUN_009a9740();
                        ppppiStack_2b4 = (int ****)0x79b50a;
                        FUN_00408ad0();
                        ppppiStack_2b4 = (int ****)0x79b516;
                        FUN_00408ad0();
                        ppppiStack_2b4 = (int ****)0x79b51f;
                        FUN_00408ad0();
                        local_c._0_1_ = 0;
                        ppppiStack_2b4 = (int ****)0x79b532;
                        FUN_00408ad0();
                        ppppiStack_2b4 = (int ****)0x79b541;
                        ppppiStack_2bc = (int ****)FUN_005cfb80();
                        ppppiStack_2b4 = (int ****)0xffffffff;
                        ppppiStack_2b8 = (int ****)0x0;
                        local_c = CONCAT31(local_c._1_3_,0x91);
                        FUN_00448aa0();
                      }
                    }
                  }
                  else {
                    ppppiStack_2b4 = (int ****)0x79ab2d;
                    cVar3 = (*(code *)(*ppppiVar12[10])[0xe])();
                    if (cVar3 != '\0') {
                      ppppiStack_2b4 = (int ****)0x79ab46;
                      FUN_009885d0();
                      ppppiStack_2b8 = (int ****)&local_294;
                      local_c._0_1_ = 0x62;
                      ppppiStack_2bc = (int ****)0x79ab5b;
                      ppppiStack_2b4 = apppiStack_20c;
                      FUN_009a8ee0();
                      local_c._0_1_ = 100;
                      ppppiStack_2b4 = (int ****)0x79ab6a;
                      FUN_00408ad0();
                      ppppiStack_2b4 = (int ****)0x79ab78;
                      FUN_009885d0();
                      local_c._0_1_ = 0x65;
                      ppppiStack_2b4 = (int ****)ppppiVar12[10];
                      ppppiStack_240 = (int ****)&ppppiStack_2b4;
                      ppppiStack_2b8 = (int ****)&ppppiStack_2b4;
                      ppppiStack_2bc = (int ****)0x79ab92;
                      (*(code *)(*ppppiStack_2b4)[0x14])();
                      ppppiStack_2b8 = apppiStack_25c;
                      ppppiStack_2bc = (int ****)0x79ab9c;
                      ppppiStack_2b4 = (int ****)FUN_005c0800();
                      local_c._0_1_ = 0x66;
                      ppppiStack_2b8 = (int ****)0x79abb1;
                      FUN_009a9980();
                      ppppiStack_2b4 = (int ****)0x79abba;
                      FUN_00408ad0();
                      local_c._0_1_ = 100;
                      ppppiStack_2b4 = (int ****)0x79abc9;
                      FUN_00408ad0();
                      ppppiStack_2b4 = (int ****)0x79abce;
                      iVar5 = FUN_00475500();
                      ppppiStack_2bc = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x6c) >> 0x20);
                      ppppiStack_2b8 = (int ****)*(undefined8 *)(iVar5 + 0x74);
                      ppppiStack_2b4 = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20);
                      ppppiStack_2bc = (int ****)FUN_009a9880((int)*(undefined8 *)(iVar5 + 0x6c));
                      ppppiStack_2b4 = (int ****)0xffffffff;
                      ppppiStack_2b8 = (int ****)0x0;
                      local_c._0_1_ = 0x67;
                      FUN_00408ed0();
                      local_c = CONCAT31(local_c._1_3_,100);
                      ppppiStack_2b4 = (int ****)0x79ac1a;
                      FUN_00408ad0();
                      if (ppppiVar12[10] == (int ***)0x0) {
                        pppiVar9 = (int ***)0x0;
                      }
                      else {
                        pppiVar9 = ppppiVar12[10] + 0xe;
                      }
                      ppppiVar12 = (int ****)*pppiVar9;
                      while (ppppiVar12 != (int ****)0x0) {
                        local_298 = (int ****)ppppiVar12[2];
                        pppiVar9 = *ppppiVar12;
                        ppppiStack_2b4 = (int ****)0x79ac51;
                        FUN_009885d0();
                        local_c = CONCAT31(local_c._1_3_,0x68);
                        ppppiStack_2b4 = (int ****)0x0;
                        ppppiStack_2b8 = (int ****)&ppppiStack_240;
                        ppppiStack_2bc = (int ****)0x79ac68;
                        piVar10 = (int *)(*(code *)(*pppiVar9)[0xc])();
                        iVar5 = *piVar10;
                        if ((iVar5 < -0x189373) || (0x20c49a < iVar5)) {
                          ppppiStack_2bc = (int ****)0x0;
                          uVar14 = __allmul(iVar5,iVar5 >> 0x1f,1000);
                          ppppiStack_2bc = (int ****)0x0;
                          iVar5 = __alldiv(uVar14,2000);
                          iStack_224 = iVar5 >> 0x1f;
                        }
                        else {
                          iVar5 = (iVar5 * 1000) / 2000;
                        }
                        ppiVar7 = pppiVar9[0xf];
                        if ((int)ppiVar7 < iVar5) {
LAB_0079acdf:
                          ppppiStack_2bc = &local_280;
                          FUN_004012f0();
                        }
                        else {
                          ppppiStack_2bc = (int ****)0x0;
                          piVar10 = (int *)(*(code *)(*pppiVar9)[0xc])(appppiStack_220);
                          if ((int)ppiVar7 < *piVar10) goto LAB_0079acdf;
                        }
                        ppppiStack_2bc = (int ****)0x79acf7;
                        FUN_009885d0();
                        local_14._0_1_ = 0x69;
                        ppppiStack_2bc = (int ****)0x79ad10;
                        FUN_009885d0();
                        local_14._0_1_ = 0x6a;
                        ppppiStack_2bc = (int ****)0x79ad26;
                        FUN_009885d0();
                        local_228 = (undefined1 *)&ppppiStack_2bc;
                        local_14 = (void *)CONCAT31(local_14._1_3_,0x6b);
                        (*(code *)(*pppiVar9)[0xc])(&ppppiStack_2bc,0);
                        uStack_230 = FUN_005c0800(auStack_180);
                        uStack_1c = 0x6c;
                        (*(code *)(*pppiVar9)[0xe])(auStack_110);
                        uStack_20 = 0x6d;
                        (*(code *)(*pppiVar9)[8])(auStack_14c);
                        local_c._0_1_ = 0x6e;
                        ppppiStack_2b8 = (int ****)0x79ada9;
                        ppppiStack_2b4 = &pppiStack_244;
                        FUN_00988f20();
                        ppppiStack_2b4 = (int ****)appppiStack_278;
                        local_c._0_1_ = 0x6f;
                        ppppiStack_2b8 = (int ****)0x79adc4;
                        FUN_00988f20();
                        local_c._0_1_ = 0x70;
                        ppppiStack_2b4 = local_29c;
                        ppppiStack_2b8 = (int ****)0x79addf;
                        FUN_00988f20();
                        ppppiStack_2b4 = apppiStack_18c;
                        local_c._0_1_ = 0x71;
                        ppppiStack_2b8 = (int ****)0x79adfd;
                        FUN_00988f20();
                        local_c._0_1_ = 0x72;
                        ppppiStack_2b4 = appppiStack_220[0];
                        ppppiStack_2b8 = (int ****)0x79ae1b;
                        FUN_00988f20();
                        ppppiStack_2b4 = apppiStack_25c;
                        local_c._0_1_ = 0x73;
                        ppppiStack_2b8 = (int ****)0x79ae36;
                        ppppiStack_2bc = (int ****)FUN_00988f20();
                        ppppiStack_2b4 = (int ****)0xffffffff;
                        ppppiStack_2b8 = (int ****)0x0;
                        local_c._0_1_ = 0x74;
                        FUN_00448aa0();
                        ppppiStack_2b4 = (int ****)0x79ae55;
                        FUN_00408ad0();
                        ppppiStack_2b4 = (int ****)0x79ae61;
                        FUN_00408ad0();
                        ppppiStack_2b4 = (int ****)0x79ae6d;
                        FUN_00408ad0();
                        ppppiStack_2b4 = (int ****)0x79ae79;
                        FUN_00408ad0();
                        ppppiStack_2b4 = (int ****)0x79ae85;
                        FUN_00408ad0();
                        ppppiStack_2b4 = (int ****)0x79ae91;
                        FUN_00408ad0();
                        ppppiStack_2b4 = (int ****)0x79ae9d;
                        FUN_00408ad0();
                        ppppiStack_2b4 = (int ****)0x79aea9;
                        FUN_00408ad0();
                        ppppiStack_2b4 = (int ****)0x79aeb5;
                        FUN_00408ad0();
                        ppppiStack_2b4 = (int ****)0x79aebe;
                        FUN_00408ad0();
                        ppppiStack_2b4 = (int ****)0x79aeca;
                        FUN_00408ad0();
                        ppppiStack_2b4 = (int ****)0x79aed3;
                        FUN_00408ad0();
                        local_c = CONCAT31(local_c._1_3_,100);
                        ppppiStack_2b4 = (int ****)0x79aee4;
                        FUN_00408ad0();
                        ppppiVar12 = local_298;
                      }
                      ppppiStack_2b4 = (int ****)&local_294;
                      local_c = local_c & 0xffffff00;
                      ppppiStack_2b8 = (int ****)0x79aeff;
                      local_298 = ppppiVar12;
                      FUN_009a9740();
                      goto LAB_0079b7cc;
                    }
                    local_228 = (undefined1 *)0xf;
                    local_22c = 0;
                    local_23c[0] = (int ****)((uint)local_23c[0] & 0xffffff00);
                    local_c._0_1_ = 0x75;
                    uVar2 = (undefined1)local_c;
                    local_c._0_1_ = 0x75;
                    if (ppppiVar12[10] == (int ***)0x0) {
                      pppiVar9 = (int ***)0x0;
                    }
                    else {
                      pppiVar9 = ppppiVar12[10] + 0xe;
                    }
                    ppppiVar12 = (int ****)*pppiVar9;
                    local_298 = ppppiVar12;
                    if (ppppiVar12 != (int ****)0x0) {
                      do {
                        pppiVar9 = *ppppiVar12;
                        appppiStack_220[0] = (int ****)pppiVar9[0xf];
                        ppppiVar12 = (int ****)ppppiVar12[2];
                        ppppiStack_2b4 = (int ****)0x0;
                        ppppiStack_2b8 = (int ****)&ppppiStack_218;
                        ppppiStack_2bc = (int ****)0x79af65;
                        local_298 = ppppiVar12;
                        piVar10 = (int *)(*(code *)(*pppiVar9)[0xc])();
                        if (appppiStack_220[0] != (int ****)*piVar10) {
                          ppppiStack_2b4 = (int ****)0x79af85;
                          FUN_009885d0();
                          local_c._0_1_ = 0x76;
                          ppppiStack_2b4 = (int ****)0x79af9b;
                          FUN_009885d0();
                          local_c._0_1_ = 0x77;
                          ppppiStack_2b4 = apppiStack_154;
                          ppppiStack_2b8 = (int ****)0x79afb4;
                          iStack_224 = (*(code *)(*pppiVar9)[0xe])();
                          puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x78);
                          ppppiStack_2b8 = apppiStack_120;
                          ppppiStack_2bc = (int ****)0x79afd4;
                          (*(code *)(*pppiVar9)[8])();
                          local_c._0_1_ = 0x79;
                          ppppiStack_2b8 = (int ****)0x79afed;
                          ppppiStack_2b4 = apppiStack_25c;
                          FUN_00988f20();
                          local_c._0_1_ = 0x7a;
                          ppppiStack_2b4 = appppiStack_220[0];
                          ppppiStack_2b8 = (int ****)0x79b00b;
                          FUN_00988f20();
                          ppppiStack_2b4 = apppiStack_18c;
                          local_c._0_1_ = 0x7b;
                          ppppiStack_2b8 = (int ****)0x79b029;
                          ppppiStack_2bc = (int ****)FUN_00988f20();
                          ppppiStack_2b4 = (int ****)0xffffffff;
                          ppppiStack_2b8 = (int ****)0x0;
                          local_c._0_1_ = 0x7c;
                          FUN_00448aa0();
                          ppppiStack_2b4 = (int ****)0x79b048;
                          FUN_00408ad0();
                          ppppiStack_2b4 = (int ****)0x79b054;
                          FUN_00408ad0();
                          ppppiStack_2b4 = (int ****)0x79b060;
                          FUN_00408ad0();
                          ppppiStack_2b4 = (int ****)0x79b06c;
                          FUN_00408ad0();
                          ppppiStack_2b4 = (int ****)0x79b078;
                          FUN_00408ad0();
                          ppppiStack_2b4 = (int ****)0x79b081;
                          FUN_00408ad0();
                          local_c._0_1_ = 0x75;
                          ppppiStack_2b4 = (int ****)0x79b095;
                          FUN_00408ad0();
                          ppppiVar12 = local_298;
                        }
                      } while (ppppiVar12 != (int ****)0x0);
                      uVar2 = (undefined1)local_c;
                      if (1 < (int)local_22c) {
                        ppppiStack_2b4 = (int ****)0x79b0bd;
                        FUN_009885d0();
                        ppppiStack_2b8 = (int ****)&local_294;
                        local_c._0_1_ = 0x7d;
                        ppppiStack_2bc = (int ****)0x79b0d2;
                        ppppiStack_2b4 = apppiStack_25c;
                        FUN_009a8ee0();
                        local_c._0_1_ = 0x7e;
                        ppppiStack_2b4 = (int ****)0x79b0e1;
                        iVar5 = FUN_00475500();
                        ppppiStack_2bc =
                             (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x6c) >> 0x20);
                        ppppiStack_2b8 = (int ****)*(undefined8 *)(iVar5 + 0x74);
                        ppppiStack_2b4 =
                             (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20);
                        ppppiStack_2bc = (int ****)FUN_009a9880((int)*(undefined8 *)(iVar5 + 0x6c));
                        ppppiStack_2b4 = (int ****)0xffffffff;
                        ppppiStack_2b8 = (int ****)0x0;
                        local_c._0_1_ = 0x7f;
                        FUN_00408ed0();
                        ppppiStack_2b4 = (int ****)0x79b126;
                        FUN_00408ad0();
                        ppppiStack_2b4 = (int ****)&local_294;
                        local_c._0_1_ = 0x7d;
                        ppppiStack_2b8 = (int ****)0x79b138;
                        FUN_009a9740();
                        local_c = CONCAT31(local_c._1_3_,0x75);
                        ppppiStack_2b4 = (int ****)0x79b149;
                        FUN_00408ad0();
                        ppppiStack_2b4 = (int ****)0xffffffff;
                        ppppiStack_2b8 = (int ****)0x0;
                        ppppiStack_2bc = (int ****)local_23c;
                        FUN_00448aa0();
                        goto LAB_0079b7c0;
                      }
                    }
                    local_c._0_1_ = uVar2;
                    ppppiStack_2b4 = (int ****)0x79b174;
                    FUN_009885d0();
                    ppppiStack_2b8 = (int ****)&local_294;
                    local_c._0_1_ = 0x80;
                    ppppiStack_2bc = (int ****)0x79b189;
                    ppppiStack_2b4 = apppiStack_25c;
                    FUN_009a8ee0();
                    local_c._0_1_ = 0x81;
                    ppppiStack_2b4 = (int ****)0x79b198;
                    iVar5 = FUN_00475500();
                    ppppiStack_2bc = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x6c) >> 0x20);
                    ppppiStack_2b8 = (int ****)*(undefined8 *)(iVar5 + 0x74);
                    ppppiStack_2b4 = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20);
                    ppppiStack_2bc = (int ****)FUN_009a9880((int)*(undefined8 *)(iVar5 + 0x6c));
                    ppppiStack_2b4 = (int ****)0xffffffff;
                    ppppiStack_2b8 = (int ****)0x0;
                    local_c._0_1_ = 0x82;
                    FUN_00408ed0();
                    ppppiStack_2b4 = (int ****)0x79b1dd;
                    FUN_00408ad0();
                    ppppiStack_2b4 = (int ****)&local_294;
                    local_c = CONCAT31(local_c._1_3_,0x80);
                    ppppiStack_2b8 = (int ****)0x79b1ef;
                    FUN_009a9740();
                    ppppiStack_2b4 = (int ****)0x79b1f8;
                    FUN_00408ad0();
                  }
                }
                else {
                  ppppiStack_2b4 = (int ****)0x79a9ee;
                  FUN_009885d0();
                  ppppiStack_2b8 = (int ****)&local_294;
                  local_c._0_1_ = 0x5c;
                  ppppiStack_2bc = (int ****)0x79aa03;
                  ppppiStack_2b4 = apppiStack_20c;
                  FUN_009a8ee0();
                  local_c._0_1_ = 0x5d;
                  ppppiStack_2b4 = (int ****)0x79aa12;
                  iVar5 = FUN_00475500();
                  ppppiStack_2bc = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x6c) >> 0x20);
                  ppppiStack_2b8 = (int ****)*(undefined8 *)(iVar5 + 0x74);
                  ppppiStack_2b4 = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20);
                  ppppiStack_2bc = (int ****)FUN_009a9880((int)*(undefined8 *)(iVar5 + 0x6c));
                  ppppiStack_2b4 = (int ****)0xffffffff;
                  ppppiStack_2b8 = (int ****)0x0;
                  local_c._0_1_ = 0x5e;
                  FUN_00408ed0();
                  ppppiStack_2b4 = (int ****)0x79aa54;
                  FUN_00408ad0();
                  ppppiStack_2b4 = (int ****)&local_294;
                  local_c._0_1_ = 0x5c;
                  ppppiStack_2b8 = (int ****)0x79aa66;
                  FUN_009a9740();
                  local_c._0_1_ = 0;
                  ppppiStack_2b4 = (int ****)0x79aa79;
                  FUN_00408ad0();
                  ppppiStack_2b4 = (int ****)0x79aa87;
                  FUN_009885d0();
                  ppppiStack_2b8 = (int ****)&local_294;
                  local_c._0_1_ = 0x5f;
                  ppppiStack_2bc = (int ****)0x79aa9c;
                  ppppiStack_2b4 = (int ****)appppiStack_278;
                  FUN_009a8ee0();
                  local_c._0_1_ = 0x60;
                  ppppiStack_2b4 = (int ****)0x79aaab;
                  iVar5 = FUN_00475500();
                  ppppiStack_2bc = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x6c) >> 0x20);
                  ppppiStack_2b8 = (int ****)*(undefined8 *)(iVar5 + 0x74);
                  ppppiStack_2b4 = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20);
                  ppppiStack_2bc = (int ****)FUN_009a9880((int)*(undefined8 *)(iVar5 + 0x6c));
                  ppppiStack_2b4 = (int ****)0xffffffff;
                  ppppiStack_2b8 = (int ****)0x0;
                  local_c._0_1_ = 0x61;
                  FUN_00408ed0();
                  ppppiStack_2b4 = (int ****)0x79aaed;
                  FUN_00408ad0();
                  ppppiStack_2b4 = (int ****)&local_294;
                  local_c = CONCAT31(local_c._1_3_,0x5f);
                  ppppiStack_2b8 = (int ****)0x79aaff;
                  FUN_009a9740();
                }
              }
            }
            else {
              ppppiStack_2b4 = (int ****)0x79a6f4;
              FUN_009885d0();
              ppppiStack_2b8 = (int ****)&local_294;
              local_c._0_1_ = 0x4e;
              ppppiStack_2bc = (int ****)0x79a709;
              ppppiStack_2b4 = apppiStack_20c;
              FUN_009a8ee0();
              local_c._0_1_ = 0x4f;
              ppppiStack_2b4 = (int ****)0x79a718;
              iVar5 = FUN_00475500();
              ppppiStack_2bc = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x6c) >> 0x20);
              ppppiStack_2b8 = (int ****)*(undefined8 *)(iVar5 + 0x74);
              ppppiStack_2b4 = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20);
              ppppiStack_2bc = (int ****)FUN_009a9880((int)*(undefined8 *)(iVar5 + 0x6c));
              ppppiStack_2b4 = (int ****)0xffffffff;
              ppppiStack_2b8 = (int ****)0x0;
              local_c._0_1_ = 0x50;
              FUN_00408ed0();
              ppppiStack_2b4 = (int ****)0x79a75a;
              FUN_00408ad0();
              ppppiStack_2b4 = (int ****)&local_294;
              local_c._0_1_ = 0x4e;
              ppppiStack_2b8 = (int ****)0x79a76c;
              FUN_009a9740();
              local_c._0_1_ = 0;
              ppppiStack_2b4 = (int ****)0x79a77f;
              FUN_00408ad0();
              ppppiStack_2b4 = (int ****)0x79a78d;
              FUN_009885d0();
              ppppiStack_2b8 = (int ****)&local_294;
              local_c._0_1_ = 0x51;
              ppppiStack_2bc = (int ****)0x79a7a2;
              ppppiStack_2b4 = (int ****)appppiStack_278;
              FUN_009a8ee0();
              local_c._0_1_ = 0x52;
              ppppiStack_2b4 = (int ****)0x79a7b1;
              iVar5 = FUN_00475500();
              ppppiStack_2bc = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x6c) >> 0x20);
              ppppiStack_2b8 = (int ****)*(undefined8 *)(iVar5 + 0x74);
              ppppiStack_2b4 = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20);
              ppppiStack_2bc = (int ****)FUN_009a9880((int)*(undefined8 *)(iVar5 + 0x6c));
              ppppiStack_2b4 = (int ****)0xffffffff;
              ppppiStack_2b8 = (int ****)0x0;
              local_c._0_1_ = 0x53;
              FUN_00408ed0();
              ppppiStack_2b4 = (int ****)0x79a7f3;
              FUN_00408ad0();
              ppppiStack_2b4 = (int ****)&local_294;
              local_c._0_1_ = 0x51;
              ppppiStack_2b8 = (int ****)0x79a805;
              FUN_009a9740();
              local_c._0_1_ = 0;
              ppppiStack_2b4 = (int ****)0x79a815;
              FUN_00408ad0();
              ppppiStack_2b4 = apppiStack_18c;
              ppppiStack_2b8 = (int ****)0x79a827;
              ppppiStack_2bc = (int ****)FUN_00475d50();
              ppppiStack_2b4 = (int ****)0xffffffff;
              ppppiStack_2b8 = (int ****)0x0;
              local_c = CONCAT31(local_c._1_3_,0x54);
              FUN_00408ed0();
            }
          }
          else {
            ppppiStack_2b4 = (int ****)0x79a5ae;
            FUN_009885d0();
            ppppiStack_2b8 = (int ****)&local_294;
            local_c._0_1_ = 0x48;
            ppppiStack_2bc = (int ****)0x79a5c3;
            ppppiStack_2b4 = apppiStack_20c;
            FUN_009a8ee0();
            local_c._0_1_ = 0x49;
            ppppiStack_2b4 = (int ****)0x79a5d2;
            iVar5 = FUN_00475500();
            ppppiStack_2bc = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x6c) >> 0x20);
            ppppiStack_2b8 = (int ****)*(undefined8 *)(iVar5 + 0x74);
            ppppiStack_2b4 = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20);
            ppppiStack_2bc = (int ****)FUN_009a9880((int)*(undefined8 *)(iVar5 + 0x6c));
            ppppiStack_2b4 = (int ****)0xffffffff;
            ppppiStack_2b8 = (int ****)0x0;
            local_c._0_1_ = 0x4a;
            FUN_00408ed0();
            ppppiStack_2b4 = (int ****)0x79a614;
            FUN_00408ad0();
            ppppiStack_2b4 = (int ****)&local_294;
            local_c._0_1_ = 0x48;
            ppppiStack_2b8 = (int ****)0x79a626;
            FUN_009a9740();
            local_c._0_1_ = 0;
            ppppiStack_2b4 = (int ****)0x79a639;
            FUN_00408ad0();
            ppppiStack_2b4 = (int ****)0x79a647;
            FUN_009885d0();
            ppppiStack_2b8 = (int ****)&local_294;
            local_c._0_1_ = 0x4b;
            ppppiStack_2bc = (int ****)0x79a65c;
            ppppiStack_2b4 = (int ****)appppiStack_278;
            FUN_009a8ee0();
            local_c._0_1_ = 0x4c;
            ppppiStack_2b4 = (int ****)0x79a66b;
            iVar5 = FUN_00475500();
            ppppiStack_2bc = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x6c) >> 0x20);
            ppppiStack_2b8 = (int ****)*(undefined8 *)(iVar5 + 0x74);
            ppppiStack_2b4 = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20);
            ppppiStack_2bc = (int ****)FUN_009a9880((int)*(undefined8 *)(iVar5 + 0x6c));
            ppppiStack_2b4 = (int ****)0xffffffff;
            ppppiStack_2b8 = (int ****)0x0;
            local_c._0_1_ = 0x4d;
            FUN_00408ed0();
            ppppiStack_2b4 = (int ****)0x79a6ad;
            FUN_00408ad0();
            ppppiStack_2b4 = (int ****)&local_294;
            local_c = CONCAT31(local_c._1_3_,0x4b);
            ppppiStack_2b8 = (int ****)0x79a6bf;
            FUN_009a9740();
          }
        }
        else {
          pppiVar9 = local_298[10];
          if (pppiVar9[0x1d] == (int **)0x0) {
            if (*(char *)(pppiVar9 + 0x41) == '\0') {
              if (0 < (int)pppiVar9[0x3b]) {
                ppppiStack_2b4 = (int ****)0x79a080;
                FUN_009885d0();
                ppppiStack_2b8 = (int ****)&local_294;
                local_c._0_1_ = 0x2d;
                ppppiStack_2bc = (int ****)0x79a095;
                ppppiStack_2b4 = (int ****)appppiStack_278;
                FUN_009a8ee0();
                local_c._0_1_ = 0x2f;
                ppppiStack_2b4 = (int ****)0x79a0a4;
                FUN_00408ad0();
                ppppiStack_2b4 = (int ****)0x79a0b2;
                FUN_009885d0();
                ppppiStack_2b4 = apppiStack_25c;
                ppppiStack_2bc = (int ****)&ppppiStack_240;
                local_c._0_1_ = 0x30;
                ppppiStack_2b8 = (int ****)FUN_005d24a0();
                ppppiStack_2bc = (int ****)0x79a0d8;
                ppppiStack_2b4 = (int ****)FUN_0043b700();
                local_c._0_1_ = 0x31;
                ppppiStack_2b8 = (int ****)0x79a0ea;
                FUN_009a9980();
                ppppiStack_2b4 = (int ****)0x79a0f3;
                FUN_00408ad0();
                local_c._0_1_ = 0x2f;
                ppppiStack_2b4 = (int ****)0x79a102;
                FUN_00408ad0();
                ppppiStack_2b4 = (int ****)0x79a110;
                FUN_009885d0();
                local_c = CONCAT31(local_c._1_3_,0x32);
                if ((int)local_298[10][0x3b] < 1) {
                  piVar10 = (int *)0x0;
                }
                else {
                  piVar10 = *(int **)(*(int *)(DAT_0125870c + 0x2238) +
                                     (int)*local_298[10][0x39] * 4);
                }
                ppppiStack_2b4 = apppiStack_25c;
                ppppiStack_2b8 = (int ****)0x79a149;
                ppppiStack_2b8 = (int ****)(**(code **)(*piVar10 + 0x1c))();
                puStack_10._0_1_ = 0x33;
                ppppiStack_2bc = (int ****)0x79a15f;
                FUN_009a9980();
                ppppiStack_2b8 = (int ****)0x79a168;
                FUN_00408ad0();
                puStack_10._0_1_ = 0x2f;
                ppppiStack_2b8 = (int ****)0x79a177;
                FUN_00408ad0();
                ppppiStack_2b8 = (int ****)0x79a17c;
                iVar5 = FUN_00475500();
                ppppiStack_2bc = (int ****)*(undefined8 *)(iVar5 + 0x74);
                ppppiStack_2b8 = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20);
                uVar6 = FUN_009a9880((int)*(undefined8 *)(iVar5 + 0x6c),
                                     (int)((ulonglong)*(undefined8 *)(iVar5 + 0x6c) >> 0x20));
                ppppiStack_2b8 = (int ****)0xffffffff;
                ppppiStack_2bc = (int ****)0x0;
                puStack_10._0_1_ = 0x34;
                FUN_00408ed0(uVar6);
                puStack_10._0_1_ = 0x2f;
                ppppiStack_2b8 = (int ****)0x79a1c8;
                FUN_00408ad0();
                ppppiStack_2b8 = param_1;
                ppppiStack_2bc = (int ****)0x79a1d8;
                FUN_0040c830();
                ppppiStack_2b8 = (int ****)&local_298;
                puStack_10 = (undefined1 *)((uint)puStack_10._1_3_ << 8);
                ppppiStack_2bc = (int ****)0x79a1e9;
                FUN_009a9740();
                ppppiStack_2b8 = (int ****)0x79a1f0;
                FUN_00459820();
                ExceptionList = pvStack_18;
                return param_1;
              }
              ppppiStack_2b4 = (int ****)0x79a20f;
              cVar3 = FUN_005cf180();
              if (cVar3 != '\0') goto LAB_0079b7cc;
              ppppiStack_2b4 = (int ****)0x79a223;
              FUN_005d9120();
              ppiVar7 = ppppiVar12[10][0xe];
              ppppiVar12 = (int ****)0x5f5e100;
              if (ppiVar7 == (int **)0x0) {
                ppppiVar12 = (int ****)0x0;
              }
              else {
                do {
                  piVar10 = *ppiVar7;
                  ppiVar7 = (int **)ppiVar7[2];
                  if (piVar10[0xf] < (int)ppppiVar12) {
                    ppppiVar12 = (int ****)piVar10[0xf];
                  }
                } while (ppiVar7 != (int **)0x0);
              }
              ppppiStack_2b4 = (int ****)0x42c90000;
              ppppiStack_2b8 = (int ****)0x79a25a;
              FUN_00401000();
              ppppiStack_2b4 = (int ****)0x79a262;
              iVar5 = FUN_00b31c00();
              ppppiVar8 = local_298;
              if ((int)ppppiVar12 < iVar5) {
                ppppiStack_2b4 = (int ****)0x79a278;
                FUN_009885d0();
                ppppiStack_2b8 = (int ****)&local_294;
                local_c._0_1_ = 0x35;
                ppppiStack_2bc = (int ****)0x79a28d;
                ppppiStack_2b4 = (int ****)appppiStack_278;
                FUN_009a8ee0();
                local_c._0_1_ = 0x37;
                ppppiStack_2b4 = (int ****)0x79a29c;
                FUN_00408ad0();
                ppppiStack_2b4 = (int ****)0x79a2aa;
                FUN_009885d0();
                ppppiStack_2b4 = (int ****)0x1;
                ppppiStack_240 = (int ****)&ppppiStack_2b8;
                local_c._0_1_ = 0x38;
                ppppiStack_2bc = apppiStack_25c;
                ppppiStack_2b8 = ppppiVar12;
                ppppiStack_2b4 = (int ****)FUN_00988a50();
                local_c._0_1_ = 0x39;
                ppppiStack_2b8 = (int ****)0x79a2d9;
                FUN_009a9980();
                ppppiStack_2b4 = (int ****)0x79a2e2;
                FUN_00408ad0();
                local_c._0_1_ = 0x37;
                ppppiStack_2b4 = (int ****)0x79a2f1;
                FUN_00408ad0();
                ppppiStack_2b4 = (int ****)0x79a302;
                FUN_009885d0();
                ppppiStack_2b4 = (int ****)0x1;
                ppppiStack_2b8 = apppiStack_25c;
                local_c._0_1_ = 0x3a;
                ppppiStack_2bc = (int ****)0x79a31e;
                ppppiStack_2b4 = (int ****)FUN_00988d00();
                local_c._0_1_ = 0x3b;
                ppppiStack_2b8 = (int ****)0x79a330;
                FUN_009a9980();
                ppppiStack_2b4 = (int ****)0x79a339;
                FUN_00408ad0();
                local_c._0_1_ = 0x37;
                ppppiStack_2b4 = (int ****)0x79a348;
                FUN_00408ad0();
                ppppiStack_2b4 = (int ****)0x79a34d;
                iVar5 = FUN_00475500();
                ppppiStack_2bc = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x6c) >> 0x20);
                ppppiStack_2b8 = (int ****)*(undefined8 *)(iVar5 + 0x74);
                ppppiStack_2b4 = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20);
                ppppiStack_2bc = (int ****)FUN_009a9880((int)*(undefined8 *)(iVar5 + 0x6c));
                ppppiStack_2b4 = (int ****)0xffffffff;
                ppppiStack_2b8 = (int ****)0x0;
                local_c._0_1_ = 0x3c;
                FUN_00408ed0();
                ppppiStack_2b4 = (int ****)0x79a391;
                FUN_00408ad0();
                ppppiStack_2b4 = (int ****)&local_294;
                local_c = (uint)local_c._1_3_ << 8;
                ppppiStack_2b8 = (int ****)0x79a3a2;
                FUN_009a9740();
                goto LAB_0079b7cc;
              }
              if ((int)local_298 < 1000) {
                ppppiStack_2b4 = (int ****)0x79a3c8;
                FUN_009885d0();
                ppppiStack_2b8 = (int ****)&local_294;
                local_c._0_1_ = 0x3d;
                ppppiStack_2bc = (int ****)0x79a3dd;
                ppppiStack_2b4 = apppiStack_20c;
                FUN_009a8ee0();
                local_c._0_1_ = 0x3f;
                ppppiStack_2b4 = (int ****)0x79a3ec;
                FUN_00408ad0();
                ppppiStack_2b4 = (int ****)0x79a3fa;
                FUN_009885d0();
                ppppiStack_2b4 = (int ****)0x1;
                ppppiStack_240 = (int ****)&ppppiStack_2b8;
                local_c._0_1_ = 0x40;
                ppppiStack_2b8 = ppppiVar8;
                ppppiStack_2bc = apppiStack_25c;
                ppppiStack_2b4 = (int ****)FUN_00988a50();
                local_c._0_1_ = 0x41;
                ppppiStack_2b8 = (int ****)0x79a429;
                FUN_009a9980();
                ppppiStack_2b4 = (int ****)0x79a432;
                FUN_00408ad0();
                local_c._0_1_ = 0x3f;
                ppppiStack_2b4 = (int ****)0x79a441;
                FUN_00408ad0();
                ppppiStack_2b4 = (int ****)0x79a44f;
                FUN_009885d0();
                ppppiStack_2b4 = apppiStack_25c;
                local_c._0_1_ = 0x42;
                ppppiStack_2b8 = (int ****)0x79a466;
                ppppiStack_2b4 = (int ****)FUN_009888f0();
                local_c._0_1_ = 0x43;
                ppppiStack_2b8 = (int ****)0x79a478;
                FUN_009a9980();
                ppppiStack_2b4 = (int ****)0x79a481;
                FUN_00408ad0();
                local_c._0_1_ = 0x3f;
                ppppiStack_2b4 = (int ****)0x79a490;
                FUN_00408ad0();
                ppppiStack_2b4 = (int ****)0x79a495;
                iVar5 = FUN_00475500();
                ppppiStack_2bc = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x6c) >> 0x20);
                ppppiStack_2b8 = (int ****)*(undefined8 *)(iVar5 + 0x74);
                ppppiStack_2b4 = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20);
                ppppiStack_2bc = (int ****)FUN_009a9880((int)*(undefined8 *)(iVar5 + 0x6c));
                ppppiStack_2b4 = (int ****)0xffffffff;
                ppppiStack_2b8 = (int ****)0x0;
                local_c._0_1_ = 0x44;
                FUN_00408ed0();
                ppppiStack_2b4 = (int ****)0x79a4d9;
                FUN_00408ad0();
                ppppiStack_2b4 = (int ****)&local_294;
                local_c = (uint)local_c._1_3_ << 8;
                ppppiStack_2b8 = (int ****)0x79a4ea;
                FUN_009a9740();
                goto LAB_0079b7cc;
              }
              ppppiStack_2b4 = (int ****)0x79a4f9;
              FUN_009885d0();
              ppppiStack_2b4 = apppiStack_20c;
              ppppiStack_2b8 = (int ****)&local_294;
              local_c._0_1_ = 0x45;
              ppppiStack_2bc = (int ****)0x79a513;
              FUN_009a8ee0();
              local_c._0_1_ = 0x46;
              ppppiStack_2b4 = (int ****)0x79a522;
              iVar5 = FUN_00475500();
              ppppiStack_2bc = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x6c) >> 0x20);
              ppppiStack_2b8 = (int ****)*(undefined8 *)(iVar5 + 0x74);
              ppppiStack_2b4 = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20);
              ppppiStack_2bc = (int ****)FUN_009a9880((int)*(undefined8 *)(iVar5 + 0x6c));
              ppppiStack_2b4 = (int ****)0xffffffff;
              ppppiStack_2b8 = (int ****)0x0;
              local_c._0_1_ = 0x47;
              FUN_00408ed0();
              ppppiStack_2b4 = (int ****)0x79a564;
              FUN_00408ad0();
              ppppiStack_2b4 = (int ****)&local_294;
              local_c = CONCAT31(local_c._1_3_,0x45);
              ppppiStack_2b8 = (int ****)0x79a576;
              FUN_009a9740();
            }
            else {
              ppppiStack_2b4 = (int ****)0x799fe5;
              FUN_009885d0();
              ppppiStack_2b8 = (int ****)&local_294;
              local_c._0_1_ = 0x2a;
              ppppiStack_2bc = (int ****)0x799ffa;
              ppppiStack_2b4 = (int ****)appppiStack_278;
              FUN_009a8ee0();
              local_c._0_1_ = 0x2b;
              ppppiStack_2b4 = (int ****)0x79a009;
              iVar5 = FUN_00475500();
              ppppiStack_2bc = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x6c) >> 0x20);
              ppppiStack_2b8 = (int ****)*(undefined8 *)(iVar5 + 0x74);
              ppppiStack_2b4 = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20);
              ppppiStack_2bc = (int ****)FUN_009a9880((int)*(undefined8 *)(iVar5 + 0x6c));
              ppppiStack_2b4 = (int ****)0xffffffff;
              ppppiStack_2b8 = (int ****)0x0;
              local_c._0_1_ = 0x2c;
              FUN_00408ed0();
              ppppiStack_2b4 = (int ****)0x79a04b;
              FUN_00408ad0();
              ppppiStack_2b4 = (int ****)&local_294;
              local_c = CONCAT31(local_c._1_3_,0x2a);
              ppppiStack_2b8 = (int ****)0x79a05d;
              FUN_009a9740();
            }
          }
          else {
            ppppiStack_2b4 = (int ****)0x799ea7;
            cVar3 = FUN_005cf260();
            if (cVar3 == '\0') {
              ppppiStack_2b4 = (int ****)0x799f48;
              FUN_009885d0();
              ppppiStack_2b4 = (int ****)appppiStack_278;
              ppppiStack_2b8 = (int ****)&local_294;
              local_c._0_1_ = 0x27;
              ppppiStack_2bc = (int ****)0x799f5f;
              FUN_009a8ee0();
              local_c._0_1_ = 0x28;
              ppppiStack_2b4 = (int ****)0x799f6e;
              iVar5 = FUN_00475500();
              ppppiStack_2bc = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x6c) >> 0x20);
              ppppiStack_2b8 = (int ****)*(undefined8 *)(iVar5 + 0x74);
              ppppiStack_2b4 = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20);
              ppppiStack_2bc = (int ****)FUN_009a9880((int)*(undefined8 *)(iVar5 + 0x6c));
              ppppiStack_2b4 = (int ****)0xffffffff;
              ppppiStack_2b8 = (int ****)0x0;
              local_c._0_1_ = 0x29;
              FUN_00408ed0();
              ppppiStack_2b4 = (int ****)0x799fb0;
              FUN_00408ad0();
              ppppiStack_2b4 = (int ****)&local_294;
              local_c = CONCAT31(local_c._1_3_,0x27);
              ppppiStack_2b8 = (int ****)0x799fc2;
              FUN_009a9740();
            }
            else {
              ppppiStack_2b4 = (int ****)0x799ebd;
              FUN_009885d0();
              ppppiStack_2b8 = (int ****)&local_294;
              local_c._0_1_ = 0x24;
              ppppiStack_2bc = (int ****)0x799ed2;
              ppppiStack_2b4 = (int ****)appppiStack_278;
              FUN_009a8ee0();
              local_c._0_1_ = 0x25;
              ppppiStack_2b4 = (int ****)0x799ee1;
              iVar5 = FUN_00475500();
              ppppiStack_2bc = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x6c) >> 0x20);
              ppppiStack_2b8 = (int ****)*(undefined8 *)(iVar5 + 0x74);
              ppppiStack_2b4 = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20);
              ppppiStack_2bc = (int ****)FUN_009a9880((int)*(undefined8 *)(iVar5 + 0x6c));
              ppppiStack_2b4 = (int ****)0xffffffff;
              ppppiStack_2b8 = (int ****)0x0;
              local_c._0_1_ = 0x26;
              FUN_00408ed0();
              ppppiStack_2b4 = (int ****)0x799f23;
              FUN_00408ad0();
              ppppiStack_2b4 = (int ****)&local_294;
              local_c = CONCAT31(local_c._1_3_,0x24);
              ppppiStack_2b8 = (int ****)0x799f35;
              FUN_009a9740();
            }
          }
        }
      }
      else {
        ppppiStack_2b4 = (int ****)0x799df4;
        FUN_009885d0();
        ppppiStack_2b8 = (int ****)&local_294;
        local_c._0_1_ = 0x21;
        ppppiStack_2bc = (int ****)0x799e09;
        ppppiStack_2b4 = (int ****)appppiStack_278;
        FUN_009a8ee0();
        local_c._0_1_ = 0x22;
        ppppiStack_2b4 = (int ****)0x799e18;
        iVar5 = FUN_00475500();
        ppppiStack_2bc = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x6c) >> 0x20);
        ppppiStack_2b8 = (int ****)*(undefined8 *)(iVar5 + 0x74);
        ppppiStack_2b4 = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20);
        ppppiStack_2bc = (int ****)FUN_009a9880((int)*(undefined8 *)(iVar5 + 0x6c));
        ppppiStack_2b4 = (int ****)0xffffffff;
        ppppiStack_2b8 = (int ****)0x0;
        local_c._0_1_ = 0x23;
        FUN_00408ed0();
        ppppiStack_2b4 = (int ****)0x799e5a;
        FUN_00408ad0();
        ppppiStack_2b4 = (int ****)&local_294;
        local_c = CONCAT31(local_c._1_3_,0x21);
        ppppiStack_2b8 = (int ****)0x799e6c;
        FUN_009a9740();
      }
    }
    else {
      ppppiStack_2b4 = (int ****)0x799cb4;
      FUN_009885d0();
      ppppiStack_2b8 = (int ****)&local_294;
      local_c._0_1_ = 0x1b;
      ppppiStack_2bc = (int ****)0x799cc9;
      ppppiStack_2b4 = (int ****)appppiStack_278;
      FUN_009a8ee0();
      local_c._0_1_ = 0x1c;
      ppppiStack_2b4 = (int ****)0x799cd8;
      iVar5 = FUN_00475500();
      ppppiStack_2bc = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x6c) >> 0x20);
      ppppiStack_2b8 = (int ****)*(undefined8 *)(iVar5 + 0x74);
      ppppiStack_2b4 = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20);
      ppppiStack_2bc = (int ****)FUN_009a9880((int)*(undefined8 *)(iVar5 + 0x6c));
      ppppiStack_2b4 = (int ****)0xffffffff;
      ppppiStack_2b8 = (int ****)0x0;
      local_c._0_1_ = 0x1d;
      FUN_00408ed0();
      ppppiStack_2b4 = (int ****)0x799d1a;
      FUN_00408ad0();
      ppppiStack_2b4 = (int ****)&local_294;
      local_c._0_1_ = 0x1b;
      ppppiStack_2b8 = (int ****)0x799d2c;
      FUN_009a9740();
      local_c._0_1_ = 0;
      ppppiStack_2b4 = (int ****)0x799d3c;
      FUN_00408ad0();
      ppppiStack_2b4 = (int ****)0x799d4a;
      FUN_009885d0();
      ppppiStack_2b8 = (int ****)&local_294;
      local_c._0_1_ = 0x1e;
      ppppiStack_2bc = (int ****)0x799d5f;
      ppppiStack_2b4 = (int ****)appppiStack_278;
      FUN_009a8ee0();
      local_c._0_1_ = 0x1f;
      ppppiStack_2b4 = (int ****)0x799d6e;
      iVar5 = FUN_00475500();
      ppppiStack_2bc = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x6c) >> 0x20);
      ppppiStack_2b8 = (int ****)*(undefined8 *)(iVar5 + 0x74);
      ppppiStack_2b4 = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20);
      ppppiStack_2bc = (int ****)FUN_009a9880((int)*(undefined8 *)(iVar5 + 0x6c));
      ppppiStack_2b4 = (int ****)0xffffffff;
      ppppiStack_2b8 = (int ****)0x0;
      local_c._0_1_ = 0x20;
      FUN_00408ed0();
      ppppiStack_2b4 = (int ****)0x799db0;
      FUN_00408ad0();
      ppppiStack_2b4 = (int ****)&local_294;
      local_c = CONCAT31(local_c._1_3_,0x1e);
      ppppiStack_2b8 = (int ****)0x799dc2;
      FUN_009a9740();
    }
  }
  else {
    ppppiStack_2b4 = (int ****)0x799b74;
    FUN_009885d0();
    ppppiStack_2b8 = (int ****)&local_294;
    local_c._0_1_ = 0x15;
    ppppiStack_2bc = (int ****)0x799b89;
    ppppiStack_2b4 = (int ****)appppiStack_278;
    FUN_009a8ee0();
    local_c._0_1_ = 0x16;
    ppppiStack_2b4 = (int ****)0x799b98;
    iVar5 = FUN_00475500();
    ppppiStack_2bc = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x6c) >> 0x20);
    ppppiStack_2b8 = (int ****)*(undefined8 *)(iVar5 + 0x74);
    ppppiStack_2b4 = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20);
    ppppiStack_2bc = (int ****)FUN_009a9880((int)*(undefined8 *)(iVar5 + 0x6c));
    ppppiStack_2b4 = (int ****)0xffffffff;
    ppppiStack_2b8 = (int ****)0x0;
    local_c._0_1_ = 0x17;
    FUN_00408ed0();
    ppppiStack_2b4 = (int ****)0x799bda;
    FUN_00408ad0();
    ppppiStack_2b4 = (int ****)&local_294;
    local_c._0_1_ = 0x15;
    ppppiStack_2b8 = (int ****)0x799bec;
    FUN_009a9740();
    local_c._0_1_ = 0;
    ppppiStack_2b4 = (int ****)0x799bfc;
    FUN_00408ad0();
    ppppiStack_2b4 = (int ****)0x799c0a;
    FUN_009885d0();
    ppppiStack_2b8 = (int ****)&local_294;
    local_c._0_1_ = 0x18;
    ppppiStack_2bc = (int ****)0x799c1f;
    ppppiStack_2b4 = (int ****)appppiStack_278;
    FUN_009a8ee0();
    local_c._0_1_ = 0x19;
    ppppiStack_2b4 = (int ****)0x799c2e;
    iVar5 = FUN_00475500();
    ppppiStack_2bc = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x6c) >> 0x20);
    ppppiStack_2b8 = (int ****)*(undefined8 *)(iVar5 + 0x74);
    ppppiStack_2b4 = (int ****)((ulonglong)*(undefined8 *)(iVar5 + 0x74) >> 0x20);
    ppppiStack_2bc = (int ****)FUN_009a9880((int)*(undefined8 *)(iVar5 + 0x6c));
    ppppiStack_2b4 = (int ****)0xffffffff;
    ppppiStack_2b8 = (int ****)0x0;
    local_c._0_1_ = 0x1a;
    FUN_00408ed0();
    ppppiStack_2b4 = (int ****)0x799c70;
    FUN_00408ad0();
    ppppiStack_2b4 = (int ****)&local_294;
    local_c = CONCAT31(local_c._1_3_,0x18);
    ppppiStack_2b8 = (int ****)0x799c82;
    FUN_009a9740();
  }
LAB_0079b7c0:
  local_c = local_c & 0xffffff00;
  ppppiStack_2b4 = (int ****)0x79b7cc;
  FUN_00408ad0();
LAB_0079b7cc:
  ppppiStack_2b4 = param_1;
  ppppiStack_2b8 = (int ****)0x79b7dc;
  FUN_0040c830();
  ppppiStack_2b4 = (int ****)0x79b7e3;
  FUN_00459820();
  ExceptionList = local_14;
  return param_1;
}

