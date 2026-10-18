// FUN_0049f1c0 @ 0049f1c0 body=[[0049f1c0, 0049f467] [0049f46b, 0049f4a1] [0049f4a5, 0049f4d5] [0049f4d9, 0049f4fa] [0049f4fe, 0049f58e] [0049f5a0, 0049f980] [0049f984, 0049f9a6] [0049f9aa, 0049f9ee] [0049f9f7, 0049fa15] [0049fa19, 0049fa2d]]


void FUN_0049f1c0(void)

{
  uint *puVar1;
  char cVar2;
  uint *puVar3;
  uint *puVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  int in_ECX;
  uint uVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined1 local_580 [4];
  uint local_57c;
  uint *local_578;
  int *local_574;
  int *local_570;
  uint local_56c [4];
  undefined4 local_55c;
  uint local_558;
  uint local_550;
  uint local_54c;
  undefined4 local_548;
  uint local_540 [4];
  undefined4 local_530;
  uint local_52c;
  uint local_524 [4];
  undefined4 local_514;
  uint local_510;
  undefined4 local_508;
  undefined4 local_504 [2];
  undefined1 *local_4fc;
  uint local_4f8;
  uint local_4f0 [4];
  int local_4e0;
  uint local_4dc;
  uint local_4d4;
  undefined4 local_4c4;
  uint local_4c0;
  uint local_4b8 [4];
  undefined4 local_4a8;
  uint local_4a4;
  uint local_49c;
  undefined4 local_48c;
  uint local_488;
  undefined **local_480;
  undefined4 local_47c;
  undefined4 local_478;
  undefined4 local_474;
  undefined1 local_470;
  undefined1 local_46c;
  int *local_464;
  int local_460;
  char local_254 [256];
  undefined1 local_154;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 local_128;
  undefined4 local_124;
  int local_11c [66];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b6000b;
  local_14 = ExceptionList;
  local_57c = 0;
  local_550 = 0;
  local_54c = 0;
  local_548 = 0;
  local_570 = (int *)(in_ECX + 0x2110);
  local_c._0_1_ = 0;
  local_c._1_3_ = 0;
  piVar6 = local_570;
  if (0xf < *(uint *)(in_ECX + 0x2124)) {
    piVar6 = (int *)*local_570;
  }
  ExceptionList = &local_14;
  FUN_00992240(piVar6,&local_550,&DAT_00dfa554);
  local_578 = (uint *)(in_ECX + 0x2258);
  if (*(int *)(in_ECX + 0x2258) != *(int *)(in_ECX + 0x225c)) {
    local_574 = (int *)FUN_004a3d80(*(int *)(in_ECX + 0x225c),local_570);
    FUN_004a3ac0(local_570);
    *(int **)(in_ECX + 0x225c) = local_574;
  }
  local_4f8 = local_550;
LAB_0049f270:
  uVar11 = local_4f8;
  uVar10 = local_550;
  if ((local_4f8 < local_550) || (local_54c <= local_4f8)) {
    if (local_550 != 0) {
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uVar10);
    }
    ExceptionList = local_14;
    return;
  }
  local_4f8 = local_4f8 + 0x1c;
  local_4dc = 0xf;
  local_4e0 = 0;
  local_4f0[0] = local_4f0[0] & 0xffffff00;
  FUN_00408ed0(uVar11,0,0xffffffff);
  local_c._0_1_ = 1;
  local_4a4 = 0xf;
  local_4a8 = 0;
  local_4b8[0] = local_4b8[0] & 0xffffff00;
  FUN_00409350("UNNAMED_SESSION",0xf);
  local_c._0_1_ = 2;
  piVar6 = (int *)FUN_00aae9af(0x114);
  local_c._0_1_ = 3;
  local_574 = piVar6;
  if (piVar6 == (int *)0x0) {
    local_464 = (int *)0x0;
  }
  else {
    local_558 = 0xf;
    local_55c = 0;
    local_56c[0] = local_56c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dedc68,1);
    local_c = CONCAT31(local_c._1_3_,4);
    local_57c = local_57c | 1;
    FUN_00988f20(local_56c);
    local_c = 5;
    local_57c = local_57c | 2;
    uVar7 = FUN_00988f20(local_4f0);
    local_c = 6;
    local_57c = local_57c | 4;
    FUN_0098ffc0(uVar7);
    *piVar6 = (int)&PTR_FUN_00e37c3c;
    local_464 = piVar6;
  }
  local_480 = &PTR_FUN_00e38524;
  local_47c = 0;
  local_478 = 0;
  local_474 = 0;
  local_470 = 0;
  local_c = 10;
  local_46c = 0;
  local_140 = 0xf;
  local_144 = 0;
  local_154 = 0;
  FUN_00408ed0(local_4b8,0,0xffffffff);
  local_138 = 0;
  local_134 = 0;
  local_130 = 0;
  local_128 = 1;
  local_124 = 0;
  local_c = 0xb;
  if ((local_57c & 4) != 0) {
    local_57c = local_57c & 0xfffffffb;
    if (0xf < local_488) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_49c);
    }
    local_488 = 0xf;
    local_48c = 0;
    local_49c = local_49c & 0xffffff00;
  }
  if ((local_57c & 2) != 0) {
    local_57c = local_57c & 0xfffffffd;
    if (0xf < local_4c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4d4);
    }
    local_4c0 = 0xf;
    local_4c4 = 0;
    local_4d4 = local_4d4 & 0xffffff00;
  }
  if ((local_57c & 1) != 0) {
    local_57c = local_57c & 0xfffffffe;
    if (0xf < local_558) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_56c[0]);
    }
    local_558 = 0xf;
    local_55c = 0;
    local_56c[0] = local_56c[0] & 0xffffff00;
  }
  if (0xf < local_4a4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4b8[0]);
  }
  local_52c = 0xf;
  local_530 = 0;
  local_540[0] = local_540[0] & 0xffffff00;
  local_510 = 0xf;
  local_514 = 0;
  local_524[0] = local_524[0] & 0xffffff00;
  local_508 = 0;
  local_504[0] = 0;
  local_c._0_1_ = 0x10;
  local_c._1_3_ = 0;
  uVar7 = FUN_009895f0(local_4e0 + -4);
  local_c._0_1_ = 0x11;
  FUN_00408ed0(uVar7,0,0xffffffff);
  uVar10 = local_4d4;
  uVar11 = local_4c0;
