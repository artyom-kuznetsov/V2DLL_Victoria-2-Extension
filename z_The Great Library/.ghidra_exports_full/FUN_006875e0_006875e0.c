// FUN_006875e0 @ 006875e0 body=[[006875e0, 0068760f]]


uint FUN_006875e0(undefined4 param_1,int param_2)

{
  uint in_EAX;
  
  if (*(int *)(in_EAX + 0xaf0) - *(int *)(in_EAX + 0xaec) >> 2 <= param_2) {
    return in_EAX & 0xffffff00;
  }
  return CONCAT31((int3)((uint)*(int *)(in_EAX + 0xaec) >> 8),
                  *(int *)(*(int *)(in_EAX + 0xaec) + param_2 * 4) == 0);
}

