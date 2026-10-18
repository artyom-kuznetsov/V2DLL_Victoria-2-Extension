// FUN_00aee470 @ 00aee470 body=[[00aee470, 00aee624]]


void FUN_00aee470(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int in_ECX;
  uint unaff_EBX;
  int unaff_EBP;
  undefined4 local_14;
  undefined1 local_10;
  undefined1 uStack_f;
  uint uStack_c;
  uint local_4;
  
  local_4 = DAT_00ef259c ^ (uint)&local_14;
  local_14 = *param_2;
  iVar1 = param_2[7];
  (**(code **)(*param_1 + 8))(&local_10,0xc);
  if (iVar1 == 1) {
    unaff_EBX = CONCAT13((char)unaff_EBX,
                         CONCAT12((char)(unaff_EBX >> 8),
                                  CONCAT11((char)(unaff_EBX >> 0x10),(char)(unaff_EBX >> 0x18))));
    uVar2 = (undefined1)local_14;
    uVar3 = local_14._1_1_;
    local_14._0_2_ = CONCAT11(local_14._2_1_,local_14._3_1_);
    local_14 = CONCAT13(uVar2,CONCAT12(uVar3,(undefined2)local_14));
  }
  if (*(char *)(in_ECX + 0xc) != '\0') {
    FUN_00b15e80("- File Information");
  }
  uVar4 = FUN_00aee020(param_1,param_2[6],iVar1);
  if (*(char *)(in_ECX + 0xc) != '\0') {
    FUN_00b15e80("   + Source application = \'%s\'",uVar4);
  }
  uVar4 = FUN_00aee020(param_1,param_2[6],iVar1);
  if (*(char *)(in_ECX + 0xc) != '\0') {
    FUN_00b15e80("   + Original filename  = \'%s\'",uVar4);
  }
  uVar4 = FUN_00aee020(param_1,param_2[6],iVar1);
  if (*(char *)(in_ECX + 0xc) != '\0') {
    FUN_00b15e80("   + Exporter comp date = \'%s\'",uVar4);
  }
  uVar4 = FUN_00aee020(param_1,param_2[6],iVar1);
  FUN_00ad4720(uVar4);
  if (((*(char *)(in_ECX + 0xc) != '\0') &&
      (FUN_00b15e80("   + Actor name         = \'%s\'",uVar4), *(char *)(in_ECX + 0xc) != '\0')) &&
     (FUN_00b15e80("   + Exporter version   = v%d.%d",local_10,uStack_f),
     *(char *)(in_ECX + 0xc) != '\0')) {
    FUN_00b15e80("   + Repositioning node = %d",local_14);
  }
  *(uint *)(unaff_EBP + 0x10c) = unaff_EBX;
  *(undefined4 *)(unaff_EBP + 0xf8) = local_14;
  if (*(char *)(in_ECX + 0xc) != '\0') {
    FUN_00b15e80("   + Repositioning mask = (pos=%d, rot=%d, scale=%d)",unaff_EBX & 1,
                 unaff_EBX >> 1 & 1,unaff_EBX >> 2 & 1);
  }
  __security_check_cookie(uStack_c ^ (uint)&stack0xffffffe4);
  return;
}

