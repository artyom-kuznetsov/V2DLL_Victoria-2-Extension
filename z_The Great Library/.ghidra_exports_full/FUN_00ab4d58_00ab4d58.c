// ___AdjustPointer @ 00ab4d58 body=[[00ab4d58, 00ab4d80]]


/* Library Function - Single Match
    ___AdjustPointer
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int ___AdjustPointer(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2 + param_1;
  if (-1 < param_2[1]) {
    iVar1 = iVar1 + *(int *)(*(int *)(param_2[1] + param_1) + param_2[2]) + param_2[1];
  }
  return iVar1;
}

