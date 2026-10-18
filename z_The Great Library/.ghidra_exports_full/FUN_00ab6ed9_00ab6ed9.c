// xtoa_s @ 00ab6ed9 body=[[00ab6ed9, 00ab6f92]]


/* Library Function - Single Match
    _xtoa_s@20
   
   Library: Visual Studio 2010 Release
   __stdcall xtoa_s,20 */

int xtoa_s(uint param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  char *pcVar2;
  uint in_EAX;
  int *piVar3;
  char *in_ECX;
  char *pcVar4;
  char cVar5;
  uint uVar6;
  char *pcVar7;
  int iStack_14;
  
  if (in_ECX == (char *)0x0) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_00ab7c17();
    return 0x16;
  }
  if (param_1 == 0) {
LAB_00ab6f04:
    piVar3 = __errno();
    iStack_14 = 0x16;
  }
  else {
    *in_ECX = '\0';
    if ((param_3 != 0) + 1 < param_1) {
      if (0x22 < param_2 - 2) goto LAB_00ab6f04;
      pcVar7 = in_ECX;
      if (param_3 != 0) {
        *in_ECX = '-';
        pcVar7 = in_ECX + 1;
        in_EAX = -in_EAX;
      }
      uVar6 = (uint)(param_3 != 0);
      pcVar2 = pcVar7;
      do {
        pcVar4 = pcVar2;
        uVar1 = (ulonglong)in_EAX;
        in_EAX = in_EAX / param_2;
        cVar5 = (char)(uVar1 % (ulonglong)param_2);
        if ((uint)(uVar1 % (ulonglong)param_2) < 10) {
          cVar5 = cVar5 + '0';
        }
        else {
          cVar5 = cVar5 + 'W';
        }
        *pcVar4 = cVar5;
        uVar6 = uVar6 + 1;
      } while ((in_EAX != 0) && (pcVar2 = pcVar4 + 1, uVar6 < param_1));
      if (uVar6 < param_1) {
        pcVar4[1] = '\0';
        do {
          cVar5 = *pcVar4;
          *pcVar4 = *pcVar7;
          pcVar4 = pcVar4 + -1;
          *pcVar7 = cVar5;
          pcVar7 = pcVar7 + 1;
        } while (pcVar7 < pcVar4);
        return 0;
      }
      *in_ECX = '\0';
    }
    piVar3 = __errno();
    iStack_14 = 0x22;
  }
  *piVar3 = iStack_14;
  FUN_00ab7c17();
  return iStack_14;
}

