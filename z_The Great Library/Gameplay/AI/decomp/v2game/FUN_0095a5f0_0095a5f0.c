// FUN_0095a5f0 @ 0095a5f0 body=[[0095a5f0, 0095a69e]]


void FUN_0095a5f0(uint param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int in_EAX;
  int unaff_ESI;
  
  if (((*(int *)(in_EAX + 0x184) < 0) || (param_2 < 0)) || ((param_2 < 1 && (param_1 == 0)))) {
    puVar1 = (uint *)(in_EAX + 0x180);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 + param_1;
    *(int *)(in_EAX + 0x184) = *(int *)(in_EAX + 0x184) + param_2 + (uint)CARRY4(uVar3,param_1);
  }
  else {
    puVar1 = (uint *)(in_EAX + 0x180);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 + param_1;
    *(int *)(in_EAX + 0x184) = *(int *)(in_EAX + 0x184) + param_2 + (uint)CARRY4(uVar3,param_1);
    if ((*(int *)(in_EAX + 0x184) < 1) && (*(int *)(in_EAX + 0x184) < 0)) {
      *(undefined4 *)(in_EAX + 0x180) = 0xffffffff;
      *(undefined4 *)(in_EAX + 0x184) = 0x7fffffff;
    }
  }
  puVar1 = (uint *)(in_EAX + 0x1d8 + unaff_ESI * 8);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + param_1;
  piVar2 = (int *)(in_EAX + 0x1dc + unaff_ESI * 8);
  *piVar2 = *piVar2 + param_2 + (uint)CARRY4(uVar3,param_1);
  puVar1 = (uint *)(in_EAX + 0x218);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + param_1;
  *(int *)(in_EAX + 0x21c) = *(int *)(in_EAX + 0x21c) + param_2 + (uint)CARRY4(uVar3,param_1);
  if ((*(int *)(in_EAX + 0x184) < 1) && (*(int *)(in_EAX + 0x184) < 0)) {
    *(undefined4 *)(in_EAX + 0x180) = 0;
    *(undefined4 *)(in_EAX + 0x184) = 0;
  }
  return;
}

