// __initterm_e @ 00ab1fc6 body=[[00ab1fc6, 00ab1fe9]]


/* Library Function - Single Match
    __initterm_e
   
   Library: Visual Studio 2010 Release */

void __initterm_e(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while ((param_1 < param_2 && (iVar1 == 0))) {
    if ((code *)*param_1 != (code *)0x0) {
      iVar1 = (*(code *)*param_1)();
    }
    param_1 = param_1 + 1;
  }
  return;
}

