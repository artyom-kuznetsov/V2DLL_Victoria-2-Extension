// FUN_00612360 @ 00612360 body=[[00612360, 0061240c]]


void FUN_00612360(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_EAX;
  undefined4 *in_EDX;
  
  iVar1 = *(int *)(param_1[1] + 0x1dc);
  iVar2 = in_EAX[1];
  if ((iVar1 <= *(int *)(iVar2 + 0x1dc)) &&
     ((iVar1 < *(int *)(iVar2 + 0x1dc) || (*(uint *)(param_1[1] + 0x1d8) < *(uint *)(iVar2 + 0x1d8))
      ))) {
    uVar3 = *in_EAX;
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    *param_1 = uVar3;
    param_1[1] = iVar2;
  }
  iVar1 = in_EDX[1];
  iVar2 = *(int *)(in_EAX[1] + 0x1dc);
  if ((iVar2 <= *(int *)(iVar1 + 0x1dc)) &&
     ((iVar2 < *(int *)(iVar1 + 0x1dc) || (*(uint *)(in_EAX[1] + 0x1d8) < *(uint *)(iVar1 + 0x1d8)))
     )) {
    uVar3 = *in_EDX;
    *in_EDX = *in_EAX;
    in_EDX[1] = in_EAX[1];
    *in_EAX = uVar3;
    in_EAX[1] = iVar1;
  }
  iVar1 = in_EAX[1];
  iVar2 = *(int *)(param_1[1] + 0x1dc);
  if ((iVar2 <= *(int *)(iVar1 + 0x1dc)) &&
     ((iVar2 < *(int *)(iVar1 + 0x1dc) || (*(uint *)(param_1[1] + 0x1d8) < *(uint *)(iVar1 + 0x1d8))
      ))) {
    uVar3 = *in_EAX;
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    *param_1 = uVar3;
    param_1[1] = iVar1;
  }
  return;
}

