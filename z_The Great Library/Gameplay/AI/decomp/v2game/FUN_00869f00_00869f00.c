// FUN_00869f00 @ 00869f00 body=[[00869f00, 00869f42] [00869f46, 00869f49]]


void FUN_00869f00(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_20 [5];
  uint local_c;
  
  puVar2 = (undefined4 *)FUN_0086aba0(local_20);
  puVar1 = puVar2 + 4;
  if (0xf < (uint)puVar2[5]) {
    puVar2 = (undefined4 *)*puVar2;
  }
  lua_pushlstring(param_1,puVar2,*puVar1);
  if (0xf < local_c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_20[0]);
  }
  return;
}

