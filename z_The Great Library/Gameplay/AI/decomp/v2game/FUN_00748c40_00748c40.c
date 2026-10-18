// FUN_00748c40 @ 00748c40 body=[[00748c40, 00748c7f] [00748c83, 00748c9b] [00748c9f, 00748cbb] [00748cbf, 00748cda]]


void FUN_00748c40(int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b503f1;
  local_10 = ExceptionList;
  local_8 = 2;
  ExceptionList = &local_10;
  FUN_007495d0(param_1);
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 != 0) {
    FUN_00455c20(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_004651b0(*(undefined4 *)(param_1 + 0x48));
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0x44));
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined ***)(param_1 + 0x14) = CButtonObserver::vftable;
  if (*(int *)(param_1 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  ExceptionList = local_10;
  return;
}

