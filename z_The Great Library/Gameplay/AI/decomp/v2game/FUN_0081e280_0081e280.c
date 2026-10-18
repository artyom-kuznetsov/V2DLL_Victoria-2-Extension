// FUN_0081e280 @ 0081e280  (requested 0081E280, first bytes: 55 8B EC 6A FF 68 23 AF)


/* WARNING: Removing unreachable block (ram,0x0081e591) */

void FUN_0081e280(int *param_1)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char cVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  bool bVar16;
  undefined8 uVar17;
  int *local_2c;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4af23;
  local_10 = ExceptionList;
  iVar9 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0xd] * 4);
  if ((*(char *)(iVar9 + 0x67c) == '\0') && (*(char *)(iVar9 + 0x12d0) != '\0')) {
    iVar15 = 0;
    for (piVar14 = *(int **)(iVar9 + 0x9d8);
        (*(int **)(iVar9 + 0x9d8) <= piVar14 && (piVar14 < *(int **)(iVar9 + 0x9dc)));
        piVar14 = piVar14 + 1) {
      iVar15 = iVar15 + *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar14 * 4) + 0x50);
    }
    iVar13 = 0;
    piVar14 = *(int **)(iVar9 + 0x7b4);
    ExceptionList = &local_10;
    while (piVar14 != (int *)0x0) {
      param_1 = (int *)piVar14[2];
      piVar2 = (int *)*piVar14;
      cVar7 = (**(code **)(*piVar2 + 0x38))();
      piVar14 = param_1;
      if (cVar7 != '\0') {
        piVar2 = (int *)piVar2[0xe];
        while (piVar2 != (int *)0x0) {
          iVar11 = *piVar2;
          piVar2 = (int *)piVar2[2];
          if ((*(int *)(iVar11 + 0x30) != 0) &&
             (*(char *)(*(int *)(*(int *)(iVar11 + 0x30) + 0x68) + 0x42) != '\0')) {
            iVar13 = iVar13 + 1;
          }
        }
      }
    }
    iVar11 = iVar15 * 1000 + DAT_0131736c;
    iVar15 = DAT_0131736c + iVar13 * 1000;
    if (iVar11 == 0) {
      iVar11 = -1;
    }
    else if ((iVar15 < -0x189373) || (0x20c49a < iVar15)) {
      uVar17 = __allmul(iVar15,iVar15 >> 0x1f,1000,0);
      iVar11 = __alldiv(uVar17,iVar11,iVar11 >> 0x1f);
    }
    else {
      iVar11 = (iVar15 * 1000) / iVar11;
    }
    if (DAT_013173cc <= iVar11) {
      piVar14 = (int *)0x0;
      local_2c = (int *)0x0;
      local_8 = 0;
      piVar2 = *(int **)(iVar9 + 0x7b4);
      while (piVar2 != (int *)0x0) {
        piVar3 = (int *)piVar2[2];
        piVar4 = (int *)*piVar2;
        cVar7 = FUN_005cc3e0();
        piVar2 = piVar3;
        if (((cVar7 == '\0') && (piVar4[0x1d] == 0)) &&
           (cVar7 = (**(code **)(*piVar4 + 0x38))(), cVar7 != '\0')) {
          puVar6 = (undefined4 *)piVar4[0xe];
joined_r0x0081e421:
          if (puVar6 != (undefined4 *)0x0) {
            puVar5 = (undefined4 *)puVar6[2];
            param_1 = (int *)*puVar6;
            iVar9 = param_1[0xe];
            if (*(uint *)(iVar9 + 0x1c) < 0x10) {
              pbVar8 = (byte *)(iVar9 + 8);
            }
            else {
              pbVar8 = *(byte **)(iVar9 + 8);
            }
            pcVar12 = "irregular";
            do {
              bVar1 = *pbVar8;
              bVar16 = bVar1 < (byte)*pcVar12;
              if (bVar1 != *pcVar12) {
LAB_0081e476:
                iVar15 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                goto LAB_0081e47b;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar8[1];
              bVar16 = bVar1 < (byte)pcVar12[1];
              if (bVar1 != pcVar12[1]) goto LAB_0081e476;
              pbVar8 = pbVar8 + 2;
              pcVar12 = pcVar12 + 2;
            } while (bVar1 != 0);
            iVar15 = 0;
LAB_0081e47b:
            puVar6 = puVar5;
            if (iVar15 != 0) goto code_r0x0081e47f;
            goto LAB_0081e4ba;
          }
        }
      }
      if (0 < (int)piVar14 >> 2) {
        iVar9 = FUN_00ab047b();
        iVar9 = *(int *)((iVar9 % ((int)piVar14 >> 2)) * 4);
        cVar7 = (**(code **)(**(int **)(iVar9 + 0x38) + 0x24))();
        if (cVar7 != '\0') {
          param_1 = (int *)FUN_00aae9af(100);
          local_8._0_1_ = 1;
          if (param_1 == (int *)0x0) {
            uVar10 = 0;
          }
          else {
            uVar10 = FUN_005e1000(param_1,iVar9);
          }
          local_8 = (uint)local_8._1_3_ << 8;
          iVar9 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
          (**(code **)(**(int **)(iVar9 + 0x38) + 0x18))(uVar10);
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
code_r0x0081e47f:
  if (*(uint *)(iVar9 + 0x1c) < 0x10) {
    pbVar8 = (byte *)(iVar9 + 8);
  }
  else {
    pbVar8 = *(byte **)(iVar9 + 8);
  }
  pcVar12 = "cavalry";
  do {
    bVar1 = *pbVar8;
    bVar16 = bVar1 < (byte)*pcVar12;
    if (bVar1 != *pcVar12) {
LAB_0081e4b1:
      iVar9 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
      goto LAB_0081e4b6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar8[1];
    bVar16 = bVar1 < (byte)pcVar12[1];
    if (bVar1 != pcVar12[1]) goto LAB_0081e4b1;
    pbVar8 = pbVar8 + 2;
    pcVar12 = pcVar12 + 2;
  } while (bVar1 != 0);
  iVar9 = 0;
LAB_0081e4b6:
  if (iVar9 == 0) {
LAB_0081e4ba:
    if (&param_1 < piVar14) {
      if (piVar14 == (int *)0x0) {
        FUN_00a513f0();
        piVar14 = local_2c;
      }
      if (piVar14 != (int *)0x0) {
        *piVar14 = *(int *)(((int)&param_1 >> 2) * 4);
      }
    }
    else {
      if (piVar14 == (int *)0x0) {
        FUN_00a513f0();
        piVar14 = local_2c;
      }
      if (piVar14 != (int *)0x0) {
        *piVar14 = (int)param_1;
      }
    }
    piVar14 = piVar14 + 1;
    local_2c = piVar14;
  }
  goto joined_r0x0081e421;
}

