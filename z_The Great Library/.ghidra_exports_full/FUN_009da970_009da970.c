// FUN_009da970 @ 009da970 body=[[009da970, 009da993]]


bool FUN_009da970(void)

{
  char cVar1;
  int in_EAX;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0xc) == *(int *)(in_EAX + 0xc)) &&
     (*(int *)(in_ECX + 0x10) == *(int *)(in_EAX + 0x10))) {
    cVar1 = FUN_00416db0();
    return cVar1 != '\0';
  }
  return false;
}

