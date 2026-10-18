// FUN_00a14a70 @ 00a14a70 body=[[00a14a70, 00a14ac9]]


void FUN_00a14a70(undefined4 param_1,undefined4 param_2)

{
  undefined4 *unaff_ESI;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 *local_c;
  
  local_c = (undefined1 *)&local_18;
  local_18 = param_1;
  local_14 = param_2;
  FUN_00a140e0(unaff_ESI);
  *unaff_ESI = &PTR_FUN_00e3efb4;
  unaff_ESI[0x37] = 0;
  unaff_ESI[0x38] = 0;
  unaff_ESI[0x39] = 0;
  *(undefined1 *)(unaff_ESI + 0x3a) = 0;
  unaff_ESI[0x3b] = 0;
  unaff_ESI[0x3c] = 0;
  return;
}

