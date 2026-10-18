// FUN_00561c40 @ 00561c40 body=[[00561c40, 00561c8a]]


/* WARNING: Removing unreachable block (ram,0x00561c67) */

void FUN_00561c40(void)

{
  int in_EAX;
  
  _memset((void *)(in_EAX + 8),0,0x40);
  if (*(int *)(in_EAX + 0x48) != *(int *)(in_EAX + 0x4c)) {
    *(int *)(in_EAX + 0x4c) = *(int *)(in_EAX + 0x48);
  }
  FUN_00423920();
  return;
}

