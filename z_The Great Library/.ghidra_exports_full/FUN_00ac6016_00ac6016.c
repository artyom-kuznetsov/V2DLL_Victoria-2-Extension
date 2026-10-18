// getVfTableType @ 00ac6016 body=[[00ac6016, 00ac6174]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getVfTableType(class DName const &)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getVfTableType(DName *param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  DName *pDVar4;
  undefined4 *in_stack_00000008;
  DName *pDVar5;
  char *pcVar6;
  DName local_24 [8];
  DName local_1c [8];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  *(undefined4 *)param_1 = *in_stack_00000008;
  uVar1 = in_stack_00000008[1];
  *(undefined4 *)(param_1 + 4) = uVar1;
  cVar2 = (char)uVar1;
  if (cVar2 < '\x02') {
    if (*DAT_00f20978 == '\0') {
      if (cVar2 < '\x02') {
        pDVar5 = (DName *)&local_14;
        pDVar4 = (DName *)DName::DName(local_24,1);
        DName::operator+(pDVar4,pDVar5);
        *(undefined4 *)param_1 = local_14;
        *(undefined4 *)(param_1 + 4) = local_10;
      }
    }
    else {
      getDataIndirectType();
      local_c = local_14;
      local_8 = local_10;
      DName::operator+=((DName *)&local_c,' ');
      puVar3 = (undefined4 *)DName::operator+((DName *)&local_c,local_1c);
      *(undefined4 *)param_1 = *puVar3;
      uVar1 = puVar3[1];
      *(undefined4 *)(param_1 + 4) = uVar1;
      if ((char)uVar1 < '\x02') {
        if (*DAT_00f20978 != '@') {
          pcVar6 = "{for ";
          do {
            DName::operator+=(param_1,pcVar6);
            do {
              if ((('\x01' < (char)param_1[4]) || (*DAT_00f20978 == '\0')) || (*DAT_00f20978 == '@')
                 ) {
                if ((char)param_1[4] < '\x02') {
                  if (*DAT_00f20978 == '\0') {
                    DName::operator+=(param_1,1);
                  }
                  DName::operator+=(param_1,'}');
                }
LAB_00ac6139:
                if (*DAT_00f20978 != '@') {
                  return param_1;
                }
                goto LAB_00ac6143;
              }
              getScope();
              pDVar5 = (DName *)&local_14;
              pDVar4 = (DName *)DName::DName(local_24,'`');
              DName::operator+(pDVar4,pDVar5);
              local_c = local_14;
              local_8 = local_10;
              DName::operator+=((DName *)&local_c,'\'');
              DName::operator+=(param_1,(DName *)&local_c);
              if (*DAT_00f20978 == '@') {
                DAT_00f20978 = DAT_00f20978 + 1;
              }
              if ('\x01' < (char)param_1[4]) goto LAB_00ac6139;
            } while (*DAT_00f20978 == '@');
            pcVar6 = "s ";
          } while( true );
        }
LAB_00ac6143:
        DAT_00f20978 = DAT_00f20978 + 1;
      }
    }
  }
  return param_1;
}

