// FUN_008725b0 @ 008725b0 body=[[008725b0, 0087266f] [00872673, 00872680] [00872684, 00872696]]


void FUN_008725b0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5856b;
  local_10 = ExceptionList;
  uVar1 = *param_1;
  ExceptionList = &local_10;
  lua_pushvalue(uVar1,param_1[1]);
  puVar3 = (undefined4 *)lua_touserdata(uVar1,0xffffffff);
  lua_settop(uVar1,0xfffffffe);
  uVar1 = puVar3[10];
  piVar4 = (int *)FUN_00aae9af(0x10);
  local_8 = 0;
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    *piVar4 = 0;
    piVar4[1] = 0;
    piVar4[2] = 0;
    FUN_0068ea30(param_2);
  }
  uVar2 = DAT_013f3678;
  puVar5 = puVar3 + 2;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar3[3] = uVar1;
    *(undefined1 *)(puVar3 + 4) = 0;
    *puVar5 = luabind::detail::pointer_holder<std::auto_ptr<CArray<float>_>,CArray<float>_>::vftable
    ;
    puVar3[5] = piVar4;
    puVar3[6] = 0;
    puVar3[7] = uVar2;
    puVar3[8] = piVar4;
    piVar4 = (int *)0x0;
  }
  *puVar3 = puVar5;
  if (piVar4 != (int *)0x0) {
    if (*piVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*piVar4);
    }
    *piVar4 = 0;
    piVar4[1] = 0;
    piVar4[2] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar4);
  }
  ExceptionList = local_10;
  return;
}

