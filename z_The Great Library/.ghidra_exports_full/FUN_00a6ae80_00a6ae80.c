// FUN_00a6ae80 @ 00a6ae80 body=[[00a6ae80, 00a6af4a]]


void FUN_00a6ae80(void)

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
      FUN_00a6afd0();
    }
    in_ECX = (undefined4 *)(*unaff_EDI + (((int)in_ECX - (int)puVar1) / 0x24) * 0x24);
    puVar2 = (undefined4 *)unaff_EDI[1];
    local_8 = 0;
    if (puVar2 == (undefined4 *)0x0) goto LAB_00a6af37;
    *puVar2 = *in_ECX;
  }
  else {
    ExceptionList = &local_10;
    if (puVar2 == (undefined4 *)unaff_EDI[2]) {
      ExceptionList = &local_10;
      FUN_00a6afd0();
    }
    puVar2 = (undefined4 *)unaff_EDI[1];
    local_8 = 1;
    if (puVar2 == (undefined4 *)0x0) goto LAB_00a6af37;
    *puVar2 = *in_ECX;
  }
  puVar2[6] = 0xf;
  puVar2[5] = 0;
  *(undefined1 *)(puVar2 + 1) = 0;
  FUN_00408ed0(in_ECX + 1,0,0xffffffff);
  puVar2[8] = in_ECX[8];
LAB_00a6af37:
  unaff_EDI[1] = unaff_EDI[1] + 0x24;
  ExceptionList = local_10;
  return;
}

