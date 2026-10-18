// FUN_00a5c020 @ 00a5c020 body=[[00a5c020, 00a5c1eb]]


bool FUN_00a5c020(undefined4 param_1)

{
  char cVar1;
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b48710;
  local_10 = ExceptionList;
  switch(param_1) {
  case 0x2e:
    if ((*(int *)(unaff_EDI + 0xe0) != 0) && (*(int *)(unaff_EDI + 0xe4) != 0)) {
      return true;
    }
    break;
  default:
    return false;
  case 0x4b:
    if ((*(int *)(unaff_EDI + 0xd8) != 0) && (*(int *)(unaff_EDI + 0xdc) != 0)) {
      return true;
    }
    break;
  case 0x84:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 0;
    cVar1 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar1 == '\0';
  case 0x8a:
    if (*(float *)(unaff_EDI + 0xe8) != 0.0) {
      return true;
    }
    break;
  case 0x99:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 1;
    cVar1 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar1 == '\0';
  case 0xb4:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 3;
    cVar1 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar1 == '\0';
  case 0xb5:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 2;
    cVar1 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar1 == '\0';
  }
  return false;
}

