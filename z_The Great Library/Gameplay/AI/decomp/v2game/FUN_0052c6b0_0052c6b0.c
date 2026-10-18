// FUN_0052c6b0 @ 0052c6b0 body=[[0052c6b0, 0052c995] [0052c999, 0052c9ab]]


void FUN_0052c6b0(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined1 *apuStack_dc [6];
  undefined4 uStack_c4;
  undefined1 *puStack_c0;
  undefined1 auStack_bc [8];
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  int *piStack_a8;
  undefined1 local_80 [20];
  undefined1 local_6c [44];
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_30;
  uint local_20;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f719;
  local_10 = ExceptionList;
  piStack_a8 = param_2;
  uStack_b0._4_4_ = 0x52c6ea;
  ExceptionList = &local_10;
  FUN_004da720();
  FUN_004dab20();
  piStack_a8 = (int *)0x52c714;
  FUN_00525770();
  local_30 = param_3[0x16];
  iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_3[0x17] * 4);
  if ((*(int *)(DAT_012588e8 + 0xb60) == *(int *)(iVar4 + 0x20)) &&
     (*(int *)(param_1 + 0x20) != *(int *)(iVar4 + 0x20))) {
    puStack_c0 = auStack_bc;
    uStack_c4 = 0x52c767;
    (**(code **)(*param_3 + 0x20))();
    local_8 = 0;
    (**(code **)(*param_2 + 0x18))(apuStack_dc);
    apuStack_dc[0] = local_6c;
    local_8 = 0xffffffff;
    FUN_004f6370();
    piStack_a8 = (int *)(param_1 + 0x1c);
    local_8 = 1;
    uStack_b0._0_4_ = 0x52c7a3;
    uStack_b0._4_4_ = iVar4;
    FUN_0053faa0();
    local_8 = 0xffffffff;
    FUN_0047aa50();
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x1580);
    iVar5 = *(int *)(param_1 + 0x20);
    puVar2 = (uint *)(iVar4 + iVar5 * 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 + local_20;
    piVar1 = (int *)(iVar4 + iVar5 * 8 + 4);
    *piVar1 = *piVar1 + local_1c + (uint)CARRY4(uVar3,local_20);
  }
  iVar5 = FUN_004d0080();
  iVar4 = param_3[0x18];
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    iVar4 = *(int *)(iVar4 + 0x224);
  }
  piStack_a8 = (int *)DAT_00f0b340;
  uStack_b0._4_4_ = 0x52c808;
  lVar8 = __allmul();
  uVar6 = (uint)(lVar8 >> 0xf);
  puVar2 = (uint *)(iVar4 + 0x210);
  uVar3 = *puVar2;
  *puVar2 = *puVar2 + uVar6;
  *(int *)(iVar4 + 0x214) =
       *(int *)(iVar4 + 0x214) + (int)((ulonglong)(lVar8 >> 0xf) >> 0x20) +
       (uint)CARRY4(uVar3,uVar6);
  *(int *)(iVar4 + 0x218) = *(int *)(iVar4 + 0x218) + 0x32;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_8 = 2;
  piStack_a8 = (int *)0x52c851;
  _memset(local_80,0,0x40);
  FUN_00423920();
  local_8 = 3;
  FUN_0047dbb0();
  iVar5 = param_2[0x4b];
  uStack_b0 = 0x8000;
  if ((((iVar5 != 0) && (uStack_b0 = 0x8000, DAT_01258734 != 0)) &&
      (uStack_b0 = 0x8000, iVar5 != DAT_01258734 + 0x10)) && (uStack_b0 = 0x8000, iVar5 != 0)) {
    uVar3 = *(uint *)(*(int *)(param_1 + 0xbcc) + 0x18);
    uStack_b0._4_4_ = (((int)uVar3 >> 0x1f) << 0xf | uVar3 >> 0x11) << 0xf | (uVar3 & 0x1ffff) >> 2;
    piStack_a8 = (int *)0x1f40000;
    uStack_b0._0_4_ = uVar3 << 0x1e;
    uStack_b4 = 0x52c8d2;
    uStack_b0 = __alldiv();
    uStack_b0 = uStack_b0 + 0x8000;
  }
  piStack_a8 = (int *)(0x10000 - *(int *)(param_1 + 0xe70));
  uStack_b4 = 0x52c907;
  __allmul();
  piStack_a8 = (int *)0x52c91f;
  FUN_0047de60();
  puVar7 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 4;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7[1] = 0x18d;
    *puVar7 = CGoodsProject::vftable;
    FUN_0047db00();
    local_8._0_1_ = 5;
    FUN_0047db00();
    puVar7[0x2e] = local_20;
    puVar7[0x2f] = local_1c;
  }
  *(undefined4 **)(iVar4 + 0x1d0) = puVar7;
  if (local_40 == 0) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

