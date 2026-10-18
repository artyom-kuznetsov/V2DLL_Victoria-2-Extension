// FUN_00445c60 @ 00445c60 body=[[00445c60, 00445ce8] [00445cfe, 00445d21]]


char * FUN_00445c60(char *param_1)

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
  puStack_c = &LAB_00b47871;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &local_10;
  pcVar2 = (char *)FUN_00aae9af(0x24);
  if (pcVar2 != (char *)0x0) {
    *(undefined4 *)pcVar2 = *(undefined4 *)(in_ECX + 4);
    *(undefined4 *)(pcVar2 + 4) = *(undefined4 *)(in_ECX + 4);
    *(undefined4 *)(pcVar2 + 8) = *(undefined4 *)(in_ECX + 4);
    local_1c = pcVar2 + 0xc;
    pcVar2[0x20] = '\0';
    pcVar2[0x21] = '\0';
    local_8 = 1;
    if (local_1c != (char *)0x0) {
      *(undefined4 *)local_1c = *(undefined4 *)pcVar1;
      param_1 = pcVar2;
      local_18 = local_1c;
      FUN_00445a00(pcVar2 + 0x10);
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

