// FUN_004940d0 @ 004940d0 body=[[004940d0, 004940fb]]


void FUN_004940d0(void)

{
  char cVar1;
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0xc4) = 1;
  cVar1 = (**(code **)(in_ECX + 0x148))(in_ECX + 0x6c);
  if (cVar1 == '\0') {
    *(undefined1 *)(in_ECX + 100) = 1;
  }
  return;
}

