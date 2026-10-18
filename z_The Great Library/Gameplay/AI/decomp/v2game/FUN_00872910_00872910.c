// FUN_00872910 @ 00872910 body=[[00872910, 008729e5] [008729e9, 008729fa] [008729fe, 00872a10]]


void FUN_00872910(undefined4 *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5856b;
  local_10 = ExceptionList;
  uVar2 = *param_1;
  ExceptionList = &local_10;
  lua_pushvalue(uVar2,param_1[1]);
  puVar4 = (undefined4 *)lua_touserdata(uVar2,0xffffffff);
  lua_settop(uVar2,0xfffffffe);
  uVar2 = puVar4[10];
  puVar5 = (undefined4 *)FUN_00aae9af(0x1c);
  local_8 = 0;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5[5] = 0xf;
    puVar5[4] = 0;
    *(undefined1 *)puVar5 = 0;
    pcVar6 = in_ECX;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(in_ECX,(int)pcVar6 - (int)(in_ECX + 1));
  }
  uVar3 = DAT_013f366c;
  puVar7 = puVar4 + 2;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar4[3] = uVar2;
    *(undefined1 *)(puVar4 + 4) = 0;
    *puVar7 = luabind::detail::pointer_holder<std::auto_ptr<CString>,CString>::vftable;
    puVar4[5] = puVar5;
    puVar4[6] = 0;
    puVar4[7] = uVar3;
    puVar4[8] = puVar5;
    puVar5 = (undefined4 *)0x0;
  }
  *puVar4 = puVar7;
  if (puVar5 != (undefined4 *)0x0) {
    if (0xf < (uint)puVar5[5]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*puVar5);
    }
    puVar5[5] = 0xf;
    puVar5[4] = 0;
    *(undefined1 *)puVar5 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(puVar5);
  }
  ExceptionList = local_10;
  return;
}

