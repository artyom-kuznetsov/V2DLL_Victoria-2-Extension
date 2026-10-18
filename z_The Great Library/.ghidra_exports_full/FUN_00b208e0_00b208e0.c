// FUN_00b208e0 @ 00b208e0 body=[[00b208e0, 00b20910]]


void * FUN_00b208e0(void *param_1,size_t param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    FUN_00b1f840("Out of memory");
    return (void *)0x0;
  }
  pvVar1 = _realloc(param_1,param_2);
  return pvVar1;
}

