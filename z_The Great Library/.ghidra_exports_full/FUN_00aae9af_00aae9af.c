// FUN_00aae9af @ 00aae9af body=[[00aae9af, 00aaea2d]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00aae9af(size_t param_1)

{
  int iVar1;
  void *pvVar2;
  undefined **local_14 [3];
  char *local_8;
  
  do {
    pvVar2 = _malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return;
    }
    iVar1 = __callnewh(param_1);
  } while (iVar1 != 0);
  if ((_DAT_00f1fc14 & 1) == 0) {
    _DAT_00f1fc14 = _DAT_00f1fc14 | 1;
    local_8 = "bad allocation";
    FUN_00aae288(&local_8,1);
    _DAT_00f1fc08 = std::bad_alloc::vftable;
    _atexit((_func_4879 *)&LAB_00c890ee);
  }
  std::exception::exception((exception *)local_14,(exception *)&DAT_00f1fc08);
  local_14[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_14,&DAT_00e6fb20);
}

