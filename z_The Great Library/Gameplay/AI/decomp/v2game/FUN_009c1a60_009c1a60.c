// FUN_009c1a60 @ 009c1a60  (requested 009C1A60, first bytes: 55 8B EC 83 7D 0C 0B 74)


void FUN_009c1a60(undefined4 param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 != 0xb) {
    FUN_009a0f40();
    return;
  }
  FUN_009a19f0(param_1,in_ECX + 8);
  return;
}

