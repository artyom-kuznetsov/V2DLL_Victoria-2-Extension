// FUN_007aa490 @ 007aa490 body=[[007aa490, 007aa4f3] [007aa4fc, 007aa539] [007aa544, 007aa579]]


void FUN_007aa490(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  int iVar2;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b52d7a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CTechnologyView::vftable;
  piVar1 = in_ECX + 0x3a;
  local_8 = 6;
  FUN_007afcb0(piVar1,&local_14,*piVar1,in_ECX[0x3b]);
  in_ECX[0x44] = CButtonObserver::vftable;
  if (in_ECX[0x3e] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x3e]);
  }
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  in_ECX[0x40] = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    local_14 = in_ECX[0x3b];
    if (iVar2 != local_14) {
      do {
        FUN_007a91c0(iVar2);
        iVar2 = iVar2 + 0x24;
      } while (iVar2 != local_14);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar1);
  }
  *piVar1 = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x3c] = 0;
  in_ECX[0x2e] = CButtonObserver::vftable;
  in_ECX[0x23] = CButtonObserver::vftable;
  in_ECX[0x18] = CButtonObserver::vftable;
  local_8 = 0xffffffff;
  FUN_007538f0();
  ExceptionList = local_10;
  return;
}

