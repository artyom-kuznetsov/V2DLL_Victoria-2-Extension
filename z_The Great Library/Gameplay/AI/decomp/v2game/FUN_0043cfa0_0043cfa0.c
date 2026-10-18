// FUN_0043cfa0 @ 0043cfa0 body=[[0043cfa0, 0043cfee]]


void FUN_0043cfa0(void)

{
  uint in_EAX;
  int iVar1;
  undefined **local_14 [3];
  char *local_8;
  
  if (in_EAX < 0xaaaaaab) {
    iVar1 = FUN_00aae9af(in_EAX * 0x18);
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

