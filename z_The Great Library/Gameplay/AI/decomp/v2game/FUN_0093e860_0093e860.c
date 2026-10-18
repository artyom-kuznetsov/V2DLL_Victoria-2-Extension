// FUN_0093e860 @ 0093e860 body=[[0093e860, 0093e8f8] [0093e90e, 0093e931]]


char * FUN_0093e860(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int in_ECX;
  undefined **local_2c [3];
  char *local_20;
  char *local_1c;
  char *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pcVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3e759;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  ExceptionList = &local_10;
  pcVar2 = (char *)FUN_00aae9af(0x24);
  if (pcVar2 != (char *)0x0) {
    *(undefined4 *)pcVar2 = *(undefined4 *)(in_ECX + 4);
    *(undefined4 *)(pcVar2 + 4) = *(undefined4 *)(in_ECX + 4);
    *(undefined4 *)(pcVar2 + 8) = *(undefined4 *)(in_ECX + 4);
    local_1c = pcVar2 + 0xc;
    pcVar2[0x20] = '\0';
    pcVar2[0x21] = '\0';
    if (local_1c != (char *)0x0) {
      *(undefined4 *)local_1c = *(undefined4 *)pcVar1;
      local_20 = pcVar2 + 0x10;
      local_20[0] = '\0';
      local_20[1] = '\0';
      local_20[2] = '\0';
      local_20[3] = '\0';
      pcVar2[0x14] = '\0';
      pcVar2[0x15] = '\0';
      pcVar2[0x16] = '\0';
      pcVar2[0x17] = '\0';
      pcVar2[0x18] = '\0';
      pcVar2[0x19] = '\0';
      pcVar2[0x1a] = '\0';
      pcVar2[0x1b] = '\0';
      local_8 = 2;
      param_1 = pcVar2;
      local_18 = local_1c;
      FUN_0042b600(local_20,pcVar1 + 4);
    }
    ExceptionList = local_10;
    return pcVar2;
  }
  param_1 = (char *)0x0;
  std::exception::exception((exception *)local_2c,&param_1);
  local_2c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_2c,&DAT_00e6fb20);
}

