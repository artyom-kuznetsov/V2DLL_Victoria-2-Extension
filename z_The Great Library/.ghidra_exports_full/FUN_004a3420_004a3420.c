// FUN_004a3420 @ 004a3420 body=[[004a3420, 004a34c2]]


void FUN_004a3420(void)

{
  uint uVar1;
  uint in_ECX;
  uint *unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4c282;
  local_10 = ExceptionList;
  uVar1 = unaff_EDI[1];
  if ((in_ECX < uVar1) && (*unaff_EDI <= in_ECX)) {
    ExceptionList = &local_10;
    if (uVar1 == unaff_EDI[2]) {
      ExceptionList = &local_10;
      FUN_004a3660();
    }
    uVar1 = unaff_EDI[1];
    local_8 = 0;
  }
  else {
    ExceptionList = &local_10;
    if (uVar1 == unaff_EDI[2]) {
      ExceptionList = &local_10;
      FUN_004a3660();
    }
    uVar1 = unaff_EDI[1];
    local_8 = 1;
  }
  if (uVar1 != 0) {
    FUN_004a3dd0(uVar1);
  }
  unaff_EDI[1] = unaff_EDI[1] + 0x48;
  ExceptionList = local_10;
  return;
}

