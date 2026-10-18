// FUN_00b0a7e0 @ 00b0a7e0 body=[[00b0a7e0, 00b0a807]]


void FUN_00b0a7e0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x10) == -1) {
    FUN_00b15770(0);
    return;
  }
  FUN_00b15770(*(int *)(in_ECX + 0x10));
  return;
}

