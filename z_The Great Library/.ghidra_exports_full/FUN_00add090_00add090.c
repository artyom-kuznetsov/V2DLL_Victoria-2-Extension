// FUN_00add090 @ 00add090 body=[[00add090, 00add0b5]]


void FUN_00add090(void)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  
  uVar1 = *(uint *)(in_ECX + 0x34);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x30) + uVar2 * 4) + 0x18))();
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}

