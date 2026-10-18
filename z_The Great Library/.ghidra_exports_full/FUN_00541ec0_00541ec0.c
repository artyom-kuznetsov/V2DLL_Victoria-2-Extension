// FUN_00541ec0 @ 00541ec0 body=[[00541ec0, 00541ef8] [00541f02, 00541f77] [00541f80, 00542240]]


void FUN_00541ec0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint *puVar8;
  char cVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_14 = ExceptionList;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b3fed8;
  if (*(int *)(param_1 + 0x84) != 0) {
    ExceptionList = &local_14;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x84));
  }
  ExceptionList = &local_14;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  local_c = 0;
  piVar1 = *(int **)(*(int *)(DAT_012588e8 + 0xb98) + *(int *)(param_1 + 0x20) * 0x10);
  do {
    do {
      if (piVar1 == (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
      iVar12 = *piVar1;
      piVar1 = (int *)piVar1[2];
      piVar11 = *(int **)(iVar12 + 0x94);
joined_r0x00541f70:
      if (piVar11 != (int *)0x0) {
        piVar10 = (int *)piVar11[2];
        iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar11 * 4);
        piVar11 = piVar10;
        if (*(int *)(iVar2 + 300) == *(int *)(param_1 + 0x20)) {
          for (piVar10 = *(int **)(param_1 + 0x84); piVar10 != (int *)0x0;
              piVar10 = (int *)piVar10[2]) {
            if (*piVar10 == iVar2) goto joined_r0x00541f70;
          }
          iVar3 = *(int *)(param_1 + 0x88);
          piVar10 = (int *)FUN_00aae9af(0x10);
          if (piVar10 == (int *)0x0) {
            piVar10 = (int *)0x0;
          }
          else {
            *piVar10 = iVar2;
            piVar10[1] = iVar3;
            piVar10[2] = 0;
            *(undefined1 *)(piVar10 + 3) = 0;
          }
          iVar2 = *(int *)(param_1 + 0x8c);
          *(int **)(param_1 + 0x88) = piVar10;
          *(int *)(param_1 + 0x8c) = iVar2 + 1;
          if (iVar2 == 0) {
            *(int **)(param_1 + 0x84) = piVar10;
          }
          else {
            *(int **)(iVar3 + 8) = piVar10;
          }
        }
        goto joined_r0x00541f70;
      }
      iVar2 = *(int *)(param_1 + 0x20);
      cVar9 = FUN_004e1970(*(undefined4 *)(param_1 + 0x1c),iVar2);
    } while ((cVar9 != '\0') ||
            ((*(int *)(iVar12 + 0x48) == 0 &&
             (((iVar3 = *(int *)(*(int *)(iVar12 + 0x30) + 0xfc), iVar3 == 0 &&
               (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar2 * 4) + 0xe64) ==
                *(int *)(iVar12 + 0x4c))) ||
              ((iVar3 == 3 &&
               (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar2 * 4) + 0x132c) +
                        *(int *)(*(int *)(iVar12 + 0x50) + 8) * 4) != 0))))))));
    puVar8 = *(uint **)(iVar12 + 0x80);
joined_r0x0054208c:
    while (puVar8 != (uint *)0x0) {
      puVar4 = (uint *)puVar8[3];
      uVar5 = *puVar8;
      uVar6 = puVar8[1];
      puVar8 = puVar4;
      if (uVar5 < 0x1269) {
        if (DAT_01258a98 != 0) {
          for (piVar11 = *(int **)(*(int *)(DAT_01258a98 + 8) +
                                  ((uVar5 * 0x10000 + uVar6) % *(uint *)(DAT_01258a98 + 4)) * 4);
              piVar11 != (int *)0x0; piVar11 = (int *)piVar11[1]) {
            if ((*(uint *)(*piVar11 + 0xc) == uVar6) && (*(uint *)(*piVar11 + 8) == uVar5)) {
              bVar7 = true;
            }
            else {
              bVar7 = false;
            }
            if (bVar7) goto LAB_0054214a;
          }
        }
      }
      else if (DAT_01258a94 != 0) {
        for (piVar11 = *(int **)(*(int *)(DAT_01258a94 + 8) +
                                ((uVar5 * 0x10000 + uVar6) % *(uint *)(DAT_01258a94 + 4)) * 4);
            piVar11 != (int *)0x0; piVar11 = (int *)piVar11[1]) {
          if ((*(uint *)(*piVar11 + 0xc) == uVar6) && (*(uint *)(*piVar11 + 8) == uVar5)) {
            bVar7 = true;
          }
          else {
            bVar7 = false;
          }
          if (bVar7) goto LAB_0054214a;
        }
      }
    }
  } while( true );
LAB_0054214a:
  iVar12 = *piVar11;
  if ((iVar12 != 0) && (iVar12 != 8)) {
    if (*(int *)(iVar12 + 0xe4) < 1) {
      iVar12 = *(int *)(iVar12 + 0xd4);
      if (*(int *)(iVar12 + 300) != *(int *)(param_1 + 0x20)) goto joined_r0x0054208c;
      for (piVar11 = *(int **)(param_1 + 0x84); piVar11 != (int *)0x0; piVar11 = (int *)piVar11[2])
      {
        if (*piVar11 == iVar12) goto joined_r0x0054208c;
      }
    }
    else {
      iVar12 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + **(int **)(iVar12 + 0xdc) * 4);
      if (*(int *)(iVar12 + 300) != *(int *)(param_1 + 0x20)) goto joined_r0x0054208c;
      for (piVar11 = *(int **)(param_1 + 0x84); piVar11 != (int *)0x0; piVar11 = (int *)piVar11[2])
      {
        if (*piVar11 == iVar12) goto joined_r0x0054208c;
      }
    }
    iVar2 = *(int *)(param_1 + 0x88);
    piVar11 = (int *)FUN_00aae9af(0x10);
    if (piVar11 == (int *)0x0) {
      piVar11 = (int *)0x0;
    }
    else {
      *piVar11 = iVar12;
      piVar11[1] = iVar2;
      piVar11[2] = 0;
      *(undefined1 *)(piVar11 + 3) = 0;
    }
    iVar12 = *(int *)(param_1 + 0x8c);
    *(int *)(param_1 + 0x8c) = iVar12 + 1;
    *(int **)(param_1 + 0x88) = piVar11;
    if (iVar12 == 0) {
      *(int **)(param_1 + 0x84) = piVar11;
    }
    else {
      *(int **)(iVar2 + 8) = piVar11;
    }
  }
  goto joined_r0x0054208c;
}

