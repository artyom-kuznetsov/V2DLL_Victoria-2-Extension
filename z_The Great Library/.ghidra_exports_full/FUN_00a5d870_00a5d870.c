// FUN_00a5d870 @ 00a5d870 body=[[00a5d870, 00a5dade]]


bool FUN_00a5d870(undefined4 param_1)

{
  char cVar1;
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b48591;
  local_10 = ExceptionList;
  switch(param_1) {
  case 0x4b:
    break;
  default:
    return false;
  case 0x84:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 1;
    cVar1 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar1 == '\0';
  case 0x8f:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 2;
    cVar1 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar1 == '\0';
  case 0x90:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 3;
    cVar1 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar1 == '\0';
  case 0x91:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 4;
    cVar1 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar1 == '\0';
  case 0xa9:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 0;
    cVar1 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar1 == '\0';
  case 0xaa:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 5;
    cVar1 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar1 == '\0';
  case 0xab:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 6;
    cVar1 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar1 == '\0';
  case 0xac:
    return true;
  }
  if ((-1 < *(int *)(unaff_EDI + 0x154)) && (-1 < *(int *)(unaff_EDI + 0x158))) {
    return true;
  }
  return false;
}

