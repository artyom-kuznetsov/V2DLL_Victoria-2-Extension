// FUN_008ea070 @ 008ea070 body=[[008ea070, 008ea0f2]]


uint FUN_008ea070(void)

{
  int iVar1;
  uint uVar2;
  uint in_EAX;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x1c);
  if (iVar1 != 0) {
    in_EAX = (*(int *)(iVar1 + 0x1d0) + -43800000) / 0x18;
    if (1 < (int)((double)(int)in_EAX / 365.0)) {
      uVar2 = (*(int *)(iVar1 + 0x1d4) + -43800000) / 0x18;
      in_EAX = uVar2 & 0xffffff00;
      if ((int)((double)(int)uVar2 / 365.0) < 2) goto LAB_008ea0ed;
    }
    return CONCAT31((int3)(in_EAX >> 8),1);
  }
LAB_008ea0ed:
  return in_EAX & 0xffffff00;
}

