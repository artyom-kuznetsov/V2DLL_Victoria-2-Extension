// FUN_00778d40 @ 00778d40 body=[[00778d40, 00778de3] [00778de7, 00778e3c] [00778e40, 00778e96] [00778e9a, 00778ef0] [00778ef4, 00778f49] [00778f4d, 00778f96] [00778f9a, 00779012] [00779016, 00779034] [00779038, 00779123] [00779127, 00779144] [00779148, 00779169] [0077916d, 007791d9] [007791dd, 007791fe]]


undefined4 FUN_00778d40(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7b5c3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*(int *)(in_ECX + -0x6c) + 0xc))();
  (**(code **)(**(int **)(in_ECX + 0x20c) + 0x50))();
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("lobby",5);
  local_8 = 0;
  local_14 = (int *)(**(code **)(**(int **)(in_ECX + -0x68) + 0x34))();
  local_18 = (int *)(*local_14 + 0x2c);
  uVar1 = (**(code **)(**(int **)(in_ECX + -0x68) + 0x3c))();
  uVar1 = (*(code *)*local_18)(local_34,uVar1);
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x20c) = uVar1;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  if (DAT_012589ac == 0) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("lobby_chat_edit",0xf);
    local_8 = 1;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x20c) + 0x40))(local_34);
    (**(code **)(*piVar2 + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
  }
  local_8 = 0xffffffff;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("back_button",0xb);
  local_8 = 2;
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x20c) + 0x34))(local_34);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(in_ECX + 0x11c);
  local_8 = 0xffffffff;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("play_button",0xb);
  local_8 = 3;
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x20c) + 0x34))(local_34);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(in_ECX + 0x16c);
  local_8 = 0xffffffff;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("lobby_chat_edit",0xf);
  local_8 = 4;
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x20c) + 0x40))(local_34);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(in_ECX + 0x244);
  local_8 = 0xffffffff;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("gamesetup",9);
  local_8 = 5;
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x20c) + 0x18) + 0x78))(local_34);
  local_8 = 0xffffffff;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("player_shield",0xd);
  local_8 = 6;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("singleplayer",0xc);
  local_8 = CONCAT31(local_8._1_3_,7);
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x20c) + 0x6c))(local_34);
  iVar3 = (**(code **)(*piVar2 + 0x34))(local_50);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(in_ECX + 0xc4);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_8 = 0xffffffff;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  FUN_00409350(&DAT_00ded94d,0);
  iVar3 = (**(code **)(**(int **)(in_ECX + -0x68) + 0x100))();
  *(undefined4 *)(in_ECX + 0x554) = *(undefined4 *)(iVar3 + 0x130);
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("checksum",8);
  local_8 = 8;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("multiplayer",0xb);
  local_8._0_1_ = 9;
  piVar2 = *(int **)(DAT_012588e8 + 0xb24);
  local_18 = (int *)(**(code **)(**(int **)(in_ECX + 0x20c) + 0x6c))(local_34);
  iVar3 = (**(code **)(*piVar2 + 0x100))();
  uVar1 = FUN_009da9a0(iVar3 + 0x20,local_88);
  local_8 = CONCAT31(local_8._1_3_,10);
  local_18 = (int *)(**(code **)(*local_18 + 0x3c))(local_50);
  FUN_00408ed0(uVar1,0,0xffffffff);
  FUN_00a5ecc0(uVar1,0);
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_88[0]);
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_8 = 0xffffffff;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  FUN_00777760(in_ECX + -0x6c);
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x20c) + 0x18) + 0x34))();
  if (DAT_012589ac == 0) {
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    FUN_00409350("lobby_chat_edit",0xf);
    local_8 = 0xb;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x20c) + 0x40))(local_6c);
    (**(code **)(*piVar2 + 0x38))();
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c[0]);
    }
  }
  uVar1 = *(undefined4 *)(in_ECX + 0x20c);
  *(undefined4 *)(*(int *)(in_ECX + -0x68) + 0x708) = uVar1;
  ExceptionList = local_10;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

