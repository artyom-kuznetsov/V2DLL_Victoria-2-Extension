// FUN_00825cf0 @ 00825cf0  (requested 00825CF0, first bytes: 55 8B EC 83 EC 08 56 B8)


void FUN_00825cf0(void)

{
  int *in_ECX;
  int local_c;
  int local_8;
  
  DAT_0131ca68 = FUN_009c12d0();
  DAT_01258a9c = DAT_01258a9c + 1;
  local_c = DAT_01258a90 + 0x1268;
  local_8 = DAT_01258a9c;
  (**(code **)(*in_ECX + 0x18))(&local_c);
  return;
}

