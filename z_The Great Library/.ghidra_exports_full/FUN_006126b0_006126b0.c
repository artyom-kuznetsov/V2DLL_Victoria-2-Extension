// FUN_006126b0 @ 006126b0 body=[[006126b0, 00612752]]


void FUN_006126b0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_EAX;
  undefined4 *in_EDX;
  
  uVar1 = in_EAX[2];
  iVar2 = in_EAX[3];
  if (((int)param_1[3] <= iVar2) && (((int)param_1[3] < iVar2 || ((uint)param_1[2] < uVar1)))) {
    uVar3 = *in_EAX;
    *in_EAX = *param_1;
    in_EAX[2] = param_1[2];
    in_EAX[3] = param_1[3];
    *param_1 = uVar3;
    param_1[2] = uVar1;
    param_1[3] = iVar2;
  }
  iVar2 = in_EDX[3];
  uVar1 = in_EDX[2];
  if (((int)in_EAX[3] <= iVar2) && (((int)in_EAX[3] < iVar2 || ((uint)in_EAX[2] < uVar1)))) {
    uVar3 = *in_EDX;
    *in_EDX = *in_EAX;
    in_EDX[2] = in_EAX[2];
    in_EDX[3] = in_EAX[3];
    *in_EAX = uVar3;
    in_EAX[2] = uVar1;
    in_EAX[3] = iVar2;
  }
  iVar2 = in_EAX[3];
  uVar1 = in_EAX[2];
  if (((int)param_1[3] <= iVar2) && (((int)param_1[3] < iVar2 || ((uint)param_1[2] < uVar1)))) {
    uVar3 = *in_EAX;
    *in_EAX = *param_1;
    in_EAX[2] = param_1[2];
    in_EAX[3] = param_1[3];
    *param_1 = uVar3;
    param_1[2] = uVar1;
    param_1[3] = iVar2;
  }
  return;
}

