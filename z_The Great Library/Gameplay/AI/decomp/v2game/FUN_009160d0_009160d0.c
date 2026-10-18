// FUN_009160d0 @ 009160d0 body=[[009160d0, 00916250] [00916254, 0091627a] [0091627e, 009162a5] [009162a9, 009162e1] [009162e5, 009164d5]]


void FUN_009160d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int iVar7;
  int *piVar8;
  int in_ECX;
  int *piVar9;
  int iStack_b4;
  uint local_98 [2];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  uint local_84;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba309f;
  pvStack_14 = ExceptionList;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  ExceptionList = &pvStack_14;
  FUN_00409350("WARGOAL",7);
  local_c = 0;
  uVar5 = FUN_0094dbd0(in_ECX + 0x28,local_34);
  local_c._0_1_ = 1;
  local_84 = 0xf;
  local_88 = 0;
  local_98[0] = local_98[0] & 0xffffff00;
  FUN_00408ed0(local_50,0,0xffffffff);
  local_c._0_1_ = 2;
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = local_7c[0] & 0xffffff00;
  FUN_00408ed0(uVar5,0,0xffffffff);
  local_c._0_1_ = 3;
  iVar1 = param_1[1];
  puVar6 = (undefined1 *)FUN_00aae9af(0x44);
  local_c._0_1_ = 4;
  uVar3 = (undefined1)local_c;
  local_c._0_1_ = 4;
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
    local_c._0_1_ = uVar3;
  }
  else {
    *(undefined4 *)(puVar6 + 0x14) = 0xf;
    *(undefined4 *)(puVar6 + 0x10) = 0;
    *puVar6 = 0;
    FUN_00408ed0(local_98,0,0xffffffff);
    local_c._0_1_ = 5;
    *(undefined4 *)(puVar6 + 0x30) = 0xf;
    *(undefined4 *)(puVar6 + 0x2c) = 0;
    puVar6[0x1c] = 0;
    FUN_00408ed0(local_7c,0,0xffffffff);
    *(int *)(puVar6 + 0x38) = iVar1;
    *(undefined4 *)(puVar6 + 0x3c) = 0;
    puVar6[0x40] = 0;
  }
  iVar7 = param_1[2];
  param_1[1] = puVar6;
  param_1[2] = iVar7 + 1;
  if (iVar7 == 0) {
    *param_1 = puVar6;
  }
  else {
    *(undefined1 **)(iVar1 + 0x3c) = puVar6;
  }
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_7c[0]);
  }
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = local_7c[0] & 0xffffff00;
  if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_98[0]);
  }
  local_84 = 0xf;
  local_88 = 0;
  local_98[0] = local_98[0] & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_c = 0xffffffff;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4) +
                           0xbe8) + *(int *)(in_ECX + 0x14) * 4);
  FUN_0093cfb0();
  FUN_0042c2f0();
  FUN_0093cfb0();
  FUN_009547e0();
  FUN_008a8650(0);
  uStack_90 = *(undefined4 *)(in_ECX + 0x40);
  uStack_8c = *(undefined4 *)(in_ECX + 0x44);
  local_6c = *(undefined4 *)(in_ECX + 0x48);
  local_68 = *(undefined4 *)(in_ECX + 0x4c);
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x34) + 0x18c) + 0x2c))(local_98,0);
  piVar8 = *(int **)(iStack_b4 + 0x50);
  piVar9 = (int *)(iStack_b4 + 0x50);
  do {
    if (piVar8 == (int *)0x0) {
      cVar4 = FUN_0092eff0();
      if (cVar4 == '\0') {
        FUN_009500e0(in_ECX + 0x28);
        iVar7 = *(int *)(iVar1 + 0x1430) + (int)piVar9;
        if (iVar7 < 0) {
          iVar7 = 0;
        }
        *(int *)(iVar1 + 0x1430) = iVar7;
        ExceptionList = pvStack_1c;
        return;
      }
      break;
    }
    iVar7 = *piVar8;
    piVar8 = (int *)piVar8[2];
  } while (*(int *)(iVar7 + 0x24) != *(int *)(*(int *)(in_ECX + 0x34) + 8));
  piVar8 = (int *)*piVar9;
  if (piVar8 != (int *)0x0) {
    while( true ) {
      puVar2 = (undefined4 *)*piVar8;
      piVar8 = (int *)piVar8[2];
      if (puVar2[9] == *(int *)(*(int *)(in_ECX + 0x34) + 8)) break;
      if (piVar8 == (int *)0x0) {
        ExceptionList = pvStack_1c;
        return;
      }
    }
    *(undefined1 *)(iStack_b4 + 0x71) = 1;
    for (piVar9 = (int *)*piVar9; (piVar9 != (int *)0x0 && ((undefined4 *)*piVar9 != puVar2));
        piVar9 = (int *)piVar9[2]) {
    }
    FUN_005f2ae0(piVar9);
    for (piVar8 = *(int **)(DAT_012588e8 + 0xa84);
        (piVar8 != (int *)0x0 && ((undefined4 *)*piVar8 != puVar2)); piVar8 = (int *)piVar8[2]) {
    }
    FUN_005f2ae0(piVar8);
    (**(code **)*puVar2)(1);
  }
  ExceptionList = pvStack_1c;
  return;
}

