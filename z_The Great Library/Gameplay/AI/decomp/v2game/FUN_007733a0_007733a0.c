// FUN_007733a0 @ 007733a0 body=[[007733a0, 007735bf] [007735c3, 007735d9]]


void FUN_007733a0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  undefined4 *puVar6;
  uint uVar7;
  uint local_f8 [4];
  undefined4 local_e8;
  uint local_e4;
  int local_dc;
  undefined **appuStack_60 [17];
  void *pvStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b59a04;
  local_14 = ExceptionList;
  piVar4 = *(int **)(in_ECX + 0x314);
  puVar6 = *(undefined4 **)(in_ECX + 0x324);
  if (piVar4 != (int *)0x0) {
    while (param_1 != *piVar4) {
      piVar4 = (int *)piVar4[2];
      puVar6 = (undefined4 *)puVar6[3];
      if (piVar4 == (int *)0x0) {
        return;
      }
    }
    iVar5 = puVar6[1];
    uVar3 = *puVar6;
    if (iVar5 != 0) {
      ExceptionList = &local_14;
      iVar1 = FUN_00aae9af(0x50);
      local_c = 0;
      local_dc = iVar1;
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      else {
        iVar2 = (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
        uVar3 = FUN_007297a0(iVar1,uVar3,iVar5,*(undefined4 *)(DAT_012588e8 + 0xb5c),
                             *(undefined4 *)(DAT_012588e8 + 0xb60),*(undefined4 *)(iVar2 + 0x6c));
      }
      local_c = 0xffffffff;
      iVar1 = (**(code **)(**(int **)(in_ECX + 4) + 0x44))();
      (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar3);
      (**(code **)(**(int **)(in_ECX + 4) + 0xb4))
                (*(undefined4 *)
                  (*(int *)(DAT_012588e8 + 0xacc) +
                  *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar5 * 4) + 0xbe4) * 4));
      ExceptionList = pvStack_1c;
      return;
    }
    local_e4 = 0xf;
    local_e8 = 0;
    local_f8[0] = local_f8[0] & 0xffffff00;
    ExceptionList = &local_14;
    FUN_00409350("gamesetup.cpp",0xd);
    local_c = 1;
    piVar4 = (int *)FUN_004015b0(local_f8,0x6c3,0x10004);
    local_c = CONCAT31(local_c._1_3_,2);
    FUN_00987d50(piVar4,"Atempted to select an invalid tag using a shortcut.",0x33,0);
    FUN_00408be0(piVar4);
    uVar7 = 0;
    if (((*(uint *)(*(int *)(*piVar4 + 4) + 0xc + (int)piVar4) & 6) == 0) &&
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
    local_c = CONCAT31(local_c._1_3_,1);
    FUN_00987ac0(appuStack_60);
    appuStack_60[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_60);
    if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f8[0]);
    }
  }
  ExceptionList = local_14;
  return;
}

