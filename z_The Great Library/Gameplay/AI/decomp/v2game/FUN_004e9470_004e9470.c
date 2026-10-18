// FUN_004e9470 @ 004e9470 body=[[004e9470, 004e949f]]


void FUN_004e9470(int *param_1)

{
  undefined4 *in_EAX;
  int *in_EDX;
  
  if (param_1 != (int *)0x0) {
    do {
      if ((param_1[1] == in_EDX[1]) && (*param_1 == *in_EDX)) break;
      param_1 = (int *)param_1[3];
    } while (param_1 != (int *)0x0);
  }
  *in_EAX = param_1;
  return;
}

