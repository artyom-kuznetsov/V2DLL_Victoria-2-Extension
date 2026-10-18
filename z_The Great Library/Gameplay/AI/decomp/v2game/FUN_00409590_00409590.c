// FUN_00409590 @ 00409590 body=[[00409590, 004095db]]


void FUN_00409590(void)

{
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b47f40;
  local_10 = ExceptionList;
  local_8 = 0;
  if ((*(byte *)(*(int *)(*in_ECX + 4) + 0x14 + (int)in_ECX) & 2) != 0) {
    ExceptionList = &local_10;
    FUN_00989b80();
  }
  ExceptionList = local_10;
  return;
}

