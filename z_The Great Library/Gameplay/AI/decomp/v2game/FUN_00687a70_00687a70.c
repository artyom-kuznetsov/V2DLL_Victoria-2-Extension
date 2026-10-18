// FUN_00687a70 @ 00687a70 body=[[00687a70, 00687ccf] [00687cd3, 00687cf2] [00687cf6, 00687d0c]]


void FUN_00687a70(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int in_ECX;
  int iVar6;
  uint uVar7;
  int aiStack_118 [6];
  undefined4 uStack_100;
  uint uStack_fc;
  uint uStack_f4;
  undefined4 uStack_e4;
  uint uStack_e0;
  undefined **appuStack_60 [19];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b8bbef;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  *(undefined4 *)(*(int *)(in_ECX + 0xaec) + param_2 * 4) = 0;
  iVar2 = (**(code **)(**(int **)(in_ECX + 0xb24) + 0x44))();
  if (*(char *)(iVar2 + 0x34) == '\0') {
    ExceptionList = pvStack_14;
    return;
  }
  iVar6 = 0;
  iVar2 = *(int *)(in_ECX + 0xa8) - *(int *)(in_ECX + 0xa4) >> 2;
  if (0 < iVar2) {
    piVar5 = *(int **)(in_ECX + 0xa4);
    do {
      aiStack_118[0] = *(int *)(*piVar5 + 0x30);
      if (*(int *)(*piVar5 + 0x34) == param_2) {
        ExceptionList = pvStack_14;
        return;
      }
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar6 < iVar2);
  }
  aiStack_118[0] = FUN_00aae9af(0x3c);
  uStack_c = 0;
  if (aiStack_118[0] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0081df60(aiStack_118[0],param_1,param_2);
  }
  uStack_c = 0xffffffff;
  *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_2 * 4) + 0x208) = iVar2;
  piVar5 = *(int **)(in_ECX + 0xa8);
  aiStack_118[0] = iVar2;
  if (aiStack_118 < piVar5) {
    piVar1 = *(int **)(in_ECX + 0xa4);
    if (piVar1 <= aiStack_118) {
      if (piVar5 == *(int **)(in_ECX + 0xac)) {
        FUN_00a513f0();
      }
      if (*(undefined4 **)(in_ECX + 0xa8) != (undefined4 *)0x0) {
        **(undefined4 **)(in_ECX + 0xa8) =
             *(undefined4 *)(*(int *)(in_ECX + 0xa4) + ((int)aiStack_118 - (int)piVar1 >> 2) * 4);
      }
      goto LAB_00687bb2;
    }
  }
  if (piVar5 == *(int **)(in_ECX + 0xac)) {
    FUN_00a513f0();
  }
  if (*(int **)(in_ECX + 0xa8) != (int *)0x0) {
    **(int **)(in_ECX + 0xa8) = iVar2;
  }
LAB_00687bb2:
  *(int *)(in_ECX + 0xa8) = *(int *)(in_ECX + 0xa8) + 4;
  uStack_fc = 0xf;
  uStack_100 = 0;
  aiStack_118[2] = aiStack_118[2] & 0xffffff00;
  FUN_00409350("gamestate.cpp",0xd);
  uStack_c = 1;
  puVar3 = (undefined4 *)FUN_0055dd40();
  uStack_c._0_1_ = 2;
  uVar4 = FUN_004015b0(aiStack_118 + 2,0xb49,0x10001);
  uStack_c = CONCAT31(uStack_c._1_3_,3);
  FUN_00987d50(uVar4,"AI takes over control of ",0x19,0);
  if (0xf < (uint)puVar3[5]) {
    puVar3 = (undefined4 *)*puVar3;
  }
  piVar5 = (int *)FUN_00418e30(uVar4,puVar3);
  FUN_00408be0(piVar5);
  uVar7 = 0;
  if (((*(byte *)(*(int *)(*piVar5 + 4) + 0xc + (int)piVar5) & 6) == 0) &&
     (iVar2 = (**(code **)(**(int **)(*(int *)(*piVar5 + 4) + 0x38 + (int)piVar5) + 0x34))(),
     iVar2 == -1)) {
    uVar7 = 4;
  }
  if (uVar7 != 0) {
    uVar7 = *(uint *)((int)piVar5 + *(int *)(*piVar5 + 4) + 0xc) | uVar7;
    if (*(int *)((int)piVar5 + *(int *)(*piVar5 + 4) + 0x38) == 0) {
      uVar7 = uVar7 | 4;
    }
    FUN_00401120(uVar7,0);
  }
  uStack_c = CONCAT31(uStack_c._1_3_,2);
  FUN_00987ac0(appuStack_60);
  appuStack_60[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_60);
  if (uStack_e0 < 0x10) {
    uStack_e0 = 0xf;
    uStack_e4 = 0;
    uStack_f4 = uStack_f4 & 0xffffff00;
    if (uStack_fc < 0x10) {
      ExceptionList = pvStack_14;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(aiStack_118[2]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uStack_f4);
}

