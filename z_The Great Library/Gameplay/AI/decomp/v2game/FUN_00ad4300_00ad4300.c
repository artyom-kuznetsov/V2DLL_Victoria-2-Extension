// FUN_00ad4300 @ 00ad4300 body=[[00ad4300, 00ad4337]]


void FUN_00ad4300(int param_1)

{
  uint uVar1;
  int in_ECX;
  undefined4 *puVar2;
  
  uVar1 = 0;
  if (*(uint *)(in_ECX + 0x14) != 0) {
    puVar2 = *(undefined4 **)(in_ECX + 0x10);
    do {
      if (*(int *)*puVar2 == param_1) {
        if (uVar1 == 0xffffffff) {
          return;
        }
        FUN_00ad4070();
        return;
      }
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 4;
    } while (uVar1 < *(uint *)(in_ECX + 0x14));
  }
  return;
}

