// FUN_00725730 @ 00725730 body=[[00725730, 007257c8] [007257d0, 0072591a] [00725920, 007259ea] [007259f0, 00725cd8]]


void FUN_00725730(uint *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  int *piVar18;
  int *piVar19;
  int *local_10;
  int *local_c;
  int *local_8;
  
  piVar16 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                      1);
  FUN_007276c0(piVar16,param_4);
  iVar13 = DAT_012588e8;
  piVar18 = piVar16 + 1;
  if (param_2 < piVar16) {
    iVar2 = *(int *)(DAT_012587e4 + 4);
    iVar3 = *(int *)(iVar2 + *(int *)(DAT_012588e8 + 0xb60) * 4);
    iVar4 = *(int *)(iVar2 + *(int *)(DAT_012588e8 + 0xb60) * 4);
    iVar5 = *(int *)(iVar4 + 0x11cc);
    iVar6 = *(int *)(iVar3 + 0x11cc);
    while( true ) {
      iVar7 = *(int *)(*(int *)(piVar16[-1] + 0x28) + 8);
      iVar8 = *(int *)(*(int *)(*piVar16 + 0x28) + 8);
      uVar15 = (uint)*(byte *)(iVar7 + iVar4 + 0x118c);
      uVar14 = (uint)*(byte *)(iVar8 + iVar3 + 0x118c);
      iVar9 = *(int *)(iVar6 + 4 + uVar14 * 8);
      iVar1 = *(int *)(iVar5 + 4 + uVar15 * 8);
      if ((iVar9 < iVar1) ||
         ((iVar9 <= iVar1 && (*(uint *)(iVar6 + uVar14 * 8) < *(uint *)(iVar5 + uVar15 * 8)))))
      break;
      iVar1 = *(int *)(iVar2 + *(int *)(DAT_012588e8 + 0xb60) * 4);
      iVar9 = *(int *)(iVar2 + *(int *)(DAT_012588e8 + 0xb60) * 4);
      uVar14 = (uint)*(byte *)(iVar8 + 0x118c + iVar9);
      iVar8 = *(int *)(iVar9 + 0x11cc);
      uVar15 = (uint)*(byte *)(iVar7 + 0x118c + iVar1);
      iVar7 = *(int *)(iVar1 + 0x11cc);
      iVar9 = *(int *)(iVar7 + 4 + uVar15 * 8);
      iVar1 = *(int *)(iVar8 + 4 + uVar14 * 8);
      if ((iVar9 < iVar1) ||
         (((iVar9 <= iVar1 && (*(uint *)(iVar7 + uVar15 * 8) < *(uint *)(iVar8 + uVar14 * 8))) ||
          (piVar16 = piVar16 + -1, piVar16 <= param_2)))) break;
    }
  }
  piVar11 = piVar18;
  piVar12 = piVar18;
  local_c = piVar18;
  local_8 = piVar16;
  local_10 = piVar16;
  if (piVar18 < param_3) {
    iVar2 = *(int *)(DAT_012587e4 + 4);
    iVar3 = *(int *)(iVar2 + *(int *)(DAT_012588e8 + 0xb60) * 4);
    iVar4 = *(int *)(iVar2 + *(int *)(DAT_012588e8 + 0xb60) * 4);
    iVar5 = *(int *)(iVar4 + 0x11cc);
    iVar6 = *(int *)(*(int *)(*piVar16 + 0x28) + 8);
    uVar14 = (uint)*(byte *)(iVar6 + 0x118c + iVar3);
    iVar3 = *(int *)(iVar3 + 0x11cc);
    iVar1 = *(int *)(iVar3 + 4 + uVar14 * 8);
    while( true ) {
      iVar8 = *(int *)(*(int *)(*piVar18 + 0x28) + 8);
      uVar15 = (uint)*(byte *)(iVar8 + iVar4 + 0x118c);
      iVar7 = *(int *)(iVar5 + 4 + uVar15 * 8);
      piVar11 = piVar18;
      piVar12 = piVar18;
      local_c = piVar18;
      if ((iVar1 < iVar7) ||
         ((iVar1 <= iVar7 && (*(uint *)(iVar3 + uVar14 * 8) < *(uint *)(iVar5 + uVar15 * 8)))))
      break;
      iVar7 = *(int *)(iVar2 + *(int *)(DAT_012588e8 + 0xb60) * 4);
      uVar15 = (uint)*(byte *)(iVar8 + 0x118c + iVar7);
      iVar8 = *(int *)(iVar7 + 0x11cc);
      iVar7 = *(int *)(iVar2 + *(int *)(DAT_012588e8 + 0xb60) * 4);
      uVar17 = (uint)*(byte *)(iVar6 + 0x118c + iVar7);
      iVar9 = *(int *)(iVar7 + 0x11cc);
      iVar10 = *(int *)(iVar8 + 4 + uVar15 * 8);
      iVar7 = *(int *)(iVar9 + 4 + uVar17 * 8);
      if ((iVar10 < iVar7) ||
         (((iVar10 <= iVar7 && (*(uint *)(iVar8 + uVar15 * 8) < *(uint *)(iVar9 + uVar17 * 8))) ||
          (piVar18 = piVar18 + 1, piVar11 = piVar18, piVar12 = piVar18, local_c = piVar18,
          param_3 <= piVar18)))) break;
    }
  }
