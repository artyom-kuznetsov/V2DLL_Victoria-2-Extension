// FUN_00ad02c0 @ 00ad02c0 body=[[00ad02c0, 00ad02f6]]


void FUN_00ad02c0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 400) = 0;
  *(undefined4 *)(in_ECX + 0x194) = 0;
  if (*(int *)(in_ECX + 0x18c) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x18c));
    *(undefined4 *)(in_ECX + 0x18c) = 0;
  }
  return;
}

