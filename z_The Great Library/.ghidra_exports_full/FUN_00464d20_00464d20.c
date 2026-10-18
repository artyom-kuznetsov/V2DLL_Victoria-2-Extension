// FUN_00464d20 @ 00464d20 body=[[00464d20, 00464d4e]]


uint FUN_00464d20(int param_1)

{
  uint in_EAX;
  int *piVar1;
  int in_EDX;
  
  if ((int)in_EAX < *(int *)(in_EDX + 0x38) - *(int *)(in_EDX + 0x34) >> 4) {
    piVar1 = (int *)(in_EAX * 0x10 + *(int *)(in_EDX + 0x34));
    return CONCAT31((int3)((uint)piVar1 >> 8),param_1 < piVar1[1] - *piVar1 >> 2);
  }
  return in_EAX & 0xffffff00;
}

