// FUN_00a79a60 @ 00a79a60 body=[[00a79a60, 00a79a9b]]


undefined2 FUN_00a79a60(void)

{
  SHORT SVar1;
  int in_ECX;
  int vKey;
  
  vKey = 0;
  do {
    SVar1 = GetAsyncKeyState(vKey);
    if (SVar1 == 0) {
      *(undefined1 *)(vKey + 0x40 + in_ECX) = 0;
    }
    *(undefined1 *)(in_ECX + 0x140 + vKey) = 0;
    vKey = vKey + 1;
  } while (vKey < 0x100);
  *(undefined1 *)(in_ECX + 0x240) = 0;
  return 1;
}

