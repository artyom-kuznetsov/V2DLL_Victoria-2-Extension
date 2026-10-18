// FUN_0068b870 @ 0068b870 body=[[0068b870, 0068b8e9] [0068b8f0, 0068ba46] [0068ba4a, 0068ba75] [0068ba79, 0068bad0]]


void FUN_0068b870(int param_1)

{
  bool bVar1;
  void **ppvVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int local_124;
  uint local_118 [4];
  undefined4 local_108;
  uint local_104;
  uint local_fc;
  undefined4 uStack_ec;
  uint uStack_e8;
  undefined4 local_e0;
  undefined **appuStack_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b8b971;
  local_14 = ExceptionList;
  local_124 = 0;
  ExceptionList = &local_14;
  ppvVar2 = &local_14;
  if (0 < (int)(*(int *)(param_1 + 0xaf0) - *(int *)(param_1 + 0xaec) & 0xfffffffcU)) {
    do {
      ExceptionList = ppvVar2;
      local_c = 0xffffffff;
      iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0xadc) + local_124 * 4) + 0x20);
      bVar1 = false;
      if (iVar7 != 0) {
        iVar3 = *(int *)(param_1 + 0x18);
        if (iVar3 != 0) {
          do {
            local_e0 = *(undefined4 *)(iVar3 + 0x20);
            if (*(int *)(iVar3 + 0x24) == iVar7) {
              bVar1 = true;
            }
            iVar3 = *(int *)(iVar3 + 0x3c);
          } while (iVar3 != 0);
          if (bVar1) goto LAB_0068ba88;
        }
        if (*(int *)(*(int *)(param_1 + 0xaec) + local_124 * 4) != 0) {
          *(undefined4 *)(*(int *)(param_1 + 0xaec) + local_124 * 4) = 0;
          local_104 = 0xf;
          local_108 = 0;
          local_118[0] = local_118[0] & 0xffffff00;
          FUN_00409350("gamestate.cpp",0xd);
          local_c = 0;
          puVar4 = (undefined4 *)FUN_0055dd40();
          local_c._0_1_ = 1;
          uVar5 = FUN_004015b0(local_118,0xec4,0x10004);
          local_c = CONCAT31(local_c._1_3_,2);
          FUN_00987d50(uVar5,"Human controller set for ",0x19,0);
          if (0xf < (uint)puVar4[5]) {
            puVar4 = (undefined4 *)*puVar4;
          }
          uVar5 = FUN_00418e30(uVar5,puVar4);
          piVar6 = (int *)FUN_00418e30(uVar5,", human does not exist. AI takes over");
          FUN_00408be0(piVar6);
          uVar8 = 0;
          if (((*(byte *)(*(int *)(*piVar6 + 4) + 0xc + (int)piVar6) & 6) == 0) &&
             (iVar7 = (**(code **)(**(int **)(*(int *)(*piVar6 + 4) + 0x38 + (int)piVar6) + 0x34))()
             , iVar7 == -1)) {
            uVar8 = 4;
          }
          if (uVar8 != 0) {
            uVar8 = *(uint *)((int)piVar6 + *(int *)(*piVar6 + 4) + 0xc) | uVar8;
            if (*(int *)((int)piVar6 + *(int *)(*piVar6 + 4) + 0x38) == 0) {
              uVar8 = uVar8 | 4;
            }
            FUN_00401120(uVar8,0);
          }
          local_c = CONCAT31(local_c._1_3_,1);
          FUN_00987ac0(appuStack_60);
          appuStack_60[0] = std::ios_base::vftable;
          FUN_00aad52d(appuStack_60);
          if (0xf < uStack_e8) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_fc);
          }
          local_c = 0xffffffff;
          uStack_e8 = 0xf;
          uStack_ec = 0;
          local_fc = local_fc & 0xffffff00;
          if (0xf < local_104) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_118[0]);
          }
          local_104 = 0xf;
          local_108 = 0;
          local_118[0] = local_118[0] & 0xffffff00;
        }
      }
LAB_0068ba88:
      local_124 = local_124 + 1;
      ppvVar2 = ExceptionList;
    } while (local_124 < *(int *)(param_1 + 0xaf0) - *(int *)(param_1 + 0xaec) >> 2);
  }
  local_c = 0xffffffff;
  FUN_009beeb0(param_1 + 0xaec);
  ExceptionList = local_14;
  return;
}

