// x64toa @ 00ab1e21 body=[[00ab1e21, 00ab1e8f]]


/* Library Function - Single Match
    @x64toa@20
   
   Library: Visual Studio 2010 Release
   __fastcall x64toa,20 */

void __fastcall
x64toa(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,int param_6)

{
  char *pcVar1;
  char *in_EAX;
  char cVar2;
  uint extraout_ECX;
  char *pcVar3;
  longlong lVar4;
  
  lVar4 = CONCAT44(param_4,param_3);
  pcVar1 = in_EAX;
  if (param_6 != 0) {
    *in_EAX = '-';
    in_EAX = in_EAX + 1;
    lVar4 = CONCAT44(-(param_4 + (uint)(param_3 != 0)),-param_3);
    pcVar1 = in_EAX;
  }
  do {
    pcVar3 = pcVar1;
    lVar4 = __aulldvrm(lVar4,param_5,0);
    if (extraout_ECX < 10) {
      cVar2 = (char)extraout_ECX + '0';
    }
    else {
      cVar2 = (char)extraout_ECX + 'W';
    }
    *pcVar3 = cVar2;
    pcVar1 = pcVar3 + 1;
  } while (lVar4 != 0);
  pcVar3[1] = '\0';
  do {
    cVar2 = *pcVar3;
    *pcVar3 = *in_EAX;
    pcVar3 = pcVar3 + -1;
    *in_EAX = cVar2;
    in_EAX = in_EAX + 1;
  } while (in_EAX < pcVar3);
  return;
}

