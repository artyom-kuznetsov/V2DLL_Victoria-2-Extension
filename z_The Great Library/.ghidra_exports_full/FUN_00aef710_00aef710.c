// FUN_00aef710 @ 00aef710 body=[[00aef710, 00aef8bc] [00aef8c0, 00aefc9e]]


void FUN_00aef710(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  char *pcVar7;
  undefined1 *puVar8;
  int *in_ECX;
  char *pcVar9;
  undefined1 *puVar10;
  int unaff_EBX;
  uint uVar11;
  int iVar12;
  int iStack_68;
  int *local_64;
  int local_60;
  int *local_5c;
  int local_58;
  int local_54;
  int local_50;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b3846e;
  local_c = ExceptionList;
  local_10 = DAT_00ef259c ^ (uint)&iStack_68;
  ExceptionList = &local_c;
  local_50 = *(int *)(param_2 + 4);
  local_60 = *(int *)(param_2 + 0x10);
  iVar12 = *(int *)(param_2 + 0x1c);
  local_54 = *(int *)(param_2 + 0x14);
  local_5c = param_1;
  local_64 = in_ECX;
  local_58 = iVar12;
  (**(code **)(*param_1 + 8))(&local_2c,0xc,DAT_00ef259c ^ (uint)&stack0xffffff88);
  if (iVar12 == 1) {
    uVar4 = (undefined1)uStack_34;
    uVar5 = uStack_34._1_1_;
    uStack_34._0_2_ = CONCAT11(uStack_34._2_1_,uStack_34._3_1_);
    uStack_34 = CONCAT13(uVar4,CONCAT12(uVar5,(undefined2)uStack_34));
    uVar4 = (undefined1)uStack_30;
    uVar5 = uStack_30._1_1_;
    uStack_30._0_2_ = CONCAT11(uStack_30._2_1_,uStack_30._3_1_);
    uStack_30 = CONCAT13(uVar4,CONCAT12(uVar5,(undefined2)uStack_30));
    uVar4 = (undefined1)local_2c;
    uVar5 = local_2c._1_1_;
    local_2c._0_2_ = CONCAT11(local_2c._2_1_,local_2c._3_1_);
    local_2c = CONCAT13(uVar4,CONCAT12(uVar5,(undefined2)local_2c));
  }
  uVar11 = 0;
  if ((char)in_ECX[3] != '\0') {
    FUN_00b15e80("- Motion Event Table:");
  }
  if ((((char)in_ECX[3] != '\0') &&
      (FUN_00b15e80("   + Num events = %d",uStack_34), (char)in_ECX[3] != '\0')) &&
     (FUN_00b15e80("   + Num types  = %d",uStack_30), (char)in_ECX[3] != '\0')) {
    FUN_00b15e80("   + Num params = %d",local_2c);
  }
  FUN_00b00360(uStack_30,1);
  local_c = (void *)0x0;
  FUN_00b00360(local_2c,1);
  local_c = (void *)CONCAT31(local_c._1_3_,1);
  if ((char)in_ECX[3] != '\0') {
    FUN_00b15e80("   + Event types:");
  }
  if (uStack_30 != 0) {
    do {
      pcVar7 = (char *)FUN_00aee020();
      pcVar9 = pcVar7;
      do {
        cVar6 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar6 != '\0');
      FUN_00b137d0(pcVar7,(int)pcVar9 - (int)(pcVar7 + 1));
      if (*(char *)(unaff_EBX + 0xc) != '\0') {
        FUN_00b15e80();
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uStack_30);
  }
  if (*(char *)(unaff_EBX + 0xc) != '\0') {
    FUN_00b15e80("   + Parameters:");
  }
  uVar11 = 0;
  if (local_2c != 0) {
    do {
      pcVar7 = (char *)FUN_00aee020();
      pcVar9 = pcVar7;
      do {
        cVar6 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar6 != '\0');
      FUN_00b137d0(pcVar7,(int)pcVar9 - (int)(pcVar7 + 1));
      if (*(char *)(unaff_EBX + 0xc) != '\0') {
        FUN_00b15e80();
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < local_2c);
  }
  bVar1 = false;
  if (((iStack_68 != 0) && (*(char *)(iStack_68 + 2) != '\0')) ||
     ((local_5c != (int *)0x0 && (*(char *)((int)local_5c + 2) != '\0')))) {
    bVar1 = true;
  }
  local_5c = (int *)(*(code *)PTR_FUN_00f01b08)(0x2c,0x134,4,0,0,0xffffffff);
  local_c._0_1_ = 2;
  if (local_5c == (int *)0x0) {
    iStack_68 = 0;
  }
  else {
    iStack_68 = FUN_00b0f7e0("Default",local_58);
  }
  iVar12 = iStack_68;
  local_c = (void *)CONCAT31(local_c._1_3_,1);
  FUN_00b0fa60(uStack_34);
  FUN_00b0fa80(local_2c);
  FUN_00b10660(iVar12);
  if (*(char *)(unaff_EBX + 0xc) != '\0') {
    FUN_00b15e80("   + Motion Events:");
  }
  iVar3 = iStack_44;
  iVar2 = local_54;
  iVar12 = local_60;
  uVar11 = 0;
  if (uStack_34 != 0) {
    do {
      (**(code **)(*local_64 + 8))(&uStack_28,0x10);
      if (iVar12 == 1) {
        uVar4 = (undefined1)uStack_20;
        uVar5 = uStack_20._1_1_;
        uStack_20._0_2_ = CONCAT11(uStack_20._2_1_,uStack_20._3_1_);
        uStack_20 = CONCAT13(uVar4,CONCAT12(uVar5,(undefined2)uStack_20));
        uVar4 = (undefined1)uStack_1c;
        uVar5 = uStack_1c._1_1_;
        uStack_1c._0_2_ = CONCAT11(uStack_1c._2_1_,uStack_1c._3_1_);
        uStack_1c = CONCAT13(uVar4,CONCAT12(uVar5,(undefined2)uStack_1c));
        uVar4 = (undefined1)uStack_28;
        uVar5 = uStack_28._1_1_;
        uStack_28._0_2_ = CONCAT11(uStack_28._2_1_,uStack_28._3_1_);
        uStack_28 = (float)CONCAT13(uVar4,CONCAT12(uVar5,(undefined2)uStack_28));
        uVar4 = (undefined1)uStack_24;
        uVar5 = uStack_24._1_1_;
        uStack_24._0_2_ = CONCAT11(uStack_24._2_1_,uStack_24._3_1_);
        uStack_24 = (float)CONCAT13(uVar4,CONCAT12(uVar5,(undefined2)uStack_24));
      }
      if (*(char *)(unaff_EBX + 0xc) != '\0') {
        puVar10 = *(undefined1 **)(iVar3 + uStack_1c * 0xc);
        if (puVar10 == (undefined1 *)0x0) {
          puVar10 = &DAT_00ded94d;
        }
        puVar8 = *(undefined1 **)(iVar2 + uStack_20 * 0xc);
        if (puVar8 == (undefined1 *)0x0) {
          puVar8 = &DAT_00ded94d;
        }
        FUN_00b15e80("     [%d] StartTime = %f  -  EndTime = %f  -  Type = \'%s\'  -  Param = \'%s\'"
                     ,uVar11,(double)uStack_28,(double)uStack_24,puVar8,puVar10);
      }
      if (bVar1) {
        puVar10 = *(undefined1 **)(iVar2 + uStack_20 * 0xc);
        if (puVar10 == (undefined1 *)0x0) {
          puVar10 = &DAT_00ded94d;
        }
        cVar6 = FUN_00ae69b0(puVar10);
        if (cVar6 == '\0') {
          puVar10 = *(undefined1 **)(iVar2 + uStack_20 * 0xc);
          if (puVar10 == (undefined1 *)0x0) {
            puVar10 = &DAT_00ded94d;
          }
          FUN_00ae6b00(puVar10,0xffffffff);
          if (*(char *)(unaff_EBX + 0xc) != '\0') {
            FUN_00b15e10();
          }
        }
      }
      puVar10 = *(undefined1 **)(iVar3 + uStack_1c * 0xc);
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &DAT_00ded94d;
      }
      puVar8 = *(undefined1 **)(iVar2 + uStack_20 * 0xc);
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = &DAT_00ded94d;
      }
      FUN_00b0fbd0(uStack_28,uStack_24,puVar8,puVar10);
      uVar11 = uVar11 + 1;
    } while (uVar11 < uStack_34);
  }
  local_c = (void *)((uint)local_c & 0xffffff00);
  for (iVar12 = iStack_40; iVar12 != 0; iVar12 = iVar12 + -1) {
    FUN_00b13650();
  }
  if (iStack_44 != 0) {
    (*(code *)PTR__free_00f01b10)(iStack_44);
  }
  iVar2 = local_54;
  local_c = (void *)0xffffffff;
  for (iVar12 = local_50; iVar12 != 0; iVar12 = iVar12 + -1) {
    FUN_00b13650();
  }
  if (iVar2 != 0) {
    (*(code *)PTR__free_00f01b10)(iVar2);
  }
  ExceptionList = pvStack_14;
  __security_check_cookie(uStack_18 ^ (uint)&stack0xffffff90);
  return;
}

