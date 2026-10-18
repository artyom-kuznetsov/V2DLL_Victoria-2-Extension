// FUN_00592dc0 @ 00592dc0 body=[[00592dc0, 00592e43] [00592e47, 00592ee1] [00592ee5, 00592f93] [00592f97, 00593046] [0059304a, 00593059]]


void FUN_00592dc0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  int in_ECX;
  undefined4 uVar7;
  char local_25c [256];
  undefined4 local_15c;
  char local_158 [256];
  undefined4 local_58;
  uint local_44;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_28;
  uint local_24;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5aaeb;
  local_10 = ExceptionList;
  local_24 = 0xf;
  local_28 = 0;
  local_38 = local_38 & 0xffffff00;
  pcVar4 = (char *)(in_ECX + 8);
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  local_18 = in_ECX;
  FUN_00409350((char *)(in_ECX + 8),(int)pcVar4 - (in_ECX + 9));
  local_8 = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_8 = 0xffffffff;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38);
  }
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  iVar5 = *(int *)(in_ECX + 0x2c);
  local_14 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x30) - iVar5 & 0xfffffffcU)) {
    do {
      iVar3 = local_14;
      if (0 < *(int *)(iVar5 + local_14 * 4)) {
        if (DAT_0125fdd8 == 0) {
          iVar5 = FUN_00aae9af(0x1c);
          local_8 = 1;
          if (iVar5 == 0) {
            param_1 = 0;
          }
          else {
            param_1 = FUN_008b0060();
            in_ECX = local_18;
          }
          local_8 = 2;
          local_3c = 0;
          if ((param_1 != DAT_0125fdd8) && (local_1c = DAT_0125fdd8, DAT_0125fdd8 != 0)) {
            FUN_005c1a70(DAT_0125fdd8);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_1c);
          }
          DAT_0125fdd8 = param_1;
          local_8 = 0xffffffff;
        }
        uVar7 = *(undefined4 *)(*(int *)(in_ECX + 0x2c) + iVar3 * 4);
        FUN_009a0940(uVar2);
        local_15c = 0xc;
        _sprintf(local_158,"%d",uVar7);
        FUN_0099ff90(uVar2);
        puVar6 = (undefined4 *)FUN_00990880();
        local_8 = 3;
        local_15c = 0x10;
        if (0xf < (uint)puVar6[5]) {
          puVar6 = (undefined4 *)*puVar6;
        }
        __snprintf(local_158,0xff,"%s",puVar6);
        FUN_0099ff90(uVar2);
        local_8 = 0xffffffff;
        in_ECX = local_18;
        if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_38);
        }
      }
      iVar5 = *(int *)(in_ECX + 0x2c);
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(in_ECX + 0x30) - iVar5 >> 2);
  }
  uVar7 = *(undefined4 *)(in_ECX + 0x3c);
  FUN_009a0940(uVar2);
  local_15c = 0xc;
  _sprintf(local_158,"%d",uVar7);
  FUN_0099ff90(uVar2);
  puVar6 = (undefined4 *)FUN_00990880();
  local_8 = 4;
  uVar7 = 0x10;
  if (0xf < (uint)puVar6[5]) {
    puVar6 = (undefined4 *)*puVar6;
  }
  __snprintf(local_25c,0xff,"%s",puVar6);
  FUN_0099ff90(uVar2);
  if (local_44 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_58,uVar7);
}

