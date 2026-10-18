// FUN_00679dd0 @ 00679dd0 body=[[00679dd0, 00679de9] [00679df4, 00679e0a]]


void FUN_00679dd0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = CStack<MAPMODE>::vftable;
  if (in_ECX[1] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[1]);
  }
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  return;
}

