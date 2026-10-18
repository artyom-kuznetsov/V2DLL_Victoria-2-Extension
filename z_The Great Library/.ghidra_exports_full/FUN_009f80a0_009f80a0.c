// FUN_009f80a0 @ 009f80a0 body=[[009f80a0, 009f8176]]


void FUN_009f80a0(void)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint in_ECX;
  int iVar4;
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
      FUN_006151d0();
    }
    iVar4 = (in_ECX - uVar2 & 0xffffffe0) + *unaff_EDI;
    puVar3 = (undefined1 *)unaff_EDI[1];
    local_8 = 0;
    if (puVar3 != (undefined1 *)0x0) {
      *(undefined4 *)(puVar3 + 0x14) = 0xf;
      *(undefined4 *)(puVar3 + 0x10) = 0;
      *puVar3 = 0;
      FUN_00408ed0(iVar4,0,0xffffffff);
      puVar3[0x1c] = *(undefined1 *)(iVar4 + 0x1c);
      unaff_EDI[1] = unaff_EDI[1] + 0x20;
      ExceptionList = local_10;
      return;
    }
  }
  else {
    ExceptionList = &local_10;
    if (uVar1 == unaff_EDI[2]) {
      ExceptionList = &local_10;
      FUN_006151d0();
    }
    puVar3 = (undefined1 *)unaff_EDI[1];
    local_8 = 1;
    if (puVar3 != (undefined1 *)0x0) {
      *(undefined4 *)(puVar3 + 0x14) = 0xf;
      *(undefined4 *)(puVar3 + 0x10) = 0;
      *puVar3 = 0;
      FUN_00408ed0(in_ECX,0,0xffffffff);
      puVar3[0x1c] = *(undefined1 *)(in_ECX + 0x1c);
    }
  }
  unaff_EDI[1] = unaff_EDI[1] + 0x20;
  ExceptionList = local_10;
  return;
}

