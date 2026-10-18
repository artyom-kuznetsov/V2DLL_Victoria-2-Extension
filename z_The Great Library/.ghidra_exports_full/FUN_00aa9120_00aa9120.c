// FUN_00aa9120 @ 00aa9120 body=[[00aa9120, 00aa9177]]


void FUN_00aa9120(void)

{
  uint uVar1;
  int in_ECX;
  undefined1 local_1c [4];
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b365b0;
  local_10 = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = in_ECX + 0x10;
  local_8 = 1;
  FUN_00aa8180(local_1c,**(undefined4 **)(in_ECX + 0x14),*(undefined4 **)(in_ECX + 0x14));
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(undefined4 *)(in_ECX + 0x14),uVar1);
}

