// FUN_0081a450 @ 0081a450 body=[[0081a450, 0081a558] [0081a573, 0081a9e4]]


void FUN_0081a450(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  int iStack_140;
  int iStack_138;
  int iStack_134;
  int local_124;
  float local_120;
  int iStack_11c;
  int iStack_118;
  float fStack_114;
  int iStack_110;
  float fStack_10c;
  undefined1 auStack_108 [16];
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  uint uStack_e0;
  undefined **appuStack_60 [16];
  undefined4 uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  uint uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b546a6;
  local_14 = ExceptionList;
  if (*(char *)(param_1 + 0x3d) != '\0') {
    local_120 = 0.0;
    local_124 = 0;
    ExceptionList = &local_14;
    iVar6 = (**(code **)(**(int **)(param_1 + 0x18) + 0x4c))
                      (*(int **)(param_1 + 0x18),0,&local_124,0,0x2000);
    iVar4 = DAT_0125870c;
    if (iVar6 < 0) {
      uStack_f4 = 0xf;
      uStack_f8 = 0;
      auStack_108[0] = 0;
      FUN_00409350("viewstexturemanager.cpp",0x17);
      uStack_20 = 0;
      uVar7 = FUN_004015b0(auStack_108,0x24f,0x10004);
      uStack_20 = CONCAT31(uStack_20._1_3_,1);
      FUN_00987d50(uVar7,"Locking a texture for FOW update failed.",0x28,0);
      FUN_00401280(uVar7);
      uStack_c = uStack_c & 0xffffff00;
      FUN_00987ac0(appuStack_60);
      appuStack_60[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_60);
      if (0xf < uStack_e0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_f4);
      }
    }
    else {
      iVar6 = *(int *)(DAT_0125870c + 0x2abc);
      iVar1 = *(int *)(DAT_0125870c + 0x2ac0);
      fStack_114 = (float)iVar1 * 0.001953125;
      piVar11 = (int *)(DAT_012588e8 + 0xb60);
      iStack_11c = iStack_134;
      iVar20 = 0;
      do {
        local_120 = (float)iVar20 * fStack_114;
        fVar3 = local_120 - (float)(int)local_120;
        iStack_140 = 0;
        do {
          iVar14 = iVar20 * iStack_138 + iStack_140;
          fStack_10c = (float)iStack_140 * (float)iVar6 * 0.0009765625;
          local_124 = iVar14;
          if (((*piVar11 == 0) ||
              (cVar5 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x128))(), cVar5 != '\0')) ||
             (DAT_00f092fb == '\0')) {
            *(undefined1 *)(iVar14 + iStack_134) = 0xff;
          }
          else {
            iVar10 = iVar6 + -1;
            iVar14 = (int)(fStack_10c + 0.5);
            iVar8 = iVar14;
            if (iVar10 < iVar14) {
              iVar8 = iVar10;
            }
            iStack_110 = iVar1 + -1;
            iVar12 = (int)(local_120 + 0.5);
            iVar13 = iVar12;
            if (iStack_110 < iVar12) {
              iVar13 = iStack_110;
            }
            if (iVar8 < 0) {
              iVar8 = 0;
            }
            if (iVar13 < 0) {
              iVar13 = 0;
            }
            iVar2 = *(int *)(iVar4 + 0x212c);
            iVar15 = *(int *)(iVar2 + 4) + -1;
            if (iVar15 < iVar8) {
              iVar8 = iVar15;
            }
            if (iVar13 < 0) {
              iVar13 = 0;
            }
            iVar9 = *(int *)(iVar2 + 8) + -1;
            if (iVar9 < iVar13) {
              iVar13 = iVar9;
            }
            iVar8 = *(int *)(*(int *)(iVar4 + 0x2aa4) +
                            (uint)*(ushort *)
                                   (*(int *)(iVar2 + 0x18) * iVar13 + *(int *)(iVar2 + 0xc) * iVar8
                                   + *(int *)(iVar2 + 0x20)) * 4);
            if ((iVar8 == 0) || (fVar16 = DAT_00f092fc, *(int *)(iVar8 + 0x360) < 1)) {
              fVar16 = 0.0;
            }
            iStack_118 = iVar14 + 1;
            iVar8 = iStack_118;
            if (iVar10 < iStack_118) {
              iVar8 = iVar10;
            }
            iVar13 = iVar12;
            if (iStack_110 < iVar12) {
              iVar13 = iStack_110;
            }
            if (iVar8 < 0) {
              iVar8 = 0;
            }
            if (iVar13 < 0) {
              iVar13 = 0;
            }
            if (iVar15 < iVar8) {
              iVar8 = iVar15;
            }
            if (iVar13 < 0) {
              iVar13 = 0;
            }
            if (iVar9 < iVar13) {
              iVar13 = iVar9;
            }
            iVar8 = *(int *)(*(int *)(iVar4 + 0x2aa4) +
                            (uint)*(ushort *)
                                   (*(int *)(iVar2 + 0x18) * iVar13 + *(int *)(iVar2 + 0xc) * iVar8
                                   + *(int *)(iVar2 + 0x20)) * 4);
            if (iVar8 == 0) {
              fVar19 = 0.0;
            }
            else {
              fVar19 = DAT_00f092fc;
              if (*(int *)(iVar8 + 0x360) < 1) {
                fVar19 = 0.0;
              }
            }
            iVar12 = iVar12 + 1;
            if (iVar10 < iVar14) {
              iVar14 = iVar10;
            }
            iVar8 = iVar12;
            if (iVar1 + -1 < iVar12) {
              iVar8 = iVar1 + -1;
            }
            if (iVar14 < 0) {
              iVar14 = 0;
            }
            if (iVar8 < 0) {
              iVar8 = 0;
            }
            if (iVar15 < iVar14) {
              iVar14 = iVar15;
            }
            if (iVar8 < 0) {
              iVar8 = 0;
            }
            if (iVar9 < iVar8) {
              iVar8 = iVar9;
            }
            iVar14 = *(int *)(*(int *)(iVar4 + 0x2aa4) +
                             (uint)*(ushort *)
                                    (*(int *)(iVar2 + 0x18) * iVar8 + *(int *)(iVar2 + 0xc) * iVar14
                                    + *(int *)(iVar2 + 0x20)) * 4);
            if ((iVar14 == 0) || (fVar17 = DAT_00f092fc, *(int *)(iVar14 + 0x360) < 1)) {
              fVar17 = 0.0;
            }
            iVar14 = iStack_118;
            if (iVar6 + -1 < iStack_118) {
              iVar14 = iVar6 + -1;
            }
            if (iVar1 + -1 < iVar12) {
              iVar12 = iVar1 + -1;
            }
            if (iVar14 < 0) {
              iVar14 = 0;
            }
            if (iVar12 < 0) {
              iVar12 = 0;
            }
            if (iVar15 < iVar14) {
              iVar14 = iVar15;
            }
            if (iVar12 < 0) {
              iVar12 = 0;
            }
            if (iVar9 < iVar12) {
              iVar12 = iVar9;
            }
            iVar14 = *(int *)(*(int *)(iVar4 + 0x2aa4) +
                             (uint)*(ushort *)
                                    (*(int *)(iVar2 + 0x18) * iVar12 +
                                     *(int *)(iVar2 + 0xc) * iVar14 + *(int *)(iVar2 + 0x20)) * 4);
            fVar18 = 0.0;
            if ((iVar14 != 0) && (0 < *(int *)(iVar14 + 0x360))) {
              fVar18 = DAT_00f092fc;
            }
            fVar16 = (fVar19 - fVar16) * (fStack_10c - (float)(int)fStack_10c) + fVar16;
            *(char *)(local_124 + iStack_11c) =
                 (char)(int)(((((fVar18 - fVar17) * (fStack_10c - (float)(int)fStack_10c) + fVar17)
                              - fVar16) * fVar3 + fVar16) * 255.0);
            iStack_134 = iStack_11c;
          }
          iStack_140 = iStack_140 + 1;
        } while (iStack_140 < 0x400);
        iVar20 = iVar20 + 1;
      } while (iVar20 < 0x200);
      (**(code **)(**(int **)(param_1 + 0x18) + 0x50))(*(int **)(param_1 + 0x18),0);
      *(undefined1 *)(param_1 + 0x3d) = 0;
    }
  }
  ExceptionList = local_14;
  return;
}

