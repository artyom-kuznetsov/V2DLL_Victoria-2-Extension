// FUN_00aa8280 @ 00aa8280 body=[[00aa8280, 00aa82ec]]


void FUN_00aa8280(char *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined **local_10 [3];
  
  puVar1 = (undefined4 *)FUN_00aae9af(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)(in_ECX + 4);
    puVar1[1] = *(undefined4 *)(in_ECX + 4);
    puVar1[2] = *(undefined4 *)(in_ECX + 4);
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != (undefined4 *)0x0) {
      puVar1[3] = *(undefined4 *)param_1;
      puVar1[4] = *(undefined4 *)(param_1 + 4);
    }
    return;
  }
  param_1 = (char *)0x0;
  std::exception::exception((exception *)local_10,&param_1);
  local_10[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_10,&DAT_00e6fb20);
}

