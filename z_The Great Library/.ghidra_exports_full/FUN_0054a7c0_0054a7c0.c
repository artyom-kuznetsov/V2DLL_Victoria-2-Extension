// FUN_0054a7c0 @ 0054a7c0 body=[[0054a7c0, 0054a864]]


void FUN_0054a7c0(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint in_ECX;
  uint *unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b46eb2;
  local_10 = ExceptionList;
  uVar1 = unaff_EDI[1];
  if ((in_ECX < uVar1) && (uVar2 = *unaff_EDI, uVar2 <= in_ECX)) {
    ExceptionList = &local_10;
    if (uVar1 == unaff_EDI[2]) {
      ExceptionList = &local_10;
      FUN_0054ab30();
    }
    puVar3 = (undefined4 *)unaff_EDI[1];
    in_ECX = (in_ECX - uVar2 & 0xfffffff0) + *unaff_EDI;
    if (puVar3 == (undefined4 *)0x0) goto LAB_0054a852;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    local_8 = 1;
  }
  else {
    ExceptionList = &local_10;
    if (uVar1 == unaff_EDI[2]) {
      ExceptionList = &local_10;
      FUN_0054ab30();
    }
    puVar3 = (undefined4 *)unaff_EDI[1];
    if (puVar3 == (undefined4 *)0x0) goto LAB_0054a852;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    local_8 = 3;
  }
  FUN_004134a0(in_ECX);
LAB_0054a852:
  unaff_EDI[1] = unaff_EDI[1] + 0x10;
  ExceptionList = local_10;
  return;
}

