// FUN_00a3a530 @ 00a3a530 body=[[00a3a530, 00a3a603]]


void FUN_00a3a530(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  uint *unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b48a12;
  local_10 = ExceptionList;
  puVar1 = (undefined4 *)unaff_EDI[1];
  if ((in_ECX < puVar1) && (puVar2 = (undefined4 *)*unaff_EDI, puVar2 <= in_ECX)) {
    ExceptionList = &local_10;
    if (puVar1 == (undefined4 *)unaff_EDI[2]) {
      ExceptionList = &local_10;
      FUN_00a3a710();
    }
    in_ECX = (undefined4 *)(*unaff_EDI + (((int)in_ECX - (int)puVar2) / 0x14) * 0x14);
    puVar1 = (undefined4 *)unaff_EDI[1];
    if (puVar1 == (undefined4 *)0x0) goto LAB_00a3a5f1;
    *puVar1 = *in_ECX;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    local_8 = 1;
  }
  else {
    ExceptionList = &local_10;
    if (puVar1 == (undefined4 *)unaff_EDI[2]) {
      ExceptionList = &local_10;
      FUN_00a3a710();
    }
    puVar1 = (undefined4 *)unaff_EDI[1];
    if (puVar1 == (undefined4 *)0x0) goto LAB_00a3a5f1;
    *puVar1 = *in_ECX;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    local_8 = 3;
  }
  FUN_00a39e60(in_ECX + 1);
LAB_00a3a5f1:
  unaff_EDI[1] = unaff_EDI[1] + 0x14;
  ExceptionList = local_10;
  return;
}

