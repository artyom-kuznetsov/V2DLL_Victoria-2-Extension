// FUN_00464d50 @ 00464d50 body=[[00464d50, 00464d8e]]


uint FUN_00464d50(int param_1)

{
  int iVar1;
  uint in_EAX;
  int *piVar2;
  int in_EDX;
  
  if ((int)in_EAX < *(int *)(in_EDX + 0x48) - *(int *)(in_EDX + 0x44) >> 4) {
    piVar2 = (int *)(in_EAX * 0x10 + *(int *)(in_EDX + 0x44));
    iVar1 = (piVar2[1] - *piVar2) / 0x1c;
    return CONCAT31((int3)((uint)iVar1 >> 8),param_1 < iVar1);
  }
  return in_EAX & 0xffffff00;
}

