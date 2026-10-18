// FUN_0066ce70 @ 0066ce70 body=[[0066ce70, 0066cee5] [0066cee9, 0066cf9a] [0066cfa0, 0066d28a] [0066d28e, 0066d2a4]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x0066d282) */
/* WARNING: Removing unreachable block (ram,0x0066cedd) */

int FUN_0066ce70(void)

{
  short *psVar1;
  char cVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  int *piVar8;
  char cVar9;
  int *piVar10;
  int iVar11;
  char *pcVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int *in_ECX;
  uint uVar18;
  int *piVar19;
  char *pcVar20;
  int *piVar21;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7f3d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_ECX[0x36d] != 8) {
    ExceptionList = &local_10;
    FUN_00409350();
    local_8 = 0;
    piVar10 = (int *)FUN_009c7290();
    (**(code **)(*piVar10 + 0x60))();
  }
  iVar11 = DAT_0125870c;
  local_8 = 0xffffffff;
  in_ECX[0x36d] = 8;
  *(undefined4 *)(iVar11 + 0x2ad8) = 8;
  FUN_0066c180();
  iVar11 = FUN_00475500();
  *(undefined1 *)(iVar11 + 0xe6) = 0;
  iVar11 = FUN_00475500();
  *(undefined4 *)(iVar11 + 0xec) = 0xffba;
  iVar11 = FUN_00475500();
  *(undefined4 *)(iVar11 + 0xf0) = 10;
  (**(code **)(*in_ECX + 0x38))();
  FUN_00801ff0();
  (**(code **)(*in_ECX + 0x38))();
  FUN_00819830();
  (**(code **)(*in_ECX + 0x38))();
  FUN_006458d0();
  piVar8 = DAT_012588e8;
  iVar11 = *(int *)(*(int *)(DAT_012587e4 + 4) + DAT_012588e8[0x2d8] * 4);
  piVar10 = *(int **)(iVar11 + 0x9d8);
  do {
    do {
      if ((piVar10 < *(int **)(iVar11 + 0x9d8)) || (*(int **)(iVar11 + 0x9dc) <= piVar10)) {
        iVar14 = *(int *)(iVar11 + 0x15e0) - *(int *)(iVar11 + 0x15dc) >> 2;
        if (0 < iVar14) {
          iVar15 = (**(code **)(*piVar8 + 0x18))();
          *(undefined4 *)(&stack0xffffff78 + iVar15 * 2) = 0xa110ca7e;
          _memset(&stack0xffffff78,0,iVar15 * 2);
          local_20 = 0;
          if (0 < iVar14) {
            do {
              iVar15 = *(int *)(*(int *)(iVar11 + 0x15dc) + local_20 * 4);
              iVar5 = *(int *)(iVar15 + 8);
              if (((*(short *)(&stack0xffffff78 + iVar5 * 2) == 0) &&
                  (*(int *)(iVar15 + 0x5c) != -1)) &&
                 (iVar16 = iVar15 + 0x48, 0 < *(int *)(iVar15 + 0x50))) {
                FUN_00409350("AutomationArrow",0xf);
                local_8 = 2;
                uVar13 = (**(code **)(*in_ECX + 0x38))(iVar16);
                local_8 = 0xffffffff;
                FUN_00645a20(uVar13,iVar16);
                psVar1 = (short *)(&stack0xffffff78 + iVar5 * 2);
                *psVar1 = *psVar1 + 1;
              }
              local_20 = local_20 + 1;
            } while (local_20 < iVar14);
          }
        }
        iVar11 = (**(code **)(*in_ECX + 0x144))();
        if (((char)iVar11 != '\0') && (iVar11 = in_ECX[0x760], -1 < *(int *)(iVar11 + 0x38))) {
          FUN_0099e240();
          piVar10 = (int *)FUN_00868600();
          if ((int *)*piVar10 == (int *)0x0) {
            iVar11 = 0;
          }
          else {
            iVar11 = *(int *)*piVar10;
          }
          uVar17 = (uint)piVar10[2] >> 2;
          uVar18 = piVar10[2] & 3;
          if (*(uint *)(iVar11 + 8) <= uVar17) {
            uVar17 = uVar17 - *(uint *)(iVar11 + 8);
          }
          iVar14 = *(int *)(*(int *)(iVar11 + 4) + uVar17 * 4);
          iVar11 = iVar14 + uVar18 * 4;
          if (*(int *)(iVar14 + uVar18 * 4) != 0) {
            FUN_00409350();
            local_8 = 3;
            FUN_00868080();
            iVar11 = FUN_00867670();
          }
        }
        ExceptionList = local_10;
        return iVar11;
      }
      piVar19 = *(int **)(*(int *)(piVar8[0x2b3] + *piVar10 * 4) + 0xd8);
      piVar10 = piVar10 + 1;
      bVar6 = false;
      bVar7 = false;
    } while (piVar19 == (int *)0x0);
    do {
      piVar4 = (int *)*piVar19;
      piVar19 = (int *)piVar19[2];
      cVar9 = (**(code **)(*piVar4 + 0x34))();
      if (cVar9 != '\0') {
        cVar9 = *(char *)(piVar4[0x22] + 0x39);
        cVar2 = *(char *)(piVar4[0x22] + 0x3a);
        if (((cVar9 != '\0') && (!bVar6)) || ((cVar2 != '\0' && (!bVar7)))) {
          if ((piVar4[0x26] != -1) && (piVar21 = piVar4 + 0x27, 0 < piVar4[0x29])) {
            pcVar20 = "retreatArrow";
            if (cVar2 == '\0') {
              pcVar20 = "AutomationArrow";
            }
            pcVar12 = pcVar20;
            do {
              cVar3 = *pcVar12;
              pcVar12 = pcVar12 + 1;
            } while (cVar3 != '\0');
            FUN_00409350(pcVar20,(int)pcVar12 - (int)(pcVar20 + 1));
            local_8 = 1;
            uVar13 = (**(code **)(*in_ECX + 0x38))(piVar21);
            local_8 = 0xffffffff;
            FUN_00645a20(uVar13,piVar21);
          }
          if (cVar9 == '\0') {
            if (cVar2 == '\0') goto LAB_0066d0b7;
            bVar7 = true;
          }
          else {
            bVar6 = true;
LAB_0066d0b7:
            if (!bVar7) goto LAB_0066d0c7;
          }
          if (bVar6) break;
        }
      }
LAB_0066d0c7:
    } while (piVar19 != (int *)0x0);
  } while( true );
}

