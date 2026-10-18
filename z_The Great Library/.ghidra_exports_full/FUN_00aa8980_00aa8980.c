// FUN_00aa8980 @ 00aa8980 body=[[00aa8980, 00aa8b3c] [00aa8b40, 00aa8bf0] [00aa8bf4, 00aa8c0d] [00aa8c27, 00aa8c79] [00aa8c7d, 00aa8c96] [00aa8cb0, 00aa8cd3]]


void FUN_00aa8980(int *param_1,int param_2,uint param_3,uint param_4,undefined4 param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int *in_ECX;
  uint *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 local_74;
  uint local_6c;
  uint local_68;
  int local_64;
  int local_5c;
  uint local_48;
  uint local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar5 = param_3;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b36500;
  local_10 = ExceptionList;
  uVar3 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  if (param_3 == param_4) {
    *param_1 = param_2;
    param_1[1] = 0;
    return;
  }
  uVar2 = (in_ECX[1] - *in_ECX) / 0x14;
  if ((param_3 < uVar2) && (param_4 < uVar2)) {
    iVar9 = param_6 - param_2;
    local_14 = in_ECX + 4;
    ExceptionList = &local_10;
    param_6 = iVar9;
    local_18 = in_ECX;
    FUN_00aa88d0(&local_20,param_3,param_4,param_5,iVar9);
    if (local_20 == DAT_00ef2008) {
      FUN_00aa84d0(uVar3);
      local_8 = 0;
      local_1c = (uint *)0x0;
      local_24 = param_2;
      local_20 = uVar5;
      FUN_00aa8070(&local_24);
      FUN_00aa8810((in_ECX[1] - *in_ECX) / 0x14,0,(int)&param_1 + 3);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_3c = iVar9;
      local_48 = uVar5;
      while( true ) {
        if (local_64 == 0) {
          uVar10 = 0;
          local_38 = 0xffffffff;
          local_44 = param_4;
          local_40 = param_5;
          local_34 = DAT_00f1f83c;
          uVar7 = FUN_00aa8420(&local_48);
          FUN_00aa85d0(&local_20,uVar7,uVar10);
          *param_1 = 0;
          param_1[1] = -1;
          if (local_5c == 0) {
            FUN_00aa8110();
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_74);
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_5c);
        }
        piVar4 = (int *)FUN_00aa7870(&local_3c);
        iVar9 = 0;
        if ((int *)*piVar4 != (int *)0x0) {
          iVar9 = *(int *)*piVar4;
        }
        uVar5 = piVar4[2];
        if (*(uint *)(iVar9 + 8) <= uVar5) {
          uVar5 = uVar5 - *(uint *)(iVar9 + 8);
        }
        piVar4 = *(int **)(*(int *)(iVar9 + 4) + uVar5 * 4);
        iVar9 = *piVar4;
        uVar5 = piVar4[1];
        iVar1 = piVar4[2];
        if (local_64 != 0) {
          local_68 = local_68 + 1;
          if (local_6c <= local_68) {
            local_68 = 0;
          }
          local_64 = local_64 + -1;
          if (local_64 == 0) {
            local_68 = 0;
          }
        }
        puVar8 = (uint *)(local_5c + (uVar5 >> 5) * 4);
        *puVar8 = *puVar8 | 1 << ((byte)uVar5 & 0x1f);
        puVar8 = (uint *)(*local_18 + uVar5 * 0x14);
        if (*puVar8 == param_4) break;
        local_1c = (uint *)puVar8[2];
        for (puVar8 = (uint *)puVar8[1]; local_3c = param_6, local_48 = param_3, puVar8 != local_1c;
            puVar8 = puVar8 + 2) {
          if (((*(uint *)(local_5c + (*puVar8 >> 5) * 4) & 1 << ((byte)*puVar8 & 0x1f)) == 0) &&
             (iVar6 = (*(code *)puVar8[1])(iVar9), iVar6 != 0)) {
            local_2c = *puVar8;
            local_28 = iVar1 + 1;
            local_30 = iVar6;
            FUN_00aa8070(&local_30);
          }
        }
      }
      local_38 = iVar9 - param_2;
      local_44 = param_4;
      local_48 = param_3;
      uVar10 = 0;
      local_40 = param_5;
      local_3c = param_6;
      local_34 = iVar1;
      uVar7 = FUN_00aa8420(&local_48);
      FUN_00aa85d0(&local_20,uVar7,uVar10);
      *param_1 = iVar9;
      param_1[1] = iVar1;
      if (local_5c == 0) {
        FUN_00aa8110();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_74);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5c);
    }
    if (local_20 != DAT_00f1f83c) {
      *param_1 = local_20 + param_2;
      param_1[1] = (int)local_1c;
      ExceptionList = local_10;
      return;
    }
  }
  param_1[1] = -1;
  *param_1 = 0;
  ExceptionList = local_10;
  return;
}

