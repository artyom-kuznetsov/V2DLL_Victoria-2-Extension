// FUN_00a82270 @ 00a82270 body=[[00a82270, 00a822c6]]


void FUN_00a82270(float param_1)

{
  int *in_ECX;
  
  if ((float)in_ECX[0x51] <= 0.0 && (float)in_ECX[0x51] != 0.0) {
    in_ECX[0x51] = (int)param_1;
  }
  (**(code **)(*in_ECX + 0xbc))(param_1 - (float)in_ECX[0x51]);
  in_ECX[0x51] = (int)param_1;
  return;
}

