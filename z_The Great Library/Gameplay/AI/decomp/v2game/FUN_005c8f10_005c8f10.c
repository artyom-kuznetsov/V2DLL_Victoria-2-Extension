// FUN_005c8f10 @ 005c8f10 body=[[005c8f10, 005c91b5] [005c91b9, 005c9299]]


/* WARNING: Removing unreachable block (ram,0x005c90d0) */

void FUN_005c8f10(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uStack_c8;
  undefined1 local_b0 [72];
  int local_68;
  int local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 *local_24;
  undefined8 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar6 = DAT_012587e4;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b45deb;
  local_10 = ExceptionList;
  if ((((char)param_1[0x30] == 'R') && (*(char *)((int)param_1 + 0xc1) == 'E')) &&
     (*(char *)((int)param_1 + 0xc2) == 'B')) {
    param_1[0x2c] = 1000;
    return;
  }
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0x31] * 4);
  local_40 = param_1[0x30];
  piVar4 = (int *)param_1[0xe];
  ExceptionList = &local_10;
  param_1[0x2c] = 0;
  iVar6 = *(int *)(iVar6 + 4);
  uVar5 = *(uint *)(*(int *)(*(int *)(iVar6 + param_1[0x31] * 4) + 0xa60) + 0x48);
  uStack_c8._4_4_ = (undefined1 *)0x0;
  uStack_c8._0_4_ = (undefined8 *)0x1f40000;
  local_50 = __alldiv(uVar5 << 0x1e,
                      (((int)uVar5 >> 0x1f) << 0xf | uVar5 >> 0x11) << 0xf | (uVar5 & 0x1ffff) >> 2)
  ;
  local_40 = param_1[0x30];
  iVar6 = *(int *)(iVar6 + param_1[0x31] * 4);
  uStack_c8._4_4_ = (undefined1 *)0x5c8ff3;
  cVar3 = (**(code **)(*param_1 + 0x3c))();
  local_20._0_4_ = 0;
  local_20._4_4_ = 0;
  local_20 = 0;
  local_48 = *(undefined4 *)(iVar6 + 0x1448 + (uint)(cVar3 != '\0') * 8);
  local_44 = *(undefined4 *)(iVar6 + 0x144c + (uint)(cVar3 != '\0') * 8);
  if (piVar4 != (int *)0x0) {
    uStack_c8._4_4_ = (undefined1 *)0x5c902c;
    local_30 = FUN_00b31c36();
    do {
      iVar6 = *piVar4;
      piVar4 = (int *)piVar4[2];
      uStack_c8._4_4_ = (undefined1 *)(*(int *)(iVar6 + 0x38) + 0x120);
      uStack_c8._0_4_ = (undefined8 *)local_b0;
      FUN_0047db00();
      local_8 = 0;
      local_3c = *(int *)(iVar1 + 0xe74);
      local_24 = (undefined1 *)&uStack_c8;
      uStack_c8._0_4_ = (undefined8 *)(0x10000 - *(uint *)(iVar1 + 0xe70));
      uStack_c8._4_4_ = (undefined1 *)(-(uint)(0x10000 < *(uint *)(iVar1 + 0xe70)) - local_3c);
      FUN_0047de60(local_b0);
      uVar5 = *(uint *)(*(int *)(iVar6 + 0x38) + 0xc4);
      uStack_c8._4_4_ = (undefined1 *)0x0;
      uStack_c8._0_4_ = (undefined8 *)0x1f40000;
      lVar7 = __alldiv(uVar5 << 0x1e,
                       (((int)uVar5 >> 0x1f) << 0xf | uVar5 >> 0x11) << 0xf | (uVar5 & 0x1ffff) >> 2
                      );
      uStack_c8 = lVar7 + local_50;
      if (lVar7 + local_50 < local_30) {
        uStack_c8 = local_30;
      }
      local_24 = (undefined1 *)&uStack_c8;
      FUN_0047de60(local_b0);
      uStack_c8._4_4_ = (undefined1 *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x280);
      uStack_c8._0_4_ = (undefined8 *)local_b0;
      FUN_0047e3e0();
      uStack_c8._4_4_ = (undefined1 *)0x5c911d;
      (**(code **)(*param_1 + 0x38))();
      uStack_c8._4_4_ = local_b0;
      uStack_c8._0_4_ = (undefined8 *)0x5c9145;
      FUN_0047dc20();
      uVar2 = local_48;
      local_24 = (undefined1 *)&uStack_c8;
      uStack_c8._0_4_ = (undefined8 *)local_48;
      uStack_c8._4_4_ = (undefined1 *)local_44;
      FUN_0047de60(local_b0);
      uStack_c8._4_4_ = local_b0;
      uStack_c8._0_4_ = &local_38;
      FUN_005c5ca0(iVar1 + 0x1184);
      uStack_c8._4_4_ = (undefined1 *)local_44;
      uStack_c8._0_4_ = (undefined8 *)uVar2;
      lVar7 = __allmul(local_38);
      local_38 = lVar7 >> 0xf;
      local_20 = local_38 + local_20;
      local_8 = 0xffffffff;
      if (local_68 != 0) {
        uStack_c8._4_4_ = (undefined1 *)local_68;
                    /* WARNING: Subroutine does not return */
        uStack_c8._0_4_ = (undefined8 *)&UNK_005c91b6;
        FUN_00aae91b();
      }
    } while (piVar4 != (int *)0x0);
  }
  uStack_c8._4_4_ = (undefined1 *)0x5c91ca;
  cVar3 = (**(code **)(*param_1 + 0x3c))();
  lVar7 = local_20;
  if (cVar3 != '\0') {
    local_58 = param_1[0x30];
    uStack_c8._4_4_ = (undefined1 *)0x0;
    uStack_c8._0_4_ = (undefined8 *)0x5c91f3;
    piVar4 = (int *)FUN_0051f8c0();
    uVar5 = 1000 - *piVar4;
    uStack_c8._4_4_ = (undefined1 *)0x0;
    uStack_c8._0_4_ = (undefined8 *)0x1f40000;
    uVar8 = __alldiv(*piVar4 * -0x40000000,((int)uVar5 >> 0x1f) << 0x1e | uVar5 >> 2);
    uStack_c8 = local_20;
    lVar7 = __allmul(uVar8);
    lVar7 = lVar7 >> 0xf;
  }
  uStack_c8._4_4_ = (undefined1 *)0x0;
  uStack_c8._0_4_ = (undefined8 *)0x1f40000;
  uVar8 = __allmul(lVar7);
  param_1[0x2c] = (uint)uVar8 >> 0x1e | (int)((ulonglong)uVar8 >> 0x20) << 2;
  if (param_1[0x10] != 0) {
    iVar6 = param_1[0x10] * 1000;
    uStack_c8._4_4_ = (undefined1 *)0x0;
    uStack_c8._0_4_ = (undefined8 *)0x3e8;
    uVar8 = __allmul(param_1[0x2c],param_1[0x2c] >> 0x1f);
    uStack_c8._4_4_ = (undefined1 *)(iVar6 >> 0x1f);
    uStack_c8._0_4_ = (undefined8 *)iVar6;
    iVar6 = __alldiv(uVar8);
    param_1[0x2c] = iVar6;
  }
  ExceptionList = local_10;
  return;
}

