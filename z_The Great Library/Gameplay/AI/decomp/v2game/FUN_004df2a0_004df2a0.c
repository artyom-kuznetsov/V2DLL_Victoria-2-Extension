// FUN_004df2a0 @ 004df2a0 body=[[004df2a0, 004df340]]


void FUN_004df2a0(void)

{
  uint uVar1;
  uint uVar2;
  uint in_ECX;
  uint *unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4c282;
  local_10 = ExceptionList;
  uVar2 = unaff_EDI[1];
  if ((in_ECX < uVar2) && (uVar1 = *unaff_EDI, uVar1 <= in_ECX)) {
    ExceptionList = &local_10;
    if (uVar2 == unaff_EDI[2]) {
      ExceptionList = &local_10;
      FUN_004df350();
    }
    uVar2 = unaff_EDI[1];
    in_ECX = ((int)(in_ECX - uVar1) / 0x160) * 0x160 + *unaff_EDI;
    local_8 = 0;
  }
  else {
    ExceptionList = &local_10;
    if (uVar2 == unaff_EDI[2]) {
      ExceptionList = &local_10;
      FUN_004df350();
    }
    uVar2 = unaff_EDI[1];
    local_8 = 1;
  }
  if (uVar2 != 0) {
    FUN_004dff10(uVar2,in_ECX);
  }
  unaff_EDI[1] = unaff_EDI[1] + 0x160;
  ExceptionList = local_10;
  return;
}

