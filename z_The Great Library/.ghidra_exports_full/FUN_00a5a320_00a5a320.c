// FUN_00a5a320 @ 00a5a320 body=[[00a5a320, 00a5a427]]


undefined4 * FUN_00a5a320(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int in_ECX;
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b52473;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  puVar2 = (undefined4 *)FUN_00aae9af(0x168);
  local_c = 0;
  puVar4 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    local_1c = puVar2;
    uVar3 = FUN_00a581e0();
    local_26 = (undefined2)*(undefined4 *)(in_ECX + 0x110);
    local_28 = (undefined2)*(undefined4 *)(in_ECX + 0x10c);
    uVar1 = CONCAT22((short)*(undefined4 *)(in_ECX + 0x108),(short)*(undefined4 *)(in_ECX + 0x104));
    local_20 = CONCAT22((short)*(undefined4 *)(in_ECX + 0xf8),(short)*(undefined4 *)(in_ECX + 0xf4))
    ;
    local_24 = uVar1;
    FUN_009b22e0(puVar2,param_1,param_2,in_ECX + 0xa0,local_20,uVar1,in_ECX + 0x84,in_ECX + 0x160,
                 &local_28,uVar3,in_ECX,*(undefined4 *)(in_ECX + 0xf4),
                 *(undefined4 *)(in_ECX + 0xf8));
    local_c = CONCAT31(local_c._1_3_,1);
    *puVar2 = &PTR_FUN_00e391b8;
    puVar2[1] = &PTR_FUN_00e39240;
    *(undefined1 *)(puVar2 + 0x58) = 1;
    puVar4 = puVar2;
    if ((int *)puVar2[0x38] != (int *)0x0) {
      (**(code **)(*(int *)puVar2[0x38] + 0x100))(uVar1);
    }
  }
  ExceptionList = local_14;
  return puVar4;
}

