// FUN_004ebd10 @ 004ebd10 body=[[004ebd10, 004ec048] [004ec04c, 004ec07b] [004ec07f, 004ec0a3] [004ec0a7, 004ec0ca] [004ec0ce, 004ec194] [004ec198, 004ec1f6] [004ec1fa, 004ec22f] [004ec233, 004ec276]]


void FUN_004ebd10(int param_1,undefined4 *param_2)

{
  char cVar1;
  void *_Dst;
  int **ppiVar2;
  int **ppiVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined1 auStack_238 [16];
  undefined4 uStack_228;
  int *apiStack_208 [4];
  uint local_1f8;
  uint uStack_1f0;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  uint uStack_1cc;
  undefined4 uStack_1bc;
  uint uStack_1b8;
  uint uStack_1b0;
  undefined4 uStack_1a0;
  uint uStack_19c;
  uint auStack_194 [4];
  undefined4 uStack_184;
  uint uStack_180;
  uint uStack_174;
  undefined4 uStack_164;
  uint uStack_160;
  uint uStack_158;
  undefined4 uStack_148;
  uint uStack_144;
  uint uStack_13c;
  undefined4 uStack_12c;
  uint uStack_128;
  int aiStack_120 [30];
  undefined **ppuStack_a8;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b7523c;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_0057afc0();
  apiStack_208[3] = (int *)(param_1 + 0xc);
  _Dst = (void *)*apiStack_208[3];
  if (_Dst != *(void **)(param_1 + 0x10)) {
    uStack_228 = 0x4ebd63;
    FID_conflict__memcpy(_Dst,*(void **)(param_1 + 0x10),0);
    *(void **)(param_1 + 0x10) = _Dst;
  }
  local_1f8 = 0;
  do {
    piVar7 = (int *)param_2[7];
    if ((char)piVar7[0x44] == '\0') {
      iVar4 = (**(code **)(*piVar7 + 4))();
      piVar7[2] = iVar4;
      if (iVar4 == 0) {
        piVar7[3] = 0x13;
      }
      *(undefined1 *)(piVar7 + 0x44) = 1;
    }
    piVar7 = piVar7 + 3;
    piVar8 = aiStack_120;
    for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar8 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 1;
    }
    if (aiStack_120[0] == 0x13) {
      apiStack_208[0] = (int *)0x0;
      uVar6 = *apiStack_208[3];
      while( true ) {
        if ((uVar6 < (uint)*apiStack_208[3]) || ((uint)apiStack_208[3][1] <= uVar6)) {
          (**(code **)*param_2)();
          ExceptionList = pvStack_18;
          return;
        }
        local_1f8 = uVar6 + 4;
        uStack_19c = 0xf;
        uStack_1a0 = 0;
        uStack_1b0 = uStack_1b0 & 0xffffff00;
        FUN_00409350();
        uStack_1b8 = 0xf;
        uStack_1bc = 0;
        uStack_1cc = uStack_1cc & 0xffffff00;
        uStack_c._0_1_ = 2;
        uStack_c._1_3_ = 0;
        uStack_228 = 0x4ebfb7;
        pcVar5 = __itoa((int)apiStack_208[0],(char *)auStack_194,10);
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00409350();
        uStack_c._0_1_ = 3;
        FUN_00988fa0();
        uStack_c._0_1_ = 4;
        apiStack_208[0] = (int *)((int)apiStack_208[0] + 1);
        FUN_00988f20();
        uStack_c._0_1_ = 5;
        FUN_00988f20();
        if (0xf < uStack_128) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_128 = 0xf;
        uStack_12c = 0;
        uStack_13c = uStack_13c & 0xffffff00;
        if (0xf < uStack_144) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_144 = 0xf;
        uStack_148 = 0;
        uStack_158 = uStack_158 & 0xffffff00;
        if (0xf < uStack_1b8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_1b8 = 0xf;
        uStack_1bc = 0;
        uStack_1cc = uStack_1cc & 0xffffff00;
        uStack_c._0_1_ = 10;
        if (0xf < uStack_19c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_19c = 0xf;
        uStack_1a0 = 0;
        uStack_1b0 = uStack_1b0 & 0xffffff00;
        uStack_180 = 0xf;
        uStack_184 = 0;
        auStack_194[0] = auStack_194[0] & 0xffffff00;
        FUN_00409350();
        uStack_c._0_1_ = 0xb;
        uStack_1dc = 0xf;
        uStack_1e0 = 0;
        uStack_1f0 = uStack_1f0 & 0xffffff00;
        uStack_228 = 0x4ec130;
        FUN_00408ed0();
        uStack_c._0_1_ = 0xc;
        uStack_228 = 0x4ec156;
        FUN_004015b0();
        uStack_c._0_1_ = 0xf;
        apiStack_208[2] = (int *)FUN_00418e30();
        uStack_c._0_1_ = 0xe;
        if (0xf < uStack_1dc) break;
        uStack_1dc = 0xf;
        uStack_1e0 = 0;
        uStack_1f0 = uStack_1f0 & 0xffffff00;
        FUN_00401280();
        uStack_c = CONCAT31(uStack_c._1_3_,0xb);
        FUN_00987ac0();
        ppuStack_a8 = std::ios_base::vftable;
        FUN_00aad52d();
        if (0xf < uStack_180) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_c = 0xffffffff;
        uStack_180 = 0xf;
        uStack_184 = 0;
        auStack_194[0] = auStack_194[0] & 0xffffff00;
        if (0xf < uStack_160) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_160 = 0xf;
        uStack_164 = 0;
        uStack_174 = uStack_174 & 0xffffff00;
        uVar6 = local_1f8;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_009a1440();
    apiStack_208[1] = (int *)FUN_00aae9af();
    uStack_c = 0;
    if (apiStack_208[1] == (int *)0x0) {
      apiStack_208[1] = (int *)0x0;
    }
    else {
      apiStack_208[2] = (int *)auStack_238;
      apiStack_208[0] = (int *)((int)param_2 + 0x25);
      uStack_228 = 0;
      auStack_238[0] = 0;
      pcVar5 = (char *)(param_2 + 9);
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(param_2 + 9,(int)pcVar5 - (int)apiStack_208[0]);
      apiStack_208[1] = (int *)FUN_004ea300(apiStack_208[1]);
      local_1f8 = local_1f8 + 1;
    }
    uStack_c = 0xffffffff;
    apiStack_208[0] = apiStack_208[1];
    FUN_004ec4a0();
    piVar7 = apiStack_208[3];
    ppiVar2 = (int **)apiStack_208[3][1];
    if ((apiStack_208 < ppiVar2) && (ppiVar3 = (int **)*apiStack_208[3], ppiVar3 <= apiStack_208)) {
      apiStack_208[2] = (int *)((int)apiStack_208 - (int)ppiVar3 >> 2);
      if (ppiVar2 == (int **)apiStack_208[3][2]) {
        uVar6 = (int)ppiVar2 - (int)ppiVar3 >> 2;
        if (0x3ffffffe < uVar6) goto LAB_004ebf2f;
        if ((uint)(apiStack_208[3][2] - (int)ppiVar3 >> 2) < uVar6 + 1) {
          FUN_004bf300();
        }
      }
      if ((undefined4 *)piVar7[1] != (undefined4 *)0x0) {
        *(undefined4 *)piVar7[1] = *(undefined4 *)(*piVar7 + (int)apiStack_208[2] * 4);
      }
    }
    else {
      if (ppiVar2 == (int **)apiStack_208[3][2]) {
        uVar6 = (int)ppiVar2 - *apiStack_208[3] >> 2;
        if (0x3ffffffe < uVar6) {
LAB_004ebf2f:
                    /* WARNING: Subroutine does not return */
          FUN_00aad3ad();
        }
        if ((uint)(apiStack_208[3][2] - *apiStack_208[3] >> 2) < uVar6 + 1) {
          FUN_004bf300();
        }
      }
      if ((undefined4 *)piVar7[1] != (undefined4 *)0x0) {
        *(undefined4 *)piVar7[1] = apiStack_208[1];
      }
    }
    piVar7[1] = piVar7[1] + 4;
    (**(code **)(*apiStack_208[1] + 0xc))();
  } while( true );
}

