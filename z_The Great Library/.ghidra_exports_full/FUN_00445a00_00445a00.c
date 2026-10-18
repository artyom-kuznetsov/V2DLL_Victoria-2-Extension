// FUN_00445a00 @ 00445a00 body=[[00445a00, 00445ab5]]


int FUN_00445a00(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_ESI;
  undefined **local_20 [3];
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b49a58;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 8) = 0;
  iVar2 = FUN_00aae9af(0x18);
  if (iVar2 != 0) {
    *(int *)(param_1 + 4) = iVar2;
    *(int *)iVar2 = iVar2;
    *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
    *(undefined1 *)(*(int *)(param_1 + 4) + 0x14) = 1;
    *(undefined1 *)(*(int *)(param_1 + 4) + 0x15) = 1;
    local_8 = 0;
    if (param_1 != unaff_ESI) {
      FUN_0093d690();
      uVar1 = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(unaff_ESI + 4);
      *(undefined4 *)(unaff_ESI + 4) = uVar1;
      uVar1 = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(unaff_ESI + 8);
      *(undefined4 *)(unaff_ESI + 8) = uVar1;
    }
    ExceptionList = local_10;
    return param_1;
  }
  local_14 = (char *)0x0;
  std::exception::exception((exception *)local_20,&local_14);
  local_20[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_20,&DAT_00e6fb20);
}

