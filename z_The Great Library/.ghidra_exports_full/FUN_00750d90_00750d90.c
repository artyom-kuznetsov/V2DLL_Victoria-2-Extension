// FUN_00750d90 @ 00750d90 body=[[00750d90, 00750dfc] [00750e00, 00750f5d] [00750f61, 00750f71]]


void FUN_00750d90(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 local_9c [5];
  uint local_88;
  undefined4 local_80 [5];
  uint local_6c;
  undefined4 local_64 [5];
  uint local_50;
  undefined4 local_48 [5];
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7c1fb;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("uncolonized_phase",0x11);
  local_8 = 0;
  (**(code **)(**(int **)(in_ECX + 0xd8) + 0x3c))(local_2c);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (*(int *)(*(int *)(in_ECX + 0xdc) + 0x164) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = **(int **)(*(int *)(in_ECX + 0xdc) + 0x15c);
  }
  switch(*(undefined4 *)(iVar1 + 0x80)) {
  case 0:
    uVar2 = FUN_00475d50(local_80);
    local_8 = 1;
    FUN_00408ed0(uVar2,0,0xffffffff);
    FUN_00a5ecc0(uVar2,0);
    local_9c[0] = local_80[0];
    local_88 = local_6c;
    break;
  case 1:
    uVar2 = FUN_00475d50(local_48);
    local_8 = 2;
    FUN_00408ed0(uVar2,0,0xffffffff);
    FUN_00a5ecc0(uVar2,0);
    local_9c[0] = local_48[0];
    local_88 = local_34;
    break;
  case 2:
    uVar2 = FUN_00475d50(local_64);
    local_8 = 3;
    FUN_00408ed0(uVar2,0,0xffffffff);
    FUN_00a5ecc0(uVar2,0);
    local_9c[0] = local_64[0];
    local_88 = local_50;
    break;
  case 3:
    uVar2 = FUN_00475d50(local_9c);
    local_8 = 4;
    FUN_00408ed0(uVar2,0,0xffffffff);
    FUN_00a5ecc0(uVar2,0);
    break;
  default:
    goto switchD_00750e36_default;
  }
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_9c[0]);
  }
switchD_00750e36_default:
  ExceptionList = local_10;
  return;
}

