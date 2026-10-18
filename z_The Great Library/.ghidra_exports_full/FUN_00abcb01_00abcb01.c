// ___loctotime64_t @ 00abcb01 body=[[00abcb01, 00abcd67]]


/* Library Function - Single Match
    ___loctotime64_t
   
   Library: Visual Studio 2010 Release */

__time64_t __cdecl
___loctotime64_t(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
                )

{
  uint uVar1;
  errno_t eVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
  __time64_t _Var10;
  uint local_44;
  uint local_40;
  int local_3c;
  long local_38;
  int local_34;
  int local_30;
  tm local_2c;
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  uVar6 = param_1 - 0x76c;
  local_3c = param_2;
  local_38 = 0;
  local_40 = 0;
  local_44 = 0;
  if ((((((int)uVar6 < 0x46) || (0x44c < (int)uVar6)) || (0xb < param_2 - 1U)) ||
      ((0x17 < (uint)param_4 || (0x3b < (uint)param_5)))) ||
     ((0x3b < (uint)param_6 || (param_3 < 1)))) {
LAB_00abcd49:
    piVar4 = __errno();
    *piVar4 = 0x16;
    iVar5 = -1;
  }
  else {
    if (*(int *)(&DAT_00ef3334 + param_2 * 4) - *(int *)(&DAT_00ef3330 + param_2 * 4) < param_3) {
      uVar1 = uVar6 & 0x80000003;
      bVar7 = uVar1 == 0;
      if ((int)uVar1 < 0) {
        bVar7 = (uVar1 - 1 | 0xfffffffc) == 0xffffffff;
      }
      if ((((!bVar7) || ((int)uVar6 % 100 == 0)) && (param_1 % 400 != 0)) ||
         ((param_2 != 2 || (0x1d < param_3)))) goto LAB_00abcd49;
    }
    local_30 = *(int *)(&DAT_00ef3330 + param_2 * 4) + param_3;
    uVar1 = uVar6 & 0x80000003;
    bVar7 = uVar1 == 0;
    if ((int)uVar1 < 0) {
      bVar7 = (uVar1 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if ((((bVar7) && ((int)uVar6 % 100 != 0)) || (param_1 % 400 == 0)) && (2 < param_2)) {
      local_30 = local_30 + 1;
    }
    ___tzset();
    eVar2 = FID_conflict___get_dstbias(&local_38);
    if (((eVar2 != 0) || (eVar2 = FID_conflict___get_dstbias((long *)&local_40), eVar2 != 0)) ||
       (eVar2 = FID_conflict___get_dstbias((long *)&local_44), eVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar5 = ((param_1 + -0x641) / 400 - (param_1 + -0x76d) / 100) + -0x11 +
            ((int)(param_1 + -0x76d + (param_1 + -0x76d >> 0x1f & 3U)) >> 2);
    local_34 = iVar5 >> 0x1f;
    lVar8 = __allmul(param_1 + -0x7b2,((int)uVar6 >> 0x1f) - (uint)(uVar6 < 0x46),0x16d,0);
    lVar8 = lVar8 + CONCAT44(local_34,iVar5);
    local_34 = (int)((ulonglong)lVar8 >> 0x20);
    uVar9 = __allmul(lVar8 + local_30,0x18,0);
    uVar9 = __allmul((uint)uVar9 + param_4,
                     (int)((ulonglong)uVar9 >> 0x20) + (param_4 >> 0x1f) +
                     (uint)CARRY4((uint)uVar9,param_4),0x3c,0);
    lVar8 = __allmul((uint)uVar9 + param_5,
                     (int)((ulonglong)uVar9 >> 0x20) + (param_5 >> 0x1f) +
                     (uint)CARRY4((uint)uVar9,param_5),0x3c,0);
    uVar1 = (uint)(lVar8 + (int)local_44);
    local_2c.tm_yday = local_30;
    iVar5 = (int)((ulonglong)(lVar8 + (int)local_44) >> 0x20) + (param_6 >> 0x1f) +
            (uint)CARRY4(uVar1,param_6);
    local_2c.tm_mon = local_3c + -1;
    local_2c.tm_hour = param_4;
    local_2c.tm_min = param_5;
    local_2c.tm_sec = param_6;
    local_2c.tm_year = uVar6;
    if ((param_7 == 1) ||
       (((param_7 == -1 && (local_38 != 0)) && (iVar3 = __isindst(&local_2c), iVar3 != 0)))) {
      iVar5 = iVar5 + ((int)local_40 >> 0x1f) + (uint)CARRY4(uVar1 + param_6,local_40);
    }
  }
  _Var10 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,iVar5);
  return _Var10;
}

