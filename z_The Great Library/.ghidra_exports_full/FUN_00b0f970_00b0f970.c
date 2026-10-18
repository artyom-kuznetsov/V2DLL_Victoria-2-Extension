// FUN_00b0f970 @ 00b0f970 body=[[00b0f970, 00b0f9bc]]


void FUN_00b0f970(void)

{
  int in_ECX;
  uint uVar1;
  
  if (*(int *)(in_ECX + 0x18) != 0) {
    uVar1 = 0;
    do {
      FUN_00b131d0();
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(in_ECX + 0x18));
  }
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  if (*(int *)(in_ECX + 0x14) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x14));
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  return;
}

