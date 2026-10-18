// __copytlocinfo_nolock @ 00ab5cae body=[[00ab5cae, 00ab5cd3]]


/* Library Function - Single Match
    __copytlocinfo_nolock
   
   Library: Visual Studio 2010 Release */

void __copytlocinfo_nolock(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  if (((in_ECX != (undefined4 *)0x0) && (in_EAX != (undefined4 *)0x0)) && (in_EAX != in_ECX)) {
    puVar2 = in_EAX;
    for (iVar1 = 0x36; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *in_ECX;
      in_ECX = in_ECX + 1;
      puVar2 = puVar2 + 1;
    }
    *in_EAX = 0;
    ___addlocaleref();
  }
  return;
}

