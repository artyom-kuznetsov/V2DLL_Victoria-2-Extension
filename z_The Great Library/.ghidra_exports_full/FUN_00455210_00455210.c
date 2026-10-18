// FUN_00455210 @ 00455210 body=[[00455210, 0045524c] [00455250, 0045526d] [00455271, 00455283]]


void FUN_00455210(byte param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3d81b;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_008ae2f0();
  if (0xf < *(uint *)(in_ECX + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 8));
  }
  *(undefined4 *)(in_ECX + 0x1c) = 0xf;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined1 *)(in_ECX + 8) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

