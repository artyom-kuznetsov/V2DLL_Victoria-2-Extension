// FUN_00a174f0 @ 00a174f0 body=[[00a174f0, 00a175f9] [00a175fd, 00a17650] [00a17654, 00a17745] [00a1774c, 00a17762]]


void FUN_00a174f0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint unaff_EDI;
  undefined4 *puVar6;
  uint local_100;
  uint uStack_fc;
  int local_f0;
  int local_ec;
  undefined **appuStack_70 [19];
  void *pvStack_24;
  uint uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b54d2f;
  pvStack_14 = ExceptionList;
  local_ec = 0xf;
  local_f0 = 0;
  local_100 = local_100 & 0xffffff00;
  ExceptionList = &pvStack_14;
  FUN_00409350("metaserverchannel.cpp",0x15);
  local_c = 0;
  uVar4 = FUN_004015b0(&local_100,0x3d,4);
  local_c = CONCAT31(local_c._1_3_,1);
  FUN_00987d50(uVar4,"User ",5,0);
  puVar5 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar5 = (undefined4 *)*param_2;
  }
  uVar4 = FUN_00418e30(uVar4,puVar5);
  puVar6 = (undefined4 *)(param_1 + 0x18);
  uVar4 = FUN_00418e30(uVar4," left channel ");
  puVar5 = puVar6;
  if (0xf < *(uint *)(param_1 + 0x2c)) {
    puVar5 = (undefined4 *)*puVar6;
  }
  uVar4 = FUN_00418e30(uVar4,puVar5);
  FUN_00401280(uVar4);
  uStack_1c = uStack_1c & 0xffffff00;
  FUN_00987ac0(appuStack_70);
  appuStack_70[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_70);
  uStack_1c = 0xffffffff;
  if (0xf < uStack_fc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_EDI);
  }
  uStack_fc = 0xf;
  local_100 = 0;
  FUN_00409350("METASESSION",0xb);
  uStack_1c = 2;
  local_f0 = FUN_009c1bd0(&stack0xfffffef0);
  uStack_1c = 0xffffffff;
  if (0xf < uStack_fc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_EDI & 0xffffff00);
  }
  piVar1 = *(int **)(param_1 + 8);
  uStack_fc = 0xf;
  local_100 = 0;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    local_ec = FUN_00aae9af(0x78);
    uStack_1c = 3;
    if (local_ec == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00a040d0(local_ec,0,param_2,puVar6,*(undefined4 *)(*piVar1 + 0x3c),
                           *(undefined2 *)(*piVar1 + 0x40));
    }
    uStack_1c = 0xffffffff;
    (**(code **)(**(int **)(local_f0 + 0x38) + 0x18))(uVar4);
  }
  puVar5 = *(undefined4 **)(param_1 + 8);
  if (puVar5 != (undefined4 *)0x0) {
    while ((undefined4 *)*puVar5 != param_2) {
      puVar5 = (undefined4 *)puVar5[2];
      if (puVar5 == (undefined4 *)0x0) {
        ExceptionList = pvStack_24;
        return;
      }
    }
    if (puVar5 != (undefined4 *)0x0) {
      if (*(char *)(param_1 + 0x14) != '\0') {
        *(undefined1 *)(puVar5 + 3) = 1;
        ExceptionList = pvStack_24;
        return;
      }
      iVar2 = puVar5[1];
      iVar3 = puVar5[2];
      if (iVar2 != 0) {
        *(int *)(iVar2 + 8) = iVar3;
      }
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = iVar2;
      }
      if (puVar5 == *(undefined4 **)(param_1 + 8)) {
        *(int *)(param_1 + 8) = iVar3;
      }
      if (puVar5 == *(undefined4 **)(param_1 + 0xc)) {
        *(int *)(param_1 + 0xc) = iVar2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(puVar5);
    }
  }
  ExceptionList = pvStack_24;
  return;
}

