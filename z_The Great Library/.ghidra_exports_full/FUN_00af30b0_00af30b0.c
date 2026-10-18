// FUN_00af30b0 @ 00af30b0 body=[[00af30b0, 00af3325]]


undefined4 FUN_00af30b0(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int iVar8;
  void *in_ECX;
  int unaff_EBX;
  undefined4 unaff_EBP;
  int *piVar9;
  uint unaff_EDI;
  int *unaff_retaddr;
  undefined4 uStack_20;
  int iStack_1c;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar9 = param_2;
  piVar4 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b3865d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = param_2[7];
  iVar3 = *param_2;
  (**(code **)(*param_1 + 8))(&param_1,2,DAT_00ef259c ^ (uint)&stack0xffffffd0);
  if (iVar2 == 1) {
    uStack_4._0_2_ = CONCAT11((undefined1)uStack_4,uStack_4._1_1_);
  }
  if (*(char *)(iStack_1c + 0xc) != '\0') {
    FUN_00b15e80("- Node groups: %d",uStack_4 & 0xffff);
  }
  uStack_18 = 0;
  if ((short)uStack_4 != 0) {
    do {
      (**(code **)(*piVar4 + 8))(&stack0xffffffd8,4);
      if (iVar2 == 1) {
        unaff_EDI = CONCAT22((short)(unaff_EDI >> 0x10),
                             CONCAT11((char)unaff_EDI,(char)(unaff_EDI >> 8)));
      }
      uVar6 = FUN_00aee020(piVar4,piVar9[6],iVar2);
      if (*(char *)(unaff_EBX + 0xc) != '\0') {
        FUN_00b15e80("   + Group \'%s\'",uVar6);
        FUN_00b15e80("     - Num nodes: %d",unaff_EDI & 0xffff);
        puVar7 = &DAT_00e17a94;
        if ((char)(unaff_EDI >> 0x10) == '\0') {
          puVar7 = &DAT_00e17a90;
        }
        FUN_00b15e80("     - Disabled on default: %s",puVar7);
      }
      iVar8 = (*(code *)PTR_FUN_00f01b08)(0x18,0x194,4,0,0,0xffffffff);
      local_c = (void *)0x0;
      if (iVar8 == 0) {
        uStack_20 = 0;
      }
      else {
        uStack_20 = FUN_00ae2ef0(uVar6,unaff_EBP,(char)((uint)unaff_EBP >> 0x10) == '\0');
      }
      iVar8 = 0;
      local_c = (void *)0xffffffff;
      if ((ushort)unaff_EBP != 0) {
        do {
          (**(code **)(*piVar4 + 8))(&stack0xffffffdc,2);
          if (iVar2 == 1) {
            unaff_EBX = CONCAT22((short)((uint)unaff_EBX >> 0x10),
                                 CONCAT11((char)unaff_EBX,(char)((uint)unaff_EBX >> 8)));
          }
          FUN_00ae2bc0(iVar8,unaff_EBX);
          iVar8 = iVar8 + 1;
        } while ((ushort)iVar8 < (ushort)unaff_EBP);
      }
      uVar5 = *(short *)(iVar3 + 0xec) + 1;
      *(ushort *)(iVar3 + 0xec) = uVar5;
      if (uVar5 == 0) {
        *(undefined2 *)(iVar3 + 0xec) = 0;
        if (*(int *)(iVar3 + 0xe8) != 0) {
          (*(code *)PTR__free_00f01b10)(*(int *)(iVar3 + 0xe8));
        }
        *(undefined4 *)(iVar3 + 0xe8) = 0;
      }
      else {
        if (*(int *)(iVar3 + 0xe8) == 0) {
          uVar6 = (*(code *)PTR_FUN_00f01b08)((uint)uVar5 * 4,0x10,4,2,0,0xffffffff);
        }
        else {
          uVar6 = (*(code *)PTR_FUN_00f01b0c)(*(int *)(iVar3 + 0xe8),(uint)uVar5 * 4);
        }
        *(undefined4 *)(iVar3 + 0xe8) = uVar6;
      }
      puVar1 = (undefined4 *)
               (*(int *)(iVar3 + 0xe8) + (uint)(ushort)(*(short *)(iVar3 + 0xec) - 1) * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = uStack_20;
      }
      uStack_18 = uStack_18 + 1;
      piVar9 = unaff_retaddr;
    } while (uStack_18 < (uStack_4 & 0xffff));
  }
  ExceptionList = in_ECX;
  return 1;
}

