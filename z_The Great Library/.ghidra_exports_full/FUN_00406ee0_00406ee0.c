// FUN_00406ee0 @ 00406ee0 body=[[00406ee0, 004071b1] [004071b5, 0040734f] [00407353, 004073ff] [00407408, 0040747a] [0040747e, 00407510] [00407514, 004075ba] [004075be, 004075dc] [004075e0, 004075fa] [004075fe, 00407657] [00407660, 00407699] [0040769d, 004076be] [004076c2, 004076dc] [004076e0, 00407743] [00407750, 004078d0] [004078d4, 00407abe] [00407ac2, 00407b04]]


/* WARNING: Removing unreachable block (ram,0x00407505) */

uint * FUN_00406ee0(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint local_f8;
  uint local_e4;
  int local_84 [4];
  uint local_74;
  undefined4 local_64;
  uint local_60 [5];
  uint local_4c;
  undefined4 local_48;
  uint local_44;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint *local_30;
  undefined4 local_28;
  int local_24;
  uint *local_20;
  uint local_1c;
  uint *local_18;
  uint *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar7 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4805f;
  local_10 = ExceptionList;
  local_14 = (uint *)(param_1 + 0x220);
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x220) != *(int *)(param_1 + 0x224)) {
    ExceptionList = &local_10;
    uVar2 = FUN_0040a4e0(*(int *)(param_1 + 0x224),param_1);
    FUN_0040a110(*(undefined4 *)(param_1 + 0x224),param_1);
    *(undefined4 *)(param_1 + 0x224) = uVar2;
  }
  local_24 = param_1 + 0x230;
  if (*(int *)(param_1 + 0x230) != *(int *)(param_1 + 0x234)) {
    uVar2 = FUN_0040a4e0(*(int *)(param_1 + 0x234),param_1);
    FUN_0040a110(*(undefined4 *)(param_1 + 0x234),param_1);
    *(undefined4 *)(param_1 + 0x234) = uVar2;
  }
  local_20 = (uint *)(param_1 + 0x240);
  if (*(int *)(param_1 + 0x240) != *(int *)(param_1 + 0x244)) {
    uVar2 = FUN_0040a550(*(int *)(param_1 + 0x244),param_1);
    FUN_0040a190(param_1);
    *(undefined4 *)(param_1 + 0x244) = uVar2;
  }
  puVar5 = (uint *)(param_1 + 0x250);
  if (*(int *)(param_1 + 0x250) != *(int *)(param_1 + 0x254)) {
    uVar2 = FUN_0040a5b0(*(int *)(param_1 + 0x254),param_1);
    FUN_0040a190(uVar2);
    *(undefined4 *)(param_1 + 0x254) = uVar2;
  }
  if (((((*(int *)(param_2 + 0x224) - *(int *)(param_2 + 0x220)) / 0x58 < 1) &&
       ((*(int *)(param_2 + 0x244) - *(int *)(param_2 + 0x240)) / 0x34 < 1)) &&
      ((*(int *)(param_2 + 0x254) - *(int *)(param_2 + 0x250)) / 0x34 < 1)) &&
     ((*(int *)(param_2 + 0x234) - *(int *)(param_2 + 0x230)) / 0x58 < 1)) {
    param_1 = 0;
    if (0 < (int)(*(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x10) & 0xfffffffcU)) {
      do {
        iVar7 = *(int *)(*(int *)(param_2 + 0x10) + param_1 * 4);
        local_8 = 0xe;
        FUN_0043a750(iVar7 + 0x148);
        FUN_00408ed0(*(int *)(iVar7 + 0x13c) + 8,0,0xffffffff);
        local_18 = *(uint **)(iVar7 + 0x8c);
        local_1c = *(uint *)(iVar7 + 0x84);
        FUN_00409350(&DAT_00ded94d,0);
        if (*(int *)(*(int *)(param_2 + 0x30) + param_1 * 4) != 0) {
          uVar2 = FUN_00401580(*(undefined4 *)(*(int *)(param_2 + 0x30) + param_1 * 4));
          local_8._0_1_ = 0xf;
          FUN_00408ed0(uVar2,0,0xffffffff);
          local_8 = CONCAT31(local_8._1_3_,0xe);
          if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_f8);
          }
        }
        FUN_00409e00(local_14);
        local_8 = 0xffffffff;
        FUN_004034f0();
        param_1 = param_1 + 1;
      } while (param_1 < *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x10) >> 2);
    }
    uVar3 = *(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x20);
    iVar7 = 0;
    if (0 < (int)(uVar3 & 0xfffffffc)) {
      do {
        iVar4 = *(int *)(*(int *)(param_2 + 0x20) + iVar7 * 4);
        local_8 = 0x10;
        FUN_0043a750(iVar4 + 0x148);
        FUN_00408ed0(*(int *)(iVar4 + 0x13c) + 8,0,0xffffffff);
        local_18 = *(uint **)(iVar4 + 0x8c);
        local_1c = *(uint *)(iVar4 + 0x84);
        FUN_00409350(&DAT_00ded94d,0);
        FUN_00409e00(local_24);
        local_8 = 0xffffffff;
        uVar3 = FUN_004034f0();
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x20) >> 2);
    }
    local_14 = (uint *)0x0;
    if (0 < (int)(*(int *)(param_2 + 0x44) - *(int *)(param_2 + 0x40) & 0xfffffffcU)) {
      do {
        iVar7 = *(int *)(*(int *)(param_2 + 0x40) + (int)local_14 * 4);
        iVar4 = FUN_00401580(iVar7);
        if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_48);
        }
        if (*(int *)(iVar4 + 0x10) == 0) {
          local_44 = 0xf;
          local_48 = 0;
          local_60[2] = local_60[2] & 0xffffff00;
          local_8 = 0x11;
          local_60[0] = *(uint *)(iVar7 + 0x16c);
          local_60[1] = *(undefined4 *)(iVar7 + 0x170);
          FUN_00408ed0(*(int *)(iVar7 + 0x13c) + 8,0,0xffffffff);
          local_3c = *(uint *)(iVar7 + 0x144);
          local_34 = *(uint *)(iVar7 + 0x84);
          local_30 = *(uint **)(iVar7 + 0x8c);
          local_38 = *(uint *)(iVar7 + 0x1c8);
          local_1c = local_34;
          local_18 = local_30;
          FUN_00409eb0(local_20);
          local_8 = 0xffffffff;
          if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_60[2]);
          }
        }
        else {
          local_8 = 0x12;
          uVar2 = FUN_00401580(iVar7);
          local_8._0_1_ = 0x13;
          FUN_00408ed0(uVar2,0,0xffffffff);
          local_8 = CONCAT31(local_8._1_3_,0x12);
          if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_f8);
          }
          local_24 = *(int *)(iVar7 + 0x8c);
          local_28 = *(undefined4 *)(iVar7 + 0x84);
          local_e4 = 0xf;
          local_f8 = local_f8 & 0xffffff00;
          FUN_00409f20(puVar5);
        }
        local_8 = 0xffffffff;
        local_14 = (uint *)((int)local_14 + 1);
      } while ((int)local_14 < *(int *)(param_2 + 0x44) - *(int *)(param_2 + 0x40) >> 2);
      ExceptionList = local_10;
      return local_14;
    }
  }
  else {
    iVar4 = 0;
    if (0 < (*(int *)(param_2 + 0x224) - *(int *)(param_2 + 0x220)) / 0x58) {
      do {
        FUN_004014c0(local_84);
        local_8 = 0;
        FUN_00409e00(local_14);
        local_8 = 0xffffffff;
        if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_4c);
        }
        local_38 = 0xf;
        local_3c = 0;
        local_4c = local_4c & 0xffffff00;
        if (0xf < local_60[0]) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_74);
        }
        local_60[0] = 0xf;
        local_64 = 0;
        local_74 = local_74 & 0xffffff00;
        if (local_84[0] != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_84[0]);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (*(int *)(param_2 + 0x224) - *(int *)(param_2 + 0x220)) / 0x58);
    }
    param_1 = 0;
    if (0 < (*(int *)(param_2 + 0x234) - *(int *)(param_2 + 0x230)) / 0x58) {
      do {
        FUN_004014c0(local_84);
        local_8 = 1;
        FUN_00409e00(local_24);
        local_8 = 0xffffffff;
        if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_4c);
        }
        local_38 = 0xf;
        local_3c = 0;
        local_4c = local_4c & 0xffffff00;
        if (0xf < local_60[0]) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_74);
        }
        local_60[0] = 0xf;
        local_64 = 0;
        local_74 = local_74 & 0xffffff00;
        if (local_84[0] != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_84[0]);
        }
        param_1 = param_1 + 1;
      } while (param_1 < (*(int *)(param_2 + 0x234) - *(int *)(param_2 + 0x230)) / 0x58);
    }
    local_24 = 0;
    if (0 < (*(int *)(param_2 + 0x244) - *(int *)(param_2 + 0x240)) / 0x34) {
      param_1 = 0;
      do {
        puVar8 = (uint *)(*(int *)(param_2 + 0x240) + param_1);
        local_44 = 0xf;
        local_48 = 0;
        local_60[2] = local_60[2] & 0xffffff00;
        local_8 = 2;
        local_60[0] = *puVar8;
        local_60[1] = puVar8[1];
        FUN_00408ed0(puVar8 + 2,0,0xffffffff);
        puVar6 = local_20;
        local_3c = puVar8[9];
        local_34 = puVar8[0xb];
        local_30 = (uint *)puVar8[0xc];
        local_38 = puVar8[10];
        local_8 = 3;
        puVar8 = (uint *)local_20[1];
        if ((local_60 < puVar8) && (puVar1 = (uint *)*local_20, puVar1 <= local_60)) {
          if (puVar8 == (uint *)local_20[2]) {
            FUN_0040a010();
          }
          puVar8 = (uint *)local_20[1];
          puVar6 = (uint *)((((int)local_60 - (int)puVar1) / 0x34) * 0x34 + *local_20);
          local_18 = puVar8;
          local_14 = puVar8;
          if (puVar8 != (uint *)0x0) {
            puVar8[7] = 0xf;
            puVar8[6] = 0;
            *(undefined1 *)(puVar8 + 2) = 0;
            local_8 = CONCAT31(local_8._1_3_,5);
            *puVar8 = *puVar6;
            puVar8[1] = puVar6[1];
            FUN_00408ed0(puVar6 + 2,0,0xffffffff);
            puVar8[9] = puVar6[9];
            puVar8[0xb] = puVar6[0xb];
            puVar8[0xc] = puVar6[0xc];
            puVar8[10] = puVar6[10];
          }
        }
        else {
          if (puVar8 == (uint *)local_20[2]) {
            FUN_0040a010();
          }
          puVar8 = (uint *)puVar6[1];
          local_18 = puVar8;
          local_14 = puVar8;
          if (puVar8 != (uint *)0x0) {
            puVar8[7] = 0xf;
            puVar8[6] = 0;
            *(undefined1 *)(puVar8 + 2) = 0;
            local_8 = CONCAT31(local_8._1_3_,7);
            *puVar8 = local_60[0];
            puVar8[1] = local_60[1];
            FUN_00408ed0(local_60 + 2,0,0xffffffff);
            puVar8[9] = local_3c;
            puVar8[0xb] = local_34;
            puVar8[0xc] = (uint)local_30;
            puVar8[10] = local_38;
          }
        }
        local_20[1] = local_20[1] + 0x34;
        local_8 = 0xffffffff;
        if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_60[2]);
        }
        param_1 = param_1 + 0x34;
        local_24 = local_24 + 1;
      } while (local_24 < (*(int *)(param_2 + 0x244) - *(int *)(param_2 + 0x240)) / 0x34);
    }
    iVar4 = *(int *)(param_2 + 0x254) - *(int *)(param_2 + 0x250);
    uVar3 = iVar4 * 0x4ec4ec4f;
    local_24 = 0;
    if (0 < iVar4 / 0x34) {
      param_1 = 0;
      do {
        puVar8 = (uint *)(*(int *)(param_2 + 0x250) + param_1);
        local_44 = 0xf;
        local_48 = 0;
        local_60[2] = local_60[2] & 0xffffff00;
        local_8 = 8;
        local_60[0] = *puVar8;
        local_60[1] = puVar8[1];
        FUN_00408ed0(puVar8 + 2,0,0xffffffff);
        local_3c = puVar8[9];
        local_38 = puVar8[10];
        local_34 = puVar8[0xb];
        local_30 = (uint *)puVar8[0xc];
        local_8 = 9;
        puVar8 = *(uint **)(iVar7 + 0x254);
        if ((local_60 < puVar8) && (puVar6 = (uint *)*puVar5, puVar6 <= local_60)) {
          if (puVar8 == *(uint **)(iVar7 + 600)) {
            FUN_0040a090();
          }
          puVar6 = (uint *)((((int)local_60 - (int)puVar6) / 0x34) * 0x34 + *puVar5);
          puVar8 = *(uint **)(iVar7 + 0x254);
          local_18 = puVar8;
          local_14 = puVar8;
          if (puVar8 != (uint *)0x0) {
            puVar8[7] = 0xf;
            puVar8[6] = 0;
            *(undefined1 *)(puVar8 + 2) = 0;
            local_8 = CONCAT31(local_8._1_3_,0xb);
            *puVar8 = *puVar6;
            puVar8[1] = puVar6[1];
            FUN_00408ed0(puVar6 + 2,0,0xffffffff);
            puVar8[9] = puVar6[9];
            puVar8[10] = puVar6[10];
            puVar8[0xb] = puVar6[0xb];
            puVar8[0xc] = puVar6[0xc];
          }
          *(int *)(iVar7 + 0x254) = *(int *)(iVar7 + 0x254) + 0x34;
        }
        else {
          if (puVar8 == *(uint **)(iVar7 + 600)) {
            FUN_0040a090();
          }
          puVar8 = *(uint **)(iVar7 + 0x254);
          local_18 = puVar8;
          local_14 = puVar8;
          if (puVar8 != (uint *)0x0) {
            puVar8[7] = 0xf;
            puVar8[6] = 0;
            *(undefined1 *)(puVar8 + 2) = 0;
            local_8 = CONCAT31(local_8._1_3_,0xd);
            *puVar8 = local_60[0];
            puVar8[1] = local_60[1];
            FUN_00408ed0(local_60 + 2,0,0xffffffff);
            puVar8[9] = local_3c;
            puVar8[10] = local_38;
            puVar8[0xb] = local_34;
            puVar8[0xc] = (uint)local_30;
          }
          *(int *)(iVar7 + 0x254) = *(int *)(iVar7 + 0x254) + 0x34;
        }
        local_8 = 0xffffffff;
        if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_60[2]);
        }
        param_1 = param_1 + 0x34;
        uVar3 = (*(int *)(param_2 + 0x254) - *(int *)(param_2 + 0x250)) / 0x34;
        local_24 = local_24 + 1;
      } while (local_24 < (int)uVar3);
    }
  }
  ExceptionList = local_10;
  return (uint *)uVar3;
}

