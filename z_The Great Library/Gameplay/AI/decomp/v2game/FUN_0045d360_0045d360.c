// FUN_0045d360 @ 0045d360 body=[[0045d360, 0045d3c1]]


void FUN_0045d360(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *in_EDX;
  
  if ((int)param_1[1] < (int)in_EAX[1]) {
    uVar1 = *in_EAX;
    uVar2 = in_EAX[1];
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    *param_1 = uVar1;
    param_1[1] = uVar2;
  }
  if ((int)in_EAX[1] < (int)in_EDX[1]) {
    uVar1 = *in_EDX;
    uVar2 = in_EDX[1];
    *in_EDX = *in_EAX;
    in_EDX[1] = in_EAX[1];
    *in_EAX = uVar1;
    in_EAX[1] = uVar2;
  }
  if ((int)param_1[1] < (int)in_EAX[1]) {
    uVar1 = *in_EAX;
    uVar2 = in_EAX[1];
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    *param_1 = uVar1;
    param_1[1] = uVar2;
  }
  return;
}

