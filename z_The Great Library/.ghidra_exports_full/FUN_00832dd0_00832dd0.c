// FUN_00832dd0 @ 00832dd0 body=[[00832dd0, 00833405]]


/* WARNING: Removing unreachable block (ram,0x0083314c) */
/* WARNING: Removing unreachable block (ram,0x0083315a) */
/* WARNING: Removing unreachable block (ram,0x00833165) */
/* WARNING: Removing unreachable block (ram,0x00833184) */
/* WARNING: Removing unreachable block (ram,0x00833205) */

void FUN_00832dd0(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  undefined8 uVar13;
  int *local_30;
  uint *local_10;
  uint *local_c;
  
  iVar12 = *(int *)(param_3 + 0x30);
  iVar5 = *(int *)(param_3 + 0x2c);
  bVar3 = true;
  if (iVar5 == iVar12) {
LAB_00832e18:
    iVar12 = *(int *)(param_3 + 0x40);
    iVar5 = *(int *)(param_3 + 0x3c);
    local_10 = (uint *)(param_3 + 0x3c);
    if (iVar5 == iVar12) {
      return;
    }
    do {
      if (*(int *)(iVar5 + 4) == *(int *)(param_2 + 0x20)) break;
      iVar5 = iVar5 + 8;
    } while (iVar5 != iVar12);
    if (iVar5 == iVar12) {
      return;
    }
    *param_4 = *param_4 + 0x32;
    local_c = (uint *)(param_3 + 0x2c);
  }
  else {
    do {
      if (*(int *)(iVar5 + 4) == *(int *)(param_2 + 0x20)) break;
      iVar5 = iVar5 + 8;
    } while (iVar5 != iVar12);
    if (iVar5 == iVar12) goto LAB_00832e18;
    local_c = (uint *)(param_3 + 0x3c);
    local_10 = (uint *)(param_3 + 0x2c);
    bVar3 = false;
  }
  local_30 = (int *)(param_3 + 0x3c);
  if (*(int *)(param_2 + 0x20) != *(int *)(param_1 + 0x142c)) {
    iVar12 = *(int *)(param_1 + 0xd8c);
    iVar5 = *(int *)(param_1 + 0xd88);
    iVar6 = iVar5;
    if (iVar5 != iVar12) {
      do {
        if (*(int *)(iVar6 + 4) == *(int *)(param_2 + 0x20)) break;
        iVar6 = iVar6 + 8;
      } while (iVar6 != iVar12);
      if (iVar6 != iVar12) goto LAB_00832f32;
    }
    if (*(int *)(*(int *)(*(int *)(param_2 + 0xbe8) + *(int *)(param_1 + 0x20) * 4) + 0x20) == 0) {
      bVar2 = false;
      uVar10 = *local_c;
LAB_00832ec0:
      if ((uVar10 < *local_c) || (local_c[1] <= uVar10)) goto LAB_00832f29;
      if ((*(char *)(param_1 + 0x12d0) == '\0') &&
         (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(uVar10 + 4) * 4) + 0x12d0) !=
          '\0')) {
        bVar2 = true;
      }
      iVar12 = *(int *)(param_1 + 0xd8c);
      iVar6 = iVar5;
      if (iVar5 != iVar12) {
        do {
          if (*(int *)(iVar6 + 4) == *(int *)(uVar10 + 4)) break;
          iVar6 = iVar6 + 8;
        } while (iVar6 != iVar12);
        if (iVar6 != iVar12) {
          if (!bVar2) goto LAB_00832f32;
LAB_00832f29:
          *param_4 = 0;
          goto LAB_00832f32;
        }
      }
      uVar10 = uVar10 + 8;
      goto LAB_00832ec0;
    }
  }
