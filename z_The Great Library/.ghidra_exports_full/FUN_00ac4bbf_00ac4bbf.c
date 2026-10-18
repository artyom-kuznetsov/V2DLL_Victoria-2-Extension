// getString @ 00ac4bbf body=[[00ac4bbf, 00ac4bdf]]


/* Library Function - Single Match
    public: virtual char * __thiscall pDNameNode::getString(char *,char *)const 
   
   Library: Visual Studio 2010 Release */

char * __thiscall pDNameNode::getString(pDNameNode *this,char *param_1,char *param_2)

{
  int *piVar1;
  char *pcVar2;
  
  if ((*(int **)(this + 4) != (int *)0x0) &&
     (piVar1 = (int *)**(int **)(this + 4), piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00ac4bd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar2 = (char *)(**(code **)(*piVar1 + 8))();
    return pcVar2;
  }
  return param_1;
}

