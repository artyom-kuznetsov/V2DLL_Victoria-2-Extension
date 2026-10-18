// FUN_006a4a90 @ 006a4a90 body=[[006a4a90, 006a4ad4] [006a4ad8, 006a4b45]]


void FUN_006a4a90(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_ESI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3e293;
  local_10 = ExceptionList;
  puVar1 = unaff_ESI + 1;
  ExceptionList = &local_10;
  *unaff_ESI = CRightClickReloadItem::vftable;
  *puVar1 = CRightClickReloadItem::vftable;
  unaff_ESI[8] = CRightClickReloadItem::vftable;
  if (0xf < (uint)unaff_ESI[0x26]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x21]);
  }
  unaff_ESI[0x26] = 0xf;
  unaff_ESI[0x25] = 0;
  *(undefined1 *)(unaff_ESI + 0x21) = 0;
  unaff_ESI[0xc] = CButtonObserver::vftable;
  *puVar1 = &PTR_FUN_00e392f0;
  unaff_ESI[8] = &PTR_FUN_00e39320;
  local_8 = 1;
  if ((int *)unaff_ESI[9] != (int *)0x0) {
    (**(code **)(*(int *)unaff_ESI[9] + 0x50))();
  }
  local_8 = 0xffffffff;
  unaff_ESI[8] = &PTR_FUN_00e39158;
  *puVar1 = &PTR_FUN_00e38708;
  FUN_009a62b0();
  ExceptionList = local_10;
  return;
}

