// FUN_00b03830 @ 00b03830 body=[[00b03830, 00b03858]]


uint FUN_00b03830(int param_1)

{
  uint uVar1;
  int in_ECX;
  int *piVar2;
  
  uVar1 = 0;
  if (*(uint *)(in_ECX + 0x48) != 0) {
    piVar2 = *(int **)(in_ECX + 0x44);
    do {
      if (*(int *)(*piVar2 + 100) == param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < *(uint *)(in_ECX + 0x48));
  }
  return 0xffffffff;
}

