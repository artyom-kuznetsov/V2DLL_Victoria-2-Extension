// FUN_0052e900 @ 0052e900 body=[[0052e900, 0052e951]]


void FUN_0052e900(void)

{
  int iVar1;
  int in_EAX;
  int in_EDX;
  
  if ((*(int *)(in_EAX + 0x244) == 2) || (*(int *)(in_EAX + 0x244) == 3)) {
    iVar1 = *(int *)(in_EAX + 0x240);
    if (in_EDX == iVar1) {
      *(undefined4 *)(in_EAX + 0x244) = 4;
      *(undefined4 *)(in_EAX + 0x240) = 0;
    }
    else if (in_EDX < iVar1) {
      *(int *)(in_EAX + 0x240) = iVar1 + -1;
    }
  }
  iVar1 = *(int *)(in_EAX + 0x60);
  for (; in_EDX != 0; in_EDX = in_EDX + -1) {
    iVar1 = *(int *)(iVar1 + 0x224);
  }
  FUN_004d0320(iVar1);
  return;
}

