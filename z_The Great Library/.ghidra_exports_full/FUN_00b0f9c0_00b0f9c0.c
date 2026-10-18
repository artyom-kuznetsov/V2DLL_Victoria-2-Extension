// FUN_00b0f9c0 @ 00b0f9c0 body=[[00b0f9c0, 00b0fa0f]]


void FUN_00b0f9c0(void)

{
  int in_ECX;
  uint uVar1;
  
  FUN_00b0f970();
  uVar1 = 0;
  if (*(int *)(in_ECX + 8) != 0) {
    do {
      FUN_00b13650();
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(in_ECX + 8));
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  if (*(int *)(in_ECX + 4) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 4));
    *(undefined4 *)(in_ECX + 4) = 0;
  }
  return;
}

