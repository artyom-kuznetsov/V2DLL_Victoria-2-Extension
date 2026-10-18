// FUN_0045d470 @ 0045d470 body=[[0045d470, 0045d523]]


void FUN_0045d470(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *in_EAX;
  undefined8 *in_EDX;
  
  if (*(int *)(param_1 + 1) < *(int *)(in_EAX + 1)) {
    uVar1 = *in_EAX;
    uVar2 = in_EAX[1];
    uVar3 = *(undefined4 *)(in_EAX + 2);
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    *(undefined4 *)(in_EAX + 2) = *(undefined4 *)(param_1 + 2);
    *param_1 = uVar1;
    param_1[1] = uVar2;
    *(undefined4 *)(param_1 + 2) = uVar3;
  }
  if (*(int *)(in_EAX + 1) < *(int *)(in_EDX + 1)) {
    uVar1 = *in_EDX;
    uVar2 = in_EDX[1];
    uVar3 = *(undefined4 *)(in_EDX + 2);
    *in_EDX = *in_EAX;
    in_EDX[1] = in_EAX[1];
    *(undefined4 *)(in_EDX + 2) = *(undefined4 *)(in_EAX + 2);
    *in_EAX = uVar1;
    in_EAX[1] = uVar2;
    *(undefined4 *)(in_EAX + 2) = uVar3;
  }
  if (*(int *)(param_1 + 1) < *(int *)(in_EAX + 1)) {
    uVar1 = *in_EAX;
    uVar2 = in_EAX[1];
    uVar3 = *(undefined4 *)(in_EAX + 2);
    *in_EAX = *param_1;
    in_EAX[1] = param_1[1];
    *(undefined4 *)(in_EAX + 2) = *(undefined4 *)(param_1 + 2);
    *param_1 = uVar1;
    param_1[1] = uVar2;
    *(undefined4 *)(param_1 + 2) = uVar3;
  }
  return;
}

