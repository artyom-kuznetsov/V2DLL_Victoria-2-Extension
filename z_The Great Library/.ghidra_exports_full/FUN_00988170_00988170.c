// FUN_00988170 @ 00988170 body=[[00988170, 00988200]]


undefined4 FUN_00988170(int *param_1)

{
  int iVar1;
  bool bVar2;
  int *unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  bVar2 = false;
  if ((unaff_EDI != (int *)0x0) && (*unaff_EDI == 0)) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x20);
    local_8 = 0;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*param_1 + 0x18);
      if (iVar1 == 0) {
        iVar1 = *param_1 + 0x1c;
      }
      FUN_00445e00(iVar1);
      bVar2 = true;
      iVar1 = FUN_00988120();
    }
    local_8 = 0xffffffff;
    *unaff_EDI = iVar1;
    if (bVar2) {
      FUN_00445ea0();
    }
  }
  ExceptionList = local_10;
  return 2;
}

