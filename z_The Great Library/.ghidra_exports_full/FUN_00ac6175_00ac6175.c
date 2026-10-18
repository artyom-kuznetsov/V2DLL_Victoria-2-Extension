// getStringEncoding @ 00ac6175 body=[[00ac6175, 00ac6227]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getStringEncoding(char *,int)
   
   Library: Visual Studio 2010 Release */

char * __cdecl UnDecorator::getStringEncoding(char *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  DName::DName((DName *)&local_c,(char *)param_2);
  pcVar1 = DAT_00f20978;
  cVar2 = *DAT_00f20978;
  DAT_00f20978 = DAT_00f20978 + 1;
  if ((cVar2 != '@') || (cVar2 = *DAT_00f20978, DAT_00f20978 = pcVar1 + 2, cVar2 != '_')) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffff00ff;
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\x02';
    return param_1;
  }
  DAT_00f20978 = pcVar1 + 3;
  getDimension(SUB41(local_14,0));
  getDimension(SUB41(local_14,0));
  cVar2 = *DAT_00f20978;
  if (cVar2 != '\0') {
    do {
      if (cVar2 == '@') break;
      DAT_00f20978 = DAT_00f20978 + 1;
      cVar2 = *DAT_00f20978;
    } while (cVar2 != '\0');
    if (*DAT_00f20978 != '\0') {
      DAT_00f20978 = DAT_00f20978 + 1;
      *(undefined4 *)param_1 = local_c;
      *(undefined4 *)(param_1 + 4) = local_8;
      return param_1;
    }
  }
  DAT_00f20978 = DAT_00f20978 + -1;
  DName::DName((DName *)param_1,1);
  return param_1;
}

