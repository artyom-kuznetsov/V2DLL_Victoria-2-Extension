// FUN_004c1180 @ 004c1180 body=[[004c1180, 004c11f3]]


void FUN_004c1180(void)

{
  undefined4 *in_EAX;
  int in_ECX;
  
  if ((((DAT_01258734 != 0) && (*(int *)(in_ECX + 8) != DAT_01258734 + 0x10)) &&
      (*(int *)(in_ECX + 8) != 0)) &&
     ((*(int *)(in_ECX + 0xc) != DAT_012587f0 + 0x48 && (*(int *)(in_ECX + 0xc) != 0)))) {
    FUN_004de350(*(undefined4 *)(in_ECX + 0x88),*(undefined4 *)(in_ECX + 0x8c));
    return;
  }
  *in_EAX = 0;
  in_EAX[1] = 0;
  return;
}

