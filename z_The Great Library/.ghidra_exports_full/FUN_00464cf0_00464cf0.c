// FUN_00464cf0 @ 00464cf0 body=[[00464cf0, 00464d1e]]


uint FUN_00464cf0(int param_1)

{
  uint in_EAX;
  int *piVar1;
  int in_EDX;
  
  if ((int)in_EAX < *(int *)(in_EDX + 0x28) - *(int *)(in_EDX + 0x24) >> 4) {
    piVar1 = (int *)(in_EAX * 0x10 + *(int *)(in_EDX + 0x24));
    return CONCAT31((int3)((uint)piVar1 >> 8),param_1 < piVar1[1] - *piVar1 >> 3);
  }
  return in_EAX & 0xffffff00;
}

