// FUN_0040d1f0 @ 0040d1f0 body=[[0040d1f0, 0040d23f] [0040d243, 0040d263] [0040d267, 0040d29f] [0040d2a3, 0040d2b2] [0040d2b6, 0040d2d7] [0040d2db, 0040d2fc] [0040d300, 0040d333] [0040d337, 0040d3ba] [0040d3be, 0040d3d3] [0040d3d7, 0040d408] [0040d40c, 0040d428]]


void FUN_0040d1f0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_ECX;
  int local_24 [5];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b52231;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CBattlePlanManager::vftable;
  local_8 = 0x16;
  FUN_00412260();
  piVar1 = in_ECX + 0xdc;
  if (piVar1 != local_24) {
    if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*piVar1);
    }
    *piVar1 = 0;
    in_ECX[0xdd] = 0;
    in_ECX[0xde] = 0;
  }
  piVar1 = in_ECX + 0xe0;
  if (piVar1 != local_24) {
    if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*piVar1);
    }
    *piVar1 = 0;
    in_ECX[0xe1] = 0;
    in_ECX[0xe2] = 0;
  }
  local_8 = CONCAT31(local_8._1_3_,0x16);
  if ((int *)in_ECX[8] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[8] + 0x24))();
    (**(code **)(*(int *)in_ECX[8] + 0x50))();
  }
  iVar2 = in_ECX[0xe6];
  if (iVar2 != 0) {
    FUN_00413e10();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar2);
  }
  if (in_ECX[0xe0] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xe0]);
  }
  in_ECX[0xe0] = 0;
  in_ECX[0xe1] = 0;
  in_ECX[0xe2] = 0;
  if (in_ECX[0xdc] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xdc]);
  }
  in_ECX[0xdc] = 0;
  in_ECX[0xdd] = 0;
  in_ECX[0xde] = 0;
  if (in_ECX[0xd8] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xd8]);
  }
  in_ECX[0xd8] = 0;
  in_ECX[0xd9] = 0;
  in_ECX[0xda] = 0;
  if (in_ECX[0xd4] != 0) {
    FUN_004651b0(in_ECX[0xd5]);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xd4]);
  }
  in_ECX[0xd4] = 0;
  in_ECX[0xd5] = 0;
  in_ECX[0xd6] = 0;
  in_ECX[200] = CButtonObserver::vftable;
  in_ECX[0xbd] = CButtonObserver::vftable;
  in_ECX[0xb2] = CButtonObserver::vftable;
  in_ECX[0xa7] = CButtonObserver::vftable;
  in_ECX[0x9c] = CButtonObserver::vftable;
  in_ECX[0x91] = CButtonObserver::vftable;
  in_ECX[0x86] = CButtonObserver::vftable;
  in_ECX[0x7b] = CButtonObserver::vftable;
  in_ECX[0x70] = CButtonObserver::vftable;
  in_ECX[0x65] = CButtonObserver::vftable;
  in_ECX[0x5a] = CButtonObserver::vftable;
  in_ECX[0x4f] = CButtonObserver::vftable;
  in_ECX[0x44] = CButtonObserver::vftable;
  in_ECX[0x39] = CButtonObserver::vftable;
  in_ECX[0x2e] = CButtonObserver::vftable;
  in_ECX[0x23] = CButtonObserver::vftable;
  if (in_ECX[0x13] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x13]);
  }
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  if (in_ECX[0xf] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xf]);
  }
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  *in_ECX = &PTR___purecall_00e38700;
  local_8 = 0x19;
  FUN_009a4ca0();
  if (0xf < (uint)in_ECX[6]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[1]);
  }
  in_ECX[5] = 0;
  in_ECX[6] = 0xf;
  *(undefined1 *)(in_ECX + 1) = 0;
  ExceptionList = local_10;
  return;
}

