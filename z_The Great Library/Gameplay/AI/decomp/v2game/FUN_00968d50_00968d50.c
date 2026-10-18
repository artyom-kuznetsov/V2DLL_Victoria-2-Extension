// FUN_00968d50 @ 00968d50 body=[[00968d50, 00968f1b] [00968f21, 009691af]]


/* WARNING: Removing unreachable block (ram,0x00968ee1) */
/* WARNING: Removing unreachable block (ram,0x00968ef7) */

void FUN_00968d50(undefined4 *param_1)

{
  int *piVar1;
  size_t _Size;
  size_t _Size_00;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  void *_Dst;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int local_1c;
  uint local_14;
  undefined4 local_c;
  
  _Size = DAT_01258a14 * 4;
  _memset((void *)param_1[9],0,_Size);
  _Size_00 = DAT_01258a18 * 4;
  _memset((void *)param_1[10],0,_Size_00);
  _memset((void *)param_1[0x11],0,DAT_01258a1c * 4);
  _memset((void *)param_1[0x12],0,DAT_01258a20 * 4);
  _memset((void *)param_1[0x13],0,DAT_01258a24 * 4);
  puVar9 = param_1 + 0xb;
  puVar7 = param_1 + 0x20;
  local_14 = 3;
  do {
    puVar9[-5] = 0;
    puVar7[-6] = 0;
    puVar7[-5] = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    _memset((void *)*puVar9,0,_Size);
    _memset((void *)puVar9[3],0,_Size_00);
    puVar9[0x2c] = 0;
    puVar7 = puVar7 + 2;
    puVar9 = puVar9 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  piVar4 = param_1 + 0x2f;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  uVar5 = DAT_01258a28;
  if ((param_1[0x30] - *piVar4 & 0xfffffff0U) == 0) {
    iVar6 = *piVar4;
    uVar3 = (int)param_1[0x30] - iVar6 >> 4;
    if (DAT_01258a28 < uVar3) {
      piVar4 = (int *)(DAT_01258a28 * 0x10 + iVar6);
      if (piVar4 != (int *)param_1[0x30]) {
        piVar1 = (int *)param_1[0x30];
        for (piVar8 = piVar4; DAT_01258a28 = uVar5, piVar8 != piVar1; piVar8 = piVar8 + 4) {
          if (*piVar8 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(*piVar8);
          }
          *piVar8 = 0;
          piVar8[1] = 0;
          piVar8[2] = 0;
          uVar5 = DAT_01258a28;
        }
        param_1[0x30] = piVar4;
      }
    }
    else if (uVar3 < DAT_01258a28) {
      if (0xfffffff - (DAT_01258a28 - uVar3) < uVar3) {
LAB_00968f5a:
                    /* WARNING: Subroutine does not return */
        FUN_00aad3ad("vector<T> too long");
      }
      uVar3 = uVar3 + (DAT_01258a28 - uVar3);
      uVar2 = param_1[0x31] - iVar6 >> 4;
      if (uVar2 < uVar3) {
        if (0xfffffff - (uVar2 >> 1) < uVar2) {
          uVar2 = 0;
        }
        else {
          uVar2 = uVar2 + (uVar2 >> 1);
        }
        if (uVar2 < uVar3) {
          uVar2 = uVar3;
        }
        FUN_0068eef0(uVar2);
      }
      FUN_0054b7c0(param_1[0x30],local_c);
      param_1[0x30] = (uVar5 - (param_1[0x30] - *piVar4 >> 4)) * 0x10 + param_1[0x30];
      uVar5 = DAT_01258a28;
    }
  }
  if ((param_1[0x34] - param_1[0x33] & 0xfffffff8) == 0) {
    FUN_0043a880();
    uVar5 = DAT_01258a28;
  }
  local_14 = 0;
  if (uVar5 != 0) {
    local_1c = 0;
    do {
      *(undefined4 *)(param_1[0x14] + local_14 * 4) = 0;
      *(undefined4 *)(param_1[0x15] + local_14 * 4) = 0;
      *(undefined4 *)(param_1[0x16] + local_14 * 4) = 0;
      *(undefined4 *)(param_1[0x17] + local_14 * 4) = 0;
      iVar6 = param_1[0x33];
      *(undefined4 *)(iVar6 + local_14 * 8) = 0;
      *(undefined4 *)(iVar6 + 4 + local_14 * 8) = 0;
      *(undefined4 *)(param_1[0x3a] + local_14 * 4) = 0;
      iVar6 = param_1[0x2f];
      piVar4 = (int *)(iVar6 + local_1c);
      if ((*(int *)(iVar6 + 4 + local_1c) - *(int *)(iVar6 + local_1c) & 0xfffffffcU) == 0) {
        uVar5 = piVar4[1] - *piVar4 >> 2;
        if (uVar5 < 8) {
          if (uVar5 < 7) {
            if (0x3fffffff - (7 - uVar5) < uVar5) goto LAB_00968f5a;
            uVar5 = uVar5 + (7 - uVar5);
            uVar3 = piVar4[2] - *piVar4 >> 2;
            if (uVar3 < uVar5) {
              if (0x3fffffff - (uVar3 >> 1) < uVar3) {
                uVar3 = 0;
              }
              else {
                uVar3 = uVar3 + (uVar3 >> 1);
              }
              if (uVar3 < uVar5) {
                uVar3 = uVar5;
              }
              FUN_004bf300(uVar3);
            }
            iVar6 = 7 - (piVar4[1] - *piVar4 >> 2);
            if (iVar6 != 0) {
              puVar9 = (undefined4 *)piVar4[1];
              for (; iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar9 = 0;
                puVar9 = puVar9 + 1;
              }
            }
            piVar4[1] = piVar4[1] + (7 - (piVar4[1] - *piVar4 >> 2)) * 4;
          }
        }
        else {
          _Dst = (void *)(*piVar4 + 0x1c);
          if (_Dst != (void *)piVar4[1]) {
            FID_conflict__memcpy(_Dst,(void *)piVar4[1],0);
            piVar4[1] = (int)_Dst;
          }
        }
      }
      **(undefined4 **)(local_1c + param_1[0x2f]) = 0;
      piVar4 = param_1 + 0x2f;
      *(undefined4 *)(*(int *)(param_1[0x2f] + local_1c) + 4) = 0;
      *(undefined4 *)(*(int *)(*piVar4 + local_1c) + 8) = 0;
      *(undefined4 *)(*(int *)(*piVar4 + local_1c) + 0xc) = 0;
      *(undefined4 *)(*(int *)(*piVar4 + local_1c) + 0x10) = 0;
      *(undefined4 *)(*(int *)(*piVar4 + local_1c) + 0x14) = 0;
      piVar4 = (int *)(*piVar4 + local_1c);
      local_14 = local_14 + 1;
      local_1c = local_1c + 0x10;
      *(undefined4 *)(*piVar4 + 0x18) = 0;
    } while (local_14 < DAT_01258a28);
  }
  return;
}

