// FUN_00579de0 @ 00579de0 body=[[00579de0, 00579e79]]


void FUN_00579de0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  unaff_EDI[1] = 0x18d;
  *unaff_EDI = CTechnologyProject::vftable;
  unaff_EDI[2] = 0;
  unaff_EDI[3] = 0;
  unaff_EDI[4] = 0;
  unaff_EDI[5] = param_1;
  iVar1 = DAT_01258810;
  unaff_EDI[6] = param_2;
  *(undefined1 *)(unaff_EDI + 7) = 1;
  unaff_EDI[8] = 43800000;
  unaff_EDI[8] = DAT_01259abc;
  if (iVar1 == 0) {
    iVar1 = FUN_00aae9af(0x390);
    local_8 = 0;
    if (iVar1 == 0) {
      iVar1 = 0;
      DAT_01258810 = iVar1;
    }
    else {
      iVar1 = FUN_00576790();
      DAT_01258810 = iVar1;
    }
  }
  unaff_EDI[9] = iVar1;
  ExceptionList = local_10;
  return;
}

