// FUN_00aeeb30 @ 00aeeb30 body=[[00aeeb30, 00aeedd9]]


undefined4 FUN_00aeeb30(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  int *piVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  size_t unaff_EBX;
  int unaff_retaddr;
  undefined4 uStack_30;
  void *pvStack_28;
  size_t sStack_24;
  undefined4 uStack_20;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar13 = param_2;
  piVar4 = param_1;
  uStack_4 = -1;
  puStack_8 = &LAB_00b38399;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = *(int *)(param_2 + 0x1c);
  (**(code **)(*param_1 + 8))(&param_1,4,DAT_00ef259c ^ (uint)&stack0xffffffc0);
  if (iVar2 == 1) {
    uVar5 = (undefined1)uStack_4;
    uVar6 = uStack_4._1_1_;
    uStack_4._0_2_ = CONCAT11(uStack_4._2_1_,uStack_4._3_1_);
    uStack_4 = CONCAT13(uVar5,CONCAT12(uVar6,(undefined2)uStack_4));
  }
  if (uStack_4 != 0) {
    uStack_30 = uStack_4;
    do {
      (**(code **)(*piVar4 + 8))(&pvStack_28,8);
      if (iVar2 == 1) {
        uVar5 = (undefined1)uStack_30;
        uVar6 = uStack_30._1_1_;
        uStack_30._0_2_ = CONCAT11(uStack_30._2_1_,uStack_30._3_1_);
        uStack_30 = CONCAT13(uVar5,CONCAT12(uVar6,(undefined2)uStack_30));
      }
      pcVar7 = (char *)FUN_00aee020(piVar4,*(undefined4 *)(iVar13 + 0x18),iVar2);
      pvStack_28 = (void *)0x0;
      sStack_24 = 0;
      uStack_20 = 0;
      if (pcVar7 != (char *)0x0) {
        pcVar8 = pcVar7;
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        FUN_00b13660((int)pcVar8 - (int)(pcVar7 + 1),0);
        if (pvStack_28 != (void *)0x0) {
          FID_conflict__memcpy(pvStack_28,pcVar7,sStack_24);
        }
      }
      pvStack_14 = (void *)0x0;
      iVar9 = FUN_00ae31d0(&pvStack_28);
      pvStack_14 = (void *)0xffffffff;
      FUN_00b13650();
      FUN_00aee020(piVar4,*(undefined4 *)(iVar13 + 0x18),iVar2);
      iVar10 = (*(code *)PTR_FUN_00f01b08)(0x44,0x137,4,0,0,0xffffffff);
      local_c = (void *)0x1;
      if (iVar10 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = FUN_00b0b110(unaff_EBX,iVar9);
      }
      local_c = (void *)0xffffffff;
      if (iVar9 == 0) {
        *(undefined4 *)(iVar13 + 8) = uVar11;
      }
      uVar12 = FUN_00aee020(piVar4,*(undefined4 *)(iVar13 + 0x18),iVar2);
      FUN_00b0a870(uVar12);
      sVar3 = sStack_24;
      if (iVar9 != 0) {
        FUN_00b0b2f0(uVar11);
        sVar3 = sStack_24;
      }
      while (sVar3 != 0) {
        pcVar7 = (char *)FUN_00aee020(piVar4,*(undefined4 *)(iVar13 + 0x18),iVar2);
        iVar13 = (*(code *)PTR_FUN_00f01b08)(0x18,0x137,4,0,0,0xffffffff);
        local_c = (void *)0x2;
        if (iVar13 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = FUN_00b0a810();
        }
        local_c = (void *)0xffffffff;
        pcVar8 = pcVar7;
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        FUN_00b137d0(pcVar7,(int)pcVar8 - (int)(pcVar7 + 1));
        uVar12 = FUN_00aee020(piVar4,*(undefined4 *)(unaff_retaddr + 0x18),iVar2);
        FUN_00b0a840(uVar12);
        FUN_00b0b340(uVar11);
        unaff_EBX = sVar3 - 1;
        iVar13 = unaff_retaddr;
        sVar3 = unaff_EBX;
      }
      uStack_30 = uStack_30 + -1;
    } while (uStack_30 != 0);
  }
  ExceptionList = pvStack_14;
  return 1;
}

