// FUN_00419250 @ 00419250 body=[[00419250, 00419332]]


void FUN_00419250(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint in_ECX;
  uint *unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b400a2;
  local_10 = ExceptionList;
  uVar2 = unaff_EDI[1];
  if ((in_ECX < uVar2) && (uVar3 = *unaff_EDI, uVar3 <= in_ECX)) {
    ExceptionList = &local_10;
    if (uVar2 == unaff_EDI[2]) {
      ExceptionList = &local_10;
      FUN_004195e0();
    }
    puVar4 = (undefined4 *)unaff_EDI[1];
    iVar1 = *unaff_EDI + ((int)(in_ECX - uVar3) / 0x14) * 0x14;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      local_8 = 1;
      FUN_0043a750(iVar1);
      puVar4[4] = *(undefined4 *)(iVar1 + 0x10);
      unaff_EDI[1] = unaff_EDI[1] + 0x14;
      ExceptionList = local_10;
      return;
    }
  }
  else {
    ExceptionList = &local_10;
    if (uVar2 == unaff_EDI[2]) {
      ExceptionList = &local_10;
      FUN_004195e0();
    }
    puVar4 = (undefined4 *)unaff_EDI[1];
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      local_8 = 3;
      FUN_0043a750(in_ECX);
      puVar4[4] = *(undefined4 *)(in_ECX + 0x10);
    }
  }
  unaff_EDI[1] = unaff_EDI[1] + 0x14;
  ExceptionList = local_10;
  return;
}

