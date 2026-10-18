// FUN_009a5a50 @ 009a5a50 body=[[009a5a50, 009a5aaa]]


void FUN_009a5a50(char *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined **local_10 [3];
  
  puVar1 = (undefined4 *)FUN_00aae9af(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    if (puVar1 + 2 != (undefined4 *)0x0) {
      puVar1[2] = *param_3;
    }
    return;
  }
  param_1 = (char *)0x0;
  std::exception::exception((exception *)local_10,&param_1);
  local_10[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_10,&DAT_00e6fb20);
}

