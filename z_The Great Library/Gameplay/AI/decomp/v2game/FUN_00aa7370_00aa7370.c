// FUN_00aa7370 @ 00aa7370 body=[[00aa7370, 00aa738b]]


void FUN_00aa7370(int *param_1)

{
  char cVar1;
  
  param_1 = (int *)*param_1;
  cVar1 = *(char *)((int)param_1 + 0x25);
  while (cVar1 == '\0') {
    param_1 = (int *)*param_1;
    cVar1 = *(char *)((int)param_1 + 0x25);
  }
  return;
}

