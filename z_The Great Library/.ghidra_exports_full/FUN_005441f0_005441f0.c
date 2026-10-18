// FUN_005441f0 @ 005441f0 body=[[005441f0, 00544333] [00544337, 00544390] [00544394, 005443e2]]


void FUN_005441f0(void)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int unaff_EDI;
  undefined1 *puVar8;
  int local_94;
  int local_90;
  undefined8 local_88;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  undefined1 local_60 [8];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_34;
  undefined4 local_30;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  puStack_10 = &LAB_00ba1ab6;
  local_14 = ExceptionList;
  iVar5 = *(int *)(unaff_EDI + 0x1584) - *(int *)(unaff_EDI + 0x1580) >> 3;
  local_88 = 0;
  local_90 = 0;
  ExceptionList = &local_14;
  if (0 < iVar5) {
    do {
      local_c = 0xffffffff;
      if (*(int *)(unaff_EDI + 0x20) != local_90) {
        iVar6 = *(int *)(unaff_EDI + 0x1580);
        iVar4 = *(int *)(iVar6 + 4 + local_90 * 8);
        if ((-1 < iVar4) && ((0 < iVar4 || (*(int *)(iVar6 + local_90 * 8) != 0)))) {
          puVar2 = (uint *)(iVar6 + local_90 * 8);
          local_88 = CONCAT44(local_88._4_4_ + *(int *)(iVar6 + 4 + local_90 * 8) +
                              (uint)CARRY4((uint)local_88,*puVar2),(uint)local_88 + *puVar2);
          *puVar2 = 0;
          puVar2[1] = 0;
          FUN_008a8650(0);
          iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_90 * 4);
          local_58 = *(undefined4 *)(iVar6 + 0x1c);
          local_34 = *(undefined4 *)(unaff_EDI + 0x1c);
          local_54 = *(undefined4 *)(iVar6 + 0x20);
          local_30 = *(undefined4 *)(unaff_EDI + 0x20);
          local_68 = 0xf;
          local_6c = 0;
          local_7c[0] = local_7c[0] & 0xffffff00;
          FUN_00409350("on_my_factories_nationalized",0x1c);
          local_c = 0;
          if (DAT_0131a584 == 0) {
            iVar6 = FUN_00aae9af(0x1c);
            local_c._0_1_ = 1;
            if (iVar6 == 0) {
              local_94 = 0;
            }
            else {
              local_94 = FUN_008b0060();
            }
            iVar6 = DAT_0131a584;
            local_c = (uint)local_c._1_3_ << 8;
            if ((local_94 != DAT_0131a584) && (DAT_0131a584 != 0)) {
              FUN_008b2740(DAT_0131a584);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(iVar6);
            }
            DAT_0131a584 = local_94;
          }
          iVar6 = FUN_008b3060(local_7c);
          if (iVar6 != 0) {
            iVar6 = FUN_008b24f0(iVar6,local_60);
            if (iVar6 != 0) {
              puVar8 = local_60;
              uVar7 = FUN_008a6620(puVar8);
              FUN_008a8120(uVar7,puVar8);
            }
          }
          local_c = 0xffffffff;
          if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_7c[0]);
          }
          local_68 = 0xf;
          local_6c = 0;
          local_7c[0] = local_7c[0] & 0xffffff00;
        }
      }
      local_90 = local_90 + 1;
    } while (local_90 < iVar5);
  }
  iVar5 = *(int *)(unaff_EDI + 0x20);
  iVar6 = *(int *)(unaff_EDI + 0x1580);
  puVar2 = (uint *)(iVar6 + iVar5 * 8);
  uVar3 = *puVar2;
  *puVar2 = *puVar2 + (uint)local_88;
  piVar1 = (int *)(iVar6 + iVar5 * 8 + 4);
  *piVar1 = *piVar1 + local_88._4_4_ + (uint)CARRY4(uVar3,(uint)local_88);
  ExceptionList = local_14;
  return;
}