joined_r0x0049f580:
  do {
    local_c = CONCAT31(local_c._1_3_,0x10);
    if (0xf < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uVar10);
    }
LAB_0049f5a0:
    piVar12 = local_464;
    piVar6 = local_464 + 0x44;
    if ((char)*piVar6 == '\0') {
      iVar8 = (**(code **)(*local_464 + 4))();
      piVar12[2] = iVar8;
      if (iVar8 == 0) {
        piVar12[3] = 0x13;
      }
      *(char *)piVar6 = '\x01';
    }
    piVar6 = piVar12 + 3;
    piVar12 = local_11c;
    for (iVar8 = 0x41; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar12 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar12 = piVar12 + 1;
    }
    if (local_11c[0] == 0x13) {
      (**(code **)(*local_464 + 4))();
      puVar1 = local_578;
      puVar3 = (uint *)local_578[1];
      if ((local_540 < puVar3) && (puVar4 = (uint *)*local_578, puVar4 <= local_540)) {
        if (puVar3 == (uint *)local_578[2]) {
          uVar10 = (int)puVar3 - (int)puVar4 >> 6;
          if (0x3fffffe < uVar10) {
LAB_0049f9f7:
                    /* WARNING: Subroutine does not return */
            FUN_00aad3ad("vector<T> too long");
          }
          uVar10 = uVar10 + 1;
          uVar11 = (int)local_578[2] - (int)puVar4 >> 6;
          if (uVar11 < uVar10) {
            if (0x3ffffff - (uVar11 >> 1) < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar10) {
              uVar11 = uVar10;
            }
            FUN_004a3850(uVar11);
          }
        }
        iVar8 = ((int)local_540 - (int)puVar4 & 0xffffffc0U) + *local_578;
        puVar5 = (undefined1 *)local_578[1];
        local_c._0_1_ = 0x14;
        local_574 = (int *)puVar5;
        local_4fc = puVar5;
        if (puVar5 != (undefined1 *)0x0) {
          *(undefined4 *)(puVar5 + 0x14) = 0xf;
          *(undefined4 *)(puVar5 + 0x10) = 0;
          *puVar5 = 0;
          FUN_00408ed0(iVar8,0,0xffffffff);
          local_c._0_1_ = 0x15;
          *(undefined4 *)(puVar5 + 0x30) = 0xf;
          *(undefined4 *)(puVar5 + 0x2c) = 0;
          puVar5[0x1c] = 0;
          FUN_00408ed0(iVar8 + 0x1c,0,0xffffffff);
          *(undefined4 *)(puVar5 + 0x38) = *(undefined4 *)(iVar8 + 0x38);
          *(undefined4 *)(puVar5 + 0x3c) = *(undefined4 *)(iVar8 + 0x3c);
        }
        local_578[1] = local_578[1] + 0x40;
      }
      else {
        if (puVar3 == (uint *)local_578[2]) {
          uVar10 = (int)((int)puVar3 - *local_578) >> 6;
          if (0x3fffffe < uVar10) goto LAB_0049f9f7;
          uVar10 = uVar10 + 1;
          uVar11 = (int)((int)local_578[2] - *local_578) >> 6;
          if (uVar11 < uVar10) {
            if (0x3ffffff - (uVar11 >> 1) < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar10) {
              uVar11 = uVar10;
            }
            FUN_004a3850(uVar11);
          }
        }
        puVar5 = (undefined1 *)puVar1[1];
        local_c._0_1_ = 0x16;
        local_574 = (int *)puVar5;
        local_4fc = puVar5;
        if (puVar5 != (undefined1 *)0x0) {
          *(undefined4 *)(puVar5 + 0x14) = 0xf;
          *(undefined4 *)(puVar5 + 0x10) = 0;
          *puVar5 = 0;
          FUN_00408ed0(local_540,0,0xffffffff);
          local_c._0_1_ = 0x17;
          *(undefined4 *)(puVar5 + 0x30) = 0xf;
          *(undefined4 *)(puVar5 + 0x2c) = 0;
          puVar5[0x1c] = 0;
          FUN_00408ed0(local_524,0,0xffffffff);
          *(undefined4 *)(puVar5 + 0x38) = local_508;
          *(undefined4 *)(puVar5 + 0x3c) = local_504[0];
        }
        puVar1 = puVar1 + 1;
        *puVar1 = *puVar1 + 0x40;
      }
      if (0xf < local_510) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_524[0]);
      }
      local_510 = 0xf;
      local_514 = 0;
      local_524[0] = local_524[0] & 0xffffff00;
      if (0xf < local_52c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_540[0]);
      }
      local_52c = 0xf;
      local_530 = 0;
      local_540[0] = local_540[0] & 0xffffff00;
      local_c._0_1_ = 1;
      FUN_009a0dc0();
      local_c._0_1_ = 0;
      if (0xf < local_4dc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_4f0[0]);
      }
      goto LAB_0049f270;
    }
    FUN_009a1440(&local_480);
    if (0x3c < local_460) {
      if (local_460 == 0x43b) break;
      goto LAB_0049f5a0;
    }
    if (local_460 != 0x3c) {
      if (local_460 == 0x1f) {
        puVar13 = &local_508;
      }
      else {
        if (local_460 != 0x20) goto LAB_0049f5a0;
        puVar13 = local_504;
      }
      iVar8 = FID_conflict__sscanf(local_254,"%f",puVar13);
      if (iVar8 == 0) {
        FUN_009a1140();
      }
      goto LAB_0049f5a0;
    }
    local_558 = 0xf;
    local_55c = 0;
    local_56c[0] = (uint)local_56c[0]._1_3_ << 8;
    pcVar9 = local_254;
    local_c = CONCAT31(local_c._1_3_,0x13);
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_00409350(local_254,(int)pcVar9 - (int)(local_254 + 1));
    local_580[0] = 10;
    iVar8 = FUN_005484e0(local_56c,local_580,1);
    if (iVar8 == -1) {
      FUN_00408ed0(local_56c,0,0xffffffff);
    }
    else {
      FUN_009a1140();
      FUN_00409350("Unreadable String",0x11);
    }
    uVar10 = local_56c[0];
    uVar11 = local_558;
  } while( true );
  local_558 = 0xf;
  local_55c = 0;
  local_56c[0] = (uint)local_56c[0]._1_3_ << 8;
  pcVar9 = local_254;
  local_c = CONCAT31(local_c._1_3_,0x12);
  do {
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_00409350(local_254,(int)pcVar9 - (int)(local_254 + 1));
  local_580[0] = 10;
  iVar8 = FUN_005484e0(local_56c,local_580,1);
  if (iVar8 == -1) {
    FUN_00408ed0(local_56c,0,0xffffffff);
  }
  else {
    FUN_009a1140();
    FUN_00409350("Unreadable String",0x11);
  }
  uVar10 = local_56c[0];
  uVar11 = local_558;
  goto joined_r0x0049f580;
}

