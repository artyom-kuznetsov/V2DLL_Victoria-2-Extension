// FUN_00825c90 @ 00825c90 body=[[00825c90, 00825ce1]]


void FUN_00825c90(int param_1)

{
  int *in_ECX;
  int local_c;
  int local_8;
  
  in_ECX[0x10] = param_1;
  DAT_0131ca68 = FUN_009c12d0();
  DAT_01258a9c = DAT_01258a9c + 1;
  local_c = DAT_01258a90 + 0x1268;
  local_8 = DAT_01258a9c;
  (**(code **)(*in_ECX + 0x18))(&local_c);
  return;
}

