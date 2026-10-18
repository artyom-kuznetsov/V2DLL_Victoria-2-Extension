// PMDtoOffset @ 00ab09d9 body=[[00ab09d9, 00ab09fc]]


/* Library Function - Single Match
    int __cdecl PMDtoOffset(void *,struct PMD const &)
   
   Library: Visual Studio 2010 Release */

int __cdecl PMDtoOffset(void *param_1,PMD *param_2)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  
  iVar1 = in_EAX[1];
  iVar2 = 0;
  if (-1 < iVar1) {
    iVar2 = iVar1 + *(int *)(*(int *)(iVar1 + (int)param_1) + in_EAX[2]);
  }
  return *in_EAX + iVar2;
}

