// FUN_00648040 @ 00648040 body=[[00648040, 0064809f]]


void FUN_00648040(int param_1)

{
  int in_EAX;
  uint in_EDX;
  
  *(uint *)(in_EAX + 0x74) = *(uint *)(in_EAX + 0x74) | in_EDX;
  if (param_1 < 1) {
    if (param_1 == -1) {
      if ((*(int *)(in_EAX + 0x7c) - *(int *)(in_EAX + 0x78) & 0xfffffffcU) == 0) goto LAB_00648086;
      **(undefined4 **)(in_EAX + 0x78) = 0xffffffff;
    }
    return;
  }
  if (799 < (int)(*(int *)(in_EAX + 0x7c) - *(int *)(in_EAX + 0x78) & 0xfffffffcU)) {
    **(undefined4 **)(in_EAX + 0x78) = 0xffffffff;
    return;
  }
LAB_00648086:
  FUN_004e9b90();
  return;
}

