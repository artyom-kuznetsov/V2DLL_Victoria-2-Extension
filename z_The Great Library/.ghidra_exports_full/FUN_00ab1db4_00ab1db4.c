// xtoa @ 00ab1db4 body=[[00ab1db4, 00ab1df6]]


/* Library Function - Single Match
    _xtoa@16
   
   Library: Visual Studio 2010 Release
   __stdcall xtoa,16 */

void xtoa(uint param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char *pcVar3;
  uint in_EAX;
  char *in_ECX;
  char *pcVar4;
  char cVar5;
  
  pcVar3 = in_ECX;
  if (param_2 != 0) {
    *in_ECX = '-';
    in_ECX = in_ECX + 1;
    in_EAX = -in_EAX;
    pcVar3 = in_ECX;
  }
  do {
    pcVar4 = pcVar3;
    uVar1 = (ulonglong)in_EAX;
    uVar2 = uVar1 / param_1;
    in_EAX = (uint)uVar2;
    uVar1 = uVar1 % (ulonglong)param_1;
    cVar5 = (char)uVar1;
    if ((uint)uVar1 < 10) {
      cVar5 = cVar5 + '0';
    }
    else {
      cVar5 = cVar5 + 'W';
    }
    *pcVar4 = cVar5;
    pcVar3 = pcVar4 + 1;
  } while (in_EAX != 0);
  pcVar4[1] = (char)uVar2;
  do {
    cVar5 = *pcVar4;
    *pcVar4 = *in_ECX;
    pcVar4 = pcVar4 + -1;
    *in_ECX = cVar5;
    in_ECX = in_ECX + 1;
  } while (in_ECX < pcVar4);
  return;
}

