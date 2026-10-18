// FUN_00513930 @ 00513930 body=[[00513930, 00513a24]]


void FUN_00513930(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_c;
  
  FUN_00579e80(*(undefined4 *)(unaff_EDI + 0x1c),*(undefined4 *)(unaff_EDI + 0x20));
  iVar1 = *(int *)(unaff_EDI + 0x4c4);
  iVar3 = 0;
  if (iVar1 != 0) {
    do {
      iVar4 = iVar1;
      if (*(int *)(iVar1 + 0x24) != param_1) {
        *(undefined1 *)(iVar1 + 0x1c) = 0;
        iVar4 = iVar3;
      }
      iVar1 = *(int *)(iVar1 + 0x2c);
      iVar3 = iVar4;
    } while (iVar1 != 0);
    if (iVar4 != 0) {
      *(undefined1 *)(iVar4 + 0x1c) = 1;
      return;
    }
  }
  iVar1 = *(int *)(unaff_EDI + 0x4c8);
  puVar2 = (undefined4 *)FUN_00aae9af(0x34);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0x18d;
    *puVar2 = CTechnologyProject::vftable;
    puVar2[2] = local_28;
    puVar2[3] = local_24;
    puVar2[4] = local_20;
    puVar2[6] = local_18;
    puVar2[5] = local_1c;
    *(undefined1 *)(puVar2 + 7) = 1;
    puVar2[8] = 43800000;
    puVar2[8] = DAT_01259abc;
    puVar2[9] = local_c;
    puVar2[10] = iVar1;
    puVar2[0xb] = 0;
    *(undefined1 *)(puVar2 + 0xc) = 0;
  }
  iVar3 = *(int *)(unaff_EDI + 0x4cc);
  *(undefined4 **)(unaff_EDI + 0x4c8) = puVar2;
  *(int *)(unaff_EDI + 0x4cc) = iVar3 + 1;
  if (iVar3 == 0) {
    *(undefined4 **)(unaff_EDI + 0x4c4) = puVar2;
    return;
  }
  *(undefined4 **)(iVar1 + 0x2c) = puVar2;
  return;
}

