// FUN_00927ec0 @ 00927ec0 body=[[00927ec0, 00927faf]]


undefined4 FUN_00927ec0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6342b;
  local_14 = ExceptionList;
  local_1c = 0;
  uVar3 = 0x2d2d2d;
  ExceptionList = &local_14;
  if (*(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8) != 0) {
    ExceptionList = &local_14;
    iVar1 = FUN_00425a40();
    if (*(int *)(iVar1 + 4) == *(int *)(in_ECX + 0xc)) {
      puVar2 = (undefined4 *)FUN_00425ac0();
      local_1c = puVar2[1];
    }
    else {
      iVar1 = FUN_00425ac0();
      if (*(int *)(iVar1 + 4) != *(int *)(in_ECX + 0xc)) goto LAB_00927f4f;
      puVar2 = (undefined4 *)FUN_00425a40();
      local_1c = puVar2[1];
    }
    uVar3 = *puVar2;
  }
LAB_00927f4f:
  iVar1 = FUN_00aae9af(0xac);
  local_c = 0;
  if (iVar1 != 0) {
    uVar3 = FUN_0093fa90(iVar1,param_1,*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0x14)
                         ,uVar3,local_1c);
    ExceptionList = local_14;
    return uVar3;
  }
  ExceptionList = local_14;
  return 0;
}

