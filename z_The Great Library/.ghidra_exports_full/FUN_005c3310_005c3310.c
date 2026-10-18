// FUN_005c3310 @ 005c3310 body=[[005c3310, 005c348c] [005c3490, 005c3548]]


void FUN_005c3310(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  undefined4 unaff_EBX;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_100;
  undefined4 uStack_fc;
  int local_f8;
  uint local_f4 [4];
  undefined4 local_e4;
  undefined4 local_e0;
  undefined **appuStack_74 [19];
  void *pvStack_28;
  undefined1 uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b546a6;
  pvStack_14 = ExceptionList;
  iVar2 = DAT_0125fe14 - DAT_0125fe10 >> 2;
  iVar6 = 0;
  if (0 < iVar2) {
    do {
      if (*(int *)(*(int *)(DAT_0125fe10 + iVar6 * 4) + 0x20) == param_2) {
        local_100 = 0;
        ExceptionList = &pvStack_14;
        cVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 8))();
        if (cVar1 == '\0') {
          cVar1 = FUN_0098fc80(param_1 + 0x228,&local_100);
          if (cVar1 != '\0') goto LAB_005c3524;
        }
        else {
          uStack_fc = 0;
          iVar2 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",&uStack_fc);
          if (iVar2 != 0) {
            *(undefined4 *)(*(int *)(local_f8 + 0x18) + iVar6 * 8) = uStack_fc;
            ExceptionList = pvStack_14;
            return;
          }
        }
        FUN_009a1140();
LAB_005c3524:
        *(undefined4 *)(*(int *)(local_f8 + 0x18) + iVar6 * 8) = local_100;
        ExceptionList = pvStack_14;
        return;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  local_e0 = 0xf;
  local_e4 = 0;
  local_f4[0] = local_f4[0] & 0xffffff00;
  ExceptionList = &pvStack_14;
  FUN_00409350("traits.cpp",10);
  local_c = 0;
  uVar3 = FUN_004015b0(local_f4,0x85,0x10004);
  local_c = CONCAT31(local_c._1_3_,1);
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
  puVar5 = (undefined4 *)(iVar2 + 0x14);
  FUN_00987d50(uVar3,"unknown Trait \'",0xf,0);
  uVar3 = FUN_00418e30(uVar3,param_1 + 0x24,extraout_ECX,"\' in file ");
  uVar3 = FUN_00418e30(uVar3);
  if (0xf < *(uint *)(iVar2 + 0x28)) {
    puVar5 = (undefined4 *)*puVar5;
  }
  piVar4 = (int *)FUN_00418e30(uVar3,puVar5);
  FUN_00408be0(piVar4);
  uVar7 = 0;
  if (((*(uint *)(*(int *)(*piVar4 + 4) + 0xc + (int)piVar4) & 6) == 0) &&
     (iVar2 = (**(code **)(**(int **)(*(int *)(*piVar4 + 4) + 0x38 + (int)piVar4) + 0x34))(),
     iVar2 == -1)) {
    uVar7 = 4;
  }
  if (uVar7 != 0) {
    uVar7 = *(uint *)((int)piVar4 + *(int *)(*piVar4 + 4) + 0xc) | uVar7;
    if (*(int *)((int)piVar4 + *(int *)(*piVar4 + 4) + 0x38) == 0) {
      uVar7 = uVar7 | 4;
    }
    FUN_00401120(uVar7,0);
  }
  uStack_20 = 0;
  FUN_00987ac0(appuStack_74);
  appuStack_74[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_74);
  if (local_f4[0] < 0x10) {
    ExceptionList = pvStack_28;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(unaff_EBX);
}

