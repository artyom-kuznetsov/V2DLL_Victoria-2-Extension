// FUN_00a3a480 @ 00a3a480 body=[[00a3a480, 00a3a4d0]]


void FUN_00a3a480(void)

{
  uint in_EAX;
  int iVar1;
  undefined **local_14 [3];
  char *local_8;
  
  if (in_EAX < 0x3c3c3c4) {
    iVar1 = FUN_00aae9af(in_EAX * 0x44);
    if (iVar1 != 0) {
      return;
    }
  }
  local_8 = (char *)0x0;
  std::exception::exception((exception *)local_14,&local_8);
  local_14[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_14,&DAT_00e6fb20);
}

