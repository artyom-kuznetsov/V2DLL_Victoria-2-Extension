// FUN_009d0880 @ 009d0880 body=[[009d0880, 009d0b2f] [009d0b33, 009d0b5a]]


/* WARNING: Removing unreachable block (ram,0x009d0b27) */

bool FUN_009d0880(int param_1)

{
  char cVar1;
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b49b11;
  local_10 = ExceptionList;
  if (0x167 < param_1) {
switchD_009d08c7_caseD_2f:
    return false;
  }
  if (param_1 == 0x167) {
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00ded94d,0);
    local_8 = 1;
    cVar1 = FUN_00416db0();
    ExceptionList = local_10;
    return cVar1 == '\0';
  }
  switch(param_1) {
  case 0x2e:
    if ((*(int *)(unaff_EDI + 0xa8) != 0) && (*(int *)(unaff_EDI + 0xac) != 0)) {
      return true;
    }
    break;
  default:
    goto switchD_009d08c7_caseD_2f;
  case 0x4b:
    if ((*(int *)(unaff_EDI + 0xa0) != 0) && (*(int *)(unaff_EDI + 0xa4) != 0)) {
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
    if (*(float *)(unaff_EDI + 0x124) != 0.0) {
      return true;
    }
    break;
  case 0x98:
    return true;
  case 0x99:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 2;
    cVar1 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar1 == '\0';
  case 0x9e:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 3;
    cVar1 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar1 == '\0';
  case 0x9f:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 4;
    cVar1 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar1 == '\0';
  case 0xa3:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 6;
    cVar1 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar1 == '\0';
  case 0xa4:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 5;
    cVar1 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar1 == '\0';
  }
  return false;
}

