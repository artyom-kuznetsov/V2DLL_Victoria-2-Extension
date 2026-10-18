// FUN_006802d0 @ 006802d0 body=[[006802d0, 0068034e]]


void FUN_006802d0(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_EAX;
  int unaff_ESI;
  int iVar3;
  
  *(undefined4 *)(*(int *)(unaff_ESI + 8) + in_EAX * 4) = 1;
  uVar1 = *(undefined4 *)(*(int *)(unaff_ESI + 0xacc) + in_EAX * 4);
  iVar3 = 0;
  if (0 < (int)(*(int *)(unaff_ESI + 0xae0) - *(int *)(unaff_ESI + 0xadc) & 0xfffffffcU)) {
    do {
      iVar2 = *(int *)(*(int *)(unaff_ESI + 0xadc) + iVar3 * 4);
      if ((0 < (int)(*(int *)(iVar2 + 0x9dc) - *(int *)(iVar2 + 0x9d8) & 0xfffffffcU)) &&
         (*(int *)(iVar2 + 0x10c) != 0)) {
        (**(code **)(**(int **)(iVar2 + 0x10c) + 0x20))(uVar1,2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(unaff_ESI + 0xae0) - *(int *)(unaff_ESI + 0xadc) >> 2);
  }
  return;
}

