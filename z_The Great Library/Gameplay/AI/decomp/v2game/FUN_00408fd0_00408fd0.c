// FUN_00408fd0 @ 00408fd0 body=[[00408fd0, 0040901e]]


int FUN_00408fd0(char *param_1)

{
  int iVar1;
  undefined **local_10 [3];
  
  iVar1 = 0;
  if ((param_1 != (char *)0x0) && (iVar1 = FUN_00aae9af(param_1), iVar1 == 0)) {
    param_1 = (char *)0x0;
    std::exception::exception((exception *)local_10,&param_1);
    local_10[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_10,&DAT_00e6fb20);
  }
  return iVar1;
}

