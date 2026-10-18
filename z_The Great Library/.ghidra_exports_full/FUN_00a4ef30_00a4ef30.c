// FUN_00a4ef30 @ 00a4ef30 body=[[00a4ef30, 00a4ef8b] [00a4ef8f, 00a4efc2] [00a4efc6, 00a4efe7] [00a4efeb, 00a4f015] [00a4f019, 00a4f042] [00a4f046, 00a4f06f] [00a4f073, 00a4f096] [00a4f09a, 00a4f0b5] [00a4f0b9, 00a4f0d5]]


void FUN_00a4ef30(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b488ac;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e41738;
  local_8 = 6;
  FUN_00a513b0();
  piVar1 = (int *)in_ECX[0x38];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (in_ECX[0x45] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x45]);
  }
  in_ECX[0x45] = 0;
  in_ECX[0x46] = 0;
  in_ECX[0x47] = 0;
  if (in_ECX[0x41] != 0) {
    FUN_00413860();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x41]);
  }
  in_ECX[0x41] = 0;
  in_ECX[0x42] = 0;
  in_ECX[0x43] = 0;
  if (in_ECX[0x39] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x39]);
  }
  in_ECX[0x39] = 0;
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  if (0xf < (uint)in_ECX[0x36]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x31]);
  }
  in_ECX[0x36] = 0xf;
  in_ECX[0x35] = 0;
  *(undefined1 *)(in_ECX + 0x31) = 0;
  if (0xf < (uint)in_ECX[0x2f]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x2a]);
  }
  in_ECX[0x2f] = 0xf;
  in_ECX[0x2e] = 0;
  *(undefined1 *)(in_ECX + 0x2a) = 0;
  if (0xf < (uint)in_ECX[0x28]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x23]);
  }
  in_ECX[0x28] = 0xf;
  in_ECX[0x27] = 0;
  *(undefined1 *)(in_ECX + 0x23) = 0;
  if (0xf < (uint)in_ECX[0xf]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[10]);
  }
  in_ECX[0xf] = 0xf;
  in_ECX[0xe] = 0;
  *(undefined1 *)(in_ECX + 10) = 0;
  if (0xf < (uint)in_ECX[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[2]);
  }
  in_ECX[6] = 0;
  in_ECX[7] = 0xf;
  *(undefined1 *)(in_ECX + 2) = 0;
  ExceptionList = local_10;
  return;
}

