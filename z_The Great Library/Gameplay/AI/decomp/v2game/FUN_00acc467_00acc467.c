// __getenv_helper_nolock @ 00acc467 body=[[00acc467, 00acc4ed]]


/* Library Function - Single Match
    __getenv_helper_nolock
   
   Library: Visual Studio 2010 Release */

char * __cdecl __getenv_helper_nolock(char *param_1)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *piVar3;
  
  if (((DAT_013f3be4 != 0) &&
      ((DAT_00f1fc4c != (int *)0x0 ||
       (((DAT_00f1fc54 != 0 && (iVar1 = ___wtomb_environ(), iVar1 == 0)) &&
        (DAT_00f1fc4c != (int *)0x0)))))) && (piVar3 = DAT_00f1fc4c, param_1 != (char *)0x0)) {
    _MaxCount = _strlen(param_1);
    for (; (char *)*piVar3 != (char *)0x0; piVar3 = piVar3 + 1) {
      sVar2 = _strlen((char *)*piVar3);
      if (((_MaxCount < sVar2) && (((uchar *)*piVar3)[_MaxCount] == '=')) &&
         (iVar1 = __mbsnbicoll((uchar *)*piVar3,(uchar *)param_1,_MaxCount), iVar1 == 0)) {
        return (char *)(*piVar3 + 1 + _MaxCount);
      }
    }
  }
  return (char *)0x0;
}

