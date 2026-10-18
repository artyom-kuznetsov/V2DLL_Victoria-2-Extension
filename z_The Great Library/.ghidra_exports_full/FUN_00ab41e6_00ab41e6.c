// __get_sys_err_msg @ 00ab41e6 body=[[00ab41e6, 00ab420d]]


/* Library Function - Single Match
    __get_sys_err_msg
   
   Library: Visual Studio 2010 Release */

char * __cdecl __get_sys_err_msg(int m)

{
  int *piVar1;
  int iVar2;
  
  if (-1 < m) {
    piVar1 = (int *)FUN_00ac109b();
    if (m < *piVar1) goto LAB_00ab4203;
  }
  piVar1 = (int *)FUN_00ac109b();
  m = *piVar1;
LAB_00ab4203:
  iVar2 = FUN_00ac10a1();
  return *(char **)(iVar2 + m * 4);
}

