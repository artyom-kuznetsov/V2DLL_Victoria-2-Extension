// FUN_008b2680 @ 008b2680 body=[[008b2680, 008b26df]]


void FUN_008b2680(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 unaff_EDI;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5b0d0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar1 = FUN_008b3060(param_2);
  if (iVar1 != 0) {
    iVar1 = FUN_008b24f0(iVar1,unaff_EDI);
    if (iVar1 != 0) {
      uVar2 = FUN_008a6620(extraout_ECX);
      FUN_008a8120(uVar2,unaff_EDI);
    }
  }
  ExceptionList = local_14;
  return;
}

