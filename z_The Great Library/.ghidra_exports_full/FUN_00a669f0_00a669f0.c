// FUN_00a669f0 @ 00a669f0 body=[[00a669f0, 00a66a92] [00a66a96, 00a66ac1] [00a66ac5, 00a66b01] [00a66b05, 00a66b2b]]


void FUN_00a669f0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b483ab;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e427c8;
  local_8 = 5;
  if (in_ECX[6] != 0) {
    FUN_00a8a9a0(in_ECX[6]);
  }
  if ((undefined4 *)in_ECX[0x3e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x3e])(1);
  }
  puVar1 = in_ECX + 0x3f;
  *puVar1 = &PTR_FUN_00e4279c;
  local_8._0_1_ = 6;
  FUN_00a6b410();
  FUN_00a6b3e0();
  *puVar1 = &PTR_FUN_00e427b0;
  local_8 = CONCAT31(local_8._1_3_,7);
  tbb::internal::NFS_Free((void *)in_ECX[0x40]);
  *puVar1 = &PTR_FUN_00e4271c;
  if (0xf < (uint)in_ECX[0x38]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x33]);
  }
  in_ECX[0x38] = 0xf;
  in_ECX[0x37] = 0;
  *(undefined1 *)(in_ECX + 0x33) = 0;
  if (0xf < (uint)in_ECX[0x2c]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x27]);
  }
  in_ECX[0x2c] = 0xf;
  in_ECX[0x2b] = 0;
  *(undefined1 *)(in_ECX + 0x27) = 0;
  FUN_00768940(in_ECX + 0x23);
  if (in_ECX[0x1f] != 0) {
    FUN_00a6b5d0(puVar1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x1f]);
  }
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  FUN_00a60100();
  ExceptionList = local_10;
  return;
}

