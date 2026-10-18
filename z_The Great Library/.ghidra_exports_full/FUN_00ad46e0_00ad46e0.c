// FUN_00ad46e0 @ 00ad46e0 body=[[00ad46e0, 00ad4702]]


void FUN_00ad46e0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x104) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x104));
    *(undefined4 *)(in_ECX + 0x104) = 0;
  }
  return;
}

