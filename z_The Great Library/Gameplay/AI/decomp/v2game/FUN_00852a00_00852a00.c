// FUN_00852a00 @ 00852a00  (requested 00852A00, first bytes: 55 8B EC 6A FF 68 18 1E)


int FUN_00852a00(undefined4 param_1,int param_2)

{
  int iVar1;
  int unaff_EDI;
  undefined **local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b51e18;
  local_10 = ExceptionList;
  local_8 = 0;
  local_14 = CSafePathFind::vftable;
  ExceptionList = &local_10;
  iVar1 = FUN_00826aa0(param_1,param_2,
                       *(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + unaff_EDI * 4),&local_14);
  FUN_00849e90();
  if (iVar1 == 0) {
    *(int *)(param_2 + 0xa0) = unaff_EDI;
  }
  ExceptionList = local_10;
  return iVar1;
}

