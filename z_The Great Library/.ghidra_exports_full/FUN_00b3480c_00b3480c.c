// __handle_qnan1 @ 00b3480c body=[[00b3480c, 00b34860]]


/* Library Function - Single Match
    __handle_qnan1
   
   Library: Visual Studio 2010 Release */

float10 __handle_qnan1(undefined4 param_1,double param_2,undefined4 param_3)

{
  int *piVar1;
  float10 fVar2;
  
  if (DAT_00f05ef0 == 0) {
    fVar2 = (float10)__umatherr(1,param_1,param_2,0,param_2,param_3);
    return fVar2;
  }
  piVar1 = __errno();
  *piVar1 = 0x21;
  __ctrlfp();
  return (float10)param_2;
}

