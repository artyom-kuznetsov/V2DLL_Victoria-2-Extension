// FUN_00aee630 @ 00aee630 body=[[00aee630, 00aee830]]


void FUN_00aee630(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int in_ECX;
  uint unaff_EBX;
  int unaff_EBP;
  undefined4 local_18;
  undefined1 local_14;
  undefined1 uStack_13;
  undefined4 uStack_10;
  uint uStack_c;
  uint local_4;
  
  local_4 = DAT_00ef259c ^ (uint)&local_18;
  local_18 = *param_2;
  iVar1 = param_2[7];
  (**(code **)(*param_1 + 8))(&local_14,0x10);
  if (iVar1 == 1) {
    unaff_EBX = CONCAT13((char)unaff_EBX,
                         CONCAT12((char)(unaff_EBX >> 8),
                                  CONCAT11((char)(unaff_EBX >> 0x10),(char)(unaff_EBX >> 0x18))));
    uVar2 = (undefined1)local_18;
    uVar3 = local_18._1_1_;
    local_18._0_2_ = CONCAT11(local_18._2_1_,local_18._3_1_);
    local_18 = CONCAT13(uVar2,CONCAT12(uVar3,(undefined2)local_18));
    uVar2 = (undefined1)uStack_10;
    uVar3 = uStack_10._1_1_;
    uStack_10._0_2_ = CONCAT11(uStack_10._2_1_,uStack_10._3_1_);
    uStack_10 = (float)CONCAT13(uVar2,CONCAT12(uVar3,(undefined2)uStack_10));
  }
  if (*(char *)(in_ECX + 0xc) != '\0') {
    FUN_00b15e80();
  }
  uVar4 = FUN_00aee020(param_1,param_2[6],iVar1);
  if (*(char *)(in_ECX + 0xc) != '\0') {
    FUN_00b15e80("   + Source application   = \'%s\'",uVar4);
  }
  uVar4 = FUN_00aee020(param_1,param_2[6],iVar1);
  if (*(char *)(in_ECX + 0xc) != '\0') {
    FUN_00b15e80("   + Original filename    = \'%s\'",uVar4);
  }
  uVar4 = FUN_00aee020(param_1,param_2[6],iVar1);
  if (*(char *)(in_ECX + 0xc) != '\0') {
    FUN_00b15e80("   + Exporter comp date   = \'%s\'",uVar4);
  }
  uVar4 = FUN_00aee020(param_1,param_2[6],iVar1);
  FUN_00ad4720();
  if ((((*(char *)(in_ECX + 0xc) != '\0') &&
       (FUN_00b15e80("   + Actor name           = \'%s\'",uVar4), *(char *)(in_ECX + 0xc) != '\0'))
      && (FUN_00b15e80("   + Exporter version     = v%d.%d",local_14,uStack_13),
         *(char *)(in_ECX + 0xc) != '\0')) &&
     (FUN_00b15e80("   + Repositioning node   = %d",local_18), *(char *)(in_ECX + 0xc) != '\0')) {
    FUN_00b15e80("   + Retarget root offset = %f",(double)uStack_10);
  }
  *(uint *)(unaff_EBP + 0x10c) = unaff_EBX;
  *(undefined4 *)(unaff_EBP + 0xf8) = local_18;
  *(float *)(unaff_EBP + 0x108) = uStack_10;
  if (*(char *)(in_ECX + 0xc) != '\0') {
    FUN_00b15e80("   + Repositioning mask = (pos=%d, rot=%d, scale=%d)",unaff_EBX & 1,
                 unaff_EBX >> 1 & 1,unaff_EBX >> 2 & 1);
  }
  __security_check_cookie(uStack_c ^ (uint)&stack0xffffffe0);
  return;
}

