// FUN_00aaa0f0 @ 00aaa0f0 body=[[00aaa0f0, 00aaa14a]]


void FUN_00aaa0f0(undefined4 param_1)

{
  int iVar1;
  undefined1 local_18 [4];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b36788;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = lua_touserdata(param_1,0xffffffff,DAT_00ef259c ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  local_14 = iVar1;
  FUN_00aa82f0(local_18,**(undefined4 **)(iVar1 + 4),*(undefined4 **)(iVar1 + 4));
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(undefined4 *)(iVar1 + 4));
}

