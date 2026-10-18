// FUN_009b5890 @ 009b5890 body=[[009b5890, 009b58fd] [009b5901, 009b592e] [009b5932, 009b5958] [009b5967, 009b59a3] [009b59a7, 009b59cd] [009b59d1, 009b5a19] [009b5a1d, 009b5a3a]]


void FUN_009b5890(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b3e276;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e39878;
  in_ECX[0x15] = &PTR_LAB_00e39938;
  local_8 = 7;
  FUN_009963d0(in_ECX[0x45]);
  FUN_009963d0(in_ECX[0x44]);
  if (0xf < (uint)in_ECX[0x75]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x70]);
  }
  in_ECX[0x75] = 0xf;
  in_ECX[0x74] = 0;
  *(undefined1 *)(in_ECX + 0x70) = 0;
  if (0xf < (uint)in_ECX[0x6e]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x69]);
  }
  in_ECX[0x6e] = 0xf;
  in_ECX[0x6d] = 0;
  *(undefined1 *)(in_ECX + 0x69) = 0;
  if (in_ECX[0x65] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x65]);
  }
  in_ECX[0x65] = 0;
  in_ECX[0x66] = 0;
  in_ECX[0x67] = 0;
  local_8._0_1_ = 3;
  if ((undefined4 *)in_ECX[0x5d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x5d])(1);
  }
  if (0xf < (uint)in_ECX[0x52]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x4d]);
  }
  in_ECX[0x52] = 0xf;
  in_ECX[0x51] = 0;
  *(undefined1 *)(in_ECX + 0x4d) = 0;
  if (0xf < (uint)in_ECX[0x4b]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x46]);
  }
  in_ECX[0x4b] = 0xf;
  in_ECX[0x4a] = 0;
  *(undefined1 *)(in_ECX + 0x46) = 0;
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_009f4d20();
  *in_ECX = &PTR_FUN_00e387f8;
  if (*(undefined4 **)(in_ECX[0xd] + 0x98) == in_ECX) {
    *(undefined4 *)(in_ECX[0xd] + 0x98) = 0;
  }
  DAT_01258a84 = DAT_01258a84 + -1;
  if (0xf < (uint)in_ECX[10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[5]);
  }
  in_ECX[9] = 0;
  in_ECX[10] = 0xf;
  *(undefined1 *)(in_ECX + 5) = 0;
  ExceptionList = local_10;
  return;
}

