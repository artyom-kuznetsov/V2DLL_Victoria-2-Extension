// FUN_0053d5c0 @ 0053d5c0 body=[[0053d5c0, 0053d5e8] [0053d5f0, 0053d60d]]


undefined4 FUN_0053d5c0(void)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  
  piVar1 = *(int **)(*(int *)(DAT_012588e8 + 0xb98) + *(int *)(in_EAX + 0x20) * 0x10);
  do {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
  } while (*(int *)(iVar2 + 0x88) < 1);
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}

