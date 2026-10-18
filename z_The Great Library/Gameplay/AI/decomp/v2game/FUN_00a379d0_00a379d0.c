// FUN_00a379d0 @ 00a379d0 body=[[00a379d0, 00a37a96]]


void FUN_00a379d0(undefined4 param_1)

{
  int iVar1;
  int unaff_ESI;
  int iVar2;
  undefined **local_24 [3];
  char *local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3ea61;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(uint *)(unaff_ESI + 8) <= *(int *)(unaff_ESI + 0x10) + 1U) {
    ExceptionList = &local_10;
    FUN_008683f0(unaff_ESI);
  }
  iVar2 = *(int *)(unaff_ESI + 0xc);
  if (iVar2 == 0) {
    iVar2 = *(int *)(unaff_ESI + 8);
  }
  iVar2 = iVar2 + -1;
  if (*(int *)(*(int *)(unaff_ESI + 4) + iVar2 * 4) == 0) {
    iVar1 = FUN_00aae9af(0x1c);
    if (iVar1 == 0) {
      local_14 = (char *)0x0;
      std::exception::exception((exception *)local_24,&local_14);
      local_24[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_24,&DAT_00e6fb20);
    }
    *(int *)(*(int *)(unaff_ESI + 4) + iVar2 * 4) = iVar1;
  }
  local_18 = *(char **)(*(int *)(unaff_ESI + 4) + iVar2 * 4);
  local_8 = 0;
  if (local_18 != (char *)0x0) {
    local_18[0x14] = '\x0f';
    local_18[0x15] = '\0';
    local_18[0x16] = '\0';
    local_18[0x17] = '\0';
    local_18[0x10] = '\0';
    local_18[0x11] = '\0';
    local_18[0x12] = '\0';
    local_18[0x13] = '\0';
    *local_18 = '\0';
    local_14 = local_18;
    FUN_00408ed0(param_1,0,0xffffffff);
  }
  *(int *)(unaff_ESI + 0x10) = *(int *)(unaff_ESI + 0x10) + 1;
  *(int *)(unaff_ESI + 0xc) = iVar2;
  ExceptionList = local_10;
  return;
}

