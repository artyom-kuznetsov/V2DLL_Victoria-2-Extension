// FUN_0046a4f0 @ 0046a4f0 body=[[0046a4f0, 0046a654] [0046a658, 0046a680] [0046a684, 0046a6bb]]


int FUN_0046a4f0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  int in_ECX;
  uint uVar6;
  uint uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined *puStack_68;
  uint *puStack_64;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  undefined1 *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b51c92;
  local_10 = ExceptionList;
  puStack_64 = (uint *)param_1;
  local_14 = 0;
  puStack_68 = (undefined *)0x46a525;
  ExceptionList = &local_10;
  iVar4 = FUN_00467240();
  uStack_6c = *(undefined4 *)(in_ECX + 0x28);
  puStack_64 = (uint *)0x0;
  local_1c = 0x2d2d2d;
  puStack_68 = (undefined *)0x2d2d2d;
  iVar1 = iVar4 + 0x24;
  uStack_70 = *(undefined4 *)(in_ECX + 0x24);
  uStack_74 = 2;
  uStack_7c = 0x46a54b;
  iStack_78 = iVar1;
  FUN_00465e90();
  uStack_7c = 0;
  local_1c = 0x2d2d2d;
  FUN_00465e90(iVar1,1,*(undefined4 *)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 0x20),0x2d2d2d);
  local_1c = 0x2d2d2d;
  FUN_00465e90(iVar1,0,*(undefined4 *)(in_ECX + 0x14),*(undefined4 *)(in_ECX + 0x18),0x2d2d2d,0);
  piVar2 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(in_ECX + 8) * 4) + 0x188);
  if (piVar2 != (int *)0x0) {
    puStack_64 = (uint *)0x46a5b4;
    cVar3 = (**(code **)(*piVar2 + 0x24))();
    if (cVar3 != '\0') {
      puStack_64 = local_54;
      puStack_68 = (undefined *)0x46a5db;
      puVar5 = (uint *)(**(code **)(**(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                                       *(int *)(in_ECX + 8) * 4) + 0x188) + 0x20))()
      ;
      local_8 = 0;
      uVar6 = 1;
      goto LAB_0046a610;
    }
  }
  puStack_64 = (uint *)0x1;
  puStack_68 = &DAT_00ded974;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  uStack_6c = 0x46a601;
  FUN_00409350();
  puVar5 = local_38;
  local_8 = 1;
  uVar6 = 2;
LAB_0046a610:
  local_18 = (undefined1 *)&uStack_7c;
  puStack_68 = (undefined *)0xf;
  uStack_6c = 0;
  uStack_7c = uStack_7c & 0xffffff00;
  local_14 = uVar6;
  FUN_00408ed0(puVar5,0,0xffffffff);
  FUN_00464b30(iVar4,0,0);
  if ((uVar6 & 2) != 0) {
    uVar6 = uVar6 & 0xfffffffd;
    if (0xf < local_24) {
      puStack_64 = (uint *)local_38[0];
                    /* WARNING: Subroutine does not return */
      puStack_68 = &UNK_0046a655;
      FUN_00aae91b();
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
  }
  local_8 = 0xffffffff;
  if ((uVar6 & 1) != 0) {
    if (0xf < local_40) {
      puStack_64 = (uint *)local_54[0];
                    /* WARNING: Subroutine does not return */
      puStack_68 = &UNK_0046a681;
      FUN_00aae91b();
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
  }
  puStack_64 = *(uint **)(DAT_012588e8 + 0xb0c);
  puStack_68 = (undefined *)0x0;
  uStack_6c = 0x46a6a7;
  FUN_00464bd0();
  ExceptionList = local_10;
  return iVar4;
}

