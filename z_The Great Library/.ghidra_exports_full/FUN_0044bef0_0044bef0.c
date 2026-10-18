// FUN_0044bef0 @ 0044bef0 body=[[0044bef0, 0044c14e]]


void FUN_0044bef0(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_100;
  undefined4 uStack_fc;
  int local_f8;
  uint local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  undefined **appuStack_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b546a6;
  local_14 = ExceptionList;
  if (param_2 == 0xb2) {
    ExceptionList = &local_14;
    uVar2 = FUN_00aaf0c5(param_1 + 0x22c);
    *(undefined4 *)(in_ECX + 0x28) = uVar2;
  }
  else {
    iVar3 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
    iVar6 = 0;
    if (0 < iVar3) {
      do {
        if (*(int *)(*(int *)(DAT_0125a5b4 + iVar6 * 4) + 0x20) == param_2) {
          local_100 = 0;
          ExceptionList = &local_14;
          local_f8 = in_ECX;
          cVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 8))();
          if (cVar1 == '\0') {
            cVar1 = FUN_0098fc80(param_1 + 0x228,&local_100);
            if (cVar1 != '\0') goto LAB_0044c127;
          }
          else {
            uStack_fc = 0;
            iVar3 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",&uStack_fc);
            if (iVar3 != 0) {
              *(undefined4 *)(*(int *)(local_f8 + 0x18) + iVar6 * 8) = uStack_fc;
              *(undefined1 *)(local_f8 + 0x2c) = 0;
              ExceptionList = local_14;
              return;
            }
          }
          FUN_009a1140();
LAB_0044c127:
          *(undefined4 *)(*(int *)(local_f8 + 0x18) + iVar6 * 8) = local_100;
          *(undefined1 *)(local_f8 + 0x2c) = 0;
          ExceptionList = local_14;
          return;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar3);
    }
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = local_f4[0] & 0xffffff00;
    ExceptionList = &local_14;
    FUN_00409350("modifier.cpp",0xc);
    local_c = 0;
    uVar2 = FUN_004015b0(local_f4,0x128,0x10004);
    local_c = CONCAT31(local_c._1_3_,1);
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
    puVar5 = (undefined4 *)(iVar3 + 0x14);
    FUN_00987d50(uVar2,"unknown modifier \'",0x12,0);
    uVar2 = FUN_00418e30(uVar2,param_1 + 0x24,extraout_ECX,"\' in file ");
    uVar2 = FUN_00418e30(uVar2);
    if (0xf < *(uint *)(iVar3 + 0x28)) {
      puVar5 = (undefined4 *)*puVar5;
    }
    piVar4 = (int *)FUN_00418e30(uVar2,puVar5);
    FUN_00408be0(piVar4);
    uVar7 = 0;
    if ((*(uint *)(*(int *)(*piVar4 + 4) + 0xc + (int)piVar4) & 6) == 0) {
      iVar3 = (**(code **)(**(int **)(*(int *)(*piVar4 + 4) + 0x38 + (int)piVar4) + 0x34))();
      if (iVar3 == -1) {
        uVar7 = 4;
      }
    }
    if (uVar7 != 0) {
      uVar7 = *(uint *)((int)piVar4 + *(int *)(*piVar4 + 4) + 0xc) | uVar7;
      if (*(int *)((int)piVar4 + *(int *)(*piVar4 + 4) + 0x38) == 0) {
        uVar7 = uVar7 | 4;
      }
      FUN_00401120(uVar7,0);
    }
    local_c = local_c & 0xffffff00;
    FUN_00987ac0(appuStack_60);
    appuStack_60[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_60);
    if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f4[0]);
    }
  }
  ExceptionList = local_14;
  return;
}

