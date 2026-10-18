// FUN_00b06e20 @ 00b06e20 body=[[00b06e20, 00b06e4d]]


void FUN_00b06e20(void)

{
  uint uVar1;
  int in_ECX;
  int *piVar2;
  
  uVar1 = 0;
  if (*(uint *)(in_ECX + 0x48) != 0) {
    piVar2 = *(int **)(in_ECX + 0x44);
    do {
      if (*(int *)(*piVar2 + 0x14) != 0) {
        *(undefined1 *)(in_ECX + 0x54) = 1;
        return;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < *(uint *)(in_ECX + 0x48));
  }
  *(undefined1 *)(in_ECX + 0x54) = 0;
  return;
}

