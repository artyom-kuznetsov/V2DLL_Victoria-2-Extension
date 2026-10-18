// FUN_0070d0f0 @ 0070d0f0 body=[[0070d0f0, 0070d141] [0070d145, 0070d159] [0070d15d, 0070d188] [0070d18c, 0070d1b2] [0070d1b6, 0070d1dc] [0070d1e0, 0070d206] [0070d20a, 0070d230] [0070d234, 0070d2d1] [0070d2d5, 0070d2f3]]


void FUN_0070d0f0(undefined4 *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5080f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CTopBar::vftable;
  local_8 = 0x17;
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 0x50))();
  }
  iVar1 = param_1[200];
  if (iVar1 != 0) {
    FUN_006c76f0();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  if (0xf < (uint)param_1[0xf2]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xed]);
  }
  param_1[0xf2] = 0xf;
  param_1[0xf1] = 0;
  *(undefined1 *)(param_1 + 0xed) = 0;
  if (0xf < (uint)param_1[0xeb]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xe6]);
  }
  param_1[0xeb] = 0xf;
  param_1[0xea] = 0;
  *(undefined1 *)(param_1 + 0xe6) = 0;
  if (0xf < (uint)param_1[0xe4]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xdf]);
  }
  param_1[0xe4] = 0xf;
  param_1[0xe3] = 0;
  *(undefined1 *)(param_1 + 0xdf) = 0;
  if (0xf < (uint)param_1[0xdd]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xd8]);
  }
  param_1[0xdd] = 0xf;
  param_1[0xdc] = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  if (0xf < (uint)param_1[0xd6]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xd1]);
  }
  param_1[0xd6] = 0xf;
  param_1[0xd5] = 0;
  *(undefined1 *)(param_1 + 0xd1) = 0;
  if (0xf < (uint)param_1[0xcf]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xca]);
  }
  param_1[0xcf] = 0xf;
  param_1[0xce] = 0;
  *(undefined1 *)(param_1 + 0xca) = 0;
  param_1[0xbd] = CButtonObserver::vftable;
  param_1[0xb2] = CButtonObserver::vftable;
  param_1[0xa7] = CButtonObserver::vftable;
  param_1[0x9c] = CButtonObserver::vftable;
  param_1[0x91] = CButtonObserver::vftable;
  param_1[0x86] = CButtonObserver::vftable;
  param_1[0x7b] = CButtonObserver::vftable;
  param_1[0x70] = CButtonObserver::vftable;
  param_1[0x65] = CButtonObserver::vftable;
  param_1[0x5a] = CButtonObserver::vftable;
  param_1[0x4f] = CButtonObserver::vftable;
  param_1[0x44] = CButtonObserver::vftable;
  param_1[0x39] = CButtonObserver::vftable;
  param_1[0x2e] = CButtonObserver::vftable;
  param_1[0x23] = CButtonObserver::vftable;
  param_1[0x18] = CButtonObserver::vftable;
  param_1[0xd] = CButtonObserver::vftable;
  *param_1 = &PTR___purecall_00e38700;
  local_8 = 0x18;
  FUN_009a4ca0(param_1);
  if (0xf < (uint)param_1[6]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[1]);
  }
  param_1[5] = 0;
  param_1[6] = 0xf;
  *(undefined1 *)(param_1 + 1) = 0;
  ExceptionList = local_10;
  return;
}