LAB_00832f32:
  if ((*local_c < local_c[1]) && (*local_10 < local_10[1])) {
    iVar12 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*local_c + 4) * 4);
    iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*local_10 + 4) * 4);
    puVar11 = (uint *)(iVar5 + 0xd58);
    for (uVar10 = *(uint *)(iVar12 + 0xd58);
        (*(uint *)(iVar12 + 0xd58) <= uVar10 && (uVar10 < *(uint *)(iVar12 + 0xd5c)));
        uVar10 = uVar10 + 8) {
      uVar7 = *local_c;
      iVar6 = *(int *)(uVar10 + 4);
      uVar8 = local_c[1];
      if (uVar7 == uVar8) {
LAB_00832fc7:
        uVar7 = *(uint *)(iVar5 + 0xd5c);
        uVar8 = *puVar11;
        if (uVar8 != uVar7) {
          do {
            if (*(int *)(uVar8 + 4) == iVar6) break;
            uVar8 = uVar8 + 8;
          } while (uVar8 != uVar7);
          if (uVar8 != uVar7) goto LAB_0083300b;
        }
        if (*(int *)(param_1 + 0x20) != iVar6) {
          FUN_005dcbd0();
        }
      }
      else {
        do {
          if (*(int *)(uVar7 + 4) == iVar6) break;
          uVar7 = uVar7 + 8;
        } while (uVar7 != uVar8);
        if (uVar7 == uVar8) goto LAB_00832fc7;
      }
LAB_0083300b:
    }
    for (uVar10 = *puVar11; (*puVar11 <= uVar10 && (uVar10 < *(uint *)(iVar5 + 0xd5c)));
        uVar10 = uVar10 + 8) {
      uVar7 = local_10[1];
      uVar8 = *local_10;
      iVar6 = *(int *)(uVar10 + 4);
      if (uVar8 == uVar7) {
LAB_00833042:
        iVar1 = *(int *)(iVar12 + 0xd5c);
        iVar9 = *(int *)(iVar12 + 0xd58);
        if (iVar9 != iVar1) {
          do {
            if (*(int *)(iVar9 + 4) == iVar6) break;
            iVar9 = iVar9 + 8;
          } while (iVar9 != iVar1);
          if (iVar9 != iVar1) goto LAB_0083308a;
        }
        if (*(int *)(param_1 + 0x20) != iVar6) {
          FUN_005dcbd0();
        }
      }
      else {
        do {
          if (*(int *)(uVar8 + 4) == iVar6) break;
          uVar8 = uVar8 + 8;
        } while (uVar8 != uVar7);
        if (uVar8 == uVar7) goto LAB_00833042;
      }
LAB_0083308a:
    }
  }
  for (uVar10 = *local_c; (*local_c <= uVar10 && (uVar10 < local_c[1])); uVar10 = uVar10 + 8) {
    if (*(int *)(uVar10 + 4) != *(int *)(param_1 + 0x20)) {
      FUN_005dcbd0();
    }
  }
  for (uVar10 = *local_10; (*local_10 <= uVar10 && (uVar10 < local_10[1])); uVar10 = uVar10 + 8) {
    if (*(int *)(uVar10 + 4) != *(int *)(param_1 + 0x20)) {
      FUN_005dcbd0();
    }
  }
  FUN_005dcbd0();
  iVar12 = 0x3e9;
  if (!bVar3) {
    uVar13 = __allmul(0x3e9,0,2000,0);
    iVar12 = __alldiv(uVar13,1000,0);
  }
  FUN_00401000(0x47c35040);
  iVar5 = FUN_00b31c00();
  iVar12 = __alldiv((longlong)iVar12 * (longlong)iVar5,1000,0);
  iVar12 = (int)((ulonglong)((longlong)iVar12 * -0x10624dd3) >> 0x20);
  *param_4 = *param_4 + ((iVar12 >> 6) - (iVar12 >> 0x1f));
  if ((DAT_01317d28 < -1) && (cVar4 = FUN_0093c6f0(), cVar4 != '\0')) {
    *param_4 = 100;
    return;
  }
  uVar10 = *local_c;
  while ((*local_c <= uVar10 && (uVar10 < local_c[1]))) {
    iVar12 = *(int *)(uVar10 + 4);
    iVar5 = *(int *)(*(int *)(param_1 + 0xbe8) + iVar12 * 4);
    uVar10 = uVar10 + 8;
    if (*(int *)(iVar5 + 0x20) == 0) {
      if (*(int *)(*(int *)(*(int *)(param_1 + 0xbe8) + *(int *)(param_2 + 0x20) * 4) + 0x3c) <
          *(int *)(*(int *)(*(int *)(param_1 + 0xbe8) + iVar12 * 4) + 0x3c)) {
        *param_4 = *param_4 + -10;
      }
    }
    else {
      iVar6 = 0x19;
      if (50000 < *(int *)(iVar5 + 0x3c)) {
        iVar6 = 0x32;
      }
      if (*(int *)(*(int *)(*(int *)(param_1 + 0xbe8) + *(int *)(param_2 + 0x20) * 4) + 0x3c) <
          *(int *)(*(int *)(*(int *)(param_1 + 0xbe8) + iVar12 * 4) + 0x3c)) {
        iVar6 = iVar6 + 0x19;
      }
      *param_4 = *param_4 - iVar6;
    }
  }
  if (*(int *)(*(int *)(*(int *)(param_2 + 0xbe8) + *(int *)(param_1 + 0x20) * 4) + 0x20) != 0) {
    if ((*(char *)(param_2 + 0x31) != '\0') && (*(char *)(param_1 + 0x31) != '\0')) {
      *param_4 = *param_4 + 0x19;
    }
    iVar12 = *(int *)(param_3 + 0x40);
    iVar5 = *local_30;
    if (iVar5 != iVar12) {
      do {
        if (*(int *)(iVar5 + 4) == *(int *)(param_2 + 0x20)) break;
        iVar5 = iVar5 + 8;
      } while (iVar5 != iVar12);
      if (iVar5 != iVar12) {
        *param_4 = *param_4 +
                   *(int *)(*(int *)(*(int *)(param_1 + 0xbe8) + *(int *)(param_2 + 0x20) * 4) +
                           0x3c) / 5000 + 0x14;
      }
    }
    return;
  }
  uVar10 = *local_c;
  while( true ) {
    if ((uVar10 < *local_c) || (local_c[1] <= uVar10)) goto LAB_00833334;
    if (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(uVar10 + 4) * 4) + 0x142c) ==
        *(int *)(param_1 + 0x20)) break;
    uVar10 = uVar10 + 8;
  }
  *param_4 = (int)(*param_4 + (*param_4 >> 0x1f & 3U)) >> 2;
LAB_00833334:
  iVar12 = *(int *)(param_3 + 0x30);
  iVar5 = *(int *)(param_3 + 0x2c);
  if (iVar5 != iVar12) {
    do {
      if (*(int *)(iVar5 + 4) == *(int *)(param_2 + 0x20)) break;
      iVar5 = iVar5 + 8;
    } while (iVar5 != iVar12);
    if ((iVar5 != iVar12) && (cVar4 = FUN_0093c630(), cVar4 == '\0')) {
      if (*(char *)(param_2 + 0x31) != '\0') {
        return;
      }
      if (*(char *)(param_1 + 0x31) != '\0') {
        return;
      }
      *param_4 = *param_4 / 2;
      return;
    }
  }
  *param_4 = *param_4 + 0x14;
  return;
}

