// getExtendedDataIndirectType @ 00ac5c1b body=[[00ac5c1b, 00ac5de2]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getExtendedDataIndirectType(char const * &,bool
   &,int)
   
   Library: Visual Studio 2010 Release */

char ** __cdecl UnDecorator::getExtendedDataIndirectType(char **param_1,bool *param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  int in_stack_00000010;
  DName local_28 [8];
  DName local_20 [8];
  char *local_18;
  uint local_14;
  char *local_10;
  uint local_c;
  char local_8 [4];
  
  iVar3 = (int)DAT_00f20978;
  local_14 = local_c & 0xffff0000;
  local_18 = (char *)0x0;
  DAT_00f20978 = (char *)((int)DAT_00f20978 + 1);
  iVar4 = (int)*DAT_00f20978;
  if (iVar4 == 0x41) {
    if (in_stack_00000010 == 0) {
      puVar6 = &DAT_00df9644;
      if (**(char **)param_2 != '&') {
        puVar6 = &DAT_00ddbc68;
      }
      *(undefined **)param_2 = puVar6;
    }
LAB_00ac5dcd:
    DAT_00f20978 = DAT_00f20978 + 1;
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[1] = (char *)((uint)param_1[1] & 0xffff00ff);
  }
  else {
    local_c = local_14;
    if (iVar4 == 0x42) {
      if (in_stack_00000010 == 0) {
        *(undefined1 *)param_3 = 1;
        local_8[0] = '>';
        local_10 = (char *)0x0;
        DName::doPchar((DName *)&local_10,local_8,1);
        goto LAB_00ac5dcd;
      }
    }
    else {
      if (iVar4 == 0x43) {
        *(undefined **)param_2 = &DAT_00df9644;
        goto LAB_00ac5dcd;
      }
      if ((*DAT_00f20978 == '\0') || (cVar2 = *(char *)(iVar3 + 2), cVar2 == '\0')) {
        DName::DName((DName *)param_1,1);
        return param_1;
      }
      if (in_stack_00000010 == 0) {
        DAT_00f20978 = (char *)(iVar3 + 3);
        uVar1 = cVar2 + -0x30 + (iVar4 + -0x30) * 0x10;
        if (1 < uVar1) {
          local_8[0] = ',';
          local_10 = (char *)0x0;
          DName::doPchar((DName *)&local_10,local_8,1);
          DName::DName(local_20,(ulonglong)uVar1);
          puVar5 = (undefined4 *)DName::operator+((DName *)&local_10,local_28);
          local_18 = (char *)*puVar5;
          local_14 = puVar5[1];
        }
        DName::operator+=((DName *)&local_18,'>');
        local_10 = local_18;
        local_c = local_14;
        if (*DAT_00f20978 == '$') {
          DAT_00f20978 = DAT_00f20978 + 1;
        }
        else {
          DName::operator+=((DName *)&local_18,'^');
        }
        local_10 = local_18;
        local_c = local_14;
        if (*DAT_00f20978 == '\0') {
          DName::operator+=((DName *)&local_10,1);
        }
        else {
          DAT_00f20978 = DAT_00f20978 + 1;
        }
        *param_1 = local_10;
        param_1[1] = (char *)(local_c | 0x4000);
        return param_1;
      }
    }
    param_1[1] = (char *)((uint)param_1[1] & 0xffff00ff);
    *(undefined1 *)(param_1 + 1) = 2;
  }
  *param_1 = (char *)0x0;
  return param_1;
}

