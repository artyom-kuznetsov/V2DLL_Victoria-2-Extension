// FUN_00a14b00 @ 00a14b00 body=[[00a14b00, 00a14b44] [00a14b48, 00a14baa] [00a14bb4, 00a14bdd]]


void FUN_00a14b00(void)

{
  int iVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b41406;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e3efb4;
  local_8 = 1;
  iVar1 = in_ECX[0x3c];
  if (iVar1 != 0) {
    FUN_009d6f00();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  if (DAT_01258b30 != (int *)0x0) {
    (**(code **)(*DAT_01258b30 + 8))(in_ECX[0x24]);
    DAT_01258b34 = DAT_01258b34 + -1;
    if (DAT_01258b34 < 0) {
      DAT_01258b34 = 0;
    }
    else if (DAT_01258b34 != 0) goto LAB_00a14b98;
    if (DAT_01258b2d == '\0') {
      if (DAT_01258b30 != (int *)0x0) {
        (**(code **)*DAT_01258b30)(1);
      }
      DAT_01258b30 = (int *)0x0;
    }
  }
LAB_00a14b98:
  if (in_ECX[0x37] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x37]);
  }
  in_ECX[0x37] = 0;
  in_ECX[0x38] = 0;
  in_ECX[0x39] = 0;
  FUN_00a14280();
  ExceptionList = local_10;
  return;
}

