// FUN_0063ed90 @ 0063ed90 body=[[0063ed90, 0063eecc] [0063eed0, 0063eef4] [0063eef8, 0063ef2e]]


void FUN_0063ed90(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 *local_1c;
  undefined4 *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5ef53;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)FUN_00aae9af(0x360);
  local_8 = 0;
  local_18 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    FUN_00409350("UNNAMED_SESSION",0xf);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_14 = 1;
    puVar2 = (undefined4 *)FUN_00aae9af(0x114);
    local_8 = 2;
    local_1c = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      FUN_00409350("interface/sound.sfx",0x13);
      local_8 = CONCAT31(local_8._1_3_,3);
      local_14 = 3;
      FUN_0098ffc0(local_38);
      *puVar2 = &PTR_FUN_00e37c3c;
    }
    *puVar1 = &PTR_FUN_00e38524;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    local_8 = 5;
    puVar1[7] = puVar2;
    *(undefined1 *)(puVar1 + 5) = 0;
    puVar1[0xd0] = 0xf;
    puVar1[0xcf] = 0;
    *(undefined1 *)(puVar1 + 0xcb) = 0;
    FUN_00408ed0(local_54,0,0xffffffff);
    puVar1[0xd2] = 0;
    puVar1[0xd3] = 0;
    puVar1[0xd4] = 0;
    *(undefined1 *)(puVar1 + 0xd6) = 1;
    puVar1[0xd7] = 0;
  }
  if ((local_14 & 2) != 0) {
    local_14 = local_14 & 0xfffffffd;
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38[0]);
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
  }
  local_8 = 0xffffffff;
  if ((local_14 & 1) != 0) {
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54[0]);
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
  }
  piVar3 = (int *)FUN_009c7290();
  (**(code **)(*piVar3 + 4))(puVar1);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  ExceptionList = local_10;
  return;
}

