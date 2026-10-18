// FUN_00aeede0 @ 00aeede0 body=[[00aeede0, 00aeef2a]]


undefined4 FUN_00aeede0(int *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int unaff_EBX;
  int unaff_EBP;
  uint uVar7;
  undefined1 *puVar8;
  uint unaff_retaddr;
  
  iVar2 = param_2[7];
  iVar3 = *param_2;
  (**(code **)(*param_1 + 8))(&param_2,4);
  if (iVar2 == 1) {
    unaff_retaddr =
         CONCAT13((char)unaff_retaddr,
                  CONCAT12((char)(unaff_retaddr >> 8),
                           CONCAT11((char)(unaff_retaddr >> 0x10),(char)(unaff_retaddr >> 0x18))));
  }
  puVar4 = (undefined1 *)FUN_00ad4780();
  puVar8 = puVar4;
  for (uVar7 = unaff_retaddr; uVar7 != 0; uVar7 = uVar7 - 1) {
    (**(code **)(*param_1 + 8))(puVar8,2);
    if (iVar2 == 1) {
      uVar1 = *puVar8;
      *puVar8 = puVar8[1];
      puVar8[1] = uVar1;
    }
    puVar8 = puVar8 + 2;
    iVar3 = unaff_EBP;
  }
  if (*(char *)(unaff_EBX + 0xc) != '\0') {
    FUN_00b15e80("- Node Motion Sources (%i):",unaff_retaddr);
    uVar7 = 0;
    if (unaff_retaddr != 0) {
      do {
        if (*(ushort *)(puVar4 + uVar7 * 2) != 0xffff) {
          puVar5 = (undefined4 *)
                   FUN_00b15770(*(undefined4 *)
                                 (*(int *)(*(int *)(iVar3 + 0x80) +
                                          (uint)*(ushort *)(puVar4 + uVar7 * 2) * 4) + 0x10));
          puVar8 = (undefined1 *)*puVar5;
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = &DAT_00ded94d;
          }
          puVar5 = (undefined4 *)
                   FUN_00b15770(*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x80) + uVar7 * 4) + 0x10)
                               );
          puVar6 = (undefined1 *)*puVar5;
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &DAT_00ded94d;
          }
          FUN_00b15e80("   + \'%s\' (%i) -> \'%s\' (%i)",puVar6,uVar7,puVar8,
                       *(undefined2 *)(puVar4 + uVar7 * 2));
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < unaff_retaddr);
    }
  }
  return 1;
}

