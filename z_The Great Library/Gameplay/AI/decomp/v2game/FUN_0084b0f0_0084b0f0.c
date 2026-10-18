// FUN_0084b0f0 @ 0084b0f0  (requested 0084B0F0, first bytes: 55 8B EC 83 E4 F8 83 EC)


/* WARNING: Removing unreachable block (ram,0x0084b244) */

void FUN_0084b0f0(void)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  int *in_ECX;
  int *piVar15;
  int iStack_28;
  int local_24;
  
  FUN_00851ad0(in_ECX);
  if ((char)in_ECX[0xf] != '\0') {
    puVar2 = (uint *)in_ECX[0x89];
    while (puVar2 != (uint *)0x0) {
      uVar3 = *puVar2;
      puVar2 = (uint *)puVar2[3];
      iVar13 = DAT_01258a98;
      if (0x1268 < uVar3) {
        iVar13 = DAT_01258a94;
      }
      if (((iVar13 != 0) && (iVar13 = FUN_009c1d40(), iVar13 != 0)) &&
         (iVar13 = iVar13 + -8, iVar13 != 0)) {
        for (piVar15 = (int *)in_ECX[0x77]; piVar15 != (int *)0x0; piVar15 = (int *)piVar15[2]) {
          if (*piVar15 == iVar13) goto LAB_0084b198;
        }
        (**(code **)(*in_ECX + 0x1a8))(iVar13);
      }
LAB_0084b198:
      FUN_004e9470(in_ECX[0x89]);
      if (local_24 != 0) {
        if ((char)in_ECX[0x8c] == '\0') {
          iVar13 = *(int *)(local_24 + 8);
          iVar4 = *(int *)(local_24 + 0xc);
          if (iVar13 != 0) {
            *(int *)(iVar13 + 0xc) = iVar4;
          }
          if (iVar4 != 0) {
            *(int *)(iVar4 + 8) = iVar13;
          }
          if (local_24 == in_ECX[0x89]) {
            in_ECX[0x89] = iVar4;
          }
          if (local_24 == in_ECX[0x8a]) {
            in_ECX[0x8a] = iVar13;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_24);
        }
        *(undefined1 *)(local_24 + 0x10) = 1;
      }
    }
    iVar13 = *DAT_012587e4;
    piVar15 = DAT_012587e4 + 1;
    iVar4 = *(int *)(*piVar15 + in_ECX[0xe] * 4);
    if (in_ECX[0x1c] != in_ECX[0x1d]) {
      in_ECX[0x1d] = in_ECX[0x1c];
    }
    iStack_28 = 1;
    if (1 < iVar13) {
      do {
        iVar14 = *(int *)(*piVar15 + iStack_28 * 4);
        iVar5 = *(int *)(iVar14 + 0x20);
        uVar6 = *(undefined4 *)(iVar14 + 0x1c);
        if ((iVar5 == *(int *)(iVar4 + 0x20)) ||
           (((*(int *)(*(int *)(*(int *)(iVar4 + 0xbe8) + iVar5 * 4) + 0x34) == 0 &&
             ((((char)uVar6 != 'R' || ((char)((uint)uVar6 >> 8) != 'E')) ||
              ((char)((uint)uVar6 >> 0x10) != 'B')))) &&
            (((*(char *)(iVar4 + 0x1c) != 'R' || (*(char *)(iVar4 + 0x1d) != 'E')) ||
             (*(char *)(iVar4 + 0x1e) != 'B')))))) {
          piVar7 = *(int **)(iVar4 + 0x4a4);
          do {
            if (piVar7 == (int *)0x0) {
              cVar12 = FUN_00534a50();
              if (cVar12 == '\0') goto LAB_0084b313;
              break;
            }
            iVar14 = *piVar7;
            piVar7 = (int *)piVar7[2];
          } while (*(int *)(iVar14 + 0xc) != iVar5);
        }
        FUN_004d61d0();
LAB_0084b313:
        iVar14 = DAT_012587e4[1];
        if ((*(char *)(iVar5 + *(int *)(*(int *)(iVar14 + in_ECX[0xe] * 4) + 0xd08)) != '\0') &&
           (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                             *(int *)(*(int *)(iVar14 + in_ECX[0xe] * 4) + 0xbe4) * 4) + 0x16c) ==
            *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                             *(int *)(*(int *)(iVar14 + iVar5 * 4) + 0xbe4) * 4) + 0x16c))) {
          iVar8 = *(int *)(iVar14 + in_ECX[0xe] * 4);
          iVar9 = *(int *)(iVar8 + 0x1a4);
          iVar10 = *(int *)(iVar14 + iVar5 * 4);
          iVar1 = *(int *)(iVar10 + 0x1a4);
          if ((iVar9 <= iVar1) &&
             ((((iVar9 < iVar1 || (*(uint *)(iVar8 + 0x1a0) < *(uint *)(iVar10 + 0x1a0))) &&
               (*(int *)(*(int *)(*(int *)(*(int *)(iVar14 + in_ECX[0xe] * 4) + 0xbe8) + iVar5 * 4)
                        + 0x3c) < -50000)) &&
              (*(int *)(*(int *)(iVar14 + in_ECX[0xe] * 4) + 0xcfc) != iVar5)))) {
            iVar14 = in_ECX[0x1d] - in_ECX[0x1c] >> 3;
            if ((iVar14 == 0) || (*(int *)(in_ECX[0x1c] + -4 + iVar14 * 8) != iVar5)) {
              FUN_004d61d0();
            }
          }
        }
        iStack_28 = iStack_28 + 1;
      } while (iStack_28 < iVar13);
    }
    FUN_0084aca0(in_ECX);
    if ((in_ECX[0x31] != 0) && ((char)in_ECX[0x8d] == '\0')) {
      *(undefined1 *)(in_ECX + 0x8d) = 1;
    }
    if ((in_ECX[0x35] != 0) && (*(char *)((int)in_ECX + 0x235) == '\0')) {
      *(undefined1 *)((int)in_ECX + 0x235) = 1;
    }
    if ((in_ECX[0x39] != 0) && (*(char *)((int)in_ECX + 0x236) == '\0')) {
      *(undefined1 *)((int)in_ECX + 0x236) = 1;
    }
    if ((in_ECX[0x3d] != 0) && (*(char *)((int)in_ECX + 0x237) == '\0')) {
      *(undefined1 *)((int)in_ECX + 0x237) = 1;
    }
    if ((in_ECX[0x41] != 0) && ((char)in_ECX[0x8e] == '\0')) {
      *(undefined1 *)(in_ECX + 0x8e) = 1;
    }
    if ((in_ECX[0x45] != 0) && (*(char *)((int)in_ECX + 0x239) == '\0')) {
      *(undefined1 *)((int)in_ECX + 0x239) = 1;
    }
    if ((in_ECX[0x49] != 0) && (*(char *)((int)in_ECX + 0x23a) == '\0')) {
      *(undefined1 *)((int)in_ECX + 0x23a) = 1;
    }
    if ((in_ECX[0x4d] != 0) && (*(char *)((int)in_ECX + 0x23b) == '\0')) {
      *(undefined1 *)((int)in_ECX + 0x23b) = 1;
    }
    if (0 < in_ECX[0x79]) {
      iVar13 = in_ECX[0x77];
      do {
        if (iVar13 == 0) goto LAB_0084b526;
        iVar13 = *(int *)(iVar13 + 8);
        cVar12 = FUN_005cc3e0();
      } while (cVar12 != '\0');
    }
    FUN_008500a0(in_ECX);
    FUN_00851bd0(in_ECX);
    FUN_0084dfc0(in_ECX);
LAB_0084b526:
    iVar13 = FUN_00ab047b();
    if (iVar13 % 3 == 0) {
      FUN_0084d1d0(in_ECX);
    }
  }
  piVar15 = (int *)in_ECX[0x2b];
  in_ECX[0xc] = 1;
  while (piVar15 != (int *)0x0) {
    puVar11 = (undefined4 *)*piVar15;
    piVar15 = (int *)piVar15[2];
    if (puVar11 != (undefined4 *)0x0) {
      (**(code **)*puVar11)(1);
    }
  }
  if (in_ECX[0x2b] == 0) {
    in_ECX[0x2b] = 0;
    in_ECX[0x2c] = 0;
    in_ECX[0x2d] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_ECX[0x2b]);
}

