// FUN_00462dc0 @ 00462dc0 body=[[00462dc0, 00462e6e]]


void FUN_00462dc0(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint in_ECX;
  uint *unaff_ESI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b46eb2;
  local_10 = ExceptionList;
  uVar1 = unaff_ESI[1];
  if ((in_ECX < uVar1) && (uVar2 = *unaff_ESI, uVar2 <= in_ECX)) {
    ExceptionList = &local_10;
    if (uVar1 == unaff_ESI[2]) {
      ExceptionList = &local_10;
      FUN_00463070();
    }
    puVar3 = (undefined4 *)unaff_ESI[1];
    in_ECX = (in_ECX - uVar2 & 0xfffffff0) + *unaff_ESI;
    if (puVar3 == (undefined4 *)0x0) goto LAB_00462e5c;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    local_8 = 1;
  }
  else {
    ExceptionList = &local_10;
    if (uVar1 == unaff_ESI[2]) {
      ExceptionList = &local_10;
      FUN_00463070();
    }
    puVar3 = (undefined4 *)unaff_ESI[1];
    if (puVar3 == (undefined4 *)0x0) goto LAB_00462e5c;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    local_8 = 3;
  }
  FUN_004134a0(in_ECX);
LAB_00462e5c:
  unaff_ESI[1] = unaff_ESI[1] + 0x10;
  ExceptionList = local_10;
  return;
}

