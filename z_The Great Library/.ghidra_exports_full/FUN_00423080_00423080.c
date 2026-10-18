// FUN_00423080 @ 00423080 body=[[00423080, 00423176] [0042317a, 004232c2] [004232c6, 004232ec] [004232f0, 00423312] [00423316, 0042334a] [0042334e, 00423364]]


undefined1 * FUN_00423080(undefined1 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  int local_bc;
  int local_b4;
  int local_b0;
  undefined1 local_ac;
  uint local_a8 [4];
  undefined4 local_98;
  uint local_94;
  uint local_8c;
  undefined4 local_7c;
  uint local_78;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54;
  undefined4 local_44;
  uint local_40;
  char local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  puStack_10 = &LAB_00ba2301;
  local_14 = ExceptionList;
  local_94 = 0xf;
  local_98 = 0;
  local_a8[0] = local_a8[0] & 0xffffff00;
  local_c = 0;
  piVar8 = (int *)*param_2;
  if ((param_2[1] - (int)piVar8) / 0x1c < 1) {
    local_ac = 0;
    ExceptionList = &local_14;
    FUN_00409350("Please specify enemy country tag.",0x21);
  }
  else {
    iVar5 = DAT_012588e8 + 0xb5c;
    if (0xf < (uint)piVar8[5]) {
      piVar8 = (int *)*piVar8;
    }
    ExceptionList = &local_14;
    FUN_0055c6c0(DAT_012587e4,&local_b4,piVar8);
    if (local_b0 == 0) {
      local_ac = 0;
      FUN_00409350("Unknown country tag",0x13);
      *param_1 = local_ac;
      *(undefined4 *)(param_1 + 0x18) = 0xf;
      *(undefined4 *)(param_1 + 0x14) = 0;
      param_1[4] = 0;
      FUN_00408ed0(local_a8,0,0xffffffff);
      if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_a8[0]);
      }
      ExceptionList = local_14;
      return param_1;
    }
    iVar7 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_b0 * 4);
    iVar7 = *(int *)(iVar7 + 0x9dc) - *(int *)(iVar7 + 0x9d8) >> 2;
    local_bc = 0;
    local_b4 = 0;
    if (0 < iVar7) {
      do {
        iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                        *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_b0 * 4) +
                                         0x9d8) + local_b4 * 4) * 4);
        if (*(int *)(iVar2 + 0x134) == local_b0) {
          FUN_004b5730(iVar2,iVar5,DAT_012588e8 + 0xb0c,0);
          local_bc = local_bc + 1;
        }
        local_b4 = local_b4 + 1;
      } while (local_b4 < iVar7);
    }
    local_ac = 1;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    FUN_00409350(" more provinces are under our control",0x25);
    local_78 = 0xf;
    local_7c = 0;
    local_8c = local_8c & 0xffffff00;
    local_c._0_1_ = 2;
    pcVar3 = __itoa(local_bc,local_38,10);
    pcVar6 = pcVar3;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
    local_c._0_1_ = 3;
    uVar4 = FUN_00988f20(local_70);
    local_c._0_1_ = 4;
    FUN_00408ed0(uVar4,0,0xffffffff);
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54);
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54 = local_54 & 0xffffff00;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_8c);
    }
    local_c = (uint)local_c._1_3_ << 8;
    local_78 = 0xf;
    local_7c = 0;
    local_8c = local_8c & 0xffffff00;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70[0]);
    }
  }
  *param_1 = local_ac;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  FUN_00408ed0(local_a8,0,0xffffffff);
  if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a8[0]);
  }
  ExceptionList = local_14;
  return param_1;
}

