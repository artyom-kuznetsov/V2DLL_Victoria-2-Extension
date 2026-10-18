// FUN_00612170 @ 00612170 body=[[00612170, 006121f7]]


void FUN_00612170(uint *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint *in_EAX;
  uint *in_EDX;
  
  if (*in_EAX < *param_1) {
    uVar1 = *(undefined8 *)in_EAX;
    uVar2 = *(undefined8 *)(in_EAX + 2);
    *(undefined8 *)in_EAX = *(undefined8 *)param_1;
    *(undefined8 *)(in_EAX + 2) = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)param_1 = uVar1;
    *(undefined8 *)(param_1 + 2) = uVar2;
  }
  if (*in_EDX < *in_EAX) {
    uVar1 = *(undefined8 *)in_EDX;
    uVar2 = *(undefined8 *)(in_EDX + 2);
    *(undefined8 *)in_EDX = *(undefined8 *)in_EAX;
    *(undefined8 *)(in_EDX + 2) = *(undefined8 *)(in_EAX + 2);
    *(undefined8 *)in_EAX = uVar1;
    *(undefined8 *)(in_EAX + 2) = uVar2;
  }
  if (*in_EAX < *param_1) {
    uVar1 = *(undefined8 *)in_EAX;
    uVar2 = *(undefined8 *)(in_EAX + 2);
    *(undefined8 *)in_EAX = *(undefined8 *)param_1;
    *(undefined8 *)(in_EAX + 2) = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)param_1 = uVar1;
    *(undefined8 *)(param_1 + 2) = uVar2;
  }
  return;
}

