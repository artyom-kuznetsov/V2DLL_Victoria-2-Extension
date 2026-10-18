// FUN_006eb690 @ 006eb690 body=[[006eb690, 006eb6fd]]


void FUN_006eb690(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  *(undefined1 *)(in_ECX + 8) = 1;
  if (*(int *)(in_ECX + 4) != 0) {
    (**(code **)(*(int *)(*(int *)(in_ECX + 4) + 0x18) + 0x34))();
  }
  iVar3 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc) & 0xfffffffcU)) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0xc) + iVar3 * 4);
      iVar2 = *(int *)(iVar1 + 0x2c);
      if ((iVar2 == DAT_012587f0 + 0x48) || (iVar2 == 0)) {
        (**(code **)(*(int *)(iVar1 + 0x1c) + 0x30))();
      }
      else {
        FUN_006ea040();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc) >> 2);
  }
  return;
}

