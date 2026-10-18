// FUN_00a381a0 @ 00a381a0 body=[[00a381a0, 00a38295]]


undefined4 * FUN_00a381a0(undefined4 *param_1)

{
  undefined3 uVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b54b09;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e40750;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uStack_7 = 0;
  uVar1 = uStack_7;
  local_8 = 1;
  uStack_7 = 0;
  if (DAT_01258b44 == 0) {
    iVar2 = FUN_00aae9af();
    local_8 = 2;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 8) = 0;
      uVar3 = FUN_00a3a480();
      *(undefined4 *)(iVar2 + 4) = uVar3;
      *(undefined4 *)uVar3 = uVar3;
      *(int *)(*(int *)(iVar2 + 4) + 4) = *(int *)(iVar2 + 4);
      *(int *)(*(int *)(iVar2 + 4) + 8) = *(int *)(iVar2 + 4);
      *(undefined1 *)(*(int *)(iVar2 + 4) + 0x40) = 1;
      *(undefined1 *)(*(int *)(iVar2 + 4) + 0x41) = 1;
    }
    local_8 = 1;
    DAT_01258b44 = iVar2;
    iVar2 = FUN_00aae9af();
    local_8 = 3;
    if (iVar2 == 0) {
      DAT_01258b48 = 0;
      uVar1 = uStack_7;
    }
    else {
      DAT_01258b48 = FUN_00a39790();
      uVar1 = uStack_7;
    }
  }
  uStack_7 = uVar1;
  local_8 = 1;
  FUN_00409350("CLAUSEWITZ_SYSTEM_MUTEX",0x17);
  uVar3 = FUN_00a39560();
  param_1[5] = uVar3;
  ExceptionList = local_10;
  return param_1;
}

