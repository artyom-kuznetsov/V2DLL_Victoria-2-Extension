// FUN_0042d820 @ 0042d820 body=[[0042d820, 0042deba]]


undefined4 * FUN_0042d820(undefined4 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined8 local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4088d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CDefines::vftable;
  param_1[2] = 43800000;
  param_1[2] = DAT_01259abc;
  param_1[3] = 43800000;
  param_1[3] = DAT_01259abc;
  puVar1 = param_1 + 4;
  *puVar1 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar2 = param_1 + 8;
  *puVar2 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  local_8 = 6;
  local_14 = 0;
  local_1c = CONCAT44(0x20,(undefined4)local_1c);
  do {
    piVar3 = (int *)param_1[5];
    if (&local_14 < piVar3) {
      piVar4 = (int *)*puVar1;
      if (&local_14 < piVar4) goto LAB_0042d8fc;
      if (piVar3 == (int *)param_1[6]) {
        FUN_00435b20();
      }
      if ((undefined4 *)param_1[5] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[5] =
             *(undefined4 *)(*puVar1 + ((int)&local_14 - (int)piVar4 >> 2) * 4);
      }
    }
    else {
LAB_0042d8fc:
      if (piVar3 == (int *)param_1[6]) {
        FUN_00435b20();
      }
      if ((undefined4 *)param_1[5] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[5] = 0;
      }
    }
    uVar9 = local_1c;
    param_1[5] = param_1[5] + 4;
    iVar14 = local_1c._4_4_ + -1;
    local_1c = CONCAT44(iVar14,(undefined4)local_1c);
  } while (iVar14 != 0);
  local_14 = 0;
  local_1c = uVar9 & 0xffffffff;
  do {
    uVar10 = param_1[9];
    uVar11 = (int)&local_1c + 4;
    if ((uVar11 < uVar10) && (uVar13 = *puVar2, uVar13 <= uVar11)) {
      if (uVar10 == param_1[10]) {
        uVar10 = (int)(uVar10 - uVar13) >> 2;
        if (0x3ffffffe < uVar10) goto LAB_0042da50;
        uVar10 = uVar10 + 1;
        uVar12 = (int)(param_1[10] - uVar13) >> 2;
        if (uVar12 < uVar10) {
          if (0x3fffffff - (uVar12 >> 1) < uVar12) {
            uVar12 = 0;
          }
          else {
            uVar12 = uVar12 + (uVar12 >> 1);
          }
          if (uVar12 < uVar10) {
            uVar12 = uVar10;
          }
          FUN_00435b80(uVar12);
        }
      }
      if ((undefined4 *)param_1[9] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[9] = *(undefined4 *)(*puVar2 + ((int)(uVar11 - uVar13) >> 2) * 4);
      }
    }
    else {
      if (uVar10 == param_1[10]) {
        uVar11 = (int)(uVar10 - *puVar2) >> 2;
        if (0x3ffffffe < uVar11) goto LAB_0042da50;
        uVar11 = uVar11 + 1;
        uVar10 = (int)(param_1[10] - *puVar2) >> 2;
        if (uVar10 < uVar11) {
          if (0x3fffffff - (uVar10 >> 1) < uVar10) {
            uVar10 = 0;
          }
          else {
            uVar10 = uVar10 + (uVar10 >> 1);
          }
          if (uVar10 < uVar11) {
            uVar10 = uVar11;
          }
          FUN_00435b80(uVar10);
        }
      }
      if ((undefined4 *)param_1[9] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[9] = 0;
      }
    }
    param_1[9] = param_1[9] + 4;
    local_14 = local_14 + 1;
  } while (local_14 < 0x40);
  local_14 = 0;
  local_1c = local_1c & 0xffffffff;
  do {
    uVar11 = param_1[0xd];
    if ((int)&local_1c + 4U < uVar11) {
      uVar10 = param_1[0xc];
      if ((int)&local_1c + 4U < uVar10) goto LAB_0042da80;
      if (uVar11 == param_1[0xe]) {
        uVar11 = (int)(uVar11 - uVar10) >> 2;
        if (0x3ffffffe < uVar11) goto LAB_0042da50;
        uVar11 = uVar11 + 1;
        uVar13 = (int)(param_1[0xe] - uVar10) >> 2;
        if (uVar13 < uVar11) {
          if (0x3fffffff - (uVar13 >> 1) < uVar13) {
            uVar13 = 0;
          }
          else {
            uVar13 = uVar13 + (uVar13 >> 1);
          }
          if (uVar13 < uVar11) {
            uVar13 = uVar11;
          }
          FUN_00435b80(uVar13);
        }
      }
      if ((undefined4 *)param_1[0xd] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0xd] =
             *(undefined4 *)(param_1[0xc] + ((int)(((int)&local_1c + 4U) - uVar10) >> 2) * 4);
      }
    }
    else {
LAB_0042da80:
      if (uVar11 == param_1[0xe]) {
        uVar11 = (int)(uVar11 - param_1[0xc]) >> 2;
        if (0x3ffffffe < uVar11) goto LAB_0042da50;
        uVar11 = uVar11 + 1;
        uVar10 = (int)(param_1[0xe] - param_1[0xc]) >> 2;
        if (uVar10 < uVar11) {
          if (0x3fffffff - (uVar10 >> 1) < uVar10) {
            uVar10 = 0;
          }
          else {
            uVar10 = uVar10 + (uVar10 >> 1);
          }
          if (uVar10 < uVar11) {
            uVar10 = uVar11;
          }
          FUN_00435b80(uVar10);
        }
      }
      if ((undefined4 *)param_1[0xd] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0xd] = 0;
      }
    }
    param_1[0xd] = param_1[0xd] + 4;
    local_14 = local_14 + 1;
  } while (local_14 < 0x15b);
  local_14 = 0;
  local_1c = local_1c & 0xffffffff;
  do {
    uVar11 = param_1[0x11];
    if ((int)&local_1c + 4U < uVar11) {
      uVar10 = param_1[0x10];
      if ((int)&local_1c + 4U < uVar10) goto LAB_0042db68;
      if (uVar11 == param_1[0x12]) {
        uVar11 = (int)(uVar11 - uVar10) >> 2;
        if (0x3ffffffe < uVar11) goto LAB_0042da50;
        uVar11 = uVar11 + 1;
        uVar13 = (int)(param_1[0x12] - uVar10) >> 2;
        if (uVar13 < uVar11) {
          if (0x3fffffff - (uVar13 >> 1) < uVar13) {
            uVar13 = 0;
          }
          else {
            uVar13 = uVar13 + (uVar13 >> 1);
          }
          if (uVar13 < uVar11) {
            uVar13 = uVar11;
          }
          FUN_00435b80(uVar13);
        }
      }
      if ((undefined4 *)param_1[0x11] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x11] =
             *(undefined4 *)(param_1[0x10] + ((int)(((int)&local_1c + 4U) - uVar10) >> 2) * 4);
      }
    }
    else {
LAB_0042db68:
      if (uVar11 == param_1[0x12]) {
        uVar11 = (int)(uVar11 - param_1[0x10]) >> 2;
        if (0x3ffffffe < uVar11) goto LAB_0042da50;
        uVar11 = uVar11 + 1;
        uVar10 = (int)(param_1[0x12] - param_1[0x10]) >> 2;
        if (uVar10 < uVar11) {
          if (0x3fffffff - (uVar10 >> 1) < uVar10) {
            uVar10 = 0;
          }
          else {
            uVar10 = uVar10 + (uVar10 >> 1);
          }
          if (uVar10 < uVar11) {
            uVar10 = uVar11;
          }
          FUN_00435b80(uVar10);
        }
      }
      if ((undefined4 *)param_1[0x11] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x11] = 0;
      }
    }
    param_1[0x11] = param_1[0x11] + 4;
    local_14 = local_14 + 1;
  } while (local_14 < 0x57);
  local_14 = 0;
  local_1c = 0;
  do {
    puVar5 = (undefined8 *)param_1[0x15];
    if (&local_1c < puVar5) {
      puVar6 = (undefined8 *)param_1[0x14];
      if (&local_1c < puVar6) goto LAB_0042dc63;
      iVar14 = (int)&local_1c - (int)puVar6 >> 3;
      if (puVar5 == (undefined8 *)param_1[0x16]) {
        uVar11 = (int)puVar5 - (int)puVar6 >> 3;
        if (0x1ffffffe < uVar11) goto LAB_0042da50;
        uVar11 = uVar11 + 1;
        uVar10 = (int)param_1[0x16] - (int)puVar6 >> 3;
        if (uVar10 < uVar11) {
          if (0x1fffffff - (uVar10 >> 1) < uVar10) {
            uVar10 = 0;
          }
          else {
            uVar10 = uVar10 + (uVar10 >> 1);
          }
          if (uVar10 < uVar11) {
            uVar10 = uVar11;
          }
          FUN_004237e0(uVar10);
        }
      }
      puVar7 = (undefined4 *)param_1[0x15];
      if (puVar7 != (undefined4 *)0x0) {
        iVar8 = param_1[0x14];
        *puVar7 = *(undefined4 *)(iVar8 + iVar14 * 8);
        puVar7[1] = *(undefined4 *)(iVar8 + 4 + iVar14 * 8);
      }
    }
    else {
LAB_0042dc63:
      if (puVar5 == (undefined8 *)param_1[0x16]) {
        uVar11 = (int)puVar5 - param_1[0x14] >> 3;
        if (0x1ffffffe < uVar11) goto LAB_0042da50;
        uVar11 = uVar11 + 1;
        uVar10 = (int)param_1[0x16] - param_1[0x14] >> 3;
        if (uVar10 < uVar11) {
          if (0x1fffffff - (uVar10 >> 1) < uVar10) {
            uVar10 = 0;
          }
          else {
            uVar10 = uVar10 + (uVar10 >> 1);
          }
          if (uVar10 < uVar11) {
            uVar10 = uVar11;
          }
          FUN_004237e0(uVar10);
        }
      }
      puVar7 = (undefined4 *)param_1[0x15];
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 0;
        puVar7[1] = 0;
      }
    }
    param_1[0x15] = param_1[0x15] + 8;
    local_14 = local_14 + 1;
  } while (local_14 < 0x3c);
  local_14 = 0;
  local_1c = local_1c & 0xffffffff;
  do {
    uVar11 = param_1[0x19];
    if ((int)&local_1c + 4U < uVar11) {
      uVar10 = param_1[0x18];
      if ((int)&local_1c + 4U < uVar10) goto LAB_0042dd53;
      if (uVar11 == param_1[0x1a]) {
        uVar11 = (int)(uVar11 - uVar10) >> 2;
        if (0x3ffffffe < uVar11) goto LAB_0042da50;
        uVar11 = uVar11 + 1;
        uVar13 = (int)(param_1[0x1a] - uVar10) >> 2;
        if (uVar13 < uVar11) {
          if (0x3fffffff - (uVar13 >> 1) < uVar13) {
            uVar13 = 0;
          }
          else {
            uVar13 = uVar13 + (uVar13 >> 1);
          }
          if (uVar13 < uVar11) {
            uVar13 = uVar11;
          }
          FUN_00435b80(uVar13);
        }
      }
      if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x19] =
             *(undefined4 *)(param_1[0x18] + ((int)(((int)&local_1c + 4U) - uVar10) >> 2) * 4);
      }
    }
    else {
LAB_0042dd53:
      if (uVar11 == param_1[0x1a]) {
        uVar11 = (int)(uVar11 - param_1[0x18]) >> 2;
        if (0x3ffffffe < uVar11) goto LAB_0042da50;
        uVar11 = uVar11 + 1;
        uVar10 = (int)(param_1[0x1a] - param_1[0x18]) >> 2;
        if (uVar10 < uVar11) {
          if (0x3fffffff - (uVar10 >> 1) < uVar10) {
            uVar10 = 0;
          }
          else {
            uVar10 = uVar10 + (uVar10 >> 1);
          }
          if (uVar10 < uVar11) {
            uVar10 = uVar11;
          }
          FUN_00435b80(uVar10);
        }
      }
      if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x19] = 0;
      }
    }
    param_1[0x19] = param_1[0x19] + 4;
    local_14 = local_14 + 1;
  } while (local_14 < 0x28);
  local_14 = 0;
  local_1c = local_1c & 0xffffffff;
  do {
    uVar11 = param_1[0x1d];
    if ((int)&local_1c + 4U < uVar11) {
      uVar10 = param_1[0x1c];
      if ((int)&local_1c + 4U < uVar10) goto LAB_0042de3e;
      if (uVar11 == param_1[0x1e]) {
        uVar11 = (int)(uVar11 - uVar10) >> 2;
        if (0x3ffffffe < uVar11) goto LAB_0042da50;
        uVar11 = uVar11 + 1;
        uVar13 = (int)(param_1[0x1e] - uVar10) >> 2;
        if (uVar13 < uVar11) {
          if (0x3fffffff - (uVar13 >> 1) < uVar13) {
            uVar13 = 0;
          }
          else {
            uVar13 = uVar13 + (uVar13 >> 1);
          }
          if (uVar13 < uVar11) {
            uVar13 = uVar11;
          }
          FUN_00435b80(uVar13);
        }
      }
      if ((undefined4 *)param_1[0x1d] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x1d] =
             *(undefined4 *)(param_1[0x1c] + ((int)(((int)&local_1c + 4U) - uVar10) >> 2) * 4);
      }
    }
    else {
LAB_0042de3e:
      if (uVar11 == param_1[0x1e]) {
        uVar11 = (int)(uVar11 - param_1[0x1c]) >> 2;
        if (0x3ffffffe < uVar11) {
LAB_0042da50:
                    /* WARNING: Subroutine does not return */
          FUN_00aad3ad("vector<T> too long");
        }
        uVar11 = uVar11 + 1;
        uVar10 = (int)(param_1[0x1e] - param_1[0x1c]) >> 2;
        if (uVar10 < uVar11) {
          if (0x3fffffff - (uVar10 >> 1) < uVar10) {
            uVar10 = 0;
          }
          else {
            uVar10 = uVar10 + (uVar10 >> 1);
          }
          if (uVar10 < uVar11) {
            uVar10 = uVar11;
          }
          FUN_00435b80(uVar10);
        }
      }
      if ((undefined4 *)param_1[0x1d] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x1d] = 0;
      }
    }
    param_1[0x1d] = param_1[0x1d] + 4;
    local_14 = local_14 + 1;
    if (10 < local_14) {
      ExceptionList = local_10;
      return param_1;
    }
  } while( true );
}

