// FUN_004380c0 @ 004380c0 body=[[004380c0, 0043814d] [00438151, 00438157]]


/* WARNING: Removing unreachable block (ram,0x00438145) */

void FUN_004380c0(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int in_ECX;
  
  if (param_2 == 0xd9) {
    pcVar2 = (char *)(param_1 + 0x22c);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar2 - (param_1 + 0x22d));
    uVar3 = FUN_00436ff0();
    *(undefined4 *)(in_ECX + 0x10) = uVar3;
    return;
  }
  if (param_2 == 0xa79) {
    FUN_009a1d40();
    return;
  }
  FUN_009a0f40();
  return;
}

