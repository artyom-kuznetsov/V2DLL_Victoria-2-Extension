// FUN_00559d70 @ 00559d70 body=[[00559d70, 00559e4e]]


void FUN_00559d70(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *in_EAX;
  undefined4 *in_EDX;
  
  iVar1 = in_EAX[3];
  if (((int)param_1[3] <= iVar1) &&
     (((int)param_1[3] < iVar1 || ((uint)param_1[2] < (uint)in_EAX[2])))) {
    uVar2 = *in_EAX;
    uVar3 = in_EAX[1];
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    uVar4 = in_EAX[2];
    in_EAX[2] = param_1[2];
    in_EAX[3] = param_1[3];
    param_1[1] = uVar3;
    *param_1 = uVar2;
    param_1[2] = uVar4;
    param_1[3] = iVar1;
  }
  uVar5 = in_EDX[2];
  if (((int)in_EAX[3] <= (int)in_EDX[3]) &&
     (((int)in_EAX[3] < (int)in_EDX[3] || ((uint)in_EAX[2] < uVar5)))) {
    uVar2 = *in_EDX;
    uVar3 = in_EDX[1];
    uVar4 = in_EDX[3];
    *in_EDX = *in_EAX;
    in_EDX[1] = in_EAX[1];
    in_EDX[2] = in_EAX[2];
    in_EDX[3] = in_EAX[3];
    *in_EAX = uVar2;
    in_EAX[1] = uVar3;
    in_EAX[2] = uVar5;
    in_EAX[3] = uVar4;
  }
  iVar1 = in_EAX[3];
  uVar5 = in_EAX[2];
  if (((int)param_1[3] <= iVar1) && (((int)param_1[3] < iVar1 || ((uint)param_1[2] < uVar5)))) {
    uVar2 = *in_EAX;
    uVar3 = in_EAX[1];
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    in_EAX[2] = param_1[2];
    in_EAX[3] = param_1[3];
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = uVar5;
    param_1[3] = iVar1;
  }
  return;
}

