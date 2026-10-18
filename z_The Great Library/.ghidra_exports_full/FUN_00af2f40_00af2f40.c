// FUN_00af2f40 @ 00af2f40 body=[[00af2f40, 00af30a3]]


undefined4 FUN_00af2f40(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int in_ECX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 local_c;
  undefined4 local_8 [2];
  
  iVar7 = param_2[7];
  iVar2 = param_2[3];
  uVar5 = *param_2;
  (**(code **)(*param_1 + 8))(local_8,8);
  local_c = uVar5;
  if (iVar7 == 1) {
    unaff_EBX = CONCAT13((char)unaff_EBX,
                         CONCAT12((char)((uint)unaff_EBX >> 8),
                                  CONCAT11((char)((uint)unaff_EBX >> 0x10),
                                           (char)((uint)unaff_EBX >> 0x18))));
    local_c._0_1_ = (undefined1)uVar5;
    uVar3 = (undefined1)local_c;
    local_c._3_1_ = (undefined1)((uint)uVar5 >> 0x18);
    local_c._2_1_ = (undefined1)((uint)uVar5 >> 0x10);
    local_c._1_1_ = (undefined1)((uint)uVar5 >> 8);
    uVar4 = local_c._1_1_;
    local_c._0_2_ = CONCAT11(local_c._2_1_,local_c._3_1_);
    local_c = CONCAT13(uVar3,CONCAT12(uVar4,(undefined2)local_c));
  }
  if ((*(char *)(in_ECX + 0xc) != '\0') &&
     (FUN_00b15e80("- Mesh LOD Level %d",unaff_EBX), *(char *)(in_ECX + 0xc) != '\0')) {
    FUN_00b15e80("   + SizeInBytes: %d",local_c);
  }
  uVar5 = (*(code *)PTR_FUN_00f01b08)(local_c,600,4,0,0,0);
  (**(code **)(*param_1 + 8))(uVar5,local_c);
  if (iVar2 != 0) {
    iVar7 = *(int *)(iVar2 + 0x34);
    uVar6 = iVar7 + 1;
    *(uint *)(iVar2 + 0x34) = uVar6;
    if (*(uint *)(iVar2 + 0x38) < uVar6) {
      FUN_00aeb6c0(iVar7 + 2);
    }
    puVar1 = (undefined4 *)(*(int *)(iVar2 + 0x30) + -4 + *(int *)(iVar2 + 0x34) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 1;
    }
  }
  iVar7 = FUN_00adc3e0(uVar5,unaff_EBP,iVar2);
  if (iVar2 != 0) {
    local_8[0] = 1;
    FUN_00b09030(local_8);
  }
  if (iVar7 == 0) {
    FUN_00b15d30("LOD level loading failed!");
  }
  else {
    FUN_00ad7e90(iVar7,1);
  }
  (*(code *)PTR__free_00f01b10)(uVar5);
  return 1;
}

