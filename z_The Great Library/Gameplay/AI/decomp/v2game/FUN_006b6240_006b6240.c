// FUN_006b6240 @ 006b6240 body=[[006b6240, 006b6371] [006b6375, 006b639a] [006b639e, 006b6452] [006b6456, 006b6483] [006b6487, 006b64b4] [006b64b8, 006b64de] [006b64e2, 006b6573]]


/* WARNING: Removing unreachable block (ram,0x006b64d3) */

void FUN_006b6240(int param_1,int param_2,int param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined3 uVar5;
  void **ppvVar6;
  char cVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  uint local_a8 [4];
  undefined4 local_98;
  uint local_94;
  uint local_8c;
  undefined4 local_7c;
  uint local_78;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int local_1c;
  char local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4c08d;
  local_14 = 0;
  ppvVar6 = &local_10;
  local_10 = ExceptionList;
  while (ExceptionList = ppvVar6, param_3 < param_2) {
    iVar12 = (param_2 + -1) / 2;
    iVar1 = *param_4;
    iVar2 = *(int *)(param_1 + iVar12 * 4);
    local_1c = iVar12;
    switch(param_5) {
    case 0:
      cVar7 = *(int *)(iVar1 + 0xd8) < *(int *)(iVar2 + 0xd8);
      break;
    case 1:
      uVar10 = (uint)(*(int *)(iVar2 + 0xb0) == 1);
      uVar11 = (uint)(*(int *)(iVar1 + 0xb0) == 1);
      bVar13 = SBORROW4(uVar10,uVar11);
      iVar4 = uVar10 - uVar11;
      if (uVar10 == uVar11) {
        bVar13 = SBORROW4(*(int *)(iVar2 + 0xd0),*(int *)(iVar1 + 0xd0));
        iVar4 = *(int *)(iVar2 + 0xd0) - *(int *)(iVar1 + 0xd0);
      }
      cVar7 = bVar13 != iVar4 < 0;
      break;
    case 2:
      cVar7 = FUN_0098ab20();
      break;
    case 3:
      piVar3 = *(int **)(iVar2 + 0x88);
      if (piVar3 == (int *)0x0) {
        local_5c = 0xf;
        local_60 = 0;
        local_70[0] = local_70[0] & 0xffffff00;
        FUN_00409350(&DAT_00ded94d,0);
        local_14 = local_14 | 2;
        puVar9 = local_70;
      }
      else {
        uVar8 = (**(code **)(*piVar3 + 0x20))();
        local_24 = 0xf;
        local_28 = 0;
        local_38[0] = local_38[0] & 0xffffff00;
        FUN_00408ed0(uVar8,0,0xffffffff);
        local_14 = local_14 | 1;
        puVar9 = local_38;
      }
      local_8 = (uint)(piVar3 == (int *)0x0);
      FUN_00408ed0(puVar9,0,0xffffffff);
      local_8 = 2;
      if ((local_14 & 2) != 0) {
        local_14 = local_14 & 0xfffffffd;
        if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_70[0]);
        }
        local_5c = 0xf;
        local_60 = 0;
        local_70[0] = local_70[0] & 0xffffff00;
      }
      local_8._1_3_ = 0;
      uVar5 = local_8._1_3_;
      local_8._0_1_ = 4;
      local_8._1_3_ = 0;
      if ((local_14 & 1) != 0) {
        local_14 = local_14 & 0xfffffffe;
        if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_38[0]);
        }
        local_24 = 0xf;
        local_28 = 0;
        local_38[0] = local_38[0] & 0xffffff00;
      }
      if (*(int **)(iVar1 + 0x88) == (int *)0x0) {
        local_94 = 0xf;
        local_98 = 0;
        local_a8[0] = local_a8[0] & 0xffffff00;
        local_8._1_3_ = uVar5;
        FUN_00409350(&DAT_00ded94d,0);
        local_8 = 6;
        local_14 = local_14 | 8;
        puVar9 = local_a8;
      }
      else {
        uVar8 = (**(code **)(**(int **)(iVar1 + 0x88) + 0x20))();
        local_40 = 0xf;
        local_44 = 0;
        local_54[0] = local_54[0] & 0xffffff00;
        FUN_00408ed0(uVar8,0,0xffffffff);
        local_8 = CONCAT31(local_8._1_3_,5);
        local_14 = local_14 | 4;
        puVar9 = local_54;
      }
      local_78 = 0xf;
      local_7c = 0;
      local_8c = local_8c & 0xffffff00;
      FUN_00408ed0(puVar9,0,0xffffffff);
      local_8 = 7;
      if ((local_14 & 8) != 0) {
        local_14 = local_14 & 0xfffffff7;
        if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_a8[0]);
        }
        local_94 = 0xf;
        local_98 = 0;
        local_a8[0] = local_a8[0] & 0xffffff00;
      }
      local_8 = 9;
      if ((local_14 & 4) != 0) {
        local_14 = local_14 & 0xfffffffb;
        if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_54[0]);
        }
        local_40 = 0xf;
        local_44 = 0;
        local_54[0] = local_54[0] & 0xffffff00;
      }
      cVar7 = FUN_0098ab20();
      local_15 = cVar7;
      if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_8c);
      }
      local_8 = 0xffffffff;
      local_78 = 0xf;
      local_7c = 0;
      local_8c = local_8c & 0xffffff00;
      iVar12 = local_1c;
      break;
    default:
      goto switchD_006b629b_default;
    }
    if (cVar7 == '\0') break;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar12 * 4);
    ppvVar6 = ExceptionList;
    param_2 = iVar12;
  }
switchD_006b629b_default:
  *(int *)(param_1 + param_2 * 4) = *param_4;
  ExceptionList = local_10;
  return;
}

