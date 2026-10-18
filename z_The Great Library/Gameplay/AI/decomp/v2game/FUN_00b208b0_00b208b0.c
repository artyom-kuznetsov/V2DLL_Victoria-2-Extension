// FUN_00b208b0 @ 00b208b0 body=[[00b208b0, 00b208dc]]


void * FUN_00b208b0(size_t param_1,int param_2)

{
  void *pvVar1;
  
  if (param_2 != 0) {
    FUN_00b1f840("Out of memory");
    return (void *)0x0;
  }
  pvVar1 = _malloc(param_1);
  return pvVar1;
}

