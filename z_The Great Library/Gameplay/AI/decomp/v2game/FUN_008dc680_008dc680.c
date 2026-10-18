// FUN_008dc680 @ 008dc680 body=[[008dc680, 008dc6fa]]


bool FUN_008dc680(void)

{
  char cVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  puVar2 = (undefined4 *)FUN_008a8dc0();
  cVar1 = FUN_0051b310(*puVar2,puVar2[1]);
  return cVar1 == *(char *)(in_ECX + 0x1c);
}

