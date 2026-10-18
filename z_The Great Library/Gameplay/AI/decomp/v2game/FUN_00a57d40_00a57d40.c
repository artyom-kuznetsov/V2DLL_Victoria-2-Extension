// FUN_00a57d40 @ 00a57d40 body=[[00a57d40, 00a57f81]]


bool FUN_00a57d40(undefined4 param_1)

{
  char cVar1;
  int unaff_EDI;
  float fVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b48710;
  local_10 = ExceptionList;
  switch(param_1) {
  case 0x2e:
    if (*(int *)(unaff_EDI + 0x134) == 0) {
      return false;
    }
    if (*(int *)(unaff_EDI + 0x138) == 0) {
      return false;
    }
    return true;
  default:
    return false;
  case 0x4b:
    if (*(int *)(unaff_EDI + 300) == 0) {
      return false;
    }
    if (*(int *)(unaff_EDI + 0x130) != 0) {
      return true;
    }
    return false;
  case 0x83:
    if (*(int *)(unaff_EDI + 0x13c) == 0) {
      return false;
    }
    if (*(int *)(unaff_EDI + 0x140) == 0) {
      return false;
    }
    return true;
  case 0x85:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 3;
    cVar1 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar1 == '\0';
  case 0x86:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 2;
    cVar1 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar1 == '\0';
  case 0x87:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 1;
    cVar1 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar1 == '\0';
  case 0x88:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 0;
    cVar1 = FUN_00416db0();
    FUN_00408ad0();
    ExceptionList = local_10;
    return cVar1 == '\0';
  case 0x8a:
    fVar2 = *(float *)(unaff_EDI + 0x154);
    break;
  case 0x92:
    fVar2 = *(float *)(unaff_EDI + 0x148);
    break;
  case 0x93:
    fVar2 = *(float *)(unaff_EDI + 0x144);
    break;
  case 0x94:
    fVar2 = *(float *)(unaff_EDI + 0x14c);
    break;
  case 0x95:
    fVar2 = *(float *)(unaff_EDI + 0x150);
    break;
  case 0x96:
    return *(int *)(unaff_EDI + 0x184) != -10;
  }
  if (fVar2 == 0.0) {
    return false;
  }
  return true;
}

