// FUN_00a79350 @ 00a79350 body=[[00a79350, 00a7936b]]


void FUN_00a79350(void)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 8))();
  if (cVar1 != '\0') {
    TerminateProcess((HANDLE)in_ECX[1],0);
  }
  return;
}

