// FUN_009a0dc0 @ 009a0dc0 body=[[009a0dc0, 009a0e27] [009a0e2c, 009a0e52] [009a0e56, 009a0e84]]


void FUN_009a0dc0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3bed7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e38524;
  local_8 = 2;
  if ((*(char *)(in_ECX + 0xd6) != '\0') && ((undefined4 *)in_ECX[7] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)in_ECX[7])(1);
  }
  if (in_ECX[0xd2] != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xd2]);
  }
  in_ECX[0xd2] = 0;
  in_ECX[0xd3] = 0;
  in_ECX[0xd4] = 0;
  if (0xf < (uint)in_ECX[0xd0]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xcb]);
  }
  in_ECX[0xd0] = 0xf;
  in_ECX[0xcf] = 0;
  *(undefined1 *)(in_ECX + 0xcb) = 0;
  FUN_009a2420(in_ECX + 1);
  ExceptionList = local_10;
  return;
}

