// FUN_00aa8420 @ 00aa8420 body=[[00aa8420, 00aa84a4]]


void FUN_00aa8420(char *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined **local_10 [3];
  
  puVar1 = (undefined4 *)FUN_00aae9af(0x28);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)(in_ECX + 4);
    puVar1[1] = *(undefined4 *)(in_ECX + 4);
    puVar1[2] = *(undefined4 *)(in_ECX + 4);
    *(undefined2 *)(puVar1 + 9) = 0;
    if (puVar1 + 3 != (undefined4 *)0x0) {
      puVar1[3] = *(undefined4 *)param_1;
      puVar1[4] = *(undefined4 *)(param_1 + 4);
      puVar1[5] = *(undefined4 *)(param_1 + 8);
      puVar1[6] = *(undefined4 *)(param_1 + 0xc);
      puVar1[7] = *(undefined4 *)(param_1 + 0x10);
      puVar1[8] = *(undefined4 *)(param_1 + 0x14);
    }
    return;
  }
  param_1 = (char *)0x0;
  std::exception::exception((exception *)local_10,&param_1);
  local_10[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_10,&DAT_00e6fb20);
}

