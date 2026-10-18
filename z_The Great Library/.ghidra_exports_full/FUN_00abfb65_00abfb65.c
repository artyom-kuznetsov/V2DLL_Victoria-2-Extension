// FUN_00abfb65 @ 00abfb65 body=[[00abfb65, 00abfd5a]]


int FUN_00abfb65(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
                int param_7,int param_8,int param_9)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  errno_t eVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  long local_8;
  
  local_8 = 0;
  if (param_2 == 1) {
    uVar1 = param_3 & 0x80000003;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
    }
    if (((uVar1 == 0) && ((int)param_3 % 100 != 0)) || ((int)(param_3 + 0x76c) % 400 == 0)) {
      iVar5 = *(int *)(&DAT_00ef32fc + in_EAX * 4);
    }
    else {
      iVar5 = *(int *)(&DAT_00ef3330 + in_EAX * 4);
    }
    iVar6 = iVar5 + 1;
    iVar4 = (int)(param_3 * 0x16d + -0x63db +
                 ((int)((param_3 - 1) + ((int)(param_3 - 1) >> 0x1f & 3U)) >> 2) + iVar6 +
                 ((int)(param_3 + 299) / 400 - (int)(param_3 - 1) / 100)) % 7;
    iVar2 = (param_4 * 7 - iVar4) + param_5;
    if (iVar4 <= param_5) {
      iVar6 = iVar5 + -6;
    }
    iVar6 = iVar6 + iVar2;
    if (param_4 == 5) {
      if (((uVar1 == 0) && ((int)param_3 % 100 != 0)) || ((int)(param_3 + 0x76c) % 400 == 0)) {
        iVar2 = (&DAT_00ef3300)[in_EAX];
      }
      else {
        iVar2 = *(int *)(&DAT_00ef3334 + in_EAX * 4);
      }
      if (iVar2 < iVar6) {
        iVar6 = iVar6 + -7;
      }
    }
  }
  else {
    uVar1 = param_3 & 0x80000003;
    bVar7 = uVar1 == 0;
    if ((int)uVar1 < 0) {
      bVar7 = (uVar1 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (((bVar7) && (iVar2 = (int)param_3 / 100, (int)param_3 % 100 != 0)) ||
       (iVar2 = (int)(param_3 + 0x76c) / 400, (int)(param_3 + 0x76c) % 400 == 0)) {
      iVar6 = *(int *)(&DAT_00ef32fc + in_EAX * 4);
    }
    else {
      iVar6 = *(int *)(&DAT_00ef3330 + in_EAX * 4);
    }
    iVar6 = iVar6 + param_6;
  }
  param_9 = ((in_ECX * 0x3c + param_7) * 0x3c + param_8) * 1000 + param_9;
  if (param_1 == 1) {
    DAT_00ef3180 = param_3;
    DAT_00ef3184 = iVar6;
    DAT_00ef3188 = param_9;
  }
  else {
    DAT_00ef3190 = iVar6;
    DAT_00ef3194 = param_9;
    eVar3 = FID_conflict___get_dstbias(&local_8);
    if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar2 = local_8 * 1000;
    DAT_00ef3194 = DAT_00ef3194 + iVar2;
    DAT_00ef318c = param_3;
    if (DAT_00ef3194 < 0) {
      DAT_00ef3194 = DAT_00ef3194 + 86400000;
      DAT_00ef3190 = DAT_00ef3190 + -1;
    }
    else {
      iVar2 = 86400000;
      if (86399999 < DAT_00ef3194) {
        DAT_00ef3194 = DAT_00ef3194 + -86400000;
        DAT_00ef3190 = DAT_00ef3190 + 1;
      }
    }
  }
  return iVar2;
}

