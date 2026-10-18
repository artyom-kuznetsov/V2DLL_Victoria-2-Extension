// FUN_0067ae10 @ 0067ae10 body=[[0067ae10, 0067ae80] [0067ae96, 0067aeb9]]


undefined4 * FUN_0067ae10(char *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined **local_24 [3];
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3af70;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00aae9af(0x24);
  local_18 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)(in_ECX + 4);
    puVar1[1] = *(undefined4 *)(in_ECX + 4);
    puVar1[2] = *(undefined4 *)(in_ECX + 4);
    local_8 = 0;
    *(undefined2 *)(puVar1 + 8) = 0;
    FUN_0067b760(puVar1 + 3);
    ExceptionList = local_10;
    return puVar1;
  }
  param_1 = (char *)0x0;
  std::exception::exception((exception *)local_24,&param_1);
  local_24[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_24,&DAT_00e6fb20);
}

