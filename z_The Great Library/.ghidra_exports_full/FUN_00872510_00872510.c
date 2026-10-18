// FUN_00872510 @ 00872510 body=[[00872510, 0087258f] [00872595, 0087259e]]


void FUN_00872510(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = *in_EAX;
  lua_pushvalue(uVar1,in_EAX[1]);
  puVar3 = (undefined4 *)lua_touserdata(uVar1,0xffffffff);
  lua_settop(uVar1,0xfffffffe);
  uVar1 = puVar3[10];
  puVar4 = (undefined4 *)FUN_00aae9af(8);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 0;
    puVar4[1] = 0;
  }
  uVar2 = DAT_013f3658;
  if (puVar3 + 2 != (undefined4 *)0x0) {
    puVar3[3] = uVar1;
    *(undefined1 *)(puVar3 + 4) = 0;
    puVar3[2] = luabind::detail::pointer_holder<std::auto_ptr<CID>,CID>::vftable;
    puVar3[5] = puVar4;
    puVar3[6] = 0;
    puVar3[7] = uVar2;
    puVar3[8] = puVar4;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(0);
  }
  *puVar3 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(puVar4);
}

