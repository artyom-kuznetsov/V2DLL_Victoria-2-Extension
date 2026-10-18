// FUN_00795bf0 @ 00795bf0 body=[[00795bf0, 00795cbf] [00795cc3, 00795d01] [00795d05, 00795da8] [00795dac, 00795f3f]]


/* WARNING: Removing unreachable block (ram,0x00795cf9) */

void FUN_00795bf0(undefined4 *param_1,undefined4 *param_2,int *param_3,int param_4,
                 undefined4 param_5)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  undefined1 local_8c [8];
  undefined4 uStack_84;
  undefined4 *puStack_80;
  undefined4 *local_7c;
  undefined *local_78;
  undefined4 *puStack_74;
  uint local_38;
  uint local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 *local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b500ab;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2[6] != param_2[7]) {
    puStack_74 = param_2;
    local_7c = (undefined4 *)0x795c25;
    ExceptionList = &local_10;
    local_78 = (undefined *)param_2[7];
    uVar3 = FUN_005e5ce0();
    local_7c = param_2;
    puStack_80 = (undefined4 *)0x795c35;
    FUN_005e5d30();
    param_2[7] = uVar3;
  }
  if (param_3 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = param_3 + 0xe;
  }
  piVar8 = (int *)*piVar8;
  while (piVar8 != (int *)0x0) {
    param_3 = (int *)piVar8[2];
    puStack_74 = (undefined4 *)*piVar8;
    local_8 = 0;
    if (puStack_74 != (undefined4 *)0x0) {
      local_78 = (undefined *)0x795ca0;
      local_7c = (undefined4 *)FUN_00632170();
      puStack_74 = (undefined4 *)0xffffffff;
      local_78 = (undefined *)0x0;
      local_8 = CONCAT31(local_8._1_3_,1);
      puStack_80 = (undefined4 *)0x795cb1;
      FUN_00408ed0();
      if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
        local_78 = &UNK_00795cc0;
        puStack_74 = (undefined4 *)local_38;
        FUN_00aae91b();
      }
      local_24 = 0xf;
      local_28 = 0;
      local_38 = local_38 & 0xffffff00;
    }
    local_8 = 2;
    puStack_74 = (undefined4 *)0x795cec;
    FUN_005e5bb0();
    local_8 = 0xffffffff;
    piVar8 = param_3;
  }
  local_7c = (undefined4 *)param_2[7];
  puStack_80 = (undefined4 *)param_2[6];
  param_3 = (int *)((uint)param_3 & 0xffffff00);
  puStack_74 = param_3;
  local_78 = (undefined *)(((int)local_7c - (int)puStack_80) / 0x28);
  uStack_84 = 0x795d39;
  FUN_0079efd0();
  puStack_74 = (undefined4 *)param_5;
  local_78 = (undefined *)0x795d4a;
  iVar4 = FUN_00795b80();
  iVar5 = (int)(param_2[7] - param_2[6]) / 0x28;
  if (iVar4 < iVar5) {
    iVar5 = iVar4;
  }
  puVar1 = param_2 + 2;
  param_2[1] = iVar5;
  if (((int)(param_2[3] - *puVar1) >> 2 != iVar5) || (param_1[0x5e] != param_4)) {
    param_1[0x5e] = param_4;
    if (puVar1 != &local_2c) {
      puStack_74 = (undefined4 *)*puVar1;
      if (puStack_74 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        local_78 = &UNK_00795da9;
        FUN_00aae91b();
      }
      *puVar1 = 0;
      param_2[3] = 0;
      param_2[4] = 0;
    }
    local_8 = 0xffffffff;
    puStack_74 = (undefined4 *)param_2[1];
    if (0 < (int)puStack_74) {
      local_78 = (undefined *)0x795dce;
      FUN_004bf300();
      local_18 = 0;
      if (0 < (int)param_2[1]) {
        do {
          puStack_74 = (undefined4 *)0xc8;
          local_78 = (undefined *)0x795dea;
          iVar5 = FUN_00aae9af();
          local_8 = 4;
          if (iVar5 == 0) {
            uVar7 = 0;
          }
          else {
            puVar6 = param_1 + 0x43;
            if ((char)param_5 == '\0') {
              puVar6 = param_1 + 0x3c;
            }
            local_1c = local_8c;
            local_78 = (undefined *)0xf;
            local_7c = (undefined4 *)0x0;
            local_8c[0] = 0;
            param_3 = (int *)iVar5;
            FUN_00408ed0(puVar6,0,0xffffffff);
            uVar7 = FUN_00793640(iVar5,param_4);
          }
          local_8 = 0xffffffff;
          puVar6 = (undefined4 *)param_2[3];
          param_3 = (int *)uVar7;
          if (&param_3 < puVar6) {
            puVar2 = (undefined4 *)*puVar1;
            if (&param_3 < puVar2) goto LAB_00795e8e;
            if (puVar6 == (undefined4 *)param_2[4]) {
              puStack_74 = (undefined4 *)0x795e7e;
              FUN_00a513f0();
            }
            if ((undefined4 *)param_2[3] != (undefined4 *)0x0) {
              *(undefined4 *)param_2[3] =
                   *(undefined4 *)(*puVar1 + ((int)&param_3 - (int)puVar2 >> 2) * 4);
            }
          }
          else {
LAB_00795e8e:
            if (puVar6 == (undefined4 *)param_2[4]) {
              puStack_74 = (undefined4 *)0x795e9a;
              FUN_00a513f0();
            }
            if ((uint *)param_2[3] != (uint *)0x0) {
              *(uint *)param_2[3] = uVar7;
            }
          }
          param_2[3] = param_2[3] + 4;
          local_18 = local_18 + 1;
        } while (local_18 < (int)param_2[1]);
      }
    }
  }
  puStack_74 = param_1 + 0x35;
  if ((char)param_5 == '\0') {
    puStack_74 = param_1 + 0x2e;
  }
  local_78 = (undefined *)0x795ed6;
  piVar8 = (int *)(**(code **)(*(int *)*param_1 + 0x7c))();
  local_78 = (undefined *)0x795ee1;
  (**(code **)(*piVar8 + 0x24))();
  iVar5 = 0;
  if (0 < (int)param_2[1]) {
    do {
      local_7c = *(undefined4 **)(*puVar1 + iVar5 * 4);
      local_78 = (undefined *)0x0;
      puStack_80 = (undefined4 *)0x795efc;
      (**(code **)(*piVar8 + 0x10))();
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)param_2[1]);
  }
  local_78 = (undefined *)0x795f0e;
  (**(code **)(*piVar8 + 0x6c))();
  local_78 = (undefined *)0x795f1a;
  (**(code **)(*(int *)*param_2 + 0x38))();
  local_78 = (undefined *)param_5;
  local_7c = param_2;
  puStack_80 = param_1;
  uStack_84 = 0x795f28;
  FUN_00795a50();
  local_78 = (undefined *)0x795f2d;
  FUN_00795af0();
  ExceptionList = local_10;
  return;
}

