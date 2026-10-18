// FUN_00794aa0 @ 00794aa0 body=[[00794aa0, 00794e89] [00794e8d, 00794ec2] [00794ec6, 00794fcb] [00794fcf, 0079500b] [0079500f, 00795055]]


int FUN_00794aa0(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iStack_13c;
  int iStack_138;
  int local_134;
  int *piStack_108;
  int *local_100;
  int *piStack_f8;
  undefined **appuStack_f0 [2];
  uint uStack_e8;
  undefined4 uStack_d8;
  uint uStack_d4;
  uint uStack_a8;
  undefined4 uStack_98;
  uint uStack_94;
  undefined **appuStack_84 [2];
  uint uStack_7c;
  undefined4 uStack_6c;
  uint uStack_68;
  uint uStack_3c;
  undefined4 uStack_2c;
  uint uStack_28;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4b4b1;
  pvStack_14 = ExceptionList;
  local_134 = 0;
  ExceptionList = &pvStack_14;
  if (DAT_0125fdd8 == 0) {
    ExceptionList = &pvStack_14;
    iVar5 = FUN_00aae9af();
    local_c = 0;
    if (iVar5 != 0) {
      FUN_008b0060();
    }
    local_c = 0xffffffff;
    FUN_005c2810();
  }
  iVar5 = DAT_0125fdd8;
  puVar6 = (uint *)(DAT_0125fdd8 + 0xc);
  local_100 = (int *)*puVar6;
LAB_00794b40:
  do {
    do {
      do {
        if ((local_100 < (int *)*puVar6) || (*(int **)(iVar5 + 0x10) <= local_100)) {
          ExceptionList = pvStack_14;
          return local_134;
        }
        piVar1 = (int *)*local_100;
        local_100 = local_100 + 1;
        cVar4 = (**(code **)(*piVar1 + 0x24))();
      } while (cVar4 == '\0');
      iStack_138 = 0;
      iStack_13c = 0;
      piStack_f8 = *(int **)(param_1 + 0x80);
LAB_00794b90:
      if ((*(int **)(param_1 + 0x80) <= piStack_f8) && (piStack_f8 < *(int **)(param_1 + 0x84))) {
        uVar2 = piStack_f8[1];
        iVar7 = piStack_f8[2];
        piVar10 = piStack_f8 + 10;
        if (uVar2 < 0x1269) {
          if (DAT_01258a98 != 0) {
            for (piVar9 = *(int **)(*(int *)(DAT_01258a98 + 8) +
                                   ((uVar2 * 0x10000 + iVar7) % *(uint *)(DAT_01258a98 + 4)) * 4);
                piVar9 != (int *)0x0; piVar9 = (int *)piVar9[1]) {
              if ((*(int *)(*piVar9 + 0xc) == iVar7) && (*(uint *)(*piVar9 + 8) == uVar2)) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
              if (bVar3) goto LAB_00794c74;
            }
          }
LAB_00794c08:
          iVar8 = 0;
        }
        else {
          iVar8 = 0;
          if (DAT_01258a94 != 0) {
            for (piVar9 = *(int **)(*(int *)(DAT_01258a94 + 8) +
                                   ((uVar2 * 0x10000 + iVar7) % *(uint *)(DAT_01258a94 + 4)) * 4);
                piVar9 != (int *)0x0; piVar9 = (int *)piVar9[1]) {
              if ((*(int *)(*piVar9 + 0xc) == iVar7) && (*(uint *)(*piVar9 + 8) == uVar2)) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
              if (bVar3) goto LAB_00794c74;
            }
            goto LAB_00794c08;
          }
        }
        goto LAB_00794c0a;
      }
      piStack_108 = *(int **)(param_1 + 0xa8);
LAB_00794c82:
      if ((*(int **)(param_1 + 0xa8) <= piStack_108) && (piStack_108 < *(int **)(param_1 + 0xac))) {
        uVar2 = piStack_108[1];
        iVar7 = piStack_108[2];
        piVar10 = piStack_108 + 10;
        if (uVar2 < 0x1269) {
          if (DAT_01258a98 != 0) {
            for (piVar9 = *(int **)(*(int *)(DAT_01258a98 + 8) +
                                   ((uVar2 * 0x10000 + iVar7) % *(uint *)(DAT_01258a98 + 4)) * 4);
                piVar9 != (int *)0x0; piVar9 = (int *)piVar9[1]) {
              if ((*(int *)(*piVar9 + 0xc) == iVar7) && (*(uint *)(*piVar9 + 8) == uVar2)) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
              if (bVar3) goto LAB_00794d64;
            }
          }
LAB_00794cfa:
          iVar8 = 0;
        }
        else {
          iVar8 = 0;
          if (DAT_01258a94 != 0) {
            for (piVar9 = *(int **)(*(int *)(DAT_01258a94 + 8) +
                                   ((uVar2 * 0x10000 + iVar7) % *(uint *)(DAT_01258a94 + 4)) * 4);
                piVar9 != (int *)0x0; piVar9 = (int *)piVar9[1]) {
              if ((*(int *)(*piVar9 + 0xc) == iVar7) && (*(uint *)(*piVar9 + 8) == uVar2)) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
              if (bVar3) goto LAB_00794d64;
            }
            goto LAB_00794cfa;
          }
        }
        goto LAB_00794cfc;
      }
    } while ((iStack_13c < 2) && (iStack_138 < 2));
    iStack_13c = iStack_13c - iStack_138;
    if (0 < iStack_13c) {
      iStack_13c = iStack_13c / 2;
      piVar10 = *(int **)(param_1 + 0xa8);
      while (((*(int **)(param_1 + 0xa8) <= piVar10 && (piVar10 < *(int **)(param_1 + 0xac))) &&
             (0 < iStack_13c))) {
        piVar9 = piVar10 + 10;
        if ((uint)piVar10[1] < 0x1269) {
          if (DAT_01258a98 == 0) goto LAB_00794e11;
          iVar7 = FUN_009c1d40();
        }
        else if (DAT_01258a94 == 0) {
LAB_00794e11:
          iVar7 = 0;
        }
        else {
          iVar7 = FUN_009c1d40();
        }
        *piVar10 = iVar7;
        piVar10 = piVar9;
        if (*(int *)(*(int *)(iVar7 + 0x38) + 0x24) == piVar1[9]) {
          if (param_2 != 0) {
            FUN_005e1ee0(appuStack_f0);
            local_c = 1;
            FUN_0079e9c0();
            local_c = 0xffffffff;
            if (0xf < uStack_94) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            uStack_94 = 0xf;
            uStack_98 = 0;
            uStack_a8 = uStack_a8 & 0xffffff00;
            appuStack_f0[0] = CCommand::vftable;
            if (0xf < uStack_d4) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            uStack_d8 = 0;
            uStack_d4 = 0xf;
            uStack_e8 = uStack_e8 & 0xffffff00;
          }
          local_134 = local_134 + 1;
          iStack_13c = iStack_13c + -1;
        }
      }
      goto LAB_00794b40;
    }
    iStack_13c = -(iStack_13c / 2);
    piVar10 = *(int **)(param_1 + 0x80);
    while (((*(int **)(param_1 + 0x80) <= piVar10 && (piVar10 < *(int **)(param_1 + 0x84))) &&
           (0 < iStack_13c))) {
      piVar9 = piVar10 + 10;
      iVar7 = DAT_01258a94;
      if ((uint)piVar10[1] < 0x1269) {
        iVar7 = DAT_01258a98;
      }
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_009c1d40();
      }
      *piVar10 = iVar7;
      piVar10 = piVar9;
      if (*(int *)(*(int *)(iVar7 + 0x38) + 0x24) == piVar1[9]) {
        if (param_2 != 0) {
          FUN_005e1ee0(appuStack_84);
          local_c = 2;
          FUN_0079e9c0();
          local_c = 0xffffffff;
          if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_28 = 0xf;
          uStack_2c = 0;
          uStack_3c = uStack_3c & 0xffffff00;
          appuStack_84[0] = CCommand::vftable;
          if (0xf < uStack_68) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_68 = 0xf;
          uStack_6c = 0;
          uStack_7c = uStack_7c & 0xffffff00;
        }
        local_134 = local_134 + 1;
        iStack_13c = iStack_13c + -1;
      }
    }
  } while( true );
LAB_00794c74:
  iVar8 = *piVar9;
LAB_00794c0a:
  *piStack_f8 = iVar8;
  piStack_f8 = piVar10;
  if ((iVar8 != 0) && (*(int *)(*(int *)(iVar8 + 0x38) + 0x24) == piVar1[9])) {
    iStack_138 = iStack_138 + 1;
  }
  goto LAB_00794b90;
LAB_00794d64:
  iVar8 = *piVar9;
LAB_00794cfc:
  *piStack_108 = iVar8;
  piStack_108 = piVar10;
  if ((iVar8 != 0) && (*(int *)(*(int *)(iVar8 + 0x38) + 0x24) == piVar1[9])) {
    iStack_13c = iStack_13c + 1;
  }
  goto LAB_00794c82;
}

