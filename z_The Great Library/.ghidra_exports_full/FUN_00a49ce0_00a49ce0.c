// FUN_00a49ce0 @ 00a49ce0 body=[[00a49ce0, 00a49db7]]


void FUN_00a49ce0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int in_ECX;
  int local_50;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  byte local_2c;
  undefined2 local_2b;
  undefined1 local_29;
  char local_28 [36];
  
  _memset(&local_40,0,0x38);
  local_40 = *(undefined4 *)(in_ECX + 0x50);
  pcVar3 = (char *)(in_ECX + 0x34);
  local_3c = 0;
  local_38 = 500;
  local_30 = 0;
  local_2b = 0x407;
  local_29 = 0;
  if (0xf < *(uint *)(in_ECX + 0x48)) {
    pcVar3 = *(char **)pcVar3;
  }
  iVar2 = -(int)pcVar3;
  do {
    cVar1 = *pcVar3;
    pcVar3[(int)(local_28 + iVar2)] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_50 = (int)*(undefined8 *)(*(int *)(DAT_00f20c38 + 0xec) + 0x6c);
  local_2c = (local_50 != 4) - 1U & 0xee;
  D3DXCreateFontIndirectA(*(undefined4 *)(in_ECX + 0x28),&local_40,in_ECX + 0x30);
  if (DAT_01258b5c == 0) {
    D3DXCreateSprite(*(undefined4 *)(in_ECX + 0x28),&DAT_01258b5c);
    *(int *)(in_ECX + 0xb4) = DAT_01258b5c;
  }
  return;
}

