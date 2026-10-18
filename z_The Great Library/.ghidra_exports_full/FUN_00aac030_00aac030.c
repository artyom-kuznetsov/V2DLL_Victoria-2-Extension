// FUN_00aac030 @ 00aac030 body=[[00aac030, 00aac086]]


void FUN_00aac030(void)

{
  uint uVar1;
  int in_ECX;
  undefined1 local_1c [4];
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b369d4;
  local_10 = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = in_ECX + 0x38;
  local_8 = 4;
  FUN_00aa82f0(local_1c,**(undefined4 **)(in_ECX + 0x3c),*(undefined4 **)(in_ECX + 0x3c));
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(undefined4 *)(in_ECX + 0x3c),uVar1);
}

