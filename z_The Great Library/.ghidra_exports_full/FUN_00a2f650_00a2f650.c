// FUN_00a2f650 @ 00a2f650 body=[[00a2f650, 00a2f6b8] [00a2f6bc, 00a2f6e7] [00a2f6eb, 00a2f711] [00a2f715, 00a2f735] [00a2f739, 00a2f750] [00a2f754, 00a2f76d]]


void FUN_00a2f650(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b41292;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e40088;
  local_8 = 3;
  if (-1 < (int)in_ECX[0x47]) {
    FUN_009bcda0();
  }
  if (-1 < (int)in_ECX[0x2c]) {
    FUN_009bcda0();
  }
  if (0xf < (uint)in_ECX[0x4d]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x48]);
  }
  in_ECX[0x4d] = 0xf;
  in_ECX[0x4c] = 0;
  *(undefined1 *)(in_ECX + 0x48) = 0;
  if (0xf < (uint)in_ECX[0x45]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x40]);
  }
  in_ECX[0x45] = 0xf;
  in_ECX[0x44] = 0;
  *(undefined1 *)(in_ECX + 0x40) = 0;
  if (0xf < (uint)in_ECX[0x2a]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x25]);
  }
  in_ECX[0x2a] = 0xf;
  in_ECX[0x29] = 0;
  *(undefined1 *)(in_ECX + 0x25) = 0;
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
  in_ECX[7] = 0xf;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 2) = 0;
  ExceptionList = local_10;
  return;
}

