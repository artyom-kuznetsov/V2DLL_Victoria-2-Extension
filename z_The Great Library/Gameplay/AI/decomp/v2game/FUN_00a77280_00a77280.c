// FUN_00a77280 @ 00a77280 body=[[00a77280, 00a772d6]]


void FUN_00a77280(void)

{
  undefined4 *in_ECX;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3d78c;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *in_ECX = &PTR_FUN_00e43570;
  local_8 = 3;
  FUN_004a2b00(*(undefined4 *)in_ECX[0x6c],(undefined4 *)in_ECX[0x6c]);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_ECX[0x6c]);
}

