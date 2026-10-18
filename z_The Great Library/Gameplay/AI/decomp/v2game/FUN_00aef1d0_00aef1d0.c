// FUN_00aef1d0 @ 00aef1d0 body=[[00aef1d0, 00aef35c] [00aef360, 00aef70d]]


void FUN_00aef1d0(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  char *pcVar6;
  undefined1 *puVar7;
  int *in_ECX;
  char *pcVar8;
  undefined1 *puVar9;
  int unaff_EBX;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iStack_64;
  int *local_60;
  int local_5c;
  int *local_58;
  int local_54;
  int local_50;
  int local_4c;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
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
  puStack_8 = &LAB_00b3842b;
  local_c = ExceptionList;
  local_10 = DAT_00ef259c ^ (uint)&iStack_64;
  ExceptionList = &local_c;
  local_4c = *(int *)(param_2 + 4);
  local_5c = *(int *)(param_2 + 0x10);
  iVar11 = *(int *)(param_2 + 0x1c);
  local_50 = *(int *)(param_2 + 0x14);
  local_58 = param_1;
  local_60 = in_ECX;
  local_54 = iVar11;
  (**(code **)(*param_1 + 8))(&local_28,0xc,DAT_00ef259c ^ (uint)&stack0xffffff8c);
  if (iVar11 == 1) {
    uVar3 = (undefined1)uStack_30;
    uVar4 = uStack_30._1_1_;
    uStack_30._0_2_ = CONCAT11(uStack_30._2_1_,uStack_30._3_1_);
    uStack_30 = CONCAT13(uVar3,CONCAT12(uVar4,(undefined2)uStack_30));
    uVar3 = (undefined1)uStack_2c;
    uVar4 = uStack_2c._1_1_;
    uStack_2c._0_2_ = CONCAT11(uStack_2c._2_1_,uStack_2c._3_1_);
    uStack_2c = CONCAT13(uVar3,CONCAT12(uVar4,(undefined2)uStack_2c));
    uVar3 = (undefined1)local_28;
    uVar4 = local_28._1_1_;
    local_28._0_2_ = CONCAT11(local_28._2_1_,local_28._3_1_);
    local_28 = CONCAT13(uVar3,CONCAT12(uVar4,(undefined2)local_28));
  }
  uVar10 = 0;
  if ((char)in_ECX[3] != '\0') {
    FUN_00b15e80("- Motion Event Table:");
    pcVar8 = "   + Num events = %d";
    uVar12 = uStack_30;
    FUN_00b15e80();
    FUN_00b15e80("   + Num types  = %d",uStack_2c,pcVar8,uVar12);
    FUN_00b15e80("   + Num params = %d",local_28);
  }
  FUN_00b00360(uStack_2c,1);
  local_c = (void *)0x0;
  FUN_00b00360(local_28,1);
  local_c = (void *)CONCAT31(local_c._1_3_,1);
  if ((char)in_ECX[3] != '\0') {
    FUN_00b15e80("   + Event types:");
  }
  if (uStack_2c != 0) {
    do {
      pcVar6 = (char *)FUN_00aee020();
      pcVar8 = pcVar6;
      do {
        cVar5 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar5 != '\0');
      FUN_00b137d0(pcVar6,(int)pcVar8 - (int)(pcVar6 + 1));
      if (*(char *)(unaff_EBX + 0xc) != '\0') {
        FUN_00b15e80();
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uStack_2c);
  }
  if (*(char *)(unaff_EBX + 0xc) != '\0') {
    FUN_00b15e80("   + Parameters:");
  }
  uVar10 = 0;
  if (local_28 != 0) {
    do {
      pcVar6 = (char *)FUN_00aee020();
      pcVar8 = pcVar6;
      do {
        cVar5 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar5 != '\0');
      FUN_00b137d0(pcVar6,(int)pcVar8 - (int)(pcVar6 + 1));
      if (*(char *)(unaff_EBX + 0xc) != '\0') {
        FUN_00b15e80();
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < local_28);
  }
  bVar1 = false;
  if (((iStack_64 != 0) && (*(char *)(iStack_64 + 2) != '\0')) ||
     ((local_58 != (int *)0x0 && (*(char *)((int)local_58 + 2) != '\0')))) {
    bVar1 = true;
  }
  local_58 = (int *)(*(code *)PTR_FUN_00f01b08)(0x2c,0x134,4,0,0,0xffffffff);
  local_c._0_1_ = 2;
  if (local_58 == (int *)0x0) {
    iStack_64 = 0;
  }
  else {
    iStack_64 = FUN_00b0f7e0("Default",local_54);
  }
  iVar11 = iStack_64;
  local_c = (void *)CONCAT31(local_c._1_3_,1);
  FUN_00b0fa60(uStack_30);
  FUN_00b0fa80(local_28);
  FUN_00b10660(iVar11);
  if (*(char *)(unaff_EBX + 0xc) != '\0') {
    FUN_00b15e80("   + Motion Events:");
  }
  iVar2 = local_50;
  iVar11 = local_5c;
  uVar10 = 0;
  if (uStack_30 != 0) {
    do {
      (**(code **)(*local_60 + 8))(&uStack_24,0xc);
      if (iVar11 == 1) {
        uVar3 = (undefined1)uStack_20;
        uVar4 = uStack_20._1_1_;
        uStack_20._0_2_ = CONCAT11(uStack_20._2_1_,uStack_20._3_1_);
        uStack_20 = CONCAT13(uVar3,CONCAT12(uVar4,(undefined2)uStack_20));
        uVar3 = (undefined1)uStack_1c;
        uVar4 = uStack_1c._1_1_;
        uStack_1c._0_2_ = CONCAT11(uStack_1c._2_1_,uStack_1c._3_1_);
        uStack_1c = CONCAT13(uVar3,CONCAT12(uVar4,(undefined2)uStack_1c));
        uVar3 = (undefined1)uStack_24;
        uVar4 = uStack_24._1_1_;
        uStack_24._0_2_ = CONCAT11(uStack_24._2_1_,uStack_24._3_1_);
        uStack_24 = (float)CONCAT13(uVar3,CONCAT12(uVar4,(undefined2)uStack_24));
      }
      if (*(char *)(unaff_EBX + 0xc) != '\0') {
        puVar9 = *(undefined1 **)(iVar2 + uStack_1c * 0xc);
        if (puVar9 == (undefined1 *)0x0) {
          puVar9 = &DAT_00ded94d;
        }
        puVar7 = *(undefined1 **)(iStack_40 + uStack_20 * 0xc);
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &DAT_00ded94d;
        }
        FUN_00b15e80("     [%d] Time = %f  -  Type = \'%s\'  -  Param = \'%s\'",uVar10,
                     (double)uStack_24,puVar7,puVar9);
      }
      if (bVar1) {
        puVar9 = *(undefined1 **)(iStack_40 + uStack_20 * 0xc);
        if (puVar9 == (undefined1 *)0x0) {
          puVar9 = &DAT_00ded94d;
        }
        cVar5 = FUN_00ae69b0(puVar9);
        if (cVar5 == '\0') {
          puVar9 = *(undefined1 **)(iStack_40 + uStack_20 * 0xc);
          if (puVar9 == (undefined1 *)0x0) {
            puVar9 = &DAT_00ded94d;
          }
          FUN_00ae6b00(puVar9,0xffffffff);
          if (*(char *)(unaff_EBX + 0xc) != '\0') {
            FUN_00b15e10();
          }
        }
      }
      FUN_00b0fe80();
      uVar10 = uVar10 + 1;
    } while (uVar10 < uStack_30);
  }
  iVar2 = local_50;
  local_c = (void *)((uint)local_c & 0xffffff00);
  for (iVar11 = local_4c; iVar11 != 0; iVar11 = iVar11 + -1) {
    FUN_00b13650();
  }
  if (iVar2 != 0) {
    (*(code *)PTR__free_00f01b10)(iVar2);
  }
  local_c = (void *)0xffffffff;
  for (iVar11 = iStack_3c; iVar11 != 0; iVar11 = iVar11 + -1) {
    FUN_00b13650();
  }
  if (iStack_40 != 0) {
    (*(code *)PTR__free_00f01b10)(iStack_40);
  }
  ExceptionList = pvStack_14;
  __security_check_cookie(uStack_18 ^ (uint)&stack0xffffff94);
  return;
}

