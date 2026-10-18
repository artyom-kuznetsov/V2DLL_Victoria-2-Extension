// FUN_00aeef30 @ 00aeef30 body=[[00aeef30, 00aeef8c] [00aeef90, 00aeeff6] [00aef000, 00aef050]]


undefined4 FUN_00aeef30(int *param_1,int *param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  int unaff_EBP;
  uint uVar12;
  ushort unaff_retaddr;
  undefined4 uStack_4;
  
  piVar7 = param_1;
  iVar2 = *param_2;
  iVar3 = param_2[7];
  (**(code **)(*param_1 + 8))(&param_1,4);
  iVar6 = uStack_4;
  if (iVar3 == 1) {
    uVar8 = (undefined1)uStack_4;
    uVar9 = uStack_4._1_1_;
    uStack_4._0_2_ = CONCAT11(uStack_4._2_1_,uStack_4._3_1_);
    uStack_4 = CONCAT13(uVar8,CONCAT12(uVar9,(undefined2)uStack_4));
    iVar6 = uStack_4;
  }
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    (**(code **)(*piVar7 + 8))(&stack0x00000000,2);
    if (iVar3 == 1) {
      unaff_retaddr = CONCAT11((char)unaff_retaddr,(char)(unaff_retaddr >> 8));
    }
    pbVar1 = (byte *)(*(int *)(*(int *)(iVar2 + 0x80) + (uint)unaff_retaddr * 4) + 0xa4);
    *pbVar1 = *pbVar1 | 2;
  }
  if (*(char *)(unaff_EBP + 0xc) != '\0') {
    FUN_00b15e80("- Attachment Nodes (%i):",uStack_4);
    uVar4 = *(uint *)(iVar2 + 0x84);
    uVar12 = 0;
    if (uVar4 != 0) {
      do {
        puVar10 = *(undefined4 **)(*(int *)(iVar2 + 0x80) + uVar12 * 4);
        if ((*(byte *)(puVar10 + 0x29) & 2) != 0) {
          uVar5 = *puVar10;
          puVar10 = (undefined4 *)FUN_00b15770(puVar10[4]);
          puVar11 = (undefined1 *)*puVar10;
          if (puVar11 == (undefined1 *)0x0) {
            puVar11 = &DAT_00ded94d;
          }
          FUN_00b15e80("   + \'%s\' (%i)",puVar11,uVar5);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar4);
    }
  }
  return 1;
}

