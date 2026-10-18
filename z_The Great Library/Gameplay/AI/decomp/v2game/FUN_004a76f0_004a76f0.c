// FUN_004a76f0 @ 004a76f0 body=[[004a76f0, 004a775a]]


void FUN_004a76f0(uint param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int in_EAX;
  
  if (((param_2 < 0) || (*(int *)(in_EAX + 100) < 0)) ||
     ((*(int *)(in_EAX + 100) < 1 && (*(int *)(in_EAX + 0x60) == 0)))) {
    puVar1 = (uint *)(in_EAX + 0x60);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + param_1;
    *(int *)(in_EAX + 100) = *(int *)(in_EAX + 100) + param_2 + (uint)CARRY4(uVar2,param_1);
  }
  else {
    puVar1 = (uint *)(in_EAX + 0x60);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + param_1;
    *(int *)(in_EAX + 100) = *(int *)(in_EAX + 100) + param_2 + (uint)CARRY4(uVar2,param_1);
    if (0 < *(int *)(in_EAX + 100)) {
      return;
    }
    if (*(int *)(in_EAX + 100) < 0) {
      *(undefined4 *)(in_EAX + 0x60) = 0xffffffff;
      *(undefined4 *)(in_EAX + 100) = 0x7fffffff;
    }
  }
  if ((*(int *)(in_EAX + 100) < 1) && (*(int *)(in_EAX + 100) < 0)) {
    *(undefined4 *)(in_EAX + 0x60) = 0;
    *(undefined4 *)(in_EAX + 100) = 0;
  }
  return;
}

