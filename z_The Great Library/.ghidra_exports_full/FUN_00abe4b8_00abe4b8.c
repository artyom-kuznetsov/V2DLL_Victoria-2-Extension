// __cftoa_l @ 00abe4b8 body=[[00abe4b8, 00abe82d]]


/* Library Function - Single Match
    __cftoa_l
   
   Library: Visual Studio 2010 Release */

int __cftoa_l(double *param_1,undefined1 *param_2,uint param_3,size_t param_4,int param_5,
             localeinfo_struct *param_6)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  int *piVar4;
  size_t _SizeInBytes;
  errno_t eVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  short sVar10;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  int iVar14;
  int local_28 [2];
  int local_20;
  char local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_18 = 0x3ff;
  local_8 = 0x30;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_28,param_6);
  if ((int)param_4 < 0) {
    param_4 = 0;
  }
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    piVar4 = __errno();
    iVar14 = 0x16;
LAB_00abe4f3:
    *piVar4 = iVar14;
    FUN_00ab7c17();
    if (local_1c != '\0') {
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
    }
    return iVar14;
  }
  *param_2 = 0;
  if (param_3 <= param_4 + 0xb) {
    piVar4 = __errno();
    iVar14 = 0x22;
    goto LAB_00abe4f3;
  }
  local_10 = *(uint *)param_1;
  if ((*(uint *)((int)param_1 + 4) >> 0x14 & 0x7ff) == 0x7ff) {
    if (param_3 == 0xffffffff) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - 2;
    }
    eVar5 = __cftoe(param_1,param_2 + 2,_SizeInBytes,param_4,0);
    if (eVar5 != 0) {
      *param_2 = 0;
      if (local_1c == '\0') {
        return eVar5;
      }
      *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
      return eVar5;
    }
    if (param_2[2] == '-') {
      *param_2 = 0x2d;
      param_2 = param_2 + 1;
    }
    *param_2 = 0x30;
    param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
    pcVar6 = _strrchr(param_2 + 2,0x65);
    if (pcVar6 != (char *)0x0) {
      *pcVar6 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
      pcVar6[3] = '\0';
    }
    goto LAB_00abe81a;
  }
  if ((*(uint *)((int)param_1 + 4) & 0x80000000) != 0) {
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
  }
  *param_2 = 0x30;
  param_2[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
  sVar10 = (-(ushort)(param_5 != 0) & 0xffe0) + 0x27;
  if (((ulonglong)*param_1 & 0x7ff0000000000000) == 0) {
    param_2[2] = 0x30;
    if (*(int *)param_1 == 0 && ((ulonglong)*param_1 & 0xfffff00000000) == 0) {
      local_18 = 0;
    }
    else {
      local_18 = 0x3fe;
    }
  }
  else {
    param_2[2] = 0x31;
  }
  pcVar12 = param_2 + 3;
  pcVar6 = param_2 + 4;
  if (param_4 == 0) {
    *pcVar12 = '\0';
  }
  else {
    *pcVar12 = *(char *)**(undefined4 **)(local_28[0] + 0xbc);
  }
  if ((((ulonglong)*param_1 & 0xfffff00000000) != 0) || (local_c = 0, *(int *)param_1 != 0)) {
    local_10 = 0;
    local_c = 0xf0000;
    do {
      if ((int)param_4 < 1) break;
      sVar2 = __aullshr();
      uVar3 = sVar2 + 0x30;
      if (0x39 < uVar3) {
        uVar3 = uVar3 + sVar10;
      }
      local_8 = local_8 + -4;
      *pcVar6 = (char)uVar3;
      local_10 = local_10 >> 4 | local_c << 0x1c;
      local_c = local_c >> 4;
      pcVar6 = pcVar6 + 1;
      param_4 = param_4 - 1;
    } while (-1 < (short)local_8);
    if ((-1 < (short)local_8) && (uVar3 = __aullshr(), pcVar11 = pcVar6, 8 < uVar3)) {
      while( true ) {
        pcVar7 = pcVar11 + -1;
        if ((*pcVar7 != 'f') && (*pcVar7 != 'F')) break;
        *pcVar7 = '0';
        pcVar11 = pcVar7;
      }
      if (pcVar7 == pcVar12) {
        pcVar11[-2] = pcVar11[-2] + '\x01';
      }
      else if (*pcVar7 == '9') {
        *pcVar7 = (char)sVar10 + ':';
      }
      else {
        *pcVar7 = *pcVar7 + '\x01';
      }
    }
  }
  if (0 < (int)param_4) {
    _memset(pcVar6,0x30,param_4);
    pcVar6 = pcVar6 + param_4;
  }
  if (*pcVar12 == '\0') {
    pcVar6 = pcVar12;
  }
  *pcVar6 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
  uVar8 = __aullshr();
  uVar9 = (uVar8 & 0x7ff) - local_18;
  iVar14 = -(uint)((uVar8 & 0x7ff) < local_18);
  if (iVar14 < 0) {
    pcVar6[1] = '-';
    bVar13 = uVar9 != 0;
    uVar9 = -uVar9;
    iVar14 = -(iVar14 + (uint)bVar13);
  }
  else {
    pcVar6[1] = '+';
  }
  pcVar11 = pcVar6 + 2;
  *pcVar11 = '0';
  pcVar12 = pcVar11;
  if ((iVar14 < 0) || ((iVar14 < 1 && (uVar9 < 1000)))) {
LAB_00abe7c9:
    if ((-1 < iVar14) && ((0 < iVar14 || (99 < uVar9)))) goto LAB_00abe7d4;
  }
  else {
    cVar1 = __alldvrm(uVar9,iVar14,1000,0);
    *pcVar11 = cVar1 + '0';
    pcVar12 = pcVar6 + 3;
    iVar14 = 0;
    uVar9 = extraout_ECX;
    local_14 = extraout_EDX;
    if (pcVar12 == pcVar11) goto LAB_00abe7c9;
LAB_00abe7d4:
    cVar1 = __alldvrm(uVar9,iVar14,100,0);
    *pcVar12 = cVar1 + '0';
    pcVar12 = pcVar12 + 1;
    iVar14 = 0;
    uVar9 = extraout_ECX_00;
    local_14 = extraout_EDX_00;
  }
  if ((pcVar12 != pcVar11) || ((-1 < iVar14 && ((0 < iVar14 || (9 < uVar9)))))) {
    cVar1 = __alldvrm(uVar9,iVar14,10,0);
    *pcVar12 = cVar1 + '0';
    pcVar12 = pcVar12 + 1;
    uVar9 = extraout_ECX_01;
  }
  *pcVar12 = (char)uVar9 + '0';
  pcVar12[1] = '\0';
LAB_00abe81a:
  if (local_1c != '\0') {
    *(uint *)(local_20 + 0x70) = *(uint *)(local_20 + 0x70) & 0xfffffffd;
  }
  return 0;
}

