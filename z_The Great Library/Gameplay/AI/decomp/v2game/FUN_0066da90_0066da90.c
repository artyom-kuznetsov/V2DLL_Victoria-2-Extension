// FUN_0066da90 @ 0066da90 body=[[0066da90, 0066db11] [0066db15, 0066dc0a] [0066dc10, 0066ddb4]]


void FUN_0066da90(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *in_ECX;
  undefined4 *puVar8;
  undefined1 auStack_94 [8];
  undefined4 uStack_8c;
  undefined ***pppuStack_88;
  int iStack_84;
  char *pcStack_80;
  uint *puStack_7c;
  undefined **ppuStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined4 uStack_38;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b7f398;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (in_ECX[0x36d] != 0x11) {
    puStack_7c = (uint *)0x5;
    pcStack_80 = "click";
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    iStack_84 = 0x66dae2;
    ExceptionList = &pvStack_14;
    FUN_00409350();
    local_c = 0;
    puStack_7c = (uint *)0x66daeb;
    piVar4 = (int *)FUN_009c7290();
    puStack_7c = local_34;
    pcStack_80 = (char *)0x66daf9;
    (**(code **)(*piVar4 + 0x60))();
    local_c = 0xffffffff;
    if (0xf < local_20) {
      puStack_7c = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
      pcStack_80 = &UNK_0066db12;
      FUN_00aae91b();
    }
  }
  iVar5 = DAT_0125870c;
  local_c = 0xffffffff;
  puStack_7c = (uint *)0x12;
  in_ECX[0x36d] = 0x11;
  *(undefined4 *)(iVar5 + 0x2ad8) = 0x11;
  iStack_84 = 0x66db2f;
  FUN_0066c180();
  puStack_7c = (uint *)0x66db34;
  iVar5 = FUN_00475500();
  *(undefined1 *)(iVar5 + 0xe6) = 0;
  puStack_7c = (uint *)0x66db3f;
  iVar5 = FUN_00475500();
  *(undefined4 *)(iVar5 + 0xec) = 0xffba;
  puStack_7c = (uint *)0x66db4e;
  iVar5 = FUN_00475500();
  *(undefined4 *)(iVar5 + 0xf0) = 5;
  puStack_7c = (uint *)0x66db61;
  iVar5 = (**(code **)(*in_ECX + 0x38))();
  puStack_7c = (uint *)(iVar5 + 0x20bc);
  pcStack_80 = (char *)0x66db6c;
  FUN_007fd390();
  puStack_7c = (uint *)0x66db75;
  (**(code **)(*in_ECX + 0x38))();
  puStack_7c = (uint *)0x66db88;
  FUN_00819830();
  puStack_7c = (uint *)0x66db91;
  puStack_7c = (uint *)(**(code **)(*in_ECX + 0x38))();
  pcStack_80 = (char *)0x66db97;
  FUN_006458d0();
  piVar4 = DAT_012588e8;
  puStack_7c = (uint *)0x66dbb1;
  iVar5 = (**(code **)(*(int *)DAT_012588e8[0x2c9] + 0x124))();
  if (*(char *)(*(int *)(iVar5 + 0x20) + 0x67) != '\0') {
    puStack_7c = (uint *)0x66dbcd;
    iVar5 = (**(code **)(*(int *)piVar4[0x2c9] + 0x124))();
    iVar5 = *(int *)(iVar5 + 0x24);
    if (iVar5 != 0) {
      iVar1 = *(int *)(iVar5 + 0x58);
      ppuStack_5c = CSafePathFind::vftable;
      puStack_7c = (uint *)0x66dbf4;
      iStack_50 = (**(code **)(*piVar4 + 0x18))();
      iStack_58 = 1;
      if (1 < iStack_50) {
        do {
          iVar2 = *(int *)(piVar4[0x2b3] + iStack_58 * 4);
          puStack_7c = *(uint **)(iVar2 + 0x58);
          if ((*(char *)(*(int *)(iVar2 + 0x5c) + 0x2a) != '\0') && (puStack_7c != (uint *)iVar1)) {
            pcStack_80 = (char *)0x66dc4c;
            iStack_54 = (int)puStack_7c;
            iVar6 = FUN_004450f0();
            if (0 < iVar6) {
              uStack_48 = 0;
              uStack_44 = 0;
              uStack_40 = 0;
              uStack_3c = 0;
              uStack_38 = 0;
              puStack_7c = &uStack_48;
              pppuStack_88 = &ppuStack_5c;
              local_c = 1;
              uStack_8c = 0x66dc85;
              iStack_84 = iVar5;
              pcStack_80 = (char *)iVar2;
              cVar3 = FUN_005b8840();
              if (cVar3 != '\0') {
                puStack_4c = auStack_94;
                pcStack_80 = (char *)0xf;
                iStack_84 = 0;
                auStack_94[0] = 0;
                FUN_00409350("attackArrow",0xb);
                local_c._0_1_ = 2;
                puVar8 = &uStack_48;
                uVar7 = (**(code **)(*in_ECX + 0x38))(puVar8);
                local_c = CONCAT31(local_c._1_3_,1);
                FUN_00645a20(uVar7,puVar8);
              }
              local_c = 0xffffffff;
              puStack_7c = (uint *)0x66dce3;
              FUN_00849e90();
            }
            pcStack_80 = (char *)0x66dcfb;
            puStack_7c = (uint *)iVar1;
            iVar6 = FUN_004450f0();
            if (0 < iVar6) {
              uStack_48 = 0;
              uStack_44 = 0;
              uStack_40 = 0;
              uStack_3c = 0;
              uStack_38 = 0;
              puStack_7c = &uStack_48;
              pppuStack_88 = &ppuStack_5c;
              local_c = 3;
              uStack_8c = 0x66dd34;
              iStack_84 = iVar2;
              pcStack_80 = (char *)iVar5;
              cVar3 = FUN_005b8840();
              if (cVar3 != '\0') {
                puStack_4c = auStack_94;
                pcStack_80 = (char *)0xf;
                iStack_84 = 0;
                auStack_94[0] = 0;
                FUN_00409350("stratArrow",10);
                local_c._0_1_ = 4;
                puVar8 = &uStack_48;
                uVar7 = (**(code **)(*in_ECX + 0x38))(puVar8);
                local_c = CONCAT31(local_c._1_3_,3);
                FUN_00645a20(uVar7,puVar8);
              }
              local_c = 0xffffffff;
              puStack_7c = (uint *)0x66dd90;
              FUN_00849e90();
            }
          }
          iStack_58 = iStack_58 + 1;
        } while (iStack_58 < iStack_50);
      }
    }
  }
  ExceptionList = pvStack_14;
  return;
}

