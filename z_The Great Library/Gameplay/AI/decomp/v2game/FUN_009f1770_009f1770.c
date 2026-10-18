// FUN_009f1770 @ 009f1770 body=[[009f1770, 009f1adc]]


bool FUN_009f1770(undefined4 param_1)

{
  undefined1 uVar1;
  char cVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b49650;
  local_10 = ExceptionList;
  switch(param_1) {
  case 0x4b:
    return true;
  default:
    return false;
  case 0x7d:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 0;
    cVar2 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar2 == '\0';
  case 0x7e:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 1;
    cVar2 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar2 == '\0';
  case 0x7f:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 3;
    cVar2 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar2 == '\0';
  case 0x80:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 2;
    cVar2 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar2 == '\0';
  case 0x81:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 4;
    cVar2 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar2 == '\0';
  case 0x83:
    ExceptionList = &local_10;
    uVar1 = FUN_009f22b0();
    ExceptionList = local_10;
    return (bool)uVar1;
  case 0x84:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 5;
    cVar2 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar2 == '\0';
  case 0x8f:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 6;
    cVar2 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar2 == '\0';
  case 0x90:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 7;
    cVar2 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar2 == '\0';
  case 0x91:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 8;
    cVar2 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar2 == '\0';
  case 0xaa:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 9;
    cVar2 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar2 == '\0';
  case 0xab:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 10;
    cVar2 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar2 == '\0';
  }
}

