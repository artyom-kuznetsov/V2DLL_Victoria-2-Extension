// FUN_004da850 @ 004da850 body=[[004da850, 004da9cc]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_004da850(int param_1,uint *param_2,undefined4 param_3,char param_4,undefined4 param_5,
                   int param_6)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b46658;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((DAT_013f2438 & 1) == 0) {
    DAT_013f2438 = DAT_013f2438 | 1;
    _DAT_013f23e4 = 0x18d;
    _DAT_013f23e0 = CGoodsPool::vftable;
    DAT_013f2428 = 0;
    _DAT_013f242c = 0;
    _DAT_013f2430 = 0;
    local_8 = 1;
    ExceptionList = &local_10;
    _memset(&DAT_013f23e8,0,0x40);
    FUN_00423920();
    _atexit((_func_4879 *)&LAB_00c7f560);
  }
  local_8 = 0xffffffff;
  FUN_004daa10();
  FUN_0047dbb0();
  FUN_0047de60(&DAT_013f23e0);
  if (param_4 != '\0') {
    FUN_0047dca0();
    FUN_0047d9e0(&DAT_013f23e0);
  }
  FUN_0047e3e0();
  if (1 < param_6) {
    uVar1 = *(uint *)(param_1 + 0x5c);
    __alldiv(uVar1 << 0x1e,((int)uVar1 >> 0x1f) << 0x1e | uVar1 >> 2);
    uVar1 = 1 << ((char)param_6 - 2U & 0x1f);
    lVar3 = __allmul(uVar1 << 0xf,((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11);
    uVar2 = (uint)(lVar3 >> 0xf);
    uVar1 = *param_2;
    *param_2 = *param_2 + uVar2;
    param_2[1] = param_2[1] + (int)((ulonglong)(lVar3 >> 0xf) >> 0x20) + (uint)CARRY4(uVar1,uVar2);
  }
  ExceptionList = local_10;
  return param_2;
}

