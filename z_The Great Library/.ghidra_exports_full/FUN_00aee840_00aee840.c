// FUN_00aee840 @ 00aee840 body=[[00aee840, 00aeeb25]]


undefined4 FUN_00aee840(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  float fVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint in_ECX;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_retaddr;
  undefined1 *local_44;
  size_t sStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  size_t sStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  size_t sStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  size_t sStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b38360;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = *(int *)(param_2 + 0x1c);
  (**(code **)(*param_1 + 8))(&local_44,8,DAT_00ef259c ^ (uint)&stack0xffffffa8);
  if (iVar2 == 1) {
    unaff_EBX = CONCAT13((char)unaff_EBX,
                         CONCAT12((char)((uint)unaff_EBX >> 8),
                                  CONCAT11((char)((uint)unaff_EBX >> 0x10),
                                           (char)((uint)unaff_EBX >> 0x18))));
  }
  pcVar4 = (char *)FUN_00aee020(param_1,*(undefined4 *)(param_2 + 0x18),iVar2);
  puStack_20 = (undefined1 *)0x0;
  sStack_1c = 0;
  uStack_18 = 0;
  if (pcVar4 != (char *)0x0) {
    pcVar5 = pcVar4;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00b13660((int)pcVar5 - (int)(pcVar4 + 1),0);
    if (puStack_20 != (undefined1 *)0x0) {
      FID_conflict__memcpy(puStack_20,pcVar4,sStack_1c);
    }
  }
  local_c = (void *)0x0;
  pcVar4 = (char *)FUN_00aee020(uStack_4,*(undefined4 *)(param_2 + 0x18),iVar2);
  puStack_2c = (undefined1 *)0x0;
  sStack_28 = 0;
  uStack_24 = 0;
  if (pcVar4 != (char *)0x0) {
    pcVar5 = pcVar4;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00b13660((int)pcVar5 - (int)(pcVar4 + 1),0);
    if (puStack_2c != (undefined1 *)0x0) {
      FID_conflict__memcpy(puStack_2c,pcVar4,sStack_28);
    }
  }
  local_c = (void *)CONCAT31(local_c._1_3_,1);
  pcVar4 = (char *)FUN_00aee020(uStack_4,*(undefined4 *)(param_2 + 0x18),iVar2);
  puStack_38 = (undefined1 *)0x0;
  sStack_34 = 0;
  uStack_30 = 0;
  if (pcVar4 != (char *)0x0) {
    pcVar5 = pcVar4;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00b13660((int)pcVar5 - (int)(pcVar4 + 1),0);
    if (puStack_38 != (undefined1 *)0x0) {
      FID_conflict__memcpy(puStack_38,pcVar4,sStack_34);
    }
  }
  local_c = (void *)CONCAT31(local_c._1_3_,2);
  pcVar4 = (char *)FUN_00aee020(uStack_4,*(undefined4 *)(param_2 + 0x18),iVar2);
  local_44 = (undefined1 *)0x0;
  sStack_40 = 0;
  uStack_3c = 0;
  if (pcVar4 != (char *)0x0) {
    pcVar5 = pcVar4;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00b13660((int)pcVar5 - (int)(pcVar4 + 1),0);
    if (local_44 != (undefined1 *)0x0) {
      FID_conflict__memcpy(local_44,pcVar4,sStack_40);
    }
  }
  local_c._0_1_ = 3;
  if (*(char *)(unaff_EBP + 0xc) != '\0') {
    FUN_00b15e80("- File Information");
    puVar6 = local_44;
    if (local_44 == (undefined1 *)0x0) {
      puVar6 = &DAT_00ded94d;
    }
    FUN_00b15e80("   + Motion name        = \'%s\'",puVar6);
    puVar6 = puStack_2c;
    if (puStack_2c == (undefined1 *)0x0) {
      puVar6 = &DAT_00ded94d;
    }
    FUN_00b15e80("   + Original filename  = \'%s\'",puVar6);
    puVar6 = puStack_20;
    if (puStack_20 == (undefined1 *)0x0) {
      puVar6 = &DAT_00ded94d;
    }
    FUN_00b15e80("   + Source application = \'%s\'",puVar6);
    FUN_00b15e80("   + Exporter version   = v%d.%d",in_ECX & 0xff,in_ECX >> 8 & 0xff);
    puVar6 = puStack_38;
    if (puStack_38 == (undefined1 *)0x0) {
      puVar6 = &DAT_00ded94d;
    }
    FUN_00b15e80("   + Exporter comp date = \'%s\'",puVar6);
    FUN_00b15e80("   + Motion FPS         = %d",unaff_EBX);
  }
  fVar3 = (float)unaff_EBX;
  if (unaff_EBX < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  *(float *)(unaff_retaddr + 0x2c) = fVar3;
  local_c._0_1_ = 2;
  FUN_00b13650();
  local_c._0_1_ = 1;
  FUN_00b13650();
  local_c = (void *)((uint)local_c._1_3_ << 8);
  FUN_00b13650();
  local_c = (void *)0xffffffff;
  FUN_00b13650();
  ExceptionList = pvStack_14;
  return 1;
}

