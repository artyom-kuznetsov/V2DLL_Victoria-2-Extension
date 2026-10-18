// FUN_009b18a0 @ 009b18a0 body=[[009b18a0, 009b18f2]]


int FUN_009b18a0(void)

{
  int iVar1;
  uint in_ECX;
  undefined **local_14 [3];
  char *local_8;
  
  if (in_ECX == 0) {
    return 0;
  }
  if ((in_ECX < 0x18f9c19) && (iVar1 = FUN_00aae9af(in_ECX * 0xa4), iVar1 != 0)) {
    return iVar1;
  }
  local_8 = (char *)0x0;
  std::exception::exception((exception *)local_14,&local_8);
  local_14[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_14,&DAT_00e6fb20);
}

