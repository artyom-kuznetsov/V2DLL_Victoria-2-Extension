// FUN_006aee90 @ 006aee90 body=[[006aee90, 006aeec5]]


void FUN_006aee90(void)

{
  int in_ECX;
  
  FUN_006b0970(in_ECX);
  FUN_006b2050(in_ECX);
  FUN_006b3320(in_ECX);
  if (*(char *)((*(int **)(in_ECX + 0x70))[0x18] + 0x67) != '\0') {
    (**(code **)(**(int **)(in_ECX + 0x70) + 4))();
  }
  return;
}

