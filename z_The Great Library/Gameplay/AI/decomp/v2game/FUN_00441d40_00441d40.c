// FUN_00441d40 @ 00441d40 body=[[00441d40, 00441e70]]


undefined4 * FUN_00441d40(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 local_14;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  
  local_14 = 0;
  if (0 < *(int *)(param_2 + 0x28)) {
    puVar1 = *(undefined4 **)(param_2 + 0x20);
    lVar4 = local_14;
    while (puVar1 != (undefined4 *)0x0) {
      piVar6 = (int *)*puVar1;
      puVar1 = (undefined4 *)puVar1[2];
      piVar5 = (int *)(**(code **)(*piVar6 + 0x94))(local_8);
      piVar6 = (int *)(**(code **)(*piVar6 + 0x44))(local_c);
      iVar2 = *piVar5;
      if (iVar2 == 0) {
        uVar7 = 0xffffffff;
      }
      else {
        iVar3 = *piVar6;
        if ((iVar3 < -0x189373) || (0x20c49a < iVar3)) {
          uVar9 = __allmul(iVar3,iVar3 >> 0x1f,1000,0);
          uVar7 = __alldiv(uVar9,iVar2,iVar2 >> 0x1f);
        }
        else {
          uVar7 = (iVar3 * 1000) / iVar2;
        }
      }
      local_14 = __alldiv(uVar7 << 0x1e,((int)uVar7 >> 0x1f) << 0x1e | uVar7 >> 2,0x1f40000,0);
      local_14 = local_14 + lVar4;
      lVar4 = local_14;
    }
    uVar7 = *(uint *)(param_2 + 0x28);
    local_14._4_4_ = (int)((ulonglong)lVar4 >> 0x20);
    local_14._0_4_ = (uint)lVar4;
    local_14 = __alldiv((uint)local_14 << 0xf,local_14._4_4_ << 0xf | (uint)local_14 >> 0x11,
                        uVar7 << 0xf,((int)uVar7 >> 0x1f) << 0xf | uVar7 >> 0x11);
  }
  FUN_00401000(((float)((float10)local_14 * (float10)3.0517578125e-05) + 0.0005) * 1000.0);
  uVar8 = FUN_00b31c00();
  *param_1 = uVar8;
  return param_1;
}

