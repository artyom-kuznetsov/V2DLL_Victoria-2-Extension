// FUN_00b20a90 @ 00b20a90 body=[[00b20a90, 00b20aff]]


int FUN_00b20a90(code *param_1)

{
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = (*DAT_013f3aa8)(4,0);
  if (local_10 == 0) {
    FUN_00b1f840("Out of memory");
    return 0;
  }
  (*param_1)(FUN_00b209d0,&local_10);
  if (local_8 != 0) {
    FUN_00b1f840(local_8);
    return 0;
  }
  *(undefined4 *)(local_10 + local_c * 4) = 0;
  return local_10;
}

