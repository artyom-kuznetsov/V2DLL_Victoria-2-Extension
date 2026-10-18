// getStringHelper @ 00ac4dc7 body=[[00ac4dc7, 00ac4dfd]]


/* Library Function - Single Match
    char * __cdecl getStringHelper(char *,char *,char *,int)
   
   Library: Visual Studio 2010 Release */

char * __cdecl getStringHelper(char *param_1,char *param_2,char *param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  
  if ((int)param_2 - (int)param_1 < param_4) {
    param_4 = (int)param_2 - (int)param_1;
  }
  if (param_4 != 0) {
    pcVar1 = param_1;
    iVar2 = param_4;
    do {
      *pcVar1 = pcVar1[(int)param_3 - (int)param_1];
      pcVar1 = pcVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return param_1 + param_4;
}

