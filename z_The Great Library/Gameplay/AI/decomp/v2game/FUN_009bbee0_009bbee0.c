// FUN_009bbee0 @ 009bbee0 body=[[009bbee0, 009bbfbf]]


void FUN_009bbee0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  uint *unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3e732;
  local_10 = ExceptionList;
  puVar1 = (undefined4 *)unaff_EDI[1];
  if ((in_ECX < puVar1) && (puVar2 = (undefined4 *)*unaff_EDI, puVar2 <= in_ECX)) {
    ExceptionList = &local_10;
    if (puVar1 == (undefined4 *)unaff_EDI[2]) {
      ExceptionList = &local_10;
      FUN_009bbfc0();
    }
    in_ECX = (undefined4 *)(*unaff_EDI + (((int)in_ECX - (int)puVar2) / 0x18) * 0x18);
    puVar1 = (undefined4 *)unaff_EDI[1];
    if (puVar1 == (undefined4 *)0x0) goto LAB_009bbfad;
    *puVar1 = *in_ECX;
    puVar1[1] = in_ECX[1];
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    local_8 = 1;
  }
  else {
    ExceptionList = &local_10;
    if (puVar1 == (undefined4 *)unaff_EDI[2]) {
      ExceptionList = &local_10;
      FUN_009bbfc0();
    }
    puVar1 = (undefined4 *)unaff_EDI[1];
    if (puVar1 == (undefined4 *)0x0) goto LAB_009bbfad;
    *puVar1 = *in_ECX;
    puVar1[1] = in_ECX[1];
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    local_8 = 3;
  }
  FUN_009beeb0(in_ECX + 2);
LAB_009bbfad:
  unaff_EDI[1] = unaff_EDI[1] + 0x18;
  ExceptionList = local_10;
  return;
}

