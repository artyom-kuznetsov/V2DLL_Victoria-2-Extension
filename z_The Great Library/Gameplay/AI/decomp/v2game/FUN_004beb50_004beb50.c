// FUN_004beb50 @ 004beb50 body=[[004beb50, 004bebf0]]


void FUN_004beb50(void)

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
      FUN_004bede0();
    }
    uVar2 = unaff_EDI[1];
    in_ECX = ((int)(in_ECX - uVar1) / 0x278) * 0x278 + *unaff_EDI;
    local_8 = 0;
  }
  else {
    ExceptionList = &local_10;
    if (uVar2 == unaff_EDI[2]) {
      ExceptionList = &local_10;
      FUN_004bede0();
    }
    uVar2 = unaff_EDI[1];
    local_8 = 1;
  }
  if (uVar2 != 0) {
    FUN_00955450(uVar2,in_ECX);
  }
  unaff_EDI[1] = unaff_EDI[1] + 0x278;
  ExceptionList = local_10;
  return;
}

