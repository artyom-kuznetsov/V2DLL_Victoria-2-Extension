// getFunctionIndirectType @ 00ac865c body=[[00ac865c, 00ac8a3a]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getFunctionIndirectType(class DName const &)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getFunctionIndirectType(DName *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  DName *pDVar4;
  undefined4 *puVar5;
  int *piVar6;
  DName *pDVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  int *in_stack_00000008;
  DName local_3c [8];
  DName local_34 [8];
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  cVar1 = *DAT_00f20978;
  if (cVar1 == '\0') {
    operator+((DNameStatus)param_1,(DName *)0x1);
    return param_1;
  }
  if (((cVar1 < '6') || ('9' < cVar1)) && (cVar1 != '_')) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffff00ff;
    *(undefined4 *)param_1 = 0;
    param_1[4] = (DName)0x2;
    return param_1;
  }
  uVar8 = (int)cVar1 - 0x36;
  pcVar3 = DAT_00f20978 + 1;
  if (uVar8 == 0x29) {
    cVar1 = *pcVar3;
    if (cVar1 == '\0') {
      DAT_00f20978 = pcVar3;
      operator+((DNameStatus)param_1,(DName *)0x1);
      return param_1;
    }
    uVar8 = (int)cVar1 - 0x3d;
    DAT_00f20978 = DAT_00f20978 + 2;
    if (3 < (int)uVar8) {
      bVar10 = SBORROW4(uVar8,7);
      iVar2 = cVar1 + -0x44;
      bVar9 = uVar8 == 7;
LAB_00ac86f3:
      if (bVar9 || bVar10 != iVar2 < 0) goto LAB_00ac86f8;
    }
  }
  else {
    DAT_00f20978 = pcVar3;
    if (-1 < (int)uVar8) {
      bVar10 = SBORROW4(uVar8,3);
      iVar2 = cVar1 + -0x39;
      bVar9 = uVar8 == 3;
      goto LAB_00ac86f3;
    }
  }
  uVar8 = 0xffffffff;
LAB_00ac86f8:
  if (uVar8 == 0xffffffff) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffff00ff;
    *(undefined4 *)param_1 = 0;
    param_1[4] = (DName)0x2;
    return param_1;
  }
  local_14 = 0;
  local_10 = local_10 & 0xffff0000;
  local_c = *in_stack_00000008;
  local_8 = in_stack_00000008[1];
  if ((uVar8 & 2) != 0) {
    pDVar7 = (DName *)&local_1c;
    pDVar4 = (DName *)DName::DName((DName *)&local_24,"::");
    DName::operator+(pDVar4,pDVar7);
    local_c = local_1c;
    local_8 = local_18;
    if (*DAT_00f20978 == '\0') {
      pDVar7 = (DName *)&local_24;
      pDVar4 = (DName *)DName::DName(local_3c,1);
      DName::operator+(pDVar4,pDVar7);
      local_c = local_24;
      local_8 = local_20;
    }
    else {
      getScope();
      pDVar7 = (DName *)&local_24;
      pDVar4 = (DName *)DName::DName(local_3c,' ');
      DName::operator+(pDVar4,pDVar7);
      local_1c = local_24;
      local_18 = local_20;
      DName::operator+=((DName *)&local_1c,(DName *)&local_c);
      local_c = local_1c;
      local_8 = local_18;
    }
    if (*DAT_00f20978 == '\0') {
      pDVar7 = param_1;
      pDVar4 = (DName *)DName::DName(local_3c,1);
      DName::operator+(pDVar4,pDVar7);
      return param_1;
    }
    if (*DAT_00f20978 != '@') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffff00ff;
      *(undefined4 *)param_1 = 0;
      param_1[4] = (DName)0x2;
      return param_1;
    }
    DAT_00f20978 = DAT_00f20978 + 1;
    if (((byte)DAT_00f20988 & 0x60) == 0x60) {
      pDVar7 = (DName *)getThisType();
      DName::operator|=((DName *)&local_14,pDVar7);
    }
    else {
      puVar5 = (undefined4 *)getThisType();
      local_14 = *puVar5;
      local_10 = puVar5[1];
    }
  }
  if ((uVar8 & 4) != 0) {
    if ((~(DAT_00f20988 >> 1) & 1) == 0) {
      pDVar7 = (DName *)getBasedType();
      DName::operator|=((DName *)&local_c,pDVar7);
    }
    else {
      getBasedType();
      pDVar7 = (DName *)&local_24;
      pDVar4 = (DName *)DName::DName(local_34,' ');
      DName::operator+(pDVar4,pDVar7);
      local_1c = local_24;
      local_18 = local_20;
      DName::operator+=((DName *)&local_1c,(DName *)&local_c);
      local_c = local_1c;
      local_8 = local_18;
    }
  }
  if ((~(DAT_00f20988 >> 1) & 1) == 0) {
    pDVar7 = (DName *)getCallingConvention();
    DName::operator|=((DName *)&local_c,pDVar7);
  }
  else {
    pDVar7 = local_3c;
    pDVar4 = (DName *)getCallingConvention();
    piVar6 = (int *)DName::operator+(pDVar4,pDVar7);
    local_c = *piVar6;
    local_8 = piVar6[1];
  }
  if (*in_stack_00000008 != 0) {
    pDVar7 = (DName *)&local_24;
    pDVar4 = (DName *)DName::DName(local_3c,'(');
    DName::operator+(pDVar4,pDVar7);
    local_1c = local_24;
    local_18 = local_20;
    DName::operator+=((DName *)&local_1c,')');
    local_c = local_1c;
    local_8 = local_18;
  }
  piVar6 = _HeapManager::getMemory((_HeapManager *)&DAT_00f20958,8,0);
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    *(undefined1 *)(piVar6 + 1) = 0;
    piVar6[1] = piVar6[1] & 0xffff00ff;
    *piVar6 = 0;
  }
  getReturnType((DName *)&local_2c);
  getArgumentTypes();
  pDVar7 = (DName *)&local_24;
  pDVar4 = (DName *)DName::DName(local_34,'(');
  DName::operator+(pDVar4,pDVar7);
  local_1c = local_24;
  local_18 = local_20;
  DName::operator+=((DName *)&local_1c,')');
  DName::operator+=((DName *)&local_c,(DName *)&local_1c);
  if ((((byte)DAT_00f20988 & 0x60) != 0x60) && ((uVar8 & 2) != 0)) {
    DName::operator+=((DName *)&local_c,(DName *)&local_14);
  }
  if ((~(DAT_00f20988 >> 8) & 1) == 0) {
    pDVar7 = (DName *)getThrowTypes();
    DName::operator|=((DName *)&local_c,pDVar7);
  }
  else {
    pDVar7 = (DName *)getThrowTypes();
    DName::operator+=((DName *)&local_c,pDVar7);
  }
  if (piVar6 == (int *)0x0) {
    DName::DName(param_1,3);
  }
  else {
    *piVar6 = local_c;
    piVar6[1] = local_8;
    *(undefined4 *)param_1 = local_2c;
    *(undefined4 *)(param_1 + 4) = local_28;
  }
  return param_1;
}

