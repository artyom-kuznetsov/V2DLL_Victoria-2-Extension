// FUN_00aa84d0 @ 00aa84d0 body=[[00aa84d0, 00aa8532]]


void FUN_00aa84d0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined **local_14 [3];
  char *local_8;
  
  *in_ECX = 0;
  puVar1 = (undefined4 *)FUN_00aae9af(8);
  if (puVar1 != (undefined4 *)0x0) {
    *in_ECX = puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 **)*in_ECX = in_ECX;
    in_ECX[1] = 0;
    in_ECX[2] = 0;
    in_ECX[3] = 0;
    in_ECX[4] = 0;
    return;
  }
  local_8 = (char *)0x0;
  std::exception::exception((exception *)local_14,&local_8);
  local_14[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_14,&DAT_00e6fb20);
}

