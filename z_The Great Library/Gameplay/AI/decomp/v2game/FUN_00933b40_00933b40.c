// FUN_00933b40 @ 00933b40 body=[[00933b40, 00933c33] [00933c3c, 00933cd8] [00933ce1, 00933d5b] [00933d5f, 00933dcb] [00933dcf, 00933e3b] [00933e3f, 00933ec8] [00933ecc, 00933fc2]]


void FUN_00933b40(undefined4 param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int in_ECX;
  undefined4 *puVar7;
  int iVar8;
  int iStack_64;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined4 uStack_44;
  uint uStack_40;
  uint auStack_3c [4];
  undefined4 uStack_2c;
  uint uStack_28;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b58660;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  FUN_009a0940(param_1);
  (**(code **)(*(int *)(in_ECX + 0x4c) + 4))(param_1);
  puVar7 = *(undefined4 **)(in_ECX + 0x2c);
  while ((*(undefined4 **)(in_ECX + 0x2c) <= puVar7 && (puVar7 < *(undefined4 **)(in_ECX + 0x30))))
  {
    uStack_5c = *puVar7;
    pcVar6 = (char *)&uStack_5c;
    uStack_58 = puVar7[1];
    puVar7 = puVar7 + 2;
    uStack_40 = 0xf;
    uStack_44 = 0;
    uStack_54 = uStack_54 & 0xffffff00;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(&uStack_5c,(int)pcVar6 - ((int)&uStack_5c + 1));
    puStack_10 = (undefined1 *)0x0;
    FUN_009a0940(param_1);
    FUN_0099f770(param_1,0);
    puStack_10 = (undefined1 *)0xffffffff;
    if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_54);
    }
  }
  puVar7 = *(undefined4 **)(in_ECX + 0x3c);
  while ((*(undefined4 **)(in_ECX + 0x3c) <= puVar7 && (puVar7 < *(undefined4 **)(in_ECX + 0x40))))
  {
    uStack_5c = *puVar7;
    uStack_58 = puVar7[1];
    pcVar6 = (char *)&uStack_5c;
    puVar7 = puVar7 + 2;
    uStack_40 = 0xf;
    uStack_44 = 0;
    uStack_54 = (uint)uStack_54._1_3_ << 8;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(&uStack_5c,(int)pcVar6 - ((int)&uStack_5c + 1));
    puStack_10 = (undefined1 *)0x1;
    FUN_009a0940(param_1);
    FUN_0099f770(param_1,0);
    puStack_10 = (undefined1 *)0xffffffff;
    in_ECX = iStack_64;
    if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_54);
    }
  }
  if (*(int *)(in_ECX + 0x88) != 0) {
    uStack_40 = 0xf;
    uStack_44 = 0;
    uStack_54 = (uint)uStack_54._1_3_ << 8;
    pcVar6 = (char *)(in_ECX + 0x84);
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(in_ECX + 0x84),(int)pcVar6 - (in_ECX + 0x85));
    puStack_10 = (undefined1 *)0x2;
    FUN_009a0940(param_1);
    FUN_0099f770(param_1,0);
    puStack_10 = (undefined1 *)0xffffffff;
    if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_54);
    }
  }
  uStack_40 = 0xf;
  uStack_44 = 0;
  uStack_54 = uStack_54 & 0xffffff00;
  pcVar6 = (char *)(in_ECX + 0x8c);
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00409350((char *)(in_ECX + 0x8c),(int)pcVar6 - (in_ECX + 0x8d));
  puStack_10 = (undefined1 *)0x3;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  puStack_10 = (undefined1 *)0xffffffff;
  if (uStack_40 < 0x10) {
    uStack_40 = 0xf;
    uStack_44 = 0;
    uStack_54 = uStack_54 & 0xffffff00;
    pcVar6 = (char *)(in_ECX + 0x94);
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(in_ECX + 0x94),(int)pcVar6 - (in_ECX + 0x95));
    puStack_10 = (undefined1 *)0x4;
    FUN_009a0940(param_1);
    FUN_0099f770(param_1,0);
    puStack_10 = (undefined1 *)0xffffffff;
    if (uStack_40 < 0x10) {
      FUN_009a0940(param_1);
      (**(code **)(*(int *)(in_ECX + 0x9c) + 4))(param_1);
      if (*(char *)(in_ECX + 8) != '\0') {
        FUN_009a0940(param_1);
        FUN_004013e0(param_1);
        FUN_004013e0(param_1);
      }
      FUN_0043acd0(in_ECX + 0xc,auStack_3c);
      pvStack_14 = (void *)0x5;
      FUN_009a0940(param_1);
      FUN_0099f770(param_1,0);
      pvStack_14 = (void *)0xffffffff;
      if (uStack_28 < 0x10) {
        uStack_28 = 0xf;
        uStack_2c = 0;
        auStack_3c[0] = auStack_3c[0] & 0xffffff00;
        if (*(char *)(in_ECX + 0xfc) != '\0') {
          FUN_0099f470(*(char *)(in_ECX + 0xfc));
        }
        if (*(char *)(in_ECX + 0xfd) != '\0') {
          FUN_0099f470(*(char *)(in_ECX + 0xfd));
        }
        puVar7 = *(undefined4 **)(in_ECX + 0xe0);
        puVar2 = (undefined4 *)*puVar7;
        while (puVar2 != puVar7) {
          iStack_64 = (int)(puVar2[5] - puVar2[4]) >> 6;
          if (0 < iStack_64) {
            iVar8 = 0;
            do {
              iVar3 = puVar2[4];
              FUN_009a0940(param_1);
              (**(code **)(*(int *)(iVar3 + iVar8) + 4))(param_1);
              iVar8 = iVar8 + 0x40;
              iStack_64 = iStack_64 + -1;
            } while (iStack_64 != 0);
          }
          if (*(char *)((int)puVar2 + 0x21) == '\0') {
            puVar4 = (undefined4 *)puVar2[2];
            if (*(char *)((int)puVar4 + 0x21) == '\0') {
              cVar1 = *(char *)((int)*puVar4 + 0x21);
              puVar2 = puVar4;
              puVar4 = (undefined4 *)*puVar4;
              while (cVar1 == '\0') {
                cVar1 = *(char *)((int)*puVar4 + 0x21);
                puVar2 = puVar4;
                puVar4 = (undefined4 *)*puVar4;
              }
            }
            else {
              cVar1 = *(char *)((int)puVar2[1] + 0x21);
              puVar5 = (undefined4 *)puVar2[1];
              puVar4 = puVar2;
              while ((puVar2 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar2[2]))) {
                cVar1 = *(char *)((int)puVar2[1] + 0x21);
                puVar5 = (undefined4 *)puVar2[1];
                puVar4 = puVar2;
              }
            }
          }
        }
        ExceptionList = pvStack_1c;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_3c[0]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_54);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uStack_54);
}

