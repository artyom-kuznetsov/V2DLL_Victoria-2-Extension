// FUN_00936070 @ 00936070 body=[[00936070, 0093630b] [0093630f, 0093648c] [00936490, 00936551]]


void FUN_00936070(int param_1,undefined4 param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *local_2e8;
  int local_2e4;
  uint auStack_2e0 [4];
  undefined4 uStack_2d0;
  uint uStack_2cc;
  uint auStack_2c4 [4];
  undefined4 uStack_2b4;
  uint uStack_2b0;
  undefined4 uStack_2a8;
  undefined **appuStack_228 [48];
  undefined **appuStack_168 [18];
  undefined4 local_120;
  char local_11c [264];
  void *pvStack_14;
  undefined1 *puStack_10;
  uint uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5e2ac;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_0055c6c0(DAT_012587e4,&local_2e8,&DAT_00dfdc14);
  for (local_2e8 = *(undefined4 **)(param_1 + 0x3c);
      (local_2e8 != *(undefined4 **)(param_1 + 0x40) && (local_2e8[1] != param_3));
      local_2e8 = local_2e8 + 2) {
  }
  local_2e4 = param_1 + 0x3c;
  FUN_0042ba80();
  FUN_00936560(param_1 + 0x3c,param_2,param_3);
  FUN_0093c890(&param_2);
  FUN_009383d0(param_1,param_2,param_3);
  if (param_4 != '\0') {
    iVar2 = FUN_00aae9af(0x18);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_005f7150();
    }
    local_120 = 0xf;
    __snprintf(local_11c,0xff,"%s",&param_2);
    FUN_005f71a0(&local_120);
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
    (**(code **)(*(int *)(param_1 + 0x4c) + 0x18))(iVar2);
  }
  local_2e8 = *(undefined4 **)(param_1 + 0x2c);
  do {
    if ((local_2e8 < *(undefined4 **)(param_1 + 0x2c)) ||
       (*(undefined4 **)(param_1 + 0x30) <= local_2e8)) {
      ExceptionList = pvStack_14;
      return;
    }
    iVar2 = local_2e8[1];
    puVar6 = local_2e8 + 2;
    if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_3 * 4) + 0xbe8) +
                         iVar2 * 4) + 0x34) == param_1) {
      uStack_2a8 = *local_2e8;
      piVar4 = local_2e8 + 1;
      local_2e8 = puVar6;
      if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *piVar4 * 4) + 0xbe8) +
                           param_3 * 4) + 0x34) != param_1) {
        uStack_2b0 = 0xf;
        uStack_2b4 = 0;
        auStack_2c4[0] = auStack_2c4[0] & 0xffffff00;
        FUN_00409350("war.cpp",7);
        uStack_c = 2;
        uVar3 = FUN_004015b0(auStack_2c4,0x2a4,0x10004);
        uStack_c = CONCAT31(uStack_c._1_3_,3);
        FUN_00987d50(uVar3,"Illegal RemoveDefender:  ",0x19,0);
        puVar6 = (undefined4 *)(param_1 + 0x10);
        uVar3 = FUN_00418e30(uVar3,&param_2,extraout_ECX_00," is not at war with ",extraout_ECX_00,
                             &stack0xfffffd00,extraout_ECX_00,&DAT_00df12c8);
        uVar3 = FUN_00418e30(uVar3);
        uVar3 = FUN_00418e30(uVar3);
        uVar3 = FUN_00418e30(uVar3);
        if (0xf < *(uint *)(param_1 + 0x24)) {
          puVar6 = (undefined4 *)*puVar6;
        }
        piVar4 = (int *)FUN_00418e30(uVar3,puVar6);
        FUN_00408be0(piVar4);
        uVar7 = 0;
        if (((*(byte *)(*(int *)(*piVar4 + 4) + 0xc + (int)piVar4) & 6) == 0) &&
           (iVar5 = (**(code **)(**(int **)(*(int *)(*piVar4 + 4) + 0x38 + (int)piVar4) + 0x34))(),
           iVar5 == -1)) {
          uVar7 = 4;
        }
        if (uVar7 != 0) {
          uVar7 = *(uint *)((int)piVar4 + *(int *)(*piVar4 + 4) + 0xc) | uVar7;
          if (*(int *)((int)piVar4 + *(int *)(*piVar4 + 4) + 0x38) == 0) {
            uVar7 = uVar7 | 4;
          }
          FUN_00401120(uVar7,0);
        }
        uStack_c = CONCAT31(uStack_c._1_3_,2);
        FUN_00987ac0(appuStack_168);
        appuStack_168[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_168);
        uStack_c = 0xffffffff;
        if (0xf < uStack_2b0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_2c4[0]);
        }
        uStack_2b0 = 0xf;
        uStack_2b4 = 0;
        auStack_2c4[0] = auStack_2c4[0] & 0xffffff00;
        goto LAB_009364a0;
      }
    }
    else {
      uStack_2cc = 0xf;
      uStack_2d0 = 0;
      auStack_2e0[0] = auStack_2e0[0] & 0xffffff00;
      local_2e8 = puVar6;
      FUN_00409350("war.cpp",7);
      uStack_c = 0;
      uVar3 = FUN_004015b0(auStack_2e0,0x2a2,0x10004);
      uStack_c = CONCAT31(uStack_c._1_3_,1);
      FUN_00987d50(uVar3,"Illegal RemoveDefender:  ",0x19,0);
      puVar6 = (undefined4 *)(param_1 + 0x10);
      uVar3 = FUN_00418e30(uVar3,&param_2,extraout_ECX," is not at war with ",extraout_ECX,
                           &stack0xfffffd00,extraout_ECX,&DAT_00df12c8);
      uVar3 = FUN_00418e30(uVar3);
      uVar3 = FUN_00418e30(uVar3);
      uVar3 = FUN_00418e30(uVar3);
      if (0xf < *(uint *)(param_1 + 0x24)) {
        puVar6 = (undefined4 *)*puVar6;
      }
      piVar4 = (int *)FUN_00418e30(uVar3,puVar6);
      FUN_00408be0(piVar4);
      uVar7 = 0;
      if (((*(byte *)(*(int *)(*piVar4 + 4) + 0xc + (int)piVar4) & 6) == 0) &&
         (iVar5 = (**(code **)(**(int **)(*(int *)(*piVar4 + 4) + 0x38 + (int)piVar4) + 0x34))(),
         iVar5 == -1)) {
        uVar7 = 4;
      }
      if (uVar7 != 0) {
        uVar7 = *(uint *)((int)piVar4 + *(int *)(*piVar4 + 4) + 0xc) | uVar7;
        if (*(int *)((int)piVar4 + *(int *)(*piVar4 + 4) + 0x38) == 0) {
          uVar7 = uVar7 | 4;
        }
        FUN_00401120(uVar7,0);
      }
      uStack_c = uStack_c & 0xffffff00;
      FUN_00987ac0(appuStack_228);
      appuStack_228[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_228);
      uStack_c = 0xffffffff;
      if (0xf < uStack_2cc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_2e0[0]);
      }
      uStack_2cc = 0xf;
      uStack_2d0 = 0;
      auStack_2e0[0] = auStack_2e0[0] & 0xffffff00;
LAB_009364a0:
      uStack_c = 0xffffffff;
    }
    iVar1 = DAT_012587e4;
    iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_3 * 4) + 0xbe8) +
                    iVar2 * 4);
    *(undefined1 *)(iVar5 + 0x71) = 1;
    *(undefined4 *)(iVar5 + 0x34) = 0;
    iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + iVar2 * 4) + 0xbe8) + param_3 * 4);
    *(undefined1 *)(iVar5 + 0x71) = 1;
    *(undefined4 *)(iVar5 + 0x34) = 0;
    FUN_00517af0(*(undefined4 *)(*(int *)(iVar1 + 4) + param_3 * 4));
    FUN_00517af0(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + iVar2 * 4));
    FUN_00859f80(&LAB_0093eca0,*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + param_3 * 4),
                 *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + iVar2 * 4));
  } while( true );
}

