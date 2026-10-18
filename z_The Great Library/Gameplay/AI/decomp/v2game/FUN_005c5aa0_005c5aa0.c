// FUN_005c5aa0 @ 005c5aa0 body=[[005c5aa0, 005c5bca]]


void FUN_005c5aa0(void)

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
  puStack_c = &LAB_00b45e32;
  local_10 = ExceptionList;
  uVar2 = unaff_EDI[1];
  if ((in_ECX < uVar2) && (uVar3 = *unaff_EDI, uVar3 <= in_ECX)) {
    ExceptionList = &local_10;
    if (uVar2 == unaff_EDI[2]) {
      ExceptionList = &local_10;
      FUN_005c5240();
    }
    puVar4 = (undefined4 *)unaff_EDI[1];
    iVar1 = *unaff_EDI + ((int)(in_ECX - uVar3) / 0x1c) * 0x1c;
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[1] = *(undefined4 *)(iVar1 + 4);
      *puVar4 = CUniqueUnitNameInternal::vftable;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      local_8 = 1;
      FUN_009d5f10(iVar1 + 8);
      *(undefined2 *)(puVar4 + 6) = *(undefined2 *)(iVar1 + 0x18);
      unaff_EDI[1] = unaff_EDI[1] + 0x1c;
      ExceptionList = local_10;
      return;
    }
  }
  else {
    ExceptionList = &local_10;
    if (uVar2 == unaff_EDI[2]) {
      ExceptionList = &local_10;
      FUN_005c5240();
    }
    puVar4 = (undefined4 *)unaff_EDI[1];
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[1] = *(undefined4 *)(in_ECX + 4);
      *puVar4 = CUniqueUnitNameInternal::vftable;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      local_8 = 3;
      FUN_009d5f10(in_ECX + 8);
      *(undefined2 *)(puVar4 + 6) = *(undefined2 *)(in_ECX + 0x18);
    }
  }
  unaff_EDI[1] = unaff_EDI[1] + 0x1c;
  ExceptionList = local_10;
  return;
}

