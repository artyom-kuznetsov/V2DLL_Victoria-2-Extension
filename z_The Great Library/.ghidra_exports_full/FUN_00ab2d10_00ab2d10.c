// FUN_00ab2d10 @ 00ab2d10 body=[[00ab2d10, 00ab2f96]]


errno_t FUN_00ab2d10(tm *param_1,uint *param_2)

{
  uint uVar1;
  int *piVar2;
  errno_t eVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  longlong lVar9;
  uint local_18;
  int local_14;
  uint local_10;
  long local_c;
  uint local_8;
  
  local_c = 0;
  local_10 = 0;
  local_8 = 0;
  if (param_1 == (tm *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00ab7c17();
    return 0x16;
  }
  _memset(param_1,0xff,0x24);
  if (param_2 == (uint *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_00ab7c17();
    return 0x16;
  }
  uVar1 = param_2[1];
  if ((((int)uVar1 < 1) && ((int)uVar1 < 0)) ||
     ((6 < (int)uVar1 && ((7 < (int)uVar1 || (0x93406fff < *param_2)))))) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    return 0x16;
  }
  ___tzset();
  eVar3 = FID_conflict___get_dstbias(&local_c);
  if (((eVar3 != 0) || (eVar3 = FID_conflict___get_dstbias((long *)&local_10), eVar3 != 0)) ||
     (eVar3 = FID_conflict___get_dstbias((long *)&local_8), eVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  uVar1 = param_2[1];
  uVar7 = *param_2;
  if ((-1 < (int)uVar1) && ((0 < (int)uVar1 || (0x3f480 < uVar7)))) {
    local_18 = uVar7 - local_8;
    local_14 = (uVar1 - ((int)local_8 >> 0x1f)) - (uint)(uVar7 < local_8);
    eVar3 = __gmtime64_s(param_1,(__time64_t *)&local_18);
    if (eVar3 != 0) {
      return eVar3;
    }
    if (local_c == 0) {
      return 0;
    }
    iVar4 = __isindst(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    bVar8 = local_18 < local_10;
    local_18 = local_18 - local_10;
    local_14 = (local_14 - ((int)local_10 >> 0x1f)) - (uint)bVar8;
    eVar3 = __gmtime64_s(param_1,(__time64_t *)&local_18);
    if (eVar3 == 0) {
      param_1->tm_isdst = 1;
      return 0;
    }
    return eVar3;
  }
  eVar3 = __gmtime64_s(param_1,(__time64_t *)param_2);
  if (eVar3 != 0) {
    return eVar3;
  }
  if ((local_c == 0) || (iVar4 = __isindst(param_1), iVar4 == 0)) {
    uVar1 = param_1->tm_sec;
    uVar7 = uVar1 - local_8;
    iVar4 = (((int)uVar1 >> 0x1f) - ((int)local_8 >> 0x1f)) - (uint)(uVar1 < local_8);
  }
  else {
    uVar5 = local_8 + local_10;
    param_1->tm_isdst = 1;
    uVar1 = param_1->tm_sec;
    uVar7 = uVar1 - uVar5;
    iVar4 = (((int)uVar1 >> 0x1f) - ((int)uVar5 >> 0x1f)) - (uint)(uVar1 < uVar5);
  }
  iVar6 = __allrem(uVar7,iVar4,0x3c,0);
  param_1->tm_sec = iVar6;
  if (iVar6 < 0) {
    bVar8 = 0x3b < uVar7;
    uVar7 = uVar7 - 0x3c;
    param_1->tm_sec = iVar6 + 0x3c;
    iVar4 = iVar4 + -1 + (uint)bVar8;
  }
  lVar9 = __alldiv(uVar7,iVar4,0x3c,0);
  lVar9 = lVar9 + param_1->tm_min;
  iVar4 = __allrem(lVar9,0x3c,0);
  param_1->tm_min = iVar4;
  if (iVar4 < 0) {
    param_1->tm_min = iVar4 + 0x3c;
    lVar9 = lVar9 + -0x3c;
  }
  lVar9 = __alldiv(lVar9,0x3c,0);
  lVar9 = lVar9 + param_1->tm_hour;
  iVar4 = __allrem(lVar9,0x18,0);
  param_1->tm_hour = iVar4;
  if (iVar4 < 0) {
    param_1->tm_hour = iVar4 + 0x18;
    lVar9 = lVar9 + -0x18;
  }
  lVar9 = __alldiv(lVar9,0x18,0);
  iVar4 = (int)lVar9;
  if (-1 < lVar9) {
    if ((0xffffffff < lVar9) || (iVar4 != 0)) {
      param_1->tm_mday = param_1->tm_mday + iVar4;
      param_1->tm_wday = (param_1->tm_wday + iVar4) % 7;
      goto LAB_00ab2f44;
    }
    if (0xffffffff < lVar9) {
      return 0;
    }
    if (-1 < lVar9) {
      return 0;
    }
  }
  param_1->tm_mday = param_1->tm_mday + iVar4;
  param_1->tm_wday = (iVar4 + 7 + param_1->tm_wday) % 7;
  if (param_1->tm_mday < 1) {
    param_1->tm_yday = param_1->tm_yday + iVar4 + 0x16d;
    param_1->tm_year = param_1->tm_year + -1;
    param_1->tm_mday = param_1->tm_mday + 0x1f;
    param_1->tm_mon = 0xb;
    return 0;
  }
LAB_00ab2f44:
  param_1->tm_yday = param_1->tm_yday + iVar4;
  return 0;
}

