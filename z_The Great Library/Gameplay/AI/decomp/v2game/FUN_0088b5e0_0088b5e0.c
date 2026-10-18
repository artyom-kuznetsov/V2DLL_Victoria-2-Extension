// FUN_0088b5e0 @ 0088b5e0 body=[[0088b5e0, 0088b5fb] [0088b607, 0088b77c] [0088b780, 0088b830]]


void FUN_0088b5e0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int unaff_ESI;
  int unaff_EDI;
  undefined **local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(int *)(unaff_EDI + 0x3c) == 0) {
    *(undefined4 *)(unaff_EDI + 0x3c) = 0;
    *(undefined4 *)(unaff_EDI + 0x40) = 0;
    *(undefined4 *)(unaff_EDI + 0x44) = 0;
    if (*(int *)(unaff_ESI + 0xc) == 0) {
      if (*(int *)(unaff_ESI + 0x18) != 0) {
        iVar1 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(unaff_ESI + 0x18) * 4) +
                        0x188);
        puVar7 = *(undefined4 **)(iVar1 + 0x48);
        while ((*(undefined4 **)(iVar1 + 0x48) <= puVar7 &&
               (puVar7 < *(undefined4 **)(iVar1 + 0x4c)))) {
          uVar2 = *puVar7;
          puVar7 = puVar7 + 1;
          FUN_008a88d0();
          local_48 = 0x2d2d2d;
          local_44 = 0;
          local_40 = uVar2;
          cVar5 = (**(code **)(*(int *)(unaff_EDI + 0x20) + 0x18))(&local_50);
          if (cVar5 == '\x01') {
            iVar3 = *(int *)(unaff_EDI + 0x40);
            puVar6 = (undefined4 *)FUN_00aae9af(0x10);
            if (puVar6 == (undefined4 *)0x0) {
              puVar6 = (undefined4 *)0x0;
            }
            else {
              *puVar6 = uVar2;
              puVar6[1] = iVar3;
              puVar6[2] = 0;
              *(undefined1 *)(puVar6 + 3) = 0;
            }
            iVar4 = *(int *)(unaff_EDI + 0x44);
            *(undefined4 **)(unaff_EDI + 0x40) = puVar6;
            *(int *)(unaff_EDI + 0x44) = iVar4 + 1;
            if (iVar4 == 0) {
              *(undefined4 **)(unaff_EDI + 0x3c) = puVar6;
            }
            else {
              *(undefined4 **)(iVar3 + 8) = puVar6;
            }
          }
        }
      }
    }
    else {
      iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 0xc) * 4);
      puVar7 = *(undefined4 **)(iVar1 + 0x9d8);
      while ((*(undefined4 **)(iVar1 + 0x9d8) <= puVar7 &&
             (puVar7 < *(undefined4 **)(iVar1 + 0x9dc)))) {
        uVar2 = *puVar7;
        local_3c = *(undefined4 *)(unaff_ESI + 0x14);
        local_34 = *(undefined1 *)(unaff_ESI + 0x1c);
        puVar7 = puVar7 + 1;
        local_38 = *(undefined4 *)(unaff_ESI + 0x18);
        local_30 = *(undefined4 *)(unaff_ESI + 0x20);
        local_33 = *(undefined1 *)(unaff_ESI + 0x1d);
        local_24 = *(undefined4 *)(unaff_ESI + 0x2c);
        local_2c = *(undefined4 *)(unaff_ESI + 0x24);
        local_28 = *(undefined4 *)(unaff_ESI + 0x28);
        local_18 = *(undefined4 *)(unaff_ESI + 0x38);
        local_20 = *(undefined4 *)(unaff_ESI + 0x30);
        local_1c = *(undefined4 *)(unaff_ESI + 0x34);
        local_14 = *(undefined4 *)(unaff_ESI + 0x3c);
        local_48 = 0x2d2d2d;
        local_44 = 0;
        local_4c = 0x18d;
        local_50 = CEventScope::vftable;
        local_10 = 1;
        local_40 = uVar2;
        cVar5 = (**(code **)(*(int *)(unaff_EDI + 0x20) + 0x18))(&local_50);
        if (cVar5 == '\x01') {
          iVar3 = *(int *)(unaff_EDI + 0x40);
          puVar6 = (undefined4 *)FUN_00aae9af(0x10);
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            *puVar6 = uVar2;
            puVar6[1] = iVar3;
            puVar6[2] = 0;
            *(undefined1 *)(puVar6 + 3) = 0;
          }
          iVar4 = *(int *)(unaff_EDI + 0x44);
          *(undefined4 **)(unaff_EDI + 0x40) = puVar6;
          *(int *)(unaff_EDI + 0x44) = iVar4 + 1;
          if (iVar4 == 0) {
            *(undefined4 **)(unaff_EDI + 0x3c) = puVar6;
          }
          else {
            *(undefined4 **)(iVar3 + 8) = puVar6;
          }
        }
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(int *)(unaff_EDI + 0x3c));
}

