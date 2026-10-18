// FUN_00aa7570 @ 00aa7570 body=[[00aa7570, 00aa75c8]]


int FUN_00aa7570(char *param_1)

{
  int iVar1;
  undefined **local_10 [3];
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if ((param_1 < (char *)0x40000000) && (iVar1 = FUN_00aae9af((int)param_1 * 4), iVar1 != 0)) {
    return iVar1;
  }
  param_1 = (char *)0x0;
  std::exception::exception((exception *)local_10,&param_1);
  local_10[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_10,&DAT_00e6fb20);
}

