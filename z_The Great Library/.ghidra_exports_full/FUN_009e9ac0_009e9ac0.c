// FUN_009e9ac0 @ 009e9ac0 body=[[009e9ac0, 009e9b8d] [009e9b91, 009e9c9b] [009e9c9f, 009e9d56] [009e9d5f, 009e9e29] [009e9e2d, 009e9ee0] [009e9ee4, 009e9ef7] [009e9f00, 009e9f87] [009e9f8b, 009ea087] [009ea08b, 009ea09f]]


void FUN_009e9ac0(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  uint uStack_208;
  uint uStack_204;
  uint uStack_200;
  char *pcStack_1fc;
  char *pcStack_1f8;
  undefined ***pppuStack_1f4;
  undefined4 uStack_1f0;
  uint *puStack_1ec;
  char *pcStack_1e8;
  HWND pHStack_1e4;
  uint local_1d0;
  uint uStack_1cc;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined **appuStack_158 [4];
  undefined **appuStack_148 [6];
  undefined **appuStack_130 [33];
  undefined **appuStack_ac [19];
  void *pvStack_60;
  undefined1 uStack_58;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_34;
  uint uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b56a5f;
  pvStack_14 = ExceptionList;
  pHStack_1e4 = (HWND)0xf;
  pcStack_1e8 = "DirectSound.cpp";
  local_1bc = 0xf;
  local_1c0 = 0;
  local_1d0 = local_1d0 & 0xffffff00;
  puStack_1ec = (uint *)0x9e9b06;
  ExceptionList = &pvStack_14;
  FUN_00409350();
  pHStack_1e4 = (HWND)0x3;
  puStack_1ec = &local_1d0;
  pcStack_1e8 = (char *)0x25;
  local_c = 0;
  uStack_1f0 = 0x9e9b1f;
  uVar1 = FUN_004015b0();
  pHStack_1e4 = (HWND)0x0;
  pcStack_1e8 = (char *)0x10;
  puStack_1ec = (uint *)0xe3c7d0;
  local_c = CONCAT31(local_c._1_3_,1);
  pppuStack_1f4 = (undefined ***)0x9e9b3a;
  uStack_1f0 = uVar1;
  FUN_00987d50();
  pcStack_1f8 = (char *)0x9e9b40;
  pppuStack_1f4 = (undefined ***)uVar1;
  FUN_00401280();
  pppuStack_1f4 = appuStack_130;
  uStack_1c = uStack_1c & 0xffffff00;
  pcStack_1f8 = (char *)0x9e9b57;
  FUN_00987ac0();
  pppuStack_1f4 = appuStack_130;
  appuStack_130[0] = std::ios_base::vftable;
  pcStack_1f8 = (char *)0x9e9b6f;
  FUN_00aad52d();
  uStack_1c = 0xffffffff;
  if (0xf < uStack_1cc) {
                    /* WARNING: Subroutine does not return */
    pcStack_1f8 = &UNK_009e9b8e;
    FUN_00aae91b();
  }
  DAT_00fc0c60 = 0;
  DAT_00f20c5c = (int *)0x0;
  DAT_01258a93 = 0;
  if (DAT_013f05f8 == 0) {
    pppuStack_1f4 = (undefined ***)0x1;
    pcStack_1f8 = (char *)0x9e9bb2;
    pppuStack_1f4 = (undefined ***)FUN_00aae9af();
    pcStack_1f8 = (char *)0x9e9bbb;
    FUN_00a701f0();
    pppuStack_1f4 = (undefined ***)0x9e9bc0;
    FUN_00a6fe40();
  }
  pppuStack_1f4 = (undefined ***)0x9e9bc6;
  pHStack_1e4 = GetForegroundWindow();
  if (pHStack_1e4 == (HWND)0x0) {
    pppuStack_1f4 = (undefined ***)0x9e9bd4;
    pHStack_1e4 = GetDesktopWindow();
  }
  pppuStack_1f4 = (undefined ***)0x0;
  pcStack_1f8 = (char *)&DAT_00f20c5c;
  pcStack_1fc = (char *)0x0;
  uStack_200 = 0x9e9be5;
  uVar2 = DirectSoundCreate8();
  pppuStack_1f4 = (undefined ***)0xf;
  pcStack_1f8 = "DirectSound.cpp";
  uStack_1cc = 0xf;
  local_1d0 = 0;
  pcStack_1fc = (char *)0x9e9c07;
  FUN_00409350();
  pppuStack_1f4 = (undefined ***)0x3;
  pcStack_1fc = &stack0xfffffe20;
  pcStack_1f8 = (char *)0x37;
  uStack_1c = 2;
  uStack_200 = 0x9e9c24;
  uVar3 = FUN_004015b0();
  pppuStack_1f4 = (undefined ***)0x0;
  pcStack_1f8 = (char *)0x1e;
  pcStack_1fc = "Sound initialised with result ";
  uStack_1c = CONCAT31(uStack_1c._1_3_,3);
  uStack_204 = 0x9e9c3f;
  uStack_200 = uVar3;
  FUN_00987d50();
  uStack_208 = uVar3;
  uStack_204 = uVar2;
  uVar1 = FUN_004931f0();
  FUN_00401280(uVar1);
  uStack_34 = CONCAT31(uStack_34._1_3_,2);
  FUN_00987ac0(appuStack_148);
  appuStack_148[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_148);
  uStack_34 = 0xffffffff;
  if ((HWND)0xf < pHStack_1e4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(pcStack_1f8);
  }
  if (uVar2 == 0) {
    iVar6 = (**(code **)(*DAT_00f20c5c + 0x18))(DAT_00f20c5c,pcStack_1fc,2);
    uStack_1f0 = 0xf;
    pppuStack_1f4 = (undefined ***)0x0;
    uStack_204 = uStack_204 & 0xffffff00;
    FUN_00409350("DirectSound.cpp",0xf);
    uStack_40 = 6;
    uVar1 = FUN_004015b0(&uStack_204,0x41,3);
    uStack_40 = CONCAT31(uStack_40._1_3_,7);
    FUN_00987d50(uVar1,"Coop Level Set. Result: ",0x18,0);
    uVar1 = FUN_004931f0(uVar1,iVar6);
    FUN_00401280(uVar1);
    uStack_44 = CONCAT31(uStack_44._1_3_,6);
    FUN_00987ac0(appuStack_158);
    appuStack_158[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_158);
    uStack_44 = 0xffffffff;
    if (0xf < pppuStack_1f4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_208);
    }
    if (iVar6 != 0) {
      pppuStack_1f4 = (undefined ***)0xf;
      pcStack_1f8 = (char *)0x0;
      uStack_208 = uStack_208 & 0xffffff00;
      FUN_00409350("DirectSound.cpp",0xf);
      uStack_44 = 8;
      uVar1 = FUN_004015b0(&uStack_208,0x45,0x1000);
      uStack_44._0_1_ = 9;
      FUN_00987d50(uVar1,"Failed to coop level",0x14,0);
      FUN_00401280(uVar1);
      uStack_44 = CONCAT31(uStack_44._1_3_,8);
      FUN_00987ac0(appuStack_158);
      appuStack_158[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_158);
      uStack_44 = 0xffffffff;
      if (0xf < pppuStack_1f4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_208);
      }
    }
    puVar9 = &DAT_00f40c64;
    puVar8 = &DAT_00f20c60;
    do {
      uVar1 = DAT_00f092fc;
      uStack_44 = 0xffffffff;
      iVar6 = 0x40;
      puVar4 = puVar9;
      puVar7 = puVar8;
      do {
        *(undefined4 *)(puVar4 + -4) = 0;
        *puVar4 = 0;
        *(undefined4 *)(puVar4 + 4) = uVar1;
        *(undefined4 *)(puVar4 + 8) = uVar1;
        *puVar7 = 0;
        puVar4 = puVar4 + 0x2000;
        puVar7 = puVar7 + 0x200;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      pppuStack_1f4 = (undefined ***)0xf;
      pcStack_1f8 = (char *)0x0;
      uStack_208 = uStack_208 & 0xffffff00;
      FUN_00409350("empty",5);
      uStack_44 = 10;
      FUN_00408ed0(&uStack_208,0,0xffffffff);
      uStack_44 = 0xffffffff;
      if (0xf < pppuStack_1f4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_208);
      }
      puVar9 = puVar9 + 0x10;
      puVar8 = puVar8 + 1;
    } while ((int)puVar8 < 0xf21460);
  }
  else {
    pHStack_1e4 = (HWND)0xf;
    pcStack_1e8 = (char *)0x0;
    pcStack_1f8 = (char *)((uint)pcStack_1f8 & 0xffffff00);
    FUN_00409350("DirectSound.cpp",0xf);
    uStack_34 = 4;
    uVar1 = FUN_004015b0(&pcStack_1f8,0x3b,0x1000);
    uStack_34 = CONCAT31(uStack_34._1_3_,5);
    FUN_00987d50(uVar1,"Failed to initialise sound ",0x1b,0);
    FUN_00401280(uVar1);
    uStack_44 = CONCAT31(uStack_44._1_3_,4);
    FUN_00987ac0(appuStack_158);
    appuStack_158[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_158);
    uStack_44 = 0xffffffff;
    if (0xf < pppuStack_1f4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_208);
    }
  }
  uStack_44 = 0xffffffff;
  puStack_1ec = (uint *)((uint)puStack_1ec & 0xffffff00);
  FUN_00409350("DirectSound.cpp",0xf);
  uStack_44 = 0xb;
  piVar5 = (int *)FUN_004015b0(&puStack_1ec,0x58,3);
  uStack_44 = CONCAT31(uStack_44._1_3_,0xc);
  FUN_00987d50(piVar5,"Sound Init Done",0xf,0);
  FUN_00408be0(piVar5);
  uVar2 = 0;
  if ((*(byte *)(*(int *)(*piVar5 + 4) + 0xc + (int)piVar5) & 6) == 0) {
    iVar6 = (**(code **)(**(int **)(*(int *)(*piVar5 + 4) + 0x38 + (int)piVar5) + 0x34))();
    if (iVar6 == -1) {
      uVar2 = 4;
    }
  }
  if (uVar2 != 0) {
    uVar2 = *(uint *)((int)piVar5 + *(int *)(*piVar5 + 4) + 0xc) | uVar2;
    if (*(int *)((int)piVar5 + *(int *)(*piVar5 + 4) + 0x38) == 0) {
      uVar2 = uVar2 | 4;
    }
    FUN_00401120(uVar2,0);
  }
  uStack_58 = 0xb;
  FUN_00987ac0(appuStack_ac);
  appuStack_ac[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_ac);
  if ((uint *)0xf < puStack_1ec) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_200);
  }
  ExceptionList = pvStack_60;
  return;
}

