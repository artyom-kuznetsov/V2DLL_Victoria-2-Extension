// FUN_00806ff0 @ 00806ff0 body=[[00806ff0, 008070d6] [008070df, 008070ee]]


/* WARNING: Removing unreachable block (ram,0x008070d1) */

void FUN_00806ff0(void)

{
  float fVar1;
  double dVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3eba8;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00808bc0();
  FUN_00808bc0();
  FUN_00808bc0();
  dVar2 = 0.30000001192092896;
  FUN_00806d30(0x3fd3333340000000,0x3fd99999a0000000,0x4014000000000000);
  fVar1 = (float)dVar2;
  if (fVar1 < -0.0) {
    fVar1 = fVar1 * -1.0;
  }
  for (; DAT_00f17898 < fVar1; fVar1 = fVar1 * 0.5) {
  }
  ExceptionList = local_10;
  return;
}

