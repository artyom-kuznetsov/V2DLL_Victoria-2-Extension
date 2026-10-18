// FUN_0088d1a0 @ 0088d1a0 body=[[0088d1a0, 0088d1bc] [0088d1c6, 0088d23e] [0088d240, 0088d30c]]


void FUN_0088d1a0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  int in_EAX;
  undefined4 *puVar6;
  int unaff_ESI;
  int local_60;
  int local_5c;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  if (*(int *)(unaff_ESI + 0x3c) == 0) {
    *(undefined4 *)(unaff_ESI + 0x3c) = 0;
    *(undefined4 *)(unaff_ESI + 0x40) = 0;
    *(undefined4 *)(unaff_ESI + 0x44) = 0;
    FUN_008a88d0();
    local_44 = 0;
    local_48 = 0x2d2d2d;
    iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(in_EAX + 0x10) * 4);
    iVar2 = *(int *)(iVar1 + 0x5c);
    local_5c = 0;
    if (0 < (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24) {
      local_60 = 0;
      do {
        iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                        *(int *)(local_60 + 4 + *(int *)(iVar2 + 200)) * 4);
        if ((*(char *)(*(int *)(iVar2 + 0x5c) + 0x2a) != '\0') && (*(int *)(iVar2 + 300) == 0)) {
          local_40 = *(undefined4 *)(iVar2 + 0x58);
          cVar5 = (**(code **)(*(int *)(unaff_ESI + 0x20) + 0x18))(local_50);
          if (cVar5 != '\0') {
            uVar3 = *(undefined4 *)(iVar2 + 0x58);
            iVar2 = *(int *)(unaff_ESI + 0x40);
            puVar6 = (undefined4 *)FUN_00aae9af(0x10);
            if (puVar6 == (undefined4 *)0x0) {
              puVar6 = (undefined4 *)0x0;
            }
            else {
              *puVar6 = uVar3;
              puVar6[1] = iVar2;
              puVar6[2] = 0;
              *(undefined1 *)(puVar6 + 3) = 0;
            }
            iVar4 = *(int *)(unaff_ESI + 0x44);
            *(undefined4 **)(unaff_ESI + 0x40) = puVar6;
            *(int *)(unaff_ESI + 0x44) = iVar4 + 1;
            if (iVar4 == 0) {
              *(undefined4 **)(unaff_ESI + 0x3c) = puVar6;
            }
            else {
              *(undefined4 **)(iVar2 + 8) = puVar6;
            }
          }
        }
        iVar2 = *(int *)(iVar1 + 0x5c);
        local_60 = local_60 + 0x24;
        local_5c = local_5c + 1;
      } while (local_5c < (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(int *)(unaff_ESI + 0x3c));
}

