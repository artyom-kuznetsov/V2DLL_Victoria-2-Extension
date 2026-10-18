// FUN_0053e510 @ 0053e510 body=[[0053e510, 0053e6d9] [0053e6dd, 0053e729]]


void FUN_0053e510(int param_1,undefined4 *param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined **local_74;
  undefined4 local_70;
  undefined1 local_6c [64];
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4ce90;
  local_10 = ExceptionList;
  iVar4 = param_2[0x12];
  iVar5 = param_2[0x15];
  if (iVar5 == 0) {
    local_70 = 0x18d;
    local_74 = CGoodsPool::vftable;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_8 = 0;
    ExceptionList = &local_10;
    _memset(local_6c,0,0x40);
    FUN_00423920();
    local_8 = 1;
    iVar5 = param_2[0x16];
    FUN_0047dbb0(&local_74,iVar5 + 0x60);
    iVar5 = *(int *)(iVar5 + 300);
    lVar8 = 0x8000;
    if ((((iVar5 != 0) && (lVar8 = 0x8000, DAT_01258734 != 0)) &&
        (lVar8 = 0x8000, iVar5 != DAT_01258734 + 0x10)) && (lVar8 = 0x8000, iVar5 != 0)) {
      uVar3 = *(uint *)(*(int *)(param_1 + 0xbcc) + 0x18);
      lVar8 = __alldiv(uVar3 << 0x1e,
                       (((int)uVar3 >> 0x1f) << 0xf | uVar3 >> 0x11) << 0xf | (uVar3 & 0x1ffff) >> 2
                       ,0x1f40000,0);
      lVar8 = lVar8 + 0x8000;
    }
    lVar8 = __allmul(lVar8,0x10000 - *(uint *)(param_1 + 0xe70),
                     -(uint)(0x10000 < *(uint *)(param_1 + 0xe70)) - *(int *)(param_1 + 0xe74));
    FUN_0047de60(&local_74,lVar8 >> 0xf);
    FUN_0047dc20(&local_74);
    FUN_004da790(param_2[0x16],param_1,param_1 + 0x1184);
    puVar2 = (uint *)(param_1 + 0xe78);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 + local_1c;
    *(int *)(param_1 + 0xe7c) = *(int *)(param_1 + 0xe7c) + local_18 + (uint)CARRY4(uVar3,local_1c);
    iVar5 = *(int *)((DAT_01258738 + 0xd) * 0x10 + param_1);
    puVar2 = (uint *)(iVar5 + 0x40);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 + local_1c;
    piVar1 = (int *)(iVar5 + 0x44);
    *piVar1 = *piVar1 + local_18 + (uint)CARRY4(uVar3,local_1c);
    local_8 = 0xffffffff;
    if (local_2c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c);
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_0047dc20(iVar5 + 8);
    FUN_0047dca0(iVar5 + 0x60);
    uVar6 = *(uint *)(iVar5 + 0xb8);
    iVar5 = *(int *)(iVar5 + 0xbc);
    puVar2 = (uint *)(param_1 + 0xe78);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 + uVar6;
    *(int *)(param_1 + 0xe7c) = *(int *)(param_1 + 0xe7c) + iVar5 + (uint)CARRY4(uVar3,uVar6);
    iVar7 = *(int *)((DAT_01258738 + 0xd) * 0x10 + param_1);
    puVar2 = (uint *)(iVar7 + 0x40);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 + uVar6;
    piVar1 = (int *)(iVar7 + 0x44);
    *piVar1 = *piVar1 + iVar5 + (uint)CARRY4(uVar3,uVar6);
  }
  for (piVar1 = *(int **)(iVar4 + 0xd8);
      (piVar1 != (int *)0x0 && ((undefined4 *)*piVar1 != param_2)); piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  (**(code **)*param_2)(1);
  ExceptionList = local_10;
  return;
}

