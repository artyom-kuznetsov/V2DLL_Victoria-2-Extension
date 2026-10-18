// FUN_0068df20 @ 0068df20 body=[[0068df20, 0068dfb5]]


void FUN_0068df20(void)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  int unaff_ESI;
  uint local_8;
  
  iVar2 = 0;
  if (0 < (int)(*(int *)(unaff_ESI + 0xb00) - *(int *)(unaff_ESI + 0xafc) & 0xfffffffcU)) {
    do {
      iVar1 = *(int *)(*(int *)(unaff_ESI + 0xadc) + iVar2 * 4);
      if ((*(int *)(iVar1 + 0x20) != 0) && (*(int *)(*(int *)(unaff_ESI + 0xafc) + iVar2 * 4) != 0))
      {
        local_8 = *(uint *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar1 + 0x20) * 4);
        FUN_004e9b90();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(unaff_ESI + 0xb00) - *(int *)(unaff_ESI + 0xafc) >> 2);
  }
  local_8 = local_8 & 0xffffff00;
  FUN_0068fe20(*in_EAX,in_EAX[1],in_EAX[1] - *in_EAX >> 2,local_8);
  return;
}

