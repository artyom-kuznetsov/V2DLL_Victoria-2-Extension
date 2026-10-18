// FUN_00a45300 @ 00a45300 body=[[00a45300, 00a45395] [00a453ab, 00a453ce]]


char * FUN_00a45300(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int in_ECX;
  undefined **local_28 [3];
  char *local_1c;
  char *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pcVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3b881;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &local_10;
  pcVar2 = (char *)FUN_00aae9af(0x30);
  if (pcVar2 != (char *)0x0) {
    *(undefined4 *)pcVar2 = *(undefined4 *)(in_ECX + 4);
    *(undefined4 *)(pcVar2 + 4) = *(undefined4 *)(in_ECX + 4);
    local_1c = pcVar2 + 0xc;
    *(undefined4 *)(pcVar2 + 8) = *(undefined4 *)(in_ECX + 4);
    pcVar2[0x2c] = '\0';
    pcVar2[0x2d] = '\0';
    local_8 = 1;
    if (local_1c != (char *)0x0) {
      pcVar2[0x20] = '\x0f';
      pcVar2[0x21] = '\0';
      pcVar2[0x22] = '\0';
      pcVar2[0x23] = '\0';
      pcVar2[0x1c] = '\0';
      pcVar2[0x1d] = '\0';
      pcVar2[0x1e] = '\0';
      pcVar2[0x1f] = '\0';
      *local_1c = '\0';
      param_1 = pcVar2;
      local_18 = local_1c;
      FUN_00408ed0(pcVar1,0,0xffffffff);
      *(undefined4 *)(pcVar2 + 0x28) = *(undefined4 *)(pcVar1 + 0x1c);
    }
    ExceptionList = local_10;
    return pcVar2;
  }
  param_1 = (char *)0x0;
  std::exception::exception((exception *)local_28,&param_1);
  local_28[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_28,&DAT_00e6fb20);
}

