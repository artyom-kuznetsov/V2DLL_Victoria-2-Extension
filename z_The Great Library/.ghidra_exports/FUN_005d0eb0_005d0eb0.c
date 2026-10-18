// FUN_005d0eb0 @ 005d0eb0  (requested 005D0EB0, first bytes: 55 8B EC 64 A1 00 00 00)


undefined4 FUN_005d0eb0(undefined **param_1)

{
  char cVar1;
  int *unaff_ESI;
  int unaff_EDI;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b45d98;
  local_10 = ExceptionList;
  if (unaff_ESI[0x37] == unaff_EDI) {
    return 1;
  }
  if (((char)unaff_ESI[0x41] == '\0') || (unaff_ESI[0x3b] < 1)) {
    ExceptionList = &local_10;
    if ((unaff_ESI[0x1d] != 0) &&
       (ExceptionList = &local_10, cVar1 = (**(code **)(*(int *)unaff_ESI[0x1d] + 0x2c))(),
       cVar1 == '\0')) {
      ExceptionList = local_10;
      return 0;
    }
    if ((0 < unaff_ESI[0x10]) && (cVar1 = (**(code **)(*unaff_ESI + 0x88))(), cVar1 != '\0')) {
      cVar1 = (**(code **)(*unaff_ESI + 0x38))();
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(*unaff_ESI + 0x40))();
        if (cVar1 == '\0') {
          local_24 = 0;
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          local_14 = 0;
          local_8 = 0;
          if ((char)param_1 == '\0') {
            param_1 = CPathFind::vftable;
          }
          else {
            param_1 = CSafePathFind::vftable;
          }
          cVar1 = FUN_005b8500(&param_1,unaff_ESI,unaff_EDI,&local_24);
          if (cVar1 == '\0') {
            FUN_00849e90();
            ExceptionList = local_10;
            return 0;
          }
          FUN_00849e90();
        }
      }
      else if ((unaff_ESI[0x1d] != 0) && (cVar1 = FUN_005cbe00(unaff_ESI), cVar1 != '\0')) {
        ExceptionList = local_10;
        return 0;
      }
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}

