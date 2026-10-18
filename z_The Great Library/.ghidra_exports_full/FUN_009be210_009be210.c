// FUN_009be210 @ 009be210 body=[[009be210, 009be321] [009be325, 009be33a]]


int FUN_009be210(undefined4 param_1,int param_2)

{
  void *_Memory;
  int iVar1;
  undefined4 in_ECX;
  size_t _Size;
  undefined **local_54 [10];
  uint uStack_2c;
  int local_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5dbe8;
  pvStack_14 = ExceptionList;
  _Size = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350(&DAT_00ded94d,0);
  FUN_00992740(local_54,in_ECX,0);
  local_c = 0;
  if (local_24 != 0) {
    _Size = PHYSFS_fileLength();
  }
  _Memory = _malloc(_Size);
  FUN_00992f20();
  iVar1 = luaL_loadbuffer();
  if (((iVar1 == 0) && (iVar1 = lua_pcall(), iVar1 == 0)) && (*(int *)(param_2 + 0x10) != 0)) {
    FUN_009be340();
  }
  _free(_Memory);
  if (iVar1 != 0) {
    FUN_009bdf40();
  }
  local_54[0] = &PTR_FUN_00e37dc0;
  if (local_24 != 0) {
    PHYSFS_close();
    local_24 = 0;
  }
  local_54[0] = &PTR_FUN_00e3b540;
  if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = pvStack_14;
  return iVar1;
}

