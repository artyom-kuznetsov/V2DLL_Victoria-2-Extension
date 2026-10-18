// FUN_00a36520 @ 00a36520 body=[[00a36520, 00a365c1]]


void FUN_00a36520(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  uint *unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4c282;
  local_10 = ExceptionList;
  puVar2 = (undefined4 *)unaff_EDI[1];
  if ((in_ECX < puVar2) && (puVar1 = (undefined4 *)*unaff_EDI, puVar1 <= in_ECX)) {
    ExceptionList = &local_10;
    if (puVar2 == (undefined4 *)unaff_EDI[2]) {
      ExceptionList = &local_10;
      FUN_004633d0();
    }
    puVar2 = (undefined4 *)unaff_EDI[1];
    in_ECX = (undefined4 *)(((int)in_ECX - (int)puVar1 & 0xffffffe0U) + *unaff_EDI);
    local_8 = 0;
  }
  else {
    ExceptionList = &local_10;
    if (puVar2 == (undefined4 *)unaff_EDI[2]) {
      ExceptionList = &local_10;
      FUN_004633d0();
    }
    puVar2 = (undefined4 *)unaff_EDI[1];
    local_8 = 1;
  }
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *in_ECX;
    puVar2[6] = 0xf;
    puVar2[5] = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
    FUN_00408ed0(in_ECX + 1,0,0xffffffff);
  }
  unaff_EDI[1] = unaff_EDI[1] + 0x20;
  ExceptionList = local_10;
  return;
}