joined_r0x007259e3:
  do {
    if (param_3 <= piVar11) {
joined_r0x00725b07:
      for (; piVar19 = piVar11, param_2 < local_10; local_10 = local_10 + -1) {
        iVar3 = *(int *)(*(int *)(local_10[-1] + 0x28) + 8);
        iVar4 = *(int *)(*(int *)(*piVar16 + 0x28) + 8);
        iVar5 = *(int *)(DAT_012587e4 + 4);
        iVar2 = *(int *)(iVar5 + *(int *)(iVar13 + 0xb60) * 4);
        iVar6 = *(int *)(iVar5 + *(int *)(iVar13 + 0xb60) * 4);
        uVar14 = (uint)*(byte *)(iVar3 + 0x118c + iVar6);
        iVar6 = *(int *)(iVar6 + 0x11cc);
        uVar15 = (uint)*(byte *)(iVar4 + 0x118c + iVar2);
        iVar1 = *(int *)(iVar2 + 0x11cc);
        iVar7 = *(int *)(iVar1 + 4 + uVar15 * 8);
        iVar2 = *(int *)(iVar6 + 4 + uVar14 * 8);
        if ((iVar2 <= iVar7) &&
           ((iVar2 < iVar7 || (*(uint *)(iVar6 + uVar14 * 8) <= *(uint *)(iVar1 + uVar15 * 8))))) {
          iVar2 = *(int *)(iVar5 + *(int *)(iVar13 + 0xb60) * 4);
          uVar15 = (uint)*(byte *)(iVar3 + 0x118c + iVar2);
          iVar3 = *(int *)(iVar2 + 0x11cc);
          iVar2 = *(int *)(iVar5 + *(int *)(iVar13 + 0xb60) * 4);
          uVar14 = (uint)*(byte *)(iVar2 + 0x118c + iVar4);
          iVar4 = *(int *)(iVar2 + 0x11cc);
          iVar5 = *(int *)(iVar3 + 4 + uVar15 * 8);
          iVar2 = *(int *)(iVar4 + 4 + uVar14 * 8);
          piVar18 = local_c;
          piVar19 = piVar12;
          local_8 = piVar16;
          if ((iVar5 < iVar2) ||
             ((iVar5 <= iVar2 && (*(uint *)(iVar3 + uVar15 * 8) < *(uint *)(iVar4 + uVar14 * 8)))))
          break;
          iVar2 = piVar16[-1];
          piVar16 = piVar16 + -1;
          *piVar16 = local_10[-1];
          local_10[-1] = iVar2;
        }
        piVar18 = local_c;
        piVar11 = piVar12;
        local_8 = piVar16;
      }
      if (local_10 == param_2) {
        if (piVar19 == param_3) {
          param_1[1] = (uint)piVar18;
          *param_1 = (uint)piVar16;
          return;
        }
        if (piVar18 != piVar19) {
          iVar2 = *piVar16;
          *piVar16 = *piVar18;
          *piVar18 = iVar2;
        }
        iVar2 = *piVar16;
        *piVar16 = *piVar19;
        piVar18 = piVar18 + 1;
        piVar16 = piVar16 + 1;
        *piVar19 = iVar2;
        piVar11 = piVar19 + 1;
        piVar12 = piVar19 + 1;
        local_c = piVar18;
        local_8 = piVar16;
      }
      else {
        local_10 = local_10 + -1;
        if (piVar19 == param_3) {
          piVar16 = piVar16 + -1;
          if (local_10 != piVar16) {
            iVar2 = *local_10;
            *local_10 = *piVar16;
            *piVar16 = iVar2;
          }
          iVar2 = *piVar16;
          piVar18 = piVar18 + -1;
          *piVar16 = *piVar18;
          *piVar18 = iVar2;
          piVar11 = piVar19;
          local_c = piVar18;
          local_8 = piVar16;
        }
        else {
          iVar2 = *piVar19;
          *piVar19 = *local_10;
          *local_10 = iVar2;
          piVar11 = piVar19 + 1;
          piVar12 = piVar19 + 1;
        }
      }
      goto joined_r0x007259e3;
    }
    iVar3 = *(int *)(*(int *)(*piVar16 + 0x28) + 8);
    iVar4 = *(int *)(*(int *)(*piVar11 + 0x28) + 8);
    iVar5 = *(int *)(DAT_012587e4 + 4);
    iVar2 = *(int *)(iVar5 + *(int *)(iVar13 + 0xb60) * 4);
    iVar6 = *(int *)(iVar5 + *(int *)(iVar13 + 0xb60) * 4);
    uVar14 = (uint)*(byte *)(iVar3 + 0x118c + iVar6);
    iVar6 = *(int *)(iVar6 + 0x11cc);
    uVar15 = (uint)*(byte *)(iVar4 + 0x118c + iVar2);
    iVar1 = *(int *)(iVar2 + 0x11cc);
    iVar7 = *(int *)(iVar1 + 4 + uVar15 * 8);
    iVar2 = *(int *)(iVar6 + 4 + uVar14 * 8);
    piVar16 = local_8;
    if ((iVar2 <= iVar7) &&
       ((iVar2 < iVar7 || (*(uint *)(iVar6 + uVar14 * 8) <= *(uint *)(iVar1 + uVar15 * 8))))) {
      iVar2 = *(int *)(iVar5 + *(int *)(iVar13 + 0xb60) * 4);
      iVar5 = *(int *)(iVar5 + *(int *)(iVar13 + 0xb60) * 4);
      uVar14 = (uint)*(byte *)(iVar3 + 0x118c + iVar2);
      uVar15 = (uint)*(byte *)(iVar4 + 0x118c + iVar5);
      iVar3 = *(int *)(iVar2 + 0x11cc);
      iVar4 = *(int *)(iVar5 + 0x11cc);
      iVar5 = *(int *)(iVar3 + 4 + uVar14 * 8);
      iVar2 = *(int *)(iVar4 + 4 + uVar15 * 8);
      piVar18 = local_c;
      piVar11 = piVar12;
      if ((iVar5 < iVar2) ||
         ((iVar5 <= iVar2 && (*(uint *)(iVar3 + uVar14 * 8) < *(uint *)(iVar4 + uVar15 * 8)))))
      goto joined_r0x00725b07;
      iVar2 = *local_c;
      *local_c = *piVar12;
      *piVar12 = iVar2;
      local_c = local_c + 1;
    }
    piVar18 = local_c;
    piVar11 = piVar12 + 1;
    piVar12 = piVar12 + 1;
  } while( true );
}

