// FUN_00815e40 @ 00815e40 body=[[00815e40, 00815e9d]]


void FUN_00815e40(char *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *unaff_ESI;
  undefined **local_10 [3];
  
  puVar1 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    if (puVar1 + 2 != (undefined4 *)0x0) {
      puVar1[2] = *unaff_ESI;
      puVar1[3] = unaff_ESI[1];
    }
    return;
  }
  param_1 = (char *)0x0;
  std::exception::exception((exception *)local_10,&param_1);
  local_10[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_10,&DAT_00e6fb20);
}

