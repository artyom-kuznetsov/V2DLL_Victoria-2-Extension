// FUN_00a60630 @ 00a60630 body=[[00a60630, 00a60727] [00a60894, 00a609d4]]


void FUN_00a60630(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined **local_16c [66];
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined **local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  undefined1 local_28;
  char local_27;
  undefined4 local_24;
  int local_20;
  undefined4 *local_1c;
  int local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5d1c9;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xfffffe10;
  if (*(int *)(*(int *)(in_ECX + 0x1c) + 0xe0) != 0) {
    local_48 = 0x12;
    local_44 = 0;
    ExceptionList = &pvStack_10;
    local_14 = &stack0xfffffe10;
    local_1c = (undefined4 *)FUN_00aae9af(0x3c);
    if (local_1c == (undefined4 *)0x0) {
      local_1c = (undefined4 *)0x0;
    }
    else {
      *local_1c = 0;
      local_1c[1] = 0;
      local_1c[2] = 0;
      local_1c[4] = 0;
      local_1c[5] = 0;
      local_1c[6] = 0;
      local_1c[0xd] = 0xf;
      local_1c[0xc] = 0;
      *(undefined1 *)(local_1c + 8) = 0;
    }
    puVar1 = local_1c;
    local_8 = 0;
    local_20 = FUN_00aae9af(0x3c);
    local_8._0_1_ = 1;
    if (local_20 == 0) {
      local_2c = (undefined4 *)0x0;
    }
    else {
      local_2c = (undefined4 *)FUN_009d5450(local_20,puVar1,1,0,0);
    }
    local_34 = &PTR_FUN_00e38528;
    local_30 = 0;
    local_27 = '\x01';
    local_28 = *(char *)((int)local_2c + 0x13) != '\0';
    local_8._0_1_ = 2;
    FUN_00a6ac00();
    local_8 = (uint)local_8._1_3_ << 8;
    local_34 = &PTR_FUN_00e38528;
    if ((local_2c != (undefined4 *)0x0) && (local_27 != '\0')) {
      (**(code **)*local_2c)(1);
    }
    local_8 = 0xffffffff;
    FUN_00a6073a();
    return;
  }
  local_24 = 0x12;
  local_20 = 0;
  ExceptionList = &pvStack_10;
  local_18 = in_ECX;
  piVar2 = (int *)FUN_00aae9af(0x3c);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *piVar2 = 0;
    piVar2[1] = 0;
    piVar2[2] = 0;
    piVar2[4] = 0;
    piVar2[5] = 0;
    piVar2[6] = 0;
    piVar2[0xd] = 0xf;
    piVar2[0xc] = 0;
    *(undefined1 *)(piVar2 + 8) = 0;
  }
  FUN_009d7490(piVar2[1],&local_24,&local_1c,param_1);
  FUN_00a89eb0(*piVar2,piVar2[1] - *piVar2,1);
  param_1 = param_1 * 0xe8;
  iVar3 = FUN_00a89f70(*(int *)(*(int *)(local_18 + 0x18) + 0x20) + param_1,1);
  if (iVar3 == -1) {
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350("server.cpp",10);
    local_8 = 6;
    FUN_004015b0(local_64,0x11e,0x301);
    local_8._0_1_ = 7;
    iVar3 = *(int *)(*(int *)(local_18 + 0x18) + 0x20);
    uVar4 = FUN_00987d20(*(undefined4 *)(iVar3 + 0xc + param_1),&DAT_00ded950,
                         *(undefined2 *)(iVar3 + 0x10 + param_1));
    uVar4 = FUN_00447240(uVar4);
    uVar4 = FUN_00418e30(uVar4);
    uVar4 = FUN_009da180(uVar4);
    FUN_00401280(uVar4);
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_00987ac0(local_16c);
    local_16c[0] = std::ios_base::vftable;
    FUN_00aad52d(local_16c);
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
  }
  ExceptionList = pvStack_10;
  return;
}

