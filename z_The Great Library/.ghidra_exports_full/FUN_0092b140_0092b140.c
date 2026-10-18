// FUN_0092b140 @ 0092b140 body=[[0092b140, 0092bbfa]]


uint * FUN_0092b140(uint *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  int *piVar31;
  uint uVar32;
  uint uVar33;
  uint local_c;
  
  local_c = (((int)(param_3 - param_2) >> 6) - ((int)(param_3 - param_2) >> 0x1f) >> 1) * 0x40 +
            param_2;
  FUN_0092bc00(local_c,param_3 - 0x40,param_4);
  uVar32 = local_c + 0x40;
  if (param_2 < local_c) {
    while (((iVar2 = *(int *)(local_c - 0x34), iVar2 == 0 || (*(int *)(local_c + 0xc) == 0)) ||
           (*(int *)(*(int *)(local_c + 0xc) + 0x10) <= *(int *)(iVar2 + 0x10)))) {
      if ((((*(int *)(local_c + 0xc) != 0) && (iVar2 != 0)) &&
          (*(int *)(*(int *)(local_c + 0xc) + 0x10) < *(int *)(iVar2 + 0x10))) ||
         (local_c = local_c - 0x40, local_c <= param_2)) break;
    }
  }
  uVar33 = uVar32;
  uVar30 = local_c;
  uVar29 = local_c;
  if (uVar32 < param_3) {
    while (((iVar2 = *(int *)(uVar32 + 0xc), uVar33 = uVar32, iVar2 == 0 ||
            (*(int *)(local_c + 0xc) == 0)) ||
           (*(int *)(*(int *)(local_c + 0xc) + 0x10) <= *(int *)(iVar2 + 0x10)))) {
      if ((((*(int *)(local_c + 0xc) != 0) && (iVar2 != 0)) &&
          (*(int *)(*(int *)(local_c + 0xc) + 0x10) < *(int *)(iVar2 + 0x10))) ||
         (uVar32 = uVar32 + 0x40, uVar33 = uVar32, param_3 <= uVar32)) break;
    }
  }
joined_r0x0092b1f3:
  do {
    if (param_3 <= uVar32) {
LAB_0092b39e:
      if (param_2 < uVar30) {
        piVar31 = (int *)(uVar30 - 0x34);
        uVar28 = uVar29;
        do {
          uVar29 = uVar28;
          if (((*piVar31 == 0) || (*(int *)(uVar28 + 0xc) == 0)) ||
             (uVar30 = local_c, *(int *)(*(int *)(uVar28 + 0xc) + 0x10) <= *(int *)(*piVar31 + 0x10)
             )) {
            if (((*(int *)(uVar28 + 0xc) != 0) && (*piVar31 != 0)) &&
               (uVar30 = local_c,
               *(int *)(*(int *)(uVar28 + 0xc) + 0x10) < *(int *)(*piVar31 + 0x10))) break;
            iVar2 = *(int *)(uVar28 - 0x38);
            iVar16 = *(int *)(uVar28 - 0x34);
            iVar17 = *(int *)(uVar28 - 0x30);
            uVar29 = uVar28 - 0x40;
            iVar18 = *(int *)(uVar28 - 0x2c);
            iVar19 = *(int *)(uVar28 - 0x28);
            iVar20 = *(int *)(uVar28 - 0x24);
            iVar21 = *(int *)(uVar28 - 0x20);
            iVar22 = *(int *)(uVar28 - 0x1c);
            iVar23 = *(int *)(uVar28 - 0x18);
            iVar24 = *(int *)(uVar28 - 0x14);
            iVar25 = *(int *)(uVar28 - 0x10);
            iVar26 = *(int *)(uVar28 - 0xc);
            uVar1 = *(undefined1 *)(uVar28 - 8);
            iVar27 = *(int *)(uVar28 - 4);
            *(int *)(uVar28 - 0x3c) = piVar31[-2];
            *(int *)(uVar28 - 0x38) = piVar31[-1];
            *(int *)(uVar28 - 0x34) = *piVar31;
            *(int *)(uVar28 - 0x30) = piVar31[1];
            *(int *)(uVar28 - 0x2c) = piVar31[2];
            *(int *)(uVar28 - 0x28) = piVar31[3];
            *(int *)(uVar28 - 0x24) = piVar31[4];
            *(int *)(uVar28 - 0x20) = piVar31[5];
            *(int *)(uVar28 - 0x1c) = piVar31[6];
            *(int *)(uVar28 - 0x18) = piVar31[7];
            *(int *)(uVar28 - 0x14) = piVar31[8];
            *(int *)(uVar28 - 0x10) = piVar31[9];
            *(int *)(uVar28 - 0xc) = piVar31[10];
            *(char *)(uVar28 - 8) = (char)piVar31[0xb];
            *(int *)(uVar28 - 4) = piVar31[0xc];
            piVar31[-1] = iVar2;
            *piVar31 = iVar16;
            piVar31[1] = iVar17;
            piVar31[2] = iVar18;
            piVar31[3] = iVar19;
            piVar31[4] = iVar20;
            piVar31[5] = iVar21;
            piVar31[6] = iVar22;
            piVar31[7] = iVar23;
            piVar31[8] = iVar24;
            piVar31[-2] = 0x18d;
            piVar31[9] = iVar25;
            piVar31[10] = iVar26;
            *(undefined1 *)(piVar31 + 0xb) = uVar1;
            piVar31[0xc] = iVar27;
          }
          uVar30 = uVar30 - 0x40;
          piVar31 = piVar31 + -0x10;
          uVar28 = uVar29;
          local_c = uVar30;
        } while (param_2 < uVar30);
      }
      if (uVar30 == param_2) {
        if (uVar32 == param_3) {
          param_1[1] = uVar33;
          *param_1 = uVar29;
          return param_1;
        }
        if (uVar33 != uVar32) {
          uVar3 = *(undefined4 *)(uVar29 + 0xc);
          uVar4 = *(undefined4 *)(uVar29 + 0x10);
          uVar5 = *(undefined4 *)(uVar29 + 0x14);
          uVar6 = *(undefined4 *)(uVar29 + 0x18);
          uVar7 = *(undefined4 *)(uVar29 + 0x1c);
          uVar8 = *(undefined4 *)(uVar29 + 0x20);
          uVar9 = *(undefined4 *)(uVar29 + 0x24);
          uVar10 = *(undefined4 *)(uVar29 + 8);
          uVar11 = *(undefined4 *)(uVar29 + 0x28);
          uVar12 = *(undefined4 *)(uVar29 + 0x2c);
          uVar13 = *(undefined4 *)(uVar29 + 0x30);
          uVar14 = *(undefined4 *)(uVar29 + 0x34);
          uVar1 = *(undefined1 *)(uVar29 + 0x38);
          uVar15 = *(undefined4 *)(uVar29 + 0x3c);
          *(undefined4 *)(uVar29 + 4) = *(undefined4 *)(uVar33 + 4);
          *(undefined4 *)(uVar29 + 8) = *(undefined4 *)(uVar33 + 8);
          *(undefined4 *)(uVar29 + 0xc) = *(undefined4 *)(uVar33 + 0xc);
          *(undefined4 *)(uVar29 + 0x10) = *(undefined4 *)(uVar33 + 0x10);
          *(undefined4 *)(uVar29 + 0x14) = *(undefined4 *)(uVar33 + 0x14);
          *(undefined4 *)(uVar29 + 0x18) = *(undefined4 *)(uVar33 + 0x18);
          *(undefined4 *)(uVar29 + 0x1c) = *(undefined4 *)(uVar33 + 0x1c);
          *(undefined4 *)(uVar29 + 0x20) = *(undefined4 *)(uVar33 + 0x20);
          *(undefined4 *)(uVar29 + 0x24) = *(undefined4 *)(uVar33 + 0x24);
          *(undefined4 *)(uVar29 + 0x28) = *(undefined4 *)(uVar33 + 0x28);
          *(undefined4 *)(uVar29 + 0x2c) = *(undefined4 *)(uVar33 + 0x2c);
          *(undefined4 *)(uVar29 + 0x30) = *(undefined4 *)(uVar33 + 0x30);
          *(undefined4 *)(uVar29 + 0x34) = *(undefined4 *)(uVar33 + 0x34);
          *(undefined1 *)(uVar29 + 0x38) = *(undefined1 *)(uVar33 + 0x38);
          *(undefined4 *)(uVar29 + 0x3c) = *(undefined4 *)(uVar33 + 0x3c);
          *(undefined4 *)(uVar33 + 8) = uVar10;
          *(undefined4 *)(uVar33 + 0xc) = uVar3;
          *(undefined4 *)(uVar33 + 0x10) = uVar4;
          *(undefined4 *)(uVar33 + 0x14) = uVar5;
          *(undefined4 *)(uVar33 + 0x18) = uVar6;
          *(undefined4 *)(uVar33 + 0x1c) = uVar7;
          *(undefined4 *)(uVar33 + 0x20) = uVar8;
          *(undefined4 *)(uVar33 + 0x24) = uVar9;
          *(undefined4 *)(uVar33 + 0x28) = uVar11;
          *(undefined4 *)(uVar33 + 0x2c) = uVar12;
          *(undefined4 *)(uVar33 + 0x30) = uVar13;
          *(undefined4 *)(uVar33 + 4) = 0x18d;
          *(undefined4 *)(uVar33 + 0x34) = uVar14;
          *(undefined1 *)(uVar33 + 0x38) = uVar1;
          *(undefined4 *)(uVar33 + 0x3c) = uVar15;
        }
        uVar3 = *(undefined4 *)(uVar29 + 8);
        uVar4 = *(undefined4 *)(uVar29 + 0xc);
        uVar5 = *(undefined4 *)(uVar29 + 0x10);
        uVar6 = *(undefined4 *)(uVar29 + 0x14);
        uVar7 = *(undefined4 *)(uVar29 + 0x18);
        uVar8 = *(undefined4 *)(uVar29 + 0x1c);
        uVar9 = *(undefined4 *)(uVar29 + 0x20);
        uVar10 = *(undefined4 *)(uVar29 + 0x24);
        uVar11 = *(undefined4 *)(uVar29 + 0x28);
        uVar12 = *(undefined4 *)(uVar29 + 0x2c);
        uVar13 = *(undefined4 *)(uVar29 + 0x30);
        uVar14 = *(undefined4 *)(uVar29 + 0x34);
        uVar1 = *(undefined1 *)(uVar29 + 0x38);
        uVar15 = *(undefined4 *)(uVar29 + 0x3c);
        *(undefined4 *)(uVar29 + 4) = *(undefined4 *)(uVar32 + 4);
        *(undefined4 *)(uVar29 + 8) = *(undefined4 *)(uVar32 + 8);
        *(undefined4 *)(uVar29 + 0xc) = *(undefined4 *)(uVar32 + 0xc);
        *(undefined4 *)(uVar29 + 0x10) = *(undefined4 *)(uVar32 + 0x10);
        *(undefined4 *)(uVar29 + 0x14) = *(undefined4 *)(uVar32 + 0x14);
        *(undefined4 *)(uVar29 + 0x18) = *(undefined4 *)(uVar32 + 0x18);
        *(undefined4 *)(uVar29 + 0x1c) = *(undefined4 *)(uVar32 + 0x1c);
        *(undefined4 *)(uVar29 + 0x20) = *(undefined4 *)(uVar32 + 0x20);
        *(undefined4 *)(uVar29 + 0x24) = *(undefined4 *)(uVar32 + 0x24);
        *(undefined4 *)(uVar29 + 0x28) = *(undefined4 *)(uVar32 + 0x28);
        *(undefined4 *)(uVar29 + 0x2c) = *(undefined4 *)(uVar32 + 0x2c);
        *(undefined4 *)(uVar29 + 0x30) = *(undefined4 *)(uVar32 + 0x30);
        *(undefined4 *)(uVar29 + 0x34) = *(undefined4 *)(uVar32 + 0x34);
        *(undefined1 *)(uVar29 + 0x38) = *(undefined1 *)(uVar32 + 0x38);
        *(undefined4 *)(uVar29 + 0x3c) = *(undefined4 *)(uVar32 + 0x3c);
        *(undefined4 *)(uVar32 + 4) = 0x18d;
        *(undefined4 *)(uVar32 + 8) = uVar3;
        *(undefined4 *)(uVar32 + 0xc) = uVar4;
        *(undefined4 *)(uVar32 + 0x10) = uVar5;
        *(undefined4 *)(uVar32 + 0x14) = uVar6;
        *(undefined4 *)(uVar32 + 0x18) = uVar7;
        *(undefined4 *)(uVar32 + 0x1c) = uVar8;
        *(undefined4 *)(uVar32 + 0x20) = uVar9;
        *(undefined4 *)(uVar32 + 0x24) = uVar10;
        *(undefined4 *)(uVar32 + 0x28) = uVar11;
        *(undefined4 *)(uVar32 + 0x2c) = uVar12;
        *(undefined4 *)(uVar32 + 0x30) = uVar13;
        *(undefined4 *)(uVar32 + 0x34) = uVar14;
        *(undefined1 *)(uVar32 + 0x38) = uVar1;
        *(undefined4 *)(uVar32 + 0x3c) = uVar15;
        uVar32 = uVar32 + 0x40;
        uVar33 = uVar33 + 0x40;
        uVar29 = uVar29 + 0x40;
      }
      else {
        local_c = uVar30 - 0x40;
        if (uVar32 == param_3) {
          if (local_c != uVar29 - 0x40) {
            uVar3 = *(undefined4 *)(uVar30 - 0x34);
            uVar4 = *(undefined4 *)(uVar30 - 0x30);
            uVar5 = *(undefined4 *)(uVar30 - 0x2c);
            uVar6 = *(undefined4 *)(uVar30 - 0x28);
            uVar7 = *(undefined4 *)(uVar30 - 0x24);
            uVar8 = *(undefined4 *)(uVar30 - 0x20);
            uVar9 = *(undefined4 *)(uVar30 - 0x1c);
            uVar10 = *(undefined4 *)(uVar30 - 0x38);
            uVar11 = *(undefined4 *)(uVar30 - 0x18);
            uVar12 = *(undefined4 *)(uVar30 - 0x14);
            uVar13 = *(undefined4 *)(uVar30 - 0x10);
            uVar14 = *(undefined4 *)(uVar30 - 0xc);
            uVar1 = *(undefined1 *)(uVar30 - 8);
            uVar15 = *(undefined4 *)(uVar30 - 4);
            *(undefined4 *)(uVar30 - 0x3c) = *(undefined4 *)(uVar29 - 0x3c);
            *(undefined4 *)(uVar30 - 0x38) = *(undefined4 *)(uVar29 - 0x38);
            *(undefined4 *)(uVar30 - 0x34) = *(undefined4 *)(uVar29 - 0x34);
            *(undefined4 *)(uVar30 - 0x30) = *(undefined4 *)(uVar29 - 0x30);
            *(undefined4 *)(uVar30 - 0x2c) = *(undefined4 *)(uVar29 - 0x2c);
            *(undefined4 *)(uVar30 - 0x28) = *(undefined4 *)(uVar29 - 0x28);
            *(undefined4 *)(uVar30 - 0x24) = *(undefined4 *)(uVar29 - 0x24);
            *(undefined4 *)(uVar30 - 0x20) = *(undefined4 *)(uVar29 - 0x20);
            *(undefined4 *)(uVar30 - 0x1c) = *(undefined4 *)(uVar29 - 0x1c);
            *(undefined4 *)(uVar30 - 0x18) = *(undefined4 *)(uVar29 - 0x18);
            *(undefined4 *)(uVar30 - 0x14) = *(undefined4 *)(uVar29 - 0x14);
            *(undefined4 *)(uVar30 - 0x10) = *(undefined4 *)(uVar29 - 0x10);
            *(undefined4 *)(uVar30 - 0xc) = *(undefined4 *)(uVar29 - 0xc);
            *(undefined1 *)(uVar30 - 8) = *(undefined1 *)(uVar29 - 8);
            *(undefined4 *)(uVar30 - 4) = *(undefined4 *)(uVar29 - 4);
            *(undefined4 *)(uVar29 - 0x38) = uVar10;
            *(undefined4 *)(uVar29 - 0x34) = uVar3;
            *(undefined4 *)(uVar29 - 0x30) = uVar4;
            *(undefined4 *)(uVar29 - 0x2c) = uVar5;
            *(undefined4 *)(uVar29 - 0x28) = uVar6;
            *(undefined4 *)(uVar29 - 0x24) = uVar7;
            *(undefined4 *)(uVar29 - 0x20) = uVar8;
            *(undefined4 *)(uVar29 - 0x1c) = uVar9;
            *(undefined4 *)(uVar29 - 0x18) = uVar11;
            *(undefined4 *)(uVar29 - 0x14) = uVar12;
            *(undefined4 *)(uVar29 - 0x10) = uVar13;
            *(undefined4 *)(uVar29 - 0x3c) = 0x18d;
            *(undefined4 *)(uVar29 - 0xc) = uVar14;
            *(undefined1 *)(uVar29 - 8) = uVar1;
            *(undefined4 *)(uVar29 - 4) = uVar15;
          }
          uVar3 = *(undefined4 *)(uVar29 - 0x34);
          uVar4 = *(undefined4 *)(uVar29 - 0x30);
          uVar5 = *(undefined4 *)(uVar29 - 0x2c);
          uVar6 = *(undefined4 *)(uVar29 - 0x28);
          uVar7 = *(undefined4 *)(uVar29 - 0x24);
          uVar8 = *(undefined4 *)(uVar29 - 0x20);
          uVar9 = *(undefined4 *)(uVar29 - 0x1c);
          uVar10 = *(undefined4 *)(uVar29 - 0x18);
          uVar11 = *(undefined4 *)(uVar29 - 0x38);
          uVar12 = *(undefined4 *)(uVar29 - 0x14);
          uVar13 = *(undefined4 *)(uVar29 - 0x10);
          uVar14 = *(undefined4 *)(uVar29 - 0xc);
          uVar1 = *(undefined1 *)(uVar29 - 8);
          uVar15 = *(undefined4 *)(uVar29 - 4);
          *(undefined4 *)(uVar29 - 0x3c) = *(undefined4 *)(uVar33 - 0x3c);
          *(undefined4 *)(uVar29 - 0x38) = *(undefined4 *)(uVar33 - 0x38);
          *(undefined4 *)(uVar29 - 0x34) = *(undefined4 *)(uVar33 - 0x34);
          *(undefined4 *)(uVar29 - 0x30) = *(undefined4 *)(uVar33 - 0x30);
          *(undefined4 *)(uVar29 - 0x2c) = *(undefined4 *)(uVar33 - 0x2c);
          *(undefined4 *)(uVar29 - 0x28) = *(undefined4 *)(uVar33 - 0x28);
          *(undefined4 *)(uVar29 - 0x24) = *(undefined4 *)(uVar33 - 0x24);
          *(undefined4 *)(uVar29 - 0x20) = *(undefined4 *)(uVar33 - 0x20);
          *(undefined4 *)(uVar29 - 0x1c) = *(undefined4 *)(uVar33 - 0x1c);
          *(undefined4 *)(uVar29 - 0x18) = *(undefined4 *)(uVar33 - 0x18);
          *(undefined4 *)(uVar29 - 0x14) = *(undefined4 *)(uVar33 - 0x14);
          *(undefined4 *)(uVar29 - 0x10) = *(undefined4 *)(uVar33 - 0x10);
          *(undefined4 *)(uVar29 - 0xc) = *(undefined4 *)(uVar33 - 0xc);
          *(undefined1 *)(uVar29 - 8) = *(undefined1 *)(uVar33 - 8);
          *(undefined4 *)(uVar29 - 4) = *(undefined4 *)(uVar33 - 4);
          *(undefined4 *)(uVar33 - 0x38) = uVar11;
          *(undefined4 *)(uVar33 - 0x34) = uVar3;
          *(undefined4 *)(uVar33 - 0x30) = uVar4;
          *(undefined4 *)(uVar33 - 0x2c) = uVar5;
          *(undefined4 *)(uVar33 - 0x28) = uVar6;
          *(undefined4 *)(uVar33 - 0x24) = uVar7;
          *(undefined4 *)(uVar33 - 0x20) = uVar8;
          *(undefined4 *)(uVar33 - 0x1c) = uVar9;
          *(undefined4 *)(uVar33 - 0x18) = uVar10;
          *(undefined4 *)(uVar33 - 0x14) = uVar12;
          *(undefined4 *)(uVar33 - 0x10) = uVar13;
          *(undefined4 *)(uVar33 - 0x3c) = 0x18d;
          *(undefined4 *)(uVar33 - 0xc) = uVar14;
          *(undefined1 *)(uVar33 - 8) = uVar1;
          *(undefined4 *)(uVar33 - 4) = uVar15;
          uVar33 = uVar33 - 0x40;
          uVar30 = local_c;
          uVar29 = uVar29 - 0x40;
        }
        else {
          uVar3 = *(undefined4 *)(uVar32 + 0xc);
          uVar4 = *(undefined4 *)(uVar32 + 0x10);
          uVar5 = *(undefined4 *)(uVar32 + 0x14);
          uVar6 = *(undefined4 *)(uVar32 + 0x18);
          uVar7 = *(undefined4 *)(uVar32 + 0x1c);
          uVar8 = *(undefined4 *)(uVar32 + 0x20);
          uVar9 = *(undefined4 *)(uVar32 + 0x24);
          uVar10 = *(undefined4 *)(uVar32 + 8);
          uVar11 = *(undefined4 *)(uVar32 + 0x28);
          uVar12 = *(undefined4 *)(uVar32 + 0x2c);
          uVar13 = *(undefined4 *)(uVar32 + 0x30);
          uVar14 = *(undefined4 *)(uVar32 + 0x34);
          uVar1 = *(undefined1 *)(uVar32 + 0x38);
          uVar15 = *(undefined4 *)(uVar32 + 0x3c);
          *(undefined4 *)(uVar32 + 4) = *(undefined4 *)(uVar30 - 0x3c);
          *(undefined4 *)(uVar32 + 8) = *(undefined4 *)(uVar30 - 0x38);
          *(undefined4 *)(uVar32 + 0xc) = *(undefined4 *)(uVar30 - 0x34);
          *(undefined4 *)(uVar32 + 0x10) = *(undefined4 *)(uVar30 - 0x30);
          *(undefined4 *)(uVar32 + 0x14) = *(undefined4 *)(uVar30 - 0x2c);
          *(undefined4 *)(uVar32 + 0x18) = *(undefined4 *)(uVar30 - 0x28);
          *(undefined4 *)(uVar32 + 0x1c) = *(undefined4 *)(uVar30 - 0x24);
          *(undefined4 *)(uVar32 + 0x20) = *(undefined4 *)(uVar30 - 0x20);
          *(undefined4 *)(uVar32 + 0x24) = *(undefined4 *)(uVar30 - 0x1c);
          *(undefined4 *)(uVar32 + 0x28) = *(undefined4 *)(uVar30 - 0x18);
          *(undefined4 *)(uVar32 + 0x2c) = *(undefined4 *)(uVar30 - 0x14);
          *(undefined4 *)(uVar32 + 0x30) = *(undefined4 *)(uVar30 - 0x10);
          *(undefined4 *)(uVar32 + 0x34) = *(undefined4 *)(uVar30 - 0xc);
          *(undefined1 *)(uVar32 + 0x38) = *(undefined1 *)(uVar30 - 8);
          *(undefined4 *)(uVar32 + 0x3c) = *(undefined4 *)(uVar30 - 4);
          *(undefined4 *)(uVar30 - 0x38) = uVar10;
          *(undefined4 *)(uVar30 - 0x34) = uVar3;
          *(undefined4 *)(uVar30 - 0x30) = uVar4;
          *(undefined4 *)(uVar30 - 0x2c) = uVar5;
          *(undefined4 *)(uVar30 - 0x28) = uVar6;
          *(undefined4 *)(uVar30 - 0x24) = uVar7;
          *(undefined4 *)(uVar30 - 0x20) = uVar8;
          *(undefined4 *)(uVar30 - 0x1c) = uVar9;
          *(undefined4 *)(uVar30 - 0x18) = uVar11;
          *(undefined4 *)(uVar30 - 0x14) = uVar12;
          *(undefined4 *)(uVar30 - 0x10) = uVar13;
          *(undefined4 *)(uVar30 - 0x3c) = 0x18d;
          *(undefined4 *)(uVar30 - 0xc) = uVar14;
          *(undefined1 *)(uVar30 - 8) = uVar1;
          *(undefined4 *)(uVar30 - 4) = uVar15;
          uVar32 = uVar32 + 0x40;
          uVar30 = local_c;
        }
      }
      goto joined_r0x0092b1f3;
    }
    if (((*(int *)(uVar29 + 0xc) == 0) || (*(int *)(uVar32 + 0xc) == 0)) ||
       (*(int *)(*(int *)(uVar32 + 0xc) + 0x10) <= *(int *)(*(int *)(uVar29 + 0xc) + 0x10))) {
      if (((*(int *)(uVar32 + 0xc) != 0) && (*(int *)(uVar29 + 0xc) != 0)) &&
         (*(int *)(*(int *)(uVar32 + 0xc) + 0x10) < *(int *)(*(int *)(uVar29 + 0xc) + 0x10)))
      goto LAB_0092b39e;
      uVar3 = *(undefined4 *)(uVar33 + 8);
      uVar4 = *(undefined4 *)(uVar33 + 0xc);
      uVar5 = *(undefined4 *)(uVar33 + 0x10);
      uVar6 = *(undefined4 *)(uVar33 + 0x14);
      uVar7 = *(undefined4 *)(uVar33 + 0x18);
      uVar8 = *(undefined4 *)(uVar33 + 0x1c);
      uVar9 = *(undefined4 *)(uVar33 + 0x20);
      uVar10 = *(undefined4 *)(uVar33 + 0x24);
      uVar11 = *(undefined4 *)(uVar33 + 0x28);
      uVar12 = *(undefined4 *)(uVar33 + 0x2c);
      uVar13 = *(undefined4 *)(uVar33 + 0x30);
      uVar14 = *(undefined4 *)(uVar33 + 0x34);
      uVar1 = *(undefined1 *)(uVar33 + 0x38);
      uVar15 = *(undefined4 *)(uVar33 + 0x3c);
      *(undefined4 *)(uVar33 + 4) = *(undefined4 *)(uVar32 + 4);
      *(undefined4 *)(uVar33 + 8) = *(undefined4 *)(uVar32 + 8);
      *(undefined4 *)(uVar33 + 0xc) = *(undefined4 *)(uVar32 + 0xc);
      *(undefined4 *)(uVar33 + 0x10) = *(undefined4 *)(uVar32 + 0x10);
      *(undefined4 *)(uVar33 + 0x14) = *(undefined4 *)(uVar32 + 0x14);
      *(undefined4 *)(uVar33 + 0x18) = *(undefined4 *)(uVar32 + 0x18);
      *(undefined4 *)(uVar33 + 0x1c) = *(undefined4 *)(uVar32 + 0x1c);
      *(undefined4 *)(uVar33 + 0x20) = *(undefined4 *)(uVar32 + 0x20);
      *(undefined4 *)(uVar33 + 0x24) = *(undefined4 *)(uVar32 + 0x24);
      *(undefined4 *)(uVar33 + 0x28) = *(undefined4 *)(uVar32 + 0x28);
      *(undefined4 *)(uVar33 + 0x2c) = *(undefined4 *)(uVar32 + 0x2c);
      *(undefined4 *)(uVar33 + 0x30) = *(undefined4 *)(uVar32 + 0x30);
      *(undefined4 *)(uVar33 + 0x34) = *(undefined4 *)(uVar32 + 0x34);
      *(undefined1 *)(uVar33 + 0x38) = *(undefined1 *)(uVar32 + 0x38);
      *(undefined4 *)(uVar33 + 0x3c) = *(undefined4 *)(uVar32 + 0x3c);
      *(undefined4 *)(uVar32 + 8) = uVar3;
      *(undefined4 *)(uVar32 + 0xc) = uVar4;
      *(undefined4 *)(uVar32 + 0x10) = uVar5;
      *(undefined4 *)(uVar32 + 0x14) = uVar6;
      *(undefined4 *)(uVar32 + 0x18) = uVar7;
      *(undefined4 *)(uVar32 + 0x1c) = uVar8;
      *(undefined4 *)(uVar32 + 0x20) = uVar9;
      *(undefined4 *)(uVar32 + 0x24) = uVar10;
      *(undefined4 *)(uVar32 + 0x28) = uVar11;
      uVar33 = uVar33 + 0x40;
      *(undefined4 *)(uVar32 + 4) = 0x18d;
      *(undefined4 *)(uVar32 + 0x2c) = uVar12;
      *(undefined4 *)(uVar32 + 0x30) = uVar13;
      *(undefined4 *)(uVar32 + 0x34) = uVar14;
      *(undefined1 *)(uVar32 + 0x38) = uVar1;
      *(undefined4 *)(uVar32 + 0x3c) = uVar15;
    }
    uVar32 = uVar32 + 0x40;
  } while( true );
}

