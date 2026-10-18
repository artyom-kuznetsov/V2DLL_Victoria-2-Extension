// FUN_006c2710 @ 006c2710 body=[[006c2710, 006c2e09]]


void FUN_006c2710(void)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  int local_114;
  int local_10c;
  int local_108;
  int local_104;
  int local_fc;
  int local_f4;
  undefined1 local_d8 [4];
  undefined1 *local_d4;
  int local_cc;
  int local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined4 *local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  int local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  int local_64;
  int local_60;
  int local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  if (*(char *)(in_ECX + 0x48) == '\0') {
    local_70 = DAT_012588e8;
    local_8 = (int *)FUN_0040a7f0();
    switch(*(undefined4 *)(in_ECX + 0x4c)) {
    case 0:
    case 1:
    case 2:
      local_80 = DAT_012588e8;
      local_84 = *(undefined4 *)(in_ECX + 0x58);
      piVar2 = (int *)FUN_00416e30();
      local_24 = *piVar2;
      if (local_24 != 0) {
        (**(code **)(*local_8 + 0xb4))(local_24);
        (**(code **)(*local_8 + 0xa4))(1);
        if (local_24 == 0) {
          local_10c = 0;
        }
        else {
          local_10c = local_24 + 8;
        }
        (**(code **)(*local_8 + 0x88))(local_10c);
      }
      break;
    case 3:
    case 4:
      FUN_004138a0();
      local_f4 = FUN_009c16d0();
      if (local_f4 == 0) {
        local_f4 = 0;
      }
      else {
        local_f4 = local_f4 + -8;
      }
      local_c = local_f4;
      if ((local_f4 != 0) && (iVar5 = FUN_004c30c0(), iVar5 != 0)) {
        uVar4 = FUN_004c30c0();
        cVar1 = FUN_0059c160(uVar4);
        if (cVar1 != '\0') {
          (**(code **)(*local_8 + 0x9c))(0);
          local_fc = FUN_004c30c0();
          if (local_fc == 0) {
            local_fc = 0;
          }
          else {
            local_fc = local_fc + 8;
          }
          (**(code **)(*local_8 + 0x88))(local_fc);
          local_74 = *(undefined4 *)(local_c + 0xdc);
          (**(code **)(*local_8 + 0xb4))(local_74);
        }
      }
      break;
    case 5:
    case 6:
      FUN_004138a0();
      local_104 = FUN_009c16d0();
      if (local_104 == 0) {
        local_104 = 0;
      }
      else {
        local_104 = local_104 + -8;
      }
      local_10 = local_104;
      if (local_104 != 0) {
        local_78 = *(undefined4 *)(local_104 + 0xdc);
        (**(code **)(*local_8 + 0xb4))(local_78);
        (**(code **)(*local_8 + 0xa4))(1);
        (**(code **)(*local_8 + 0x88))(local_10);
      }
      break;
    case 7:
      FUN_004138a0();
      local_14 = FUN_009c16d0();
      if (local_14 != 0) {
        uVar4 = FUN_004d0050();
        (**(code **)(*local_8 + 0xb0))(uVar4);
      }
      break;
    case 8:
    case 9:
    case 10:
      FUN_004138a0();
      local_18 = FUN_009c16d0();
      if (local_18 != 0) {
        uVar4 = FUN_00491610();
        (**(code **)(*local_8 + 0xb4))(uVar4);
      }
      break;
    case 0xb:
      local_48 = FUN_00424a80();
      if ((-1 < *(int *)(in_ECX + 0x58)) &&
         (iVar5 = FUN_004236e0(), *(int *)(in_ECX + 0x58) < iVar5)) {
        piVar2 = (int *)FUN_00416e30();
        local_4c = *piVar2;
        FUN_0066c110(local_4c + 0x1c,0);
      }
      break;
    case 0xc:
      local_88 = DAT_012588e8;
      local_8c = DAT_012587e4;
      local_98 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
      local_94 = *(undefined4 *)(DAT_012588e8 + 0xb60);
      local_90 = FUN_00401490();
      puVar3 = (undefined4 *)FUN_00416e30();
      local_9c = *puVar3;
      local_28 = (int *)FUN_00539120();
      if ((-1 < *(int *)(in_ECX + 0x58)) &&
         (local_a0 = local_28[2], *(int *)(in_ECX + 0x58) < local_a0)) {
        local_34 = 0;
        local_2c = 0;
        local_a4 = *local_28;
        local_30 = local_a4;
        while (iVar5 = local_34, local_30 != 0) {
          local_a8 = local_30;
          local_60 = local_30;
          local_30 = *(int *)(local_30 + 8);
          piVar2 = (int *)FUN_0043a900();
          local_38 = *piVar2;
          iVar5 = local_38;
          if (*(int *)(in_ECX + 0x58) == local_2c) break;
          local_2c = local_2c + 1;
        }
        local_34 = iVar5;
        if (local_34 != 0) {
          local_ac = DAT_012588e8;
          local_b0 = DAT_012588e8;
          uVar4 = FUN_00424cd0();
          local_3c = FUN_0068dbf0(uVar4);
          local_b4 = *(int *)(local_34 + 8);
          local_40 = local_b4;
          do {
            if (local_40 == 0) {
              return;
            }
            local_b8 = local_40;
            local_64 = local_40;
            local_40 = *(int *)(local_40 + 8);
            local_bc = (undefined4 *)FUN_0043a900();
            local_c0 = DAT_012588e8;
            local_c4 = *local_bc;
            piVar2 = (int *)FUN_00416e30();
            local_44 = *piVar2;
            local_c8 = DAT_012588e8;
            iVar5 = FUN_00401490();
            if (*(int *)(local_44 + 300) == iVar5) break;
            local_6c = 0;
            piVar2 = (int *)FUN_004cda40();
            local_d4 = local_d8;
            local_cc = *piVar2;
          } while (local_cc <= local_6c);
          (**(code **)(*local_8 + 0xb4))(local_44);
          (**(code **)(*local_8 + 0xa4))(1);
          if (local_44 == 0) {
            local_114 = 0;
          }
          else {
            local_114 = local_44 + 8;
          }
          (**(code **)(*local_8 + 0x88))(local_114);
        }
      }
      break;
    case 0xd:
      local_20 = *(uint *)(in_ECX + 0x58) & 0x7fffffff;
      local_7c = DAT_012588e8;
      piVar2 = (int *)FUN_00416e30();
      local_1c = *piVar2;
      if (local_1c != 0) {
        (**(code **)(*local_8 + 0xb4))(local_1c);
        (**(code **)(*local_8 + 0xa4))(1);
        if (local_1c == 0) {
          local_108 = 0;
        }
        else {
          local_108 = local_1c + 8;
        }
        (**(code **)(*local_8 + 0x88))(local_108);
      }
    }
  }
  return;
}

