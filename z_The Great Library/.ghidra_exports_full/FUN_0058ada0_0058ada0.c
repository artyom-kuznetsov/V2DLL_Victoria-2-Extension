// FUN_0058ada0 @ 0058ada0 body=[[0058ada0, 0058ae86] [0058ae90, 0058affb] [0058afff, 0058b023] [0058b027, 0058b043] [0058b047, 0058b063] [0058b067, 0058b07b]]


void FUN_0058ada0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  int in_ECX;
  char *pcVar9;
  uint auStack_a8 [4];
  undefined4 uStack_98;
  uint uStack_94;
  uint auStack_8c [4];
  undefined4 uStack_7c;
  uint uStack_78;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint uStack_54;
  undefined4 uStack_44;
  uint uStack_40;
  char acStack_38 [36];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b4cbf1;
  iVar2 = *(int *)(DAT_012587e4 + 4);
  iVar3 = *(int *)(*(int *)(iVar2 + *(int *)(in_ECX + 0x40) * 4) + 0x4cc);
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  do {
    if (iVar3 < 1) {
      FUN_00513930(*(undefined4 *)(in_ECX + 0x44));
      if (*(int *)(in_ECX + 0x40) == *(int *)(DAT_012588e8 + 0xb60)) {
        (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xe0))(5);
      }
      if (*(char *)(DAT_012588e8 + 0xd11) != '\0') {
        local_5c = 0xf;
        local_60 = 0;
        local_70[0] = local_70[0] & 0xffffff00;
        FUN_00409350(&DAT_00ded94d,0);
        uStack_c = 0;
        uStack_94 = 0xf;
        uStack_98 = 0;
        auStack_a8[0] = auStack_a8[0] & 0xffffff00;
        FUN_00409350(&DAT_00ded94d,0);
        piVar6 = *(int **)(DAT_012588e8 + 0xb24);
        uStack_78 = 0xf;
        uStack_7c = 0;
        auStack_8c[0] = auStack_8c[0] & 0xffffff00;
        uStack_c._0_1_ = 2;
        pcVar7 = __itoa(*(int *)(*(int *)(in_ECX + 0x44) + 0x2e4),acStack_38,10);
        pcVar9 = pcVar7;
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar7,(int)pcVar9 - (int)(pcVar7 + 1));
        uStack_c._0_1_ = 3;
        uVar8 = FUN_00988fa0(auStack_8c);
        uStack_c = CONCAT31(uStack_c._1_3_,4);
        (**(code **)(*piVar6 + 0x120))(uVar8,auStack_a8,local_70,0);
        if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_54);
        }
        uStack_40 = 0xf;
        uStack_44 = 0;
        uStack_54 = uStack_54 & 0xffffff00;
        if (0xf < uStack_78) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_8c[0]);
        }
        uStack_78 = 0xf;
        uStack_7c = 0;
        auStack_8c[0] = auStack_8c[0] & 0xffffff00;
        if (0xf < uStack_94) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_a8[0]);
        }
        uStack_94 = 0xf;
        uStack_98 = 0;
        auStack_a8[0] = auStack_a8[0] & 0xffffff00;
        if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_70[0]);
        }
      }
      ExceptionList = pvStack_14;
      return;
    }
    iVar3 = *(int *)(*(int *)(*(int *)(iVar2 + *(int *)(in_ECX + 0x40) * 4) + 0x4c4) + 0x24);
    iVar2 = *(int *)(iVar2 + *(int *)(in_ECX + 0x40) * 4);
    FUN_0057a4c0(*(undefined4 *)(iVar2 + 0x1c),*(undefined4 *)(iVar2 + 0x20));
    for (iVar4 = *(int *)(iVar2 + 0x4c4); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x2c)) {
      if (*(int *)(iVar4 + 0x24) == iVar3) {
        if (iVar4 != 0) {
          if (*(char *)(iVar2 + 0x4d0) == '\0') {
            iVar3 = *(int *)(iVar4 + 0x28);
            iVar5 = *(int *)(iVar4 + 0x2c);
            if (iVar3 != 0) {
              *(int *)(iVar3 + 0x2c) = iVar5;
            }
            if (iVar5 != 0) {
              *(int *)(iVar5 + 0x28) = iVar3;
            }
            if (iVar4 == *(int *)(iVar2 + 0x4c4)) {
              *(int *)(iVar2 + 0x4c4) = iVar5;
            }
            if (iVar4 == *(int *)(iVar2 + 0x4c8)) {
              *(int *)(iVar2 + 0x4c8) = iVar3;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(iVar4);
          }
          *(undefined1 *)(iVar4 + 0x30) = 1;
        }
        break;
      }
    }
    iVar2 = *(int *)(DAT_012587e4 + 4);
    iVar3 = *(int *)(*(int *)(iVar2 + *(int *)(in_ECX + 0x40) * 4) + 0x4cc);
  } while( true );
}

