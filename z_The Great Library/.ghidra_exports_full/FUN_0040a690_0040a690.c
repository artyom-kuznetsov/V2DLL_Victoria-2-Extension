// FUN_0040a690 @ 0040a690 body=[[0040a690, 0040a708]]


void FUN_0040a690(void)

{
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4091c;
  local_10 = ExceptionList;
  if (unaff_ESI != (undefined4 *)0x0) {
    ExceptionList = &local_10;
    unaff_ESI[7] = 0xf;
    unaff_ESI[6] = 0;
    *(undefined1 *)(unaff_ESI + 2) = 0;
    local_8 = 1;
    *unaff_ESI = *unaff_EDI;
    unaff_ESI[1] = unaff_EDI[1];
    FUN_00408ed0(unaff_EDI + 2,0,0xffffffff);
    unaff_ESI[9] = unaff_EDI[9];
    unaff_ESI[10] = unaff_EDI[10];
    unaff_ESI[0xb] = unaff_EDI[0xb];
    unaff_ESI[0xc] = unaff_EDI[0xc];
  }
  ExceptionList = local_10;
  return;
}

