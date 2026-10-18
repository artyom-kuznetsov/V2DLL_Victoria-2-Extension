// FUN_00594230 @ 00594230 body=[[00594230, 005944a9]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00594230(void)

{
  int in_EAX;
  int iVar1;
  undefined4 *unaff_EDI;
  
  iVar1 = in_EAX + 2;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0x11 < iVar1) {
    iVar1 = 0x11;
  }
  if ((_DAT_013f1bb8 & 1) == 0) {
    _DAT_013f1bb8 = _DAT_013f1bb8 | 1;
    FUN_00401000(0x41a3ffff);
    DAT_013f1b70 = FUN_00b31c00();
    FUN_00401000(0x42220000);
    _DAT_013f1b74 = FUN_00b31c00();
    FUN_00401000(0x42720000);
    _DAT_013f1b78 = FUN_00b31c00();
    FUN_00401000(0x42a10000);
    _DAT_013f1b7c = FUN_00b31c00();
    FUN_00401000(0x42c90000);
    _DAT_013f1b80 = FUN_00b31c00();
    FUN_00401000(0x42f10000);
    _DAT_013f1b84 = FUN_00b31c00();
    FUN_00401000(0x43207fff);
    _DAT_013f1b88 = FUN_00b31c00();
    FUN_00401000(0x43488000);
    _DAT_013f1b8c = FUN_00b31c00();
    FUN_00401000(0x437a8000);
    _DAT_013f1b90 = FUN_00b31c00();
    FUN_00401000(0x43964000);
    _DAT_013f1b94 = FUN_00b31c00();
    FUN_00401000(0x43af4000);
    _DAT_013f1b98 = FUN_00b31c00();
    FUN_00401000(0x43c84000);
    _DAT_013f1b9c = FUN_00b31c00();
    FUN_00401000(0x43e13fff);
    _DAT_013f1ba0 = FUN_00b31c00();
    FUN_00401000(0x43fa4001);
    _DAT_013f1ba4 = FUN_00b31c00();
    FUN_00401000(0x44162001);
    _DAT_013f1ba8 = FUN_00b31c00();
    FUN_00401000(0x442f2000);
    _DAT_013f1bac = FUN_00b31c00();
    FUN_00401000(0x44482001);
    _DAT_013f1bb0 = FUN_00b31c00();
    FUN_00401000(0x44612000);
    _DAT_013f1bb4 = FUN_00b31c00();
  }
  *unaff_EDI = (&DAT_013f1b70)[iVar1];
  return;
}

