// FUN_00aa8810 @ 00aa8810 body=[[00aa8810, 00aa8898]]


void FUN_00aa8810(uint param_1,uint param_2)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b364c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  local_8 = 0;
  in_ECX[4] = 0;
  FUN_00aa8390((uint)((param_1 & 0x1f) != 0) + (param_1 >> 5));
  in_ECX[4] = param_1;
  if (param_1 < 0x20) {
    param_2 = (1 << ((byte)param_1 & 0x1f)) - 1U & param_2;
  }
  if (param_2 != 0) {
    *(uint *)*in_ECX = param_2;
  }
  ExceptionList = local_10;
  return;
}

