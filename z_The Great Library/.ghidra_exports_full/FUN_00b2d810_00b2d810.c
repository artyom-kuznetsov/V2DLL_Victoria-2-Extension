// FUN_00b2d810 @ 00b2d810 body=[[00b2d810, 00b2d8b4]]


void FUN_00b2d810(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = ~((uVar2 & 1) - 1) & 0xedb88320 ^ uVar2 >> 1;
    uVar1 = ~((uVar1 & 1) - 1) & 0xedb88320 ^ uVar1 >> 1;
    uVar1 = ~((uVar1 & 1) - 1) & 0xedb88320 ^ uVar1 >> 1;
    uVar1 = ~((uVar1 & 1) - 1) & 0xedb88320 ^ uVar1 >> 1;
    uVar1 = ~((uVar1 & 1) - 1) & 0xedb88320 ^ uVar1 >> 1;
    uVar1 = ~((uVar1 & 1) - 1) & 0xedb88320 ^ uVar1 >> 1;
    uVar1 = ~((uVar1 & 1) - 1) & 0xedb88320 ^ uVar1 >> 1;
    (&DAT_013f36a0)[uVar2] = ~((uVar1 & 1) - 1) & 0xedb88320 ^ uVar1 >> 1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x100);
  return;
}

