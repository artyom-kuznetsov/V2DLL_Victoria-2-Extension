// __d_inttype @ 00b33cd7 body=[[00b33cd7, 00b33d40]]


/* Library Function - Single Match
    __d_inttype
   
   Library: Visual Studio 2010 Release */

undefined4 __d_inttype(double param_1)

{
  uint uVar1;
  float10 fVar2;
  undefined8 extraout_var;
  
  uVar1 = __fpclass(param_1);
  if ((uVar1 & 0x90) == 0) {
    fVar2 = (float10)__frnd(param_1,extraout_var);
    if ((float10)param_1 == fVar2) {
      param_1 = param_1 * 0.5;
      fVar2 = (float10)__frnd();
      if ((float10)param_1 == fVar2) {
        return 2;
      }
      return 1;
    }
  }
  return 0;
}

