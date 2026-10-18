// FUN_00719c10 @ 00719c10 body=[[00719c10, 00719cbf]]


void FUN_00719c10(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *in_EDX;
  
  if (((int)param_1[3] <= (int)in_EAX[3]) &&
     ((((int)param_1[3] < (int)in_EAX[3] || ((uint)param_1[2] < (uint)in_EAX[2])) &&
      (in_EAX != param_1)))) {
    uVar1 = *in_EAX;
    *in_EAX = *param_1;
    *param_1 = uVar1;
    uVar1 = in_EAX[2];
    uVar2 = in_EAX[3];
    in_EAX[2] = param_1[2];
    in_EAX[3] = param_1[3];
    param_1[2] = uVar1;
    param_1[3] = uVar2;
  }
  if ((((int)in_EAX[3] <= (int)in_EDX[3]) &&
      (((int)in_EAX[3] < (int)in_EDX[3] || ((uint)in_EAX[2] < (uint)in_EDX[2])))) &&
     (in_EDX != in_EAX)) {
    uVar1 = *in_EDX;
    *in_EDX = *in_EAX;
    *in_EAX = uVar1;
    uVar1 = in_EDX[2];
    uVar2 = in_EDX[3];
    in_EDX[2] = in_EAX[2];
    in_EDX[3] = in_EAX[3];
    in_EAX[2] = uVar1;
    in_EAX[3] = uVar2;
  }
  if ((((int)param_1[3] <= (int)in_EAX[3]) &&
      (((int)param_1[3] < (int)in_EAX[3] || ((uint)param_1[2] < (uint)in_EAX[2])))) &&
     (in_EAX != param_1)) {
    uVar1 = *in_EAX;
    *in_EAX = *param_1;
    *param_1 = uVar1;
    uVar1 = in_EAX[2];
    uVar2 = in_EAX[3];
    in_EAX[2] = param_1[2];
    in_EAX[3] = param_1[3];
    param_1[2] = uVar1;
    param_1[3] = uVar2;
  }
  return;
}

