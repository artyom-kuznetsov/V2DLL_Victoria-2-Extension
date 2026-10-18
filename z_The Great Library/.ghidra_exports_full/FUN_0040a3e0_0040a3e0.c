// FUN_0040a3e0 @ 0040a3e0 body=[[0040a3e0, 0040a45a]]


void FUN_0040a3e0(undefined4 *param_1)

{
  undefined4 *unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4094c;
  local_10 = ExceptionList;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_10;
    param_1[7] = 0xf;
    param_1[6] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    local_8 = 1;
    *param_1 = *unaff_EDI;
    param_1[1] = unaff_EDI[1];
    FUN_00408ed0(unaff_EDI + 2,0,0xffffffff);
    param_1[9] = unaff_EDI[9];
    param_1[0xb] = unaff_EDI[0xb];
    param_1[0xc] = unaff_EDI[0xc];
    param_1[10] = unaff_EDI[10];
  }
  ExceptionList = local_10;
  return;
}

