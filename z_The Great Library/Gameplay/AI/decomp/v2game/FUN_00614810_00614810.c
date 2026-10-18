// FUN_00614810 @ 00614810 body=[[00614810, 006149bf] [006149c3, 00614a8e] [00614a92, 00614b0b] [00614b10, 00614bb7] [00614bbb, 00614c8e] [00614c92, 00614cef] [00614cf3, 00614e8b]]


void FUN_00614810(void)

{
  char cVar1;
  int *piVar2;
  undefined1 uVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int in_ECX;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  float *pfVar9;
  undefined4 *puVar10;
  float10 fVar11;
  uint uStack_17c;
  uint uStack_178;
  undefined4 uStack_174;
  uint uStack_170;
  undefined ***pppuStack_16c;
  undefined ***pppuStack_168;
  float *pfStack_160;
  float *pfStack_15c;
  int iStack_158;
  float *pfStack_154;
  int iStack_150;
  undefined **appuStack_148 [2];
  int iStack_140;
  uint uStack_13c;
  int *piStack_138;
  uint *puStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 *puStack_128;
  undefined4 *puStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 *puStack_118;
  undefined4 *puStack_114;
  int iStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 uStack_100;
  undefined1 uStack_ff;
  undefined4 uStack_fc;
  char cStack_f8;
  FILE *pFStack_f4;
  undefined **appuStack_f0 [22];
  char acStack_98 [116];
  void *pvStack_24;
  uint uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b510d1;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (DAT_00f20c18 == (int *)0x0) {
    ExceptionList = &pvStack_14;
    DAT_00f20c18 = (int *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)0x0;
    }
    else {
      *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
    }
  }
  piVar4 = (int *)(**(code **)(*DAT_00f20c18 + 4))();
  piVar2 = *(int **)(in_ECX + 0x40);
  if ((piVar4 != piVar2) && (piVar2 != (int *)0x0)) {
    (**(code **)*piVar2)(1);
  }
  *(int **)(in_ECX + 0x40) = piVar4;
  (**(code **)(*piVar4 + 4))();
  fVar11 = (float10)(**(code **)(**(int **)(in_ECX + 0x40) + 0x14))();
  *(float *)(in_ECX + 0x44) = (float)fVar11;
  *(undefined4 *)(in_ECX + 0x74) = 0xffffffaa;
  *(undefined4 *)(in_ECX + 0x78) = 0xdc;
  *(undefined4 *)(in_ECX + 0x50) = 0x41a00000;
  FUN_00614f20(appuStack_148);
  puVar10 = (undefined4 *)(in_ECX + 0x90);
  uStack_c._0_1_ = 0;
  uStack_c._1_3_ = 0;
  _memset(puVar10,0,0x8c);
  if (((uint)((int)appuStack_148 + (int)appuStack_148[0][1]) &
      ~-(uint)((*(uint *)((int)&uStack_13c + (int)appuStack_148[0][1]) & 6) != 0)) != 0) {
    do {
      uVar3 = FUN_00549350(10);
      FUN_00614ff0(appuStack_148,acStack_98,uVar3);
      pppuStack_168 = (undefined ***)0xf;
      pppuStack_16c = (undefined ***)0x0;
      uStack_17c = uStack_17c & 0xffffff00;
      uStack_c._0_1_ = 1;
      if (acStack_98[0] == -0x59) {
        pcVar5 = acStack_98 + 1;
        pfStack_160 = (float *)CONCAT31(pfStack_160._1_3_,1);
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        iVar6 = (int)pcVar5 - (int)(acStack_98 + 2);
        pcVar5 = acStack_98 + 1;
      }
      else {
        pcVar5 = acStack_98;
        pfStack_160 = (float *)((uint)pfStack_160._1_3_ << 8);
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        iVar6 = (int)pcVar5 - (int)(acStack_98 + 1);
        pcVar5 = acStack_98;
      }
      FUN_00409350(pcVar5,iVar6);
      FUN_009f80a0();
      uStack_c._0_1_ = 0;
      if (0xf < pppuStack_168) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_17c);
      }
    } while ((*(byte *)((int)&uStack_13c + (int)appuStack_148[0][1]) & 1) == 0);
    FUN_00547810(appuStack_148);
  }
  if ((*(int *)(in_ECX + 0x80) - *(int *)(in_ECX + 0x7c) & 0xffffffe0U) != 0) {
    *(undefined4 *)(in_ECX + 0x11c) = 0;
    *(float *)(in_ECX + 0x120) = (float)(*(int *)(in_ECX + 0x78) + 0x28);
    pppuStack_168 = (undefined ***)0xf;
    pppuStack_16c = (undefined ***)0x0;
    uStack_17c = uStack_17c & 0xffffff00;
    if (*(char *)(*(int *)(in_ECX + 0x8c) * 0x20 + 0x1c + *(int *)(in_ECX + 0x7c)) == '\0') {
      FUN_00409350("CreditsText",0xb);
      uStack_c._0_1_ = 3;
    }
    else {
      FUN_00409350("CreditsText",0xb);
      uStack_c._0_1_ = 2;
    }
    uVar7 = (**(code **)(**(int **)(in_ECX + 0xc) + 0x3c))(&uStack_17c);
    puStack_10 = (undefined1 *)((uint)puStack_10 & 0xffffff00);
    *puVar10 = uVar7;
    if (0xf < pppuStack_16c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(unaff_EBX);
    }
    pfStack_154 = (float *)(int)*(float *)(in_ECX + 0x11c);
    iStack_150 = (int)*(float *)(in_ECX + 0x120);
    (**(code **)(*(int *)*puVar10 + 0xb4))(&pfStack_154);
    iVar6 = *(int *)(in_ECX + 0x8c) * 0x20 + *(int *)(in_ECX + 0x7c);
    *(int *)(in_ECX + 0x8c) = *(int *)(in_ECX + 0x8c) + 1;
    FUN_00408ed0(iVar6,0,0xffffffff);
    FUN_00a5ecc0(iVar6,0);
    pfVar9 = (float *)(in_ECX + 0x128);
    puVar10 = (undefined4 *)(in_ECX + 0x94);
    iStack_158 = 0x22;
    do {
      pfStack_15c = pfVar9 + -1;
      *pfStack_15c = pfVar9[-3];
      *pfVar9 = pfVar9[-2] + 20.0;
      pppuStack_168 = (undefined ***)0xf;
      pppuStack_16c = (undefined ***)0x0;
      uStack_17c = uStack_17c & 0xffffff00;
      pfStack_154 = pfVar9;
      if (*(char *)(*(int *)(in_ECX + 0x8c) * 0x20 + 0x1c + *(int *)(in_ECX + 0x7c)) == '\0') {
        FUN_00409350("CreditsText",0xb);
        uStack_c._0_1_ = 5;
      }
      else {
        FUN_00409350("CreditsTextBold",0xf);
        uStack_c._0_1_ = 4;
      }
      uVar7 = (**(code **)(**(int **)(in_ECX + 0xc) + 0x3c))(&uStack_17c);
      puStack_10 = (undefined1 *)((uint)puStack_10 & 0xffffff00);
      *puVar10 = uVar7;
      if (0xf < pppuStack_16c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(unaff_EBX);
      }
      pfStack_154 = (float *)(int)*pfStack_160;
      iStack_150 = (int)*pfVar9;
      (**(code **)(*(int *)*puVar10 + 0xb4))(&pfStack_154);
      iVar6 = *(int *)(in_ECX + 0x8c) * 0x20 + *(int *)(in_ECX + 0x7c);
      *(int *)(in_ECX + 0x8c) = *(int *)(in_ECX + 0x8c) + 1;
      pfStack_15c = (float *)*puVar10;
      FUN_00408ed0(iVar6,0,0xffffffff);
      FUN_00a5ecc0(iVar6,0);
      pfVar9 = pfStack_154 + 2;
      puVar10 = puVar10 + 1;
      iStack_158 = iStack_158 + -1;
      pfStack_154 = pfVar9;
    } while (iStack_158 != 0);
  }
  pppuStack_168 = (undefined ***)0xf;
  pppuStack_16c = (undefined ***)0x0;
  uStack_17c = uStack_17c & 0xffffff00;
  FUN_00409350("CreditsWindow",0xd);
  uStack_c = CONCAT31(uStack_c._1_3_,6);
  uVar7 = *(undefined4 *)(in_ECX + 0x10);
  uVar8 = (**(code **)(**(int **)(in_ECX + 0xc) + 0x2c))(&uStack_17c,uVar7);
  pvStack_14 = (void *)((uint)pvStack_14 & 0xffffff00);
  *(undefined4 *)(in_ECX + 0x234) = uVar8;
  if (0xf < uStack_170) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI);
  }
  uStack_170 = 0xf;
  uStack_174 = 0;
  FUN_00409350("back_button",0xb);
  pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,7);
  iVar6 = (**(code **)(**(int **)(in_ECX + 0x234) + 0x34))(&stack0xfffffe7c);
  (**(code **)(*(int *)(iVar6 + 0x54) + 4))(in_ECX + 0x14);
  uStack_1c = uStack_1c & 0xffffff00;
  if (uStack_178 < 0x10) {
    uStack_178 = 0xf;
    uStack_17c = 0;
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x234) + 0x18) + 0x34))();
    pppuStack_16c = appuStack_f0;
    *(undefined ***)((int)&iStack_158 + *(int *)(iStack_158 + 4)) =
         std::basic_ifstream<char,std::char_traits<char>_>::vftable;
    pppuStack_168 = appuStack_148;
    appuStack_148[0] = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
    uStack_1c._0_1_ = 9;
    uStack_1c._1_3_ = 0;
    if ((pFStack_f4 != (FILE *)0x0) && ((undefined1 *)*piStack_138 == &uStack_100)) {
      *piStack_138 = iStack_10c;
      *puStack_128 = uStack_108;
      *puStack_118 = 0;
    }
    if (cStack_f8 != '\0') {
      if (pFStack_f4 != (FILE *)0x0) {
        FUN_00548cc0();
        __fclose_nolock(pFStack_f4);
      }
      piStack_138 = &iStack_140;
      puStack_134 = &uStack_13c;
      puStack_128 = &uStack_130;
      puStack_124 = &uStack_12c;
      puStack_118 = &uStack_120;
      puStack_114 = &uStack_11c;
      cStack_f8 = '\0';
      uStack_ff = 0;
      uStack_13c = 0;
      uStack_12c = 0;
      uStack_11c = 0;
      iStack_140 = 0;
      uStack_130 = 0;
      uStack_120 = 0;
      pFStack_f4 = (FILE *)0x0;
      uStack_fc = DAT_013f0824;
      uStack_104 = 0;
    }
    uStack_1c = CONCAT31(uStack_1c._1_3_,8);
    FUN_00547420();
    uStack_1c = 0xffffffff;
    *(undefined ***)((int)&iStack_158 + *(int *)(iStack_158 + 4)) =
         std::basic_istream<char,std::char_traits<char>_>::vftable;
    appuStack_f0[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_f0);
    ExceptionList = pvStack_24;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uVar7);
}

