// FUN_00b1f280 @ 00b1f280 body=[[00b1f280, 00b1f333]]


undefined4 FUN_00b1f280(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b3a0f8;
  local_c = ExceptionList;
  uVar2 = DAT_00ef259c ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  local_18 = (undefined1 *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  FUN_00b136d0(param_2);
  cVar1 = FUN_00b1f1f0(&local_18,param_2);
  while (cVar1 == '\x01') {
    puVar3 = local_18;
    if (local_18 == (undefined1 *)0x0) {
      puVar3 = &DAT_00ded94d;
    }
    FUN_00b13780(puVar3,local_14);
    cVar1 = FUN_00b1f1f0(&local_18,param_2);
  }
  local_4 = 0xffffffff;
  FUN_00b13650(uVar2);
  ExceptionList = local_c;
  return 1;
}

