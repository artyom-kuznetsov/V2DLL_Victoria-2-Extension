// __setdefaultprecision @ 00abebad body=[[00abebad, 00abebd4]]


/* Library Function - Single Match
    __setdefaultprecision
   
   Library: Visual Studio 2010 Release */

void __setdefaultprecision(void)

{
  errno_t eVar1;
  
  eVar1 = __controlfp_s((uint *)0x0,0x10000,0x30000);
  if (eVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return;
}

