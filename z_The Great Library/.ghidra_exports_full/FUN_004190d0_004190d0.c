// FUN_004190d0 @ 004190d0 body=[[004190d0, 00419177]]


uint FUN_004190d0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  uint in_ECX;
  uint uVar3;
  uint *unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b53ec2;
  local_10 = ExceptionList;
  uVar3 = unaff_EDI[1];
  if ((in_ECX < uVar3) && (uVar1 = *unaff_EDI, uVar1 <= in_ECX)) {
    ExceptionList = &local_10;
    if (uVar3 == unaff_EDI[2]) {
      ExceptionList = &local_10;
      FUN_004193b0();
    }
    puVar2 = (undefined4 *)unaff_EDI[1];
    uVar3 = (in_ECX - uVar1 & 0xfffffff0) + *unaff_EDI;
    if (puVar2 == (undefined4 *)0x0) goto LAB_00419165;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    local_8 = 1;
  }
  else {
    ExceptionList = &local_10;
    if (uVar3 == unaff_EDI[2]) {
      ExceptionList = &local_10;
      uVar3 = FUN_004193b0();
    }
    puVar2 = (undefined4 *)unaff_EDI[1];
    if (puVar2 == (undefined4 *)0x0) goto LAB_00419165;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    local_8 = 3;
  }
  uVar3 = FUN_00419950();
LAB_00419165:
  unaff_EDI[1] = unaff_EDI[1] + 0x10;
  ExceptionList = local_10;
  return uVar3;
}

