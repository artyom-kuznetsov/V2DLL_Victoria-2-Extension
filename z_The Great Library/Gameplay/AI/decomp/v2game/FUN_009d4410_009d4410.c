// FUN_009d4410 @ 009d4410 body=[[009d4410, 009d44b5] [009d44cb, 009d44ee]]


char * FUN_009d4410(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 in_ECX;
  undefined **local_28 [3];
  char *local_1c;
  char *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pcVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b499b9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &local_10;
  pcVar2 = (char *)FUN_00aae9af(300);
  if (pcVar2 != (char *)0x0) {
    *(undefined4 *)pcVar2 = *(undefined4 *)(pcVar1 + 4);
    *(undefined4 *)(pcVar2 + 4) = *(undefined4 *)(pcVar1 + 4);
    local_1c = pcVar2 + 0xc;
    *(undefined4 *)(pcVar2 + 8) = *(undefined4 *)(pcVar1 + 4);
    pcVar2[0x128] = '\0';
    pcVar2[0x129] = '\0';
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
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
      FUN_00408ed0(in_ECX,0,0xffffffff);
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_009d4600(pcVar2 + 0x28);
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

