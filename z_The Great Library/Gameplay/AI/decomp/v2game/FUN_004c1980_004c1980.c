// FUN_004c1980 @ 004c1980 body=[[004c1980, 004c1999]]


void FUN_004c1980(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0xc) != DAT_012587f0 + 0x48) && (*(int *)(in_ECX + 0xc) != 0)) {
    FUN_004de580();
    return;
  }
  return;
}

