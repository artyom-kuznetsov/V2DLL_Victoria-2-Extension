// __set_errno_from_matherr @ 00b3470b body=[[00b3470b, 00b34737]]


/* Library Function - Single Match
    __set_errno_from_matherr
   
   Library: Visual Studio 2010 Release */

void __set_errno_from_matherr(int param_1)

{
  int *piVar1;
  
  if (param_1 == 1) {
    piVar1 = __errno();
    *piVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    piVar1 = __errno();
    *piVar1 = 0x22;
    return;
  }
  return;
}

