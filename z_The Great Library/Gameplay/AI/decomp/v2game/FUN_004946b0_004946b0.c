// FUN_004946b0 @ 004946b0 body=[[004946b0, 004946c5]]


bool FUN_004946b0(void)

{
  int in_EAX;
  int in_ECX;
  
  if (in_EAX < 0) {
    return false;
  }
  return *(char *)(in_EAX + *(int *)(in_ECX + 0x2224)) != '\0';
}

