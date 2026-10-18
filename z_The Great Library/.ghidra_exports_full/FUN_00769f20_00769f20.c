// FUN_00769f20 @ 00769f20 body=[[00769f20, 0076a025] [0076a029, 0076a07b] [0076a07f, 0076a108] [0076a10c, 0076a126] [0076a12a, 0076a13a]]


void FUN_00769f20(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b43d70;
  local_10 = ExceptionList;
  if ((*(char *)(in_ECX + 0xa8) != '\0') && (*(int *)(in_ECX + 0x48) != 0)) {
    local_1c = *(undefined4 *)(in_ECX + 0x44);
    ExceptionList = &local_10;
    (**(code **)(**(int **)(in_ECX + 0x50) + 0x14))
              (*(undefined4 *)
                (*(int *)(DAT_012588e8 + 0xacc) +
                *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x48) * 4) + 0xbe4)
                * 4));
    local_1c = *(undefined4 *)(in_ECX + 0x44);
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xb4))
              (*(undefined4 *)
                (*(int *)(DAT_012588e8 + 0xacc) +
                *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x48) * 4) + 0xbe4)
                * 4));
    ExceptionList = local_10;
    return;
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("save_game",9);
  local_8 = 0;
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_54);
  local_11 = *(int *)(iVar3 + 0x6c) != 1;
  local_8 = 0xffffffff;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  if ((bool)local_11) {
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    FUN_00409350("save_game",9);
    local_8 = 1;
    (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_54);
    FUN_009a8bc0();
    local_8 = 0xffffffff;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54[0]);
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    FUN_00409350("save_game",9);
    local_8 = 2;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00409350("save_game",9);
    local_8 = CONCAT31(local_8._1_3_,3);
    piVar1 = *(int **)(in_ECX + 0x20);
    uVar4 = (**(code **)(*piVar1 + 0x48))(local_70);
    iVar3 = (**(code **)(*piVar1 + 0x48))(local_38);
    for (puVar2 = *(undefined4 **)(iVar3 + 0x58); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[2]) {
      (**(code **)(*(int *)*puVar2 + 0x10))(uVar4);
    }
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38[0]);
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

