// FUN_00aef0f0 @ 00aef0f0 body=[[00aef0f0, 00aef126]]


void FUN_00aef0f0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x10) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x10));
  }
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  if (*(int *)(in_ECX + 0x14) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x14));
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  return;
}

