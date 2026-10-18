// FUN_0079ef40 @ 0079ef40 body=[[0079ef40, 0079ef8f]]


int FUN_0079ef40(void)

{
  int iVar1;
  uint in_ECX;
  undefined **local_14 [3];
  char *local_8;
  
  if (in_ECX == 0) {
    return 0;
  }
  if ((in_ECX < 0x25ed098) && (iVar1 = FUN_00aae9af(in_ECX * 0x6c), iVar1 != 0)) {
    return iVar1;
  }
  local_8 = (char *)0x0;
  std::exception::exception((exception *)local_14,&local_8);
  local_14[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_14,&DAT_00e6fb20);
}

