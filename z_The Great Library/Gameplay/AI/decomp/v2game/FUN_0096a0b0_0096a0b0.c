// FUN_0096a0b0 @ 0096a0b0 body=[[0096a0b0, 0096a12c] [0096a130, 0096a1f5]]


uint * FUN_0096a0b0(int param_1,uint *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9fb7b;
  local_10 = ExceptionList;
  uVar6 = 0;
  local_18 = 0;
  ExceptionList = &local_10;
  if (DAT_0131bb34 == 0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x188);
    local_8 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0041a160();
    }
    local_8 = 0xffffffff;
    FUN_00423700(uVar2);
  }
  iVar1 = DAT_0131bb34;
  piVar4 = (int *)(DAT_0131bb34 + 0xc);
  iVar5 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  local_14 = 0;
  if (0 < iVar5) {
    do {
      if (*(int *)(iVar1 + 0x10) - *piVar4 >> 2 < local_14) {
        iVar3 = FUN_0096bb70();
      }
      else {
        iVar3 = *(int *)(*piVar4 + local_14 * 4);
      }
      if (*(int *)(iVar3 + 0x3c) == param_3) {
        local_18 = local_18 +
                   *(int *)(*(int *)(*(int *)(param_1 + 0xbc) + *(int *)(iVar3 + 0x28) * 0x10) +
                           param_4 * 4);
        uVar6 = uVar6 + *(int *)(*(int *)(param_1 + 0x50) + *(int *)(iVar3 + 0x28) * 4);
      }
      local_14 = local_14 + 1;
    } while (local_14 < iVar5);
    if (uVar6 != 0) {
      *param_2 = local_18 << 0xf;
      param_2[1] = ((int)local_18 >> 0x1f) << 0xf | local_18 >> 0x11;
      uVar7 = __alldiv(*param_2 << 0xf,param_2[1] << 0xf | *param_2 >> 0x11,uVar6 << 0xf,
                       ((int)uVar6 >> 0x1f) << 0xf | uVar6 >> 0x11);
      *(undefined8 *)param_2 = uVar7;
      ExceptionList = local_10;
      return param_2;
    }
  }
  *param_2 = 0x8000;
  param_2[1] = 0;
  ExceptionList = local_10;
  return param_2;
}

