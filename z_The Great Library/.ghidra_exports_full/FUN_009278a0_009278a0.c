// FUN_009278a0 @ 009278a0 body=[[009278a0, 00927a0a] [00927a0e, 00927a2f] [00927a33, 00927a55] [00927a59, 00927a89] [00927a8d, 00927c43]]


/* WARNING: Removing unreachable block (ram,0x00927a26) */
/* WARNING: Removing unreachable block (ram,0x00927a80) */
/* WARNING: Removing unreachable block (ram,0x00927a01) */

void FUN_009278a0(undefined4 *param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b845fc;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00409350("WARGOAL",7);
  iVar7 = in_ECX + 0x28;
  local_c = 0;
  FUN_0094dbd0(iVar7,local_44);
  local_c._0_1_ = 1;
  FUN_00408ed0();
  local_c._0_1_ = 2;
  FUN_00408ed0();
  local_c._0_1_ = 3;
  iVar1 = param_1[1];
  puVar3 = (undefined1 *)FUN_00aae9af(0x44);
  local_c._0_1_ = 4;
  uVar2 = (undefined1)local_c;
  local_c._0_1_ = 4;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)0x0;
    local_c._0_1_ = uVar2;
  }
  else {
    *(undefined4 *)(puVar3 + 0x14) = 0xf;
    *(undefined4 *)(puVar3 + 0x10) = 0;
    *puVar3 = 0;
    FUN_00408ed0();
    local_c._0_1_ = 5;
    *(undefined4 *)(puVar3 + 0x30) = 0xf;
    *(undefined4 *)(puVar3 + 0x2c) = 0;
    puVar3[0x1c] = 0;
    FUN_00408ed0();
    *(int *)(puVar3 + 0x38) = iVar1;
    *(undefined4 *)(puVar3 + 0x3c) = 0;
    puVar3[0x40] = 0;
  }
  iVar6 = param_1[2];
  param_1[1] = puVar3;
  param_1[2] = iVar6 + 1;
  if (iVar6 == 0) {
    *param_1 = puVar3;
  }
  else {
    *(undefined1 **)(iVar1 + 0x3c) = puVar3;
  }
  if (local_30 < 0x10) {
    local_c = 0xffffffff;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
    if (iVar1 != 0) {
      iVar4 = FUN_00425a40();
      iVar6 = *(int *)(in_ECX + 0xc);
      if (*(int *)(iVar4 + 4) == iVar6) {
        iVar6 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x514);
        piVar5 = (int *)FUN_009500e0(iVar7);
        iVar7 = __alldiv((longlong)*piVar5 * (longlong)iVar6,1000,0);
        iVar6 = FUN_00425a40();
        iVar7 = iVar7 + *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar6 + 4) * 4) +
                                0x1430);
        iVar6 = FUN_00425a40();
        if (iVar7 < 0) {
          iVar7 = 0;
        }
        *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar6 + 4) * 4) + 0x1430) = iVar7;
        FUN_00428d70(iVar1,in_ECX + 0x10);
      }
      else {
        iVar4 = FUN_00425ac0();
        if (*(int *)(iVar4 + 4) != iVar6) {
          ExceptionList = local_14;
          return;
        }
        iVar6 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x514);
        piVar5 = (int *)FUN_009500e0(iVar7);
        iVar7 = __alldiv((longlong)*piVar5 * (longlong)iVar6,1000,0);
        iVar6 = FUN_00425ac0();
        iVar7 = iVar7 + *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar6 + 4) * 4) +
                                0x1430);
        iVar6 = FUN_00425ac0();
        if (iVar7 < 0) {
          iVar7 = 0;
        }
        *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar6 + 4) * 4) + 0x1430) = iVar7;
        FUN_00428e50(iVar1,in_ECX + 0x10);
      }
      FUN_0042c2f0();
    }
    ExceptionList = local_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_44[0]);
}

