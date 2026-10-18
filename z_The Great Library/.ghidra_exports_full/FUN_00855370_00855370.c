// FUN_00855370 @ 00855370 body=[[00855370, 008553fa]]


void FUN_00855370(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_EAX;
  int *in_EDX;
  
  iVar1 = *in_EAX;
  if (*param_1 < iVar1) {
    iVar2 = in_EAX[1];
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    iVar3 = in_EAX[2];
    in_EAX[2] = param_1[2];
    *param_1 = iVar1;
    param_1[1] = iVar2;
    param_1[2] = iVar3;
  }
  iVar1 = *in_EDX;
  if (*in_EAX < iVar1) {
    iVar2 = in_EDX[1];
    *in_EDX = *in_EAX;
    in_EDX[1] = in_EAX[1];
    iVar3 = in_EDX[2];
    in_EDX[2] = in_EAX[2];
    *in_EAX = iVar1;
    in_EAX[1] = iVar2;
    in_EAX[2] = iVar3;
  }
  iVar1 = *in_EAX;
  if (*param_1 < iVar1) {
    iVar2 = in_EAX[1];
    iVar3 = in_EAX[2];
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    in_EAX[2] = param_1[2];
    *param_1 = iVar1;
    param_1[1] = iVar2;
    param_1[2] = iVar3;
  }
  return;
}

