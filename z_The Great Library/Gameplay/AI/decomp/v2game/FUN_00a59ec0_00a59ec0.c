// FUN_00a59ec0 @ 00a59ec0 body=[[00a59ec0, 00a5a0d3]]


bool FUN_00a59ec0(undefined4 param_1)

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
    if ((*(int *)(unaff_EDI + 0x104) != 0) && (*(int *)(unaff_EDI + 0x108) != 0)) {
      return true;
    }
    break;
  default:
    return false;
  case 0x4b:
    if ((*(int *)(unaff_EDI + 0xf4) != 0) && (*(int *)(unaff_EDI + 0xf8) != 0)) {
      return true;
    }
    break;
  case 0x83:
    if ((*(int *)(unaff_EDI + 0x10c) != 0) && (*(int *)(unaff_EDI + 0x110) != 0)) {
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
    if (*(float *)(unaff_EDI + 0x114) != 0.0) {
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
  case 0xbf:
    return true;
  }
  return false;
}

