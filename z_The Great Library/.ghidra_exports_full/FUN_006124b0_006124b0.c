// FUN_006124b0 @ 006124b0 body=[[006124b0, 006125be]]


void FUN_006124b0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *in_EAX;
  undefined4 *in_EDX;
  
  iVar1 = in_EAX[3];
  uVar2 = in_EAX[2];
  if (((int)param_1[3] <= iVar1) && (((int)param_1[3] < iVar1 || ((uint)param_1[2] < uVar2)))) {
    uVar3 = *in_EAX;
    uVar4 = in_EAX[4];
    uVar5 = in_EAX[5];
    *in_EAX = *param_1;
    in_EAX[2] = param_1[2];
    in_EAX[3] = param_1[3];
    in_EAX[4] = param_1[4];
    in_EAX[5] = param_1[5];
    *param_1 = uVar3;
    param_1[3] = iVar1;
    param_1[2] = uVar2;
    param_1[4] = uVar4;
    param_1[5] = uVar5;
  }
  iVar1 = in_EDX[3];
  uVar2 = in_EDX[2];
  if (((int)in_EAX[3] <= iVar1) && (((int)in_EAX[3] < iVar1 || ((uint)in_EAX[2] < uVar2)))) {
    uVar3 = *in_EDX;
    uVar4 = in_EDX[4];
    uVar5 = in_EDX[5];
    *in_EDX = *in_EAX;
    in_EDX[2] = in_EAX[2];
    in_EDX[3] = in_EAX[3];
    in_EDX[4] = in_EAX[4];
    in_EDX[5] = in_EAX[5];
    *in_EAX = uVar3;
    in_EAX[3] = iVar1;
    in_EAX[2] = uVar2;
    in_EAX[4] = uVar4;
    in_EAX[5] = uVar5;
  }
  iVar1 = in_EAX[3];
  uVar2 = in_EAX[2];
  if (((int)param_1[3] <= iVar1) && (((int)param_1[3] < iVar1 || ((uint)param_1[2] < uVar2)))) {
    uVar3 = in_EAX[4];
    uVar4 = *in_EAX;
    uVar5 = in_EAX[5];
    *in_EAX = *param_1;
    in_EAX[2] = param_1[2];
    in_EAX[3] = param_1[3];
    in_EAX[4] = param_1[4];
    in_EAX[5] = param_1[5];
    *param_1 = uVar4;
    param_1[2] = uVar2;
    param_1[3] = iVar1;
    param_1[4] = uVar3;
    param_1[5] = uVar5;
  }
  return;
}

