// FUN_00ae8bb0 @ 00ae8bb0 body=[[00ae8bb0, 00ae8be8]]


void FUN_00ae8bb0(int *param_1)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  
  *param_1 = *param_1 + 1;
  uVar1 = *(uint *)(in_ECX + 0x40);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      FUN_00ae8bb0(param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}

