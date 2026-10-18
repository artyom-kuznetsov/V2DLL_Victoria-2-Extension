// FUN_005e5bb0 @ 005e5bb0 body=[[005e5bb0, 005e5c93]]


void FUN_005e5bb0(void)

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
      FUN_0079eaf0();
    }
    in_ECX = (undefined4 *)(*unaff_EDI + (((int)in_ECX - (int)puVar1) / 0x28) * 0x28);
    puVar2 = (undefined4 *)unaff_EDI[1];
    local_8 = 0;
    if (puVar2 == (undefined4 *)0x0) goto LAB_005e5c81;
    *puVar2 = *in_ECX;
    puVar2[1] = in_ECX[1];
    puVar2[2] = in_ECX[2];
  }
  else {
    ExceptionList = &local_10;
    if (puVar2 == (undefined4 *)unaff_EDI[2]) {
      ExceptionList = &local_10;
      FUN_0079eaf0();
    }
    puVar2 = (undefined4 *)unaff_EDI[1];
    local_8 = 1;
    if (puVar2 == (undefined4 *)0x0) goto LAB_005e5c81;
    *puVar2 = *in_ECX;
    puVar2[1] = in_ECX[1];
    puVar2[2] = in_ECX[2];
  }
  puVar2[8] = 0xf;
  puVar2[7] = 0;
  *(undefined1 *)(puVar2 + 3) = 0;
  FUN_00408ed0(in_ECX + 3,0,0xffffffff);
LAB_005e5c81:
  unaff_EDI[1] = unaff_EDI[1] + 0x28;
  ExceptionList = local_10;
  return;
}

