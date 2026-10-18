// FUN_00aaaff0 @ 00aaaff0 body=[[00aaaff0, 00aab03c]]


void FUN_00aaaff0(void)

{
  uint uVar1;
  int in_ECX;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b36788;
  local_10 = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_00aa82f0(local_18,**(undefined4 **)(in_ECX + 4),*(undefined4 **)(in_ECX + 4));
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(undefined4 *)(in_ECX + 4),uVar1);
}

