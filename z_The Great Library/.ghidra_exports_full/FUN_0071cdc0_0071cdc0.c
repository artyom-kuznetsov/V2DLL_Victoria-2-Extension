// FUN_0071cdc0 @ 0071cdc0 body=[[0071cdc0, 0071ce11] [0071ce15, 0071ce47] [0071ce4b, 0071ce7e] [0071ce82, 0071ceb5] [0071ceb9, 0071cefe] [0071cf02, 0071cf23] [0071cf27, 0071cf48] [0071cf4c, 0071cf8d] [0071cf97, 0071cfbe]]


void FUN_0071cdc0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b53116;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CTradeView::vftable;
  local_8 = 0x1d;
  FUN_00724460(in_ECX + 0x17);
  iVar1 = in_ECX[0x125];
  if (iVar1 != 0) {
    FUN_00476a00(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  in_ECX[0x119] = CButtonObserver::vftable;
  in_ECX[0x10e] = CButtonObserver::vftable;
  in_ECX[0x103] = CButtonObserver::vftable;
  in_ECX[0xf8] = CButtonObserver::vftable;
  in_ECX[0xed] = CButtonObserver::vftable;
  if (in_ECX[0xe8] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xe8]);
  }
  in_ECX[0xe8] = 0;
  in_ECX[0xe9] = 0;
  in_ECX[0xea] = 0;
  in_ECX[0xdd] = CButtonObserver::vftable;
  in_ECX[0xd2] = CButtonObserver::vftable;
  in_ECX[199] = CButtonObserver::vftable;
  if (in_ECX[0xc2] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xc2]);
  }
  in_ECX[0xc2] = 0;
  in_ECX[0xc3] = 0;
  in_ECX[0xc4] = 0;
  in_ECX[0xb7] = CButtonObserver::vftable;
  in_ECX[0xac] = CButtonObserver::vftable;
  in_ECX[0xa1] = CButtonObserver::vftable;
  if (in_ECX[0x9c] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x9c]);
  }
  in_ECX[0x9c] = 0;
  in_ECX[0x9d] = 0;
  in_ECX[0x9e] = 0;
  in_ECX[0x91] = CButtonObserver::vftable;
  in_ECX[0x86] = CButtonObserver::vftable;
  in_ECX[0x7a] = CButtonObserver::vftable;
  in_ECX[0x6f] = CButtonObserver::vftable;
  in_ECX[99] = CButtonObserver::vftable;
  in_ECX[0x58] = CButtonObserver::vftable;
  if (in_ECX[0x53] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x53]);
  }
  in_ECX[0x53] = 0;
  in_ECX[0x54] = 0;
  in_ECX[0x55] = 0;
  if (in_ECX[0x4f] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x4f]);
  }
  in_ECX[0x4f] = 0;
  in_ECX[0x50] = 0;
  in_ECX[0x51] = 0;
  if (in_ECX[0x4b] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x4b]);
  }
  in_ECX[0x4b] = 0;
  in_ECX[0x4c] = 0;
  in_ECX[0x4d] = 0;
  in_ECX[0x40] = CButtonObserver::vftable;
  in_ECX[0x35] = CButtonObserver::vftable;
  in_ECX[0x2d] = CCheckBoxObserver::vftable;
  in_ECX[0x25] = CCheckBoxObserver::vftable;
  in_ECX[0x1d] = CCheckBoxObserver::vftable;
  if (in_ECX[0x17] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x17]);
  }
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  local_8 = 0xffffffff;
  FUN_007538f0();
  ExceptionList = local_10;
  return;
}

