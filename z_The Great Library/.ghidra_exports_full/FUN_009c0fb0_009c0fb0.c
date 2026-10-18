// FUN_009c0fb0 @ 009c0fb0 body=[[009c0fb0, 009c1083]]


void FUN_009c0fb0(void)

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
      FUN_009c1090();
    }
    in_ECX = (undefined4 *)(*unaff_EDI + (((int)in_ECX - (int)puVar2) / 0x14) * 0x14);
    puVar1 = (undefined4 *)unaff_EDI[1];
    if (puVar1 == (undefined4 *)0x0) goto LAB_009c1071;
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
      FUN_009c1090();
    }
    puVar1 = (undefined4 *)unaff_EDI[1];
    if (puVar1 == (undefined4 *)0x0) goto LAB_009c1071;
    *puVar1 = *in_ECX;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    local_8 = 3;
  }
  FUN_009beeb0(in_ECX + 1);
LAB_009c1071:
  unaff_EDI[1] = unaff_EDI[1] + 0x14;
  ExceptionList = local_10;
  return;
}

