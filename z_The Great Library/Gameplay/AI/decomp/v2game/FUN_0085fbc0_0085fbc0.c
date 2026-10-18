// FUN_0085fbc0 @ 0085fbc0 body=[[0085fbc0, 0085fbe3]]


undefined4 FUN_0085fbc0(void)

{
  int iVar1;
  int *in_EAX;
  int *piVar2;
  int in_ECX;
  
  piVar2 = (int *)*in_EAX;
  if (piVar2 != (int *)0x0) {
    do {
      iVar1 = *piVar2;
      piVar2 = (int *)piVar2[2];
      if (*(int *)(iVar1 + 0xc) == *(int *)(in_ECX + 4)) {
        return CONCAT31((int3)((uint)piVar2 >> 8),1);
      }
    } while (piVar2 != (int *)0x0);
  }
  return 0;
}

