// getDecoratedName @ 00ac8137 body=[[00ac8137, 00ac83a4]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDecoratedName(void)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getDecoratedName(void)

{
  char *pcVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  DName *in_stack_00000004;
  int local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  if ((DAT_00f20988 & 0x2000) == 0) {
    if (*DAT_00f20978 != '?') {
      if (*DAT_00f20978 == '\0') {
        DName::DName(in_stack_00000004,1);
        return in_stack_00000004;
      }
LAB_00ac8335:
      *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xffff00ff;
      *(undefined4 *)in_stack_00000004 = 0;
      in_stack_00000004[4] = (DName)0x2;
      return in_stack_00000004;
    }
    pcVar1 = DAT_00f20978 + 1;
    if ((*pcVar1 != '?') || (DAT_00f20978[2] != '?')) {
      DAT_00f20978 = pcVar1;
      getSymbolName();
      uVar3 = local_c;
      iVar4 = local_10;
      if ((local_10 == 0) || ((local_c & 0x200) == 0)) {
        local_8 = 0;
      }
      else {
        local_8 = 1;
      }
      uVar5 = local_c >> 0xf;
      if ((char)local_c < '\x02') {
        if (((*DAT_00f20978 != '\0') && (*DAT_00f20978 != '@')) && (getScope(), local_18 != 0)) {
          if (DAT_00f20990 == '\0') {
            local_28 = local_18;
            local_24 = local_14;
            DName::operator+=((DName *)&local_28,"::");
            local_20 = local_28;
            local_1c = local_24;
            DName::operator+=((DName *)&local_20,(DName *)&local_10);
            uVar3 = local_1c;
            iVar4 = local_20;
            local_10 = local_20;
            local_c = local_1c;
          }
          else {
            DAT_00f20990 = '\0';
            local_20 = iVar4;
            local_1c = uVar3;
            DName::operator+=((DName *)&local_20,(DName *)&local_18);
            local_10 = local_20;
            local_c = local_1c;
            uVar3 = local_1c;
            iVar4 = local_20;
            if (*DAT_00f20978 != '@') {
              piVar2 = (int *)getScope();
              local_18 = *piVar2;
              local_14 = piVar2[1];
              local_20 = *piVar2;
              local_1c = piVar2[1];
              DName::operator+=((DName *)&local_20,"::");
              local_28 = local_20;
              local_24 = local_1c;
              DName::operator+=((DName *)&local_28,(DName *)&local_10);
              uVar3 = local_24;
              iVar4 = local_28;
              local_10 = local_28;
              local_c = local_24;
            }
          }
        }
        if ((local_8 != 0) && (iVar4 != 0)) {
          uVar3 = uVar3 | 0x200;
          local_c = uVar3;
        }
        if ((uVar5 & 1) != 0) {
          uVar3 = uVar3 | 0x8000;
          local_c = uVar3;
        }
        if ((iVar4 != 0) && ((uVar3 & 0x1000) == 0)) {
          if (*DAT_00f20978 != '\0') {
            if (*DAT_00f20978 != '@') goto LAB_00ac8335;
            DAT_00f20978 = DAT_00f20978 + 1;
          }
          if ((((DAT_00f20988 & 0x1000) == 0) || (local_8 != 0)) || ((uVar3 & 0x8000) != 0)) {
            composeDeclaration(in_stack_00000004);
            return in_stack_00000004;
          }
          local_28 = 0;
          local_24 = local_24 & 0xffff0000;
          composeDeclaration((DName *)&local_20);
        }
      }
      *(int *)in_stack_00000004 = iVar4;
      *(uint *)(in_stack_00000004 + 4) = uVar3;
      return in_stack_00000004;
    }
    DAT_00f20978 = pcVar1;
    getDecoratedName();
    for (; *DAT_00f20978 != '\0'; DAT_00f20978 = DAT_00f20978 + 1) {
    }
  }
  else {
    DAT_00f20988 = DAT_00f20988 & 0xffffdfff;
    getDataType((DName *)&local_28);
    DAT_00f20988 = DAT_00f20988 | 0x2000;
  }
  *(int *)in_stack_00000004 = local_28;
  *(uint *)(in_stack_00000004 + 4) = local_24;
  return in_stack_00000004;
}

