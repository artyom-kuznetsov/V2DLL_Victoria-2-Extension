// FUN_004c0e70 @ 004c0e70 body=[[004c0e70, 004c0ec5]]


void FUN_004c0e70(int *param_1)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  int *in_EDX;
  
  iVar1 = *in_EAX;
  if (*param_1 < iVar1) {
    iVar2 = in_EAX[1];
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    *param_1 = iVar1;
    param_1[1] = iVar2;
  }
  iVar1 = *in_EDX;
  if (*in_EAX < iVar1) {
    iVar2 = in_EDX[1];
    *in_EDX = *in_EAX;
    in_EDX[1] = in_EAX[1];
    *in_EAX = iVar1;
    in_EAX[1] = iVar2;
  }
  iVar1 = *in_EAX;
  if (*param_1 < iVar1) {
    iVar2 = in_EAX[1];
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    *param_1 = iVar1;
    param_1[1] = iVar2;
  }
  return;
}

