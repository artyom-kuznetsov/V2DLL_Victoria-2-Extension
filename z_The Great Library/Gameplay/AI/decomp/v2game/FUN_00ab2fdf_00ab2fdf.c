// _store_str @ 00ab2fdf body=[[00ab2fdf, 00ab2ffe]]


/* Library Function - Single Match
    void __cdecl _store_str(char *,char * *,unsigned int *)
   
   Library: Visual Studio 2010 Release */

void __cdecl _store_str(char *param_1,char **param_2,uint *param_3)

{
  int iVar1;
  int *in_EAX;
  int *in_ECX;
  char *in_EDX;
  
  iVar1 = *in_EAX;
  for (; (iVar1 != 0 && (*in_EDX != '\0')); in_EDX = in_EDX + 1) {
    *(char *)*in_ECX = *in_EDX;
    *in_ECX = *in_ECX + 1;
    *in_EAX = *in_EAX + -1;
    iVar1 = *in_EAX;
  }
  return;
}

