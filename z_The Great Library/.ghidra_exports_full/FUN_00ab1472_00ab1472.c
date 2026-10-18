// __IsExceptionObjectToBeDestroyed @ 00ab1472 body=[[00ab1472, 00ab1498]]


/* Library Function - Single Match
    __IsExceptionObjectToBeDestroyed
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 __IsExceptionObjectToBeDestroyed(int param_1)

{
  _ptiddata p_Var1;
  int *piVar2;
  
  p_Var1 = __getptd();
  piVar2 = p_Var1->_pFrameInfoChain;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 1;
    }
    if (*piVar2 == param_1) break;
    piVar2 = (int *)piVar2[1];
  }
  return 0;
}

