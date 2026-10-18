// FUN_006a57a0 @ 006a57a0 body=[[006a57a0, 006a585d]]


uint FUN_006a57a0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint in_EAX;
  uint3 uVar3;
  int iVar4;
  
  iVar2 = DAT_012588e8;
  if ((*(char *)(DAT_012588e8 + 0xd11) == '\0') ||
     (in_EAX = *(uint *)(DAT_012588e8 + 0xb24), *(char *)(in_EAX + 0x70) != '\0')) {
    uVar3 = (uint3)(in_EAX >> 8);
    if ((*(int *)(param_1 + 0x7c) == 0) && (*(int *)(param_1 + 0x78) == 0)) {
      in_EAX = CONCAT31(uVar3,1);
    }
    else {
      in_EAX = (uint)uVar3 << 8;
    }
    if (((char)in_EAX == '\0') && (in_EAX = *(uint *)(param_1 + 0x78), in_EAX != 0xfffe)) {
      iVar4 = DAT_01258a94;
      if (in_EAX < 0x1269) {
        iVar4 = DAT_01258a98;
      }
      if (iVar4 != 0) {
        in_EAX = FUN_009c1d40();
        if ((in_EAX != 0) && (in_EAX - 8 != 0)) {
          piVar1 = *(int **)(iVar2 + 0xb24);
          (**(code **)(*piVar1 + 0xa4))(0);
          (**(code **)(*piVar1 + 0x88))(in_EAX - 8);
          in_EAX = (**(code **)(*piVar1 + 0xb4))(*(undefined4 *)(in_EAX + 0xd4));
        }
      }
    }
  }
  return in_EAX & 0xffffff00;
}

