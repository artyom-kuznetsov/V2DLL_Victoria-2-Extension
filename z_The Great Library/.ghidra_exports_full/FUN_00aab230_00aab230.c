// FUN_00aab230 @ 00aab230 body=[[00aab230, 00aab291] [00aab295, 00aab2aa] [00aab2ae, 00aab2db]]


void FUN_00aab230(void)

{
  int in_ECX;
  undefined1 local_1c [4];
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b36897;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 5;
  FUN_0086a050(DAT_00ef259c ^ (uint)&stack0xfffffffc);
  local_8._0_1_ = 4;
  FUN_0086a050();
  local_8._0_1_ = 3;
  FUN_0086a050();
  if (*(int *)(in_ECX + 0x3c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(in_ECX + 0x3c));
  }
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  if (*(int *)(in_ECX + 0x1c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(in_ECX + 0x1c));
  }
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  local_18 = in_ECX + 0xc;
  local_8 = CONCAT31(local_8._1_3_,6);
  FUN_00aa82f0(local_1c,**(undefined4 **)(in_ECX + 0x10),*(undefined4 **)(in_ECX + 0x10));
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(undefined4 *)(in_ECX + 0x10));
}

