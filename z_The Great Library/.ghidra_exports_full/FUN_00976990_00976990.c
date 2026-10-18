// FUN_00976990 @ 00976990 body=[[00976990, 00976a33]]


void FUN_00976990(void)

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
  uVar1 = unaff_EDI[1];
  if ((in_ECX < uVar1) && (uVar2 = *unaff_EDI, uVar2 <= in_ECX)) {
    ExceptionList = &local_10;
    if (uVar1 == unaff_EDI[2]) {
      ExceptionList = &local_10;
      FUN_00976a40();
    }
    uVar1 = unaff_EDI[1];
    in_ECX = ((int)(in_ECX - uVar2) / 0x50) * 0x50 + *unaff_EDI;
    local_8 = 0;
  }
  else {
    ExceptionList = &local_10;
    if (uVar1 == unaff_EDI[2]) {
      ExceptionList = &local_10;
      FUN_00976a40();
    }
    uVar1 = unaff_EDI[1];
    local_8 = 1;
  }
  if (uVar1 != 0) {
    FUN_00976c40(uVar1,in_ECX);
  }
  unaff_EDI[1] = unaff_EDI[1] + 0x50;
  ExceptionList = local_10;
  return;
}

