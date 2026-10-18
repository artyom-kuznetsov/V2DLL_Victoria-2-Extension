// FUN_0088b2b0 @ 0088b2b0 body=[[0088b2b0, 0088b2cc] [0088b2d6, 0088b3c7]]


void FUN_0088b2b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int unaff_EDI;
  int local_5c;
  
  piVar3 = DAT_012588e8;
  if (*(int *)(unaff_EDI + 0x3c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_EDI + 0x3c));
  }
  *(undefined4 *)(unaff_EDI + 0x3c) = 0;
  *(undefined4 *)(unaff_EDI + 0x40) = 0;
  *(undefined4 *)(unaff_EDI + 0x44) = 0;
  local_5c = 0;
  iVar5 = (**(code **)(*piVar3 + 0x1c))();
  if (0 < iVar5) {
    do {
      iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_5c * 4);
      uVar1 = *(undefined4 *)(iVar5 + 0x1c);
      iVar5 = *(int *)(iVar5 + 0x20);
      iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + iVar5 * 4);
      if (0 < (int)(*(int *)(iVar2 + 0x9dc) - *(int *)(iVar2 + 0x9d8) & 0xfffffffcU)) {
        uVar6 = FUN_008a88d0();
        cVar4 = (**(code **)(*(int *)(unaff_EDI + 0x20) + 0x18))(uVar6);
        if ((cVar4 == '\x01') && (iVar5 != *(int *)(param_1 + 0xc))) {
          iVar2 = *(int *)(unaff_EDI + 0x40);
          puVar7 = (undefined4 *)FUN_00aae9af(0x14);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = uVar1;
            puVar7[1] = iVar5;
            puVar7[2] = iVar2;
            puVar7[3] = 0;
            *(undefined1 *)(puVar7 + 4) = 0;
          }
          iVar5 = *(int *)(unaff_EDI + 0x44);
          *(undefined4 **)(unaff_EDI + 0x40) = puVar7;
          *(int *)(unaff_EDI + 0x44) = iVar5 + 1;
          if (iVar5 == 0) {
            *(undefined4 **)(unaff_EDI + 0x3c) = puVar7;
          }
          else {
            *(undefined4 **)(iVar2 + 0xc) = puVar7;
          }
        }
      }
      local_5c = local_5c + 1;
      iVar5 = (**(code **)(*DAT_012588e8 + 0x1c))();
    } while (local_5c < iVar5);
  }
  return;
}

