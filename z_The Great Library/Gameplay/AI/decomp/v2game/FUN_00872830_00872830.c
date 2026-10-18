// FUN_00872830 @ 00872830 body=[[00872830, 008728df] [008728e5, 008728ee]]


void FUN_00872830(float param_1)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  uVar1 = *in_EAX;
  lua_pushvalue(uVar1,in_EAX[1]);
  puVar2 = (undefined4 *)lua_touserdata(uVar1,0xffffffff);
  lua_settop(uVar1,0xfffffffe);
  uVar1 = puVar2[10];
  puVar3 = (undefined4 *)FUN_00aae9af(4);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00401000((param_1 + 0.0005) * 1000.0);
    uVar4 = FUN_00b31c00();
    *puVar3 = uVar4;
  }
  uVar4 = DAT_013f3640;
  if (puVar2 + 2 != (undefined4 *)0x0) {
    puVar2[3] = uVar1;
    *(undefined1 *)(puVar2 + 4) = 0;
    puVar2[2] = luabind::detail::pointer_holder<std::auto_ptr<CFixedPoint>,CFixedPoint>::vftable;
    puVar2[5] = puVar3;
    puVar2[6] = 0;
    puVar2[7] = uVar4;
    puVar2[8] = puVar3;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(0);
  }
  *puVar2 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(puVar3);
}

