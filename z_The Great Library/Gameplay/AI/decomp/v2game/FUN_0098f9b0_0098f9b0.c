// FUN_0098f9b0 @ 0098f9b0 body=[[0098f9b0, 0098fa0f]]


int FUN_0098f9b0(int param_1)

{
  int *in_EAX;
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = in_ECX - param_1 >> 2;
  if (0 < iVar2) {
    do {
      iVar1 = iVar2 / 2;
      if (*(float *)(*(int *)(*in_EAX + 0x13c) + 0x98) <
          *(float *)(*(int *)(*(int *)(param_1 + iVar1 * 4) + 0x13c) + 0x98)) {
        param_1 = param_1 + 4 + iVar1 * 4;
        iVar1 = iVar2 + (-1 - iVar1);
      }
      iVar2 = iVar1;
    } while (0 < iVar1);
  }
  return param_1;
}

