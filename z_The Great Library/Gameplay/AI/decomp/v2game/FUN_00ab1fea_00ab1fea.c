// __cinit @ 00ab1fea body=[[00ab1fea, 00ab2080]]


/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2010 Release */

int __cdecl __cinit(int param_1)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  
  BVar1 = __IsNonwritableInCurrentImage((PBYTE)&PTR___fpmath_00dd9450);
  if (BVar1 != 0) {
    __fpmath(param_1);
  }
  __initp_misc_cfltcvt_tab();
  iVar2 = __initterm_e(&DAT_00dbb008,&DAT_00dbb028);
  if (iVar2 == 0) {
    _atexit((_func_4879 *)&LAB_00abdffc);
    puVar3 = &DAT_00c8a5a8;
    do {
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)();
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 < &DAT_00dbb004);
    if ((DAT_013f3bf4 != (code *)0x0) &&
       (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_013f3bf4), BVar1 != 0)) {
      (*DAT_013f3bf4)(0,2,0);
    }
    iVar2 = 0;
  }
  return iVar2;
}

