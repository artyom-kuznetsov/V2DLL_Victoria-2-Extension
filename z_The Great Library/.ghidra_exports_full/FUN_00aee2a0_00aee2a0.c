// FUN_00aee2a0 @ 00aee2a0 body=[[00aee2a0, 00aee469]]


void FUN_00aee2a0(int *param_1,int param_2)

{
  int iVar1;
  float fVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int in_ECX;
  int unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  bool bVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined1 uStack_10;
  undefined1 uStack_f;
  uint uStack_c;
  uint local_4;
  
  local_4 = DAT_00ef259c ^ (uint)&local_1c;
  local_1c = *(undefined4 *)(param_2 + 4);
  iVar1 = *(int *)(param_2 + 0x1c);
  uVar8 = CONCAT44(unaff_ESI,unaff_EDI);
  uVar7 = 0x10;
  puVar6 = &local_14;
  (**(code **)(*param_1 + 8))(puVar6,0x10);
  if (iVar1 == 1) {
    uVar3 = (undefined1)local_14;
    uVar4 = local_14._1_1_;
    local_14._0_2_ = CONCAT11(local_14._2_1_,local_14._3_1_);
    local_14 = CONCAT13(uVar3,CONCAT12(uVar4,(undefined2)local_14));
    uVar3 = (undefined1)local_1c;
    uVar4 = local_1c._1_1_;
    local_1c._0_2_ = CONCAT11(local_1c._2_1_,local_1c._3_1_);
    local_1c = CONCAT13(uVar3,CONCAT12(uVar4,(undefined2)local_1c));
    uVar3 = (undefined1)uStack_18;
    uVar4 = uStack_18._1_1_;
    uStack_18._0_2_ = CONCAT11(uStack_18._2_1_,uStack_18._3_1_);
    uStack_18 = (float)CONCAT13(uVar3,CONCAT12(uVar4,(undefined2)uStack_18));
  }
  if (*(char *)(in_ECX + 0xc) != '\0') {
    FUN_00b15e80("- File Information",puVar6,uVar7,uVar8);
  }
  uVar7 = FUN_00aee020(param_1,*(undefined4 *)(param_2 + 0x18),iVar1);
  if (*(char *)(in_ECX + 0xc) != '\0') {
    FUN_00b15e80("   + Source application = \'%s\'",uVar7);
  }
  uVar7 = FUN_00aee020(param_1,*(undefined4 *)(param_2 + 0x18),iVar1);
  if (*(char *)(in_ECX + 0xc) != '\0') {
    FUN_00b15e80("   + Original filename  = \'%s\'",uVar7);
  }
  uVar7 = FUN_00aee020(param_1,*(undefined4 *)(param_2 + 0x18),iVar1);
  if (*(char *)(in_ECX + 0xc) != '\0') {
    FUN_00b15e80("   + Exporter comp date = \'%s\'",uVar7);
  }
  uVar7 = FUN_00aee020(param_1,*(undefined4 *)(param_2 + 0x18),iVar1);
  bVar5 = *(char *)(in_ECX + 0xc) == '\0';
  if (!bVar5) {
    FUN_00b15e80("   + Motion name        = \'%s\'",uVar7);
    bVar5 = *(char *)(in_ECX + 0xc) == '\0';
    if (!bVar5) {
      FUN_00b15e80("   + Exporter version   = v%d.%d",uStack_10,uStack_f);
      bVar5 = *(char *)(in_ECX + 0xc) == '\0';
      if (!bVar5) {
        FUN_00b15e80("   + Motion FPS         = %d",local_14);
        bVar5 = *(char *)(in_ECX + 0xc) == '\0';
      }
    }
  }
  if (!bVar5) {
    FUN_00b15e80("   + MaxAcceptableError: %f",(double)uStack_18);
  }
  fVar2 = (float)local_14;
  if (local_14 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  *(float *)(unaff_EBP + 0x2c) = fVar2;
  *(float *)(unaff_EBP + 0x34) = uStack_18;
  __security_check_cookie(uStack_c ^ (uint)&stack0xffffffdc);
  return;
}

