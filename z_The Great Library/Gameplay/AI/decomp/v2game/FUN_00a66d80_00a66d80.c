// FUN_00a66d80 @ 00a66d80 body=[[00a66d80, 00a66e96] [00a66e9a, 00a674a6]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a66d80(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  DWORD DVar10;
  int *in_ECX;
  uint uVar11;
  float10 fVar12;
  undefined1 *puStack_b38;
  undefined4 *puStack_b34;
  int iStack_b30;
  int iStack_b2c;
  undefined8 uStack_b28;
  undefined ***pppuStack_b20;
  undefined1 local_690 [984];
  undefined **appuStack_2b8 [48];
  undefined **local_1f8 [18];
  undefined1 auStack_1b0 [28];
  undefined1 auStack_194 [56];
  undefined1 auStack_15c [28];
  undefined1 auStack_140 [28];
  undefined1 local_124 [28];
  undefined1 auStack_108 [28];
  undefined1 auStack_ec [28];
  int aiStack_d0 [12];
  undefined4 *puStack_a0;
  uint auStack_90 [4];
  undefined4 uStack_80;
  uint uStack_7c;
  uint auStack_74 [4];
  undefined4 uStack_64;
  uint uStack_60;
  undefined **local_58;
  undefined **local_54;
  undefined **local_50;
  uint local_4c [2];
  int local_44;
  int iStack_40;
  undefined4 local_3c;
  uint local_38;
  int local_34;
  int local_30 [2];
  undefined1 *local_28;
  int *local_24;
  char local_1d;
  undefined4 *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5cde7;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xfffff4e4;
  if ((char)in_ECX[0x2e] != '\0') {
    return;
  }
  local_1d = '\0';
  ExceptionList = &pvStack_10;
  local_24 = in_ECX;
  puVar1 = &stack0xfffff4e4;
  if ((int *)in_ECX[0x3e] != (int *)0x0) {
    pppuStack_b20 = (undefined ***)0xa66dd1;
    ExceptionList = &pvStack_10;
    fVar12 = (float10)(**(code **)(*(int *)in_ECX[0x3e] + 0x14))();
    if ((float10)1 < fVar12) {
      pppuStack_b20 = (undefined ***)0xa;
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      uStack_b28 = 2.2933558169546782e-304;
      FUN_00409350();
      pppuStack_b20 = (undefined ***)0x301;
      uStack_b28 = (double)CONCAT44(0x750,local_4c);
      local_8 = 0;
      iStack_b2c = 0xa66e18;
      FUN_004015b0();
      local_8._0_1_ = 1;
      pppuStack_b20 = (undefined ***)0xe4253c;
      uStack_b28 = (double)CONCAT44(0xa66e33,(undefined4)uStack_b28);
      fVar12 = (float10)(**(code **)(*(int *)in_ECX[0x3e] + 0x14))();
      uStack_b28 = (double)fVar12;
      iStack_b2c = 0xa66e43;
      iStack_b2c = FUN_00987d20();
      iStack_b30 = 0xa66e49;
      uStack_b28._4_4_ = FUN_0048c130();
      uStack_b28._0_4_ = 0xa66e4f;
      uVar3 = FUN_00418e30();
      uStack_b28 = (double)CONCAT44(uStack_b28._4_4_,uVar3);
      iStack_b2c = 0xa66e55;
      FUN_00401280();
      pppuStack_b20 = local_1f8;
      local_8 = (uint)local_8._1_3_ << 8;
      uStack_b28 = (double)CONCAT44(0xa66e68,(undefined4)uStack_b28);
      FUN_00987ac0();
      pppuStack_b20 = local_1f8;
      local_1f8[0] = std::ios_base::vftable;
      uStack_b28 = (double)CONCAT44(0xa66e7e,(undefined4)uStack_b28);
      FUN_00aad52d();
      local_8 = 0xffffffff;
      if (0xf < local_38) {
        pppuStack_b20 = (undefined ***)local_4c[0];
        uStack_b28 = (double)CONCAT44(&UNK_00a66e97,(undefined4)uStack_b28);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    pppuStack_b20 = (undefined ***)0xa66ea7;
    (**(code **)(*(int *)in_ECX[0x3e] + 8))();
    puVar1 = local_14;
  }
  do {
    do {
      while( true ) {
        do {
          local_14 = puVar1;
          pppuStack_b20 = (undefined ***)in_ECX[8];
          uStack_b28 = (double)CONCAT44(&local_44,in_ECX[6]);
          iStack_b2c = 0xa66eb8;
          iVar4 = FUN_00a89d00();
          iVar5 = local_34;
          if ((iVar4 < 1) || (iVar9 = in_ECX[7], *(int *)(iVar9 + 0x2c) == 9)) {
            if (iVar4 == -1) {
              pppuStack_b20 = (undefined ***)0xa;
              uVar11 = 0;
              uStack_60 = 0xf;
              uStack_64 = 0;
              auStack_74[0] = auStack_74[0] & 0xffffff00;
              uStack_b28 = 2.2933558169561397e-304;
              FUN_00409350();
              pppuStack_b20 = (undefined ***)0x301;
              uStack_b28 = (double)CONCAT44(0x85c,auStack_74);
              local_8 = 0x2d;
              iStack_b2c = 0xa67c37;
              FUN_004015b0();
              local_8 = CONCAT31(local_8._1_3_,0x2e);
              pppuStack_b20 = (undefined ***)0xa67c4a;
              piVar6 = (int *)FUN_00987d20();
              uStack_b28 = (double)CONCAT44(0xa67c52,(undefined4)uStack_b28);
              pppuStack_b20 = (undefined ***)piVar6;
              FUN_00408be0();
              if ((*(byte *)(*(int *)(*piVar6 + 4) + 0xc + (int)piVar6) & 6) == 0) {
                pppuStack_b20 = (undefined ***)0xa67c6b;
                iVar5 = (**(code **)(**(int **)(*(int *)(*piVar6 + 4) + 0x38 + (int)piVar6) + 0x34))
                                  ();
                if (iVar5 == -1) {
                  uVar11 = 4;
                }
              }
              if (uVar11 != 0) {
                uVar11 = *(uint *)((int)piVar6 + *(int *)(*piVar6 + 4) + 0xc) | uVar11;
                if (*(int *)((int)piVar6 + *(int *)(*piVar6 + 4) + 0x38) == 0) {
                  uVar11 = uVar11 | 4;
                }
                pppuStack_b20 = (undefined ***)0x0;
                uStack_b28 = (double)CONCAT44(uVar11,0xa67c96);
                FUN_00401120();
              }
              pppuStack_b20 = appuStack_2b8;
              local_8 = CONCAT31(local_8._1_3_,0x2d);
              uStack_b28 = (double)CONCAT44(0xa67ca6,(undefined4)uStack_b28);
              FUN_00987ac0();
              pppuStack_b20 = appuStack_2b8;
              appuStack_2b8[0] = std::ios_base::vftable;
              uStack_b28 = (double)CONCAT44(0xa67cbc,(undefined4)uStack_b28);
              FUN_00aad52d();
              local_8 = 0xffffffff;
              if (0xf < uStack_60) {
                pppuStack_b20 = (undefined ***)auStack_74[0];
                uStack_b28 = (double)CONCAT44(&UNK_00a67cd5,(undefined4)uStack_b28);
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              uStack_60 = 0xf;
              uStack_64 = 0;
              auStack_74[0] = auStack_74[0] & 0xffffff00;
            }
            pppuStack_b20 = (undefined ***)0xa67cf3;
            (**(code **)(*in_ECX + 0x70))();
            if (local_1d != '\0') {
              iVar5 = in_ECX[7];
              puVar7 = *(undefined4 **)(iVar5 + 4);
              *(undefined4 *)(iVar5 + 0x2c) = 8;
              for (; puVar7 != (undefined4 *)0x0; puVar7 = (undefined4 *)puVar7[2]) {
                pppuStack_b20 = (undefined ***)0x9;
                uStack_b28 = (double)CONCAT44(0xa67d1b,(undefined4)uStack_b28);
                (**(code **)(*(int *)*puVar7 + 4))();
              }
              *(undefined4 *)(iVar5 + 0x2c) = 8;
              pppuStack_b20 = (undefined ***)0xa67d34;
              FUN_00a8a450();
              pppuStack_b20 = (undefined ***)0xa67d3d;
              DVar10 = timeGetTime();
              DAT_012586d0 = DVar10 - _DAT_01258b70;
              pppuStack_b20 = (undefined ***)0x0;
              uStack_b28 = 5.39077842351565e-317;
              FUN_00a899f0();
            }
            *(undefined1 *)(in_ECX + 0x19) = 1;
            if ((int *)in_ECX[0x3e] == (int *)0x0) {
              ExceptionList = pvStack_10;
              return;
            }
            pppuStack_b20 = (undefined ***)0xa67d6b;
            (**(code **)(*(int *)in_ECX[0x3e] + 4))();
            ExceptionList = pvStack_10;
            return;
          }
          if (local_44 == 2) {
            pppuStack_b20 = (undefined ***)0xa;
            uStack_7c = 0xf;
            uStack_80 = 0;
            auStack_90[0] = auStack_90[0] & 0xffffff00;
            uStack_b28 = 2.293355816956057e-304;
            FUN_00409350();
            pppuStack_b20 = (undefined ***)0x301;
            uStack_b28 = (double)CONCAT44(0x76d,auStack_90);
            local_8 = 2;
            iStack_b2c = 0xa67b6e;
            FUN_004015b0();
            local_8._0_1_ = 3;
            pppuStack_b20 = (undefined ***)0xa67b81;
            pppuStack_b20 = (undefined ***)FUN_00987d20();
            uStack_b28 = (double)CONCAT44(0xa67b87,(undefined4)uStack_b28);
            FUN_00401280();
            pppuStack_b20 = local_1f8;
            local_8 = CONCAT31(local_8._1_3_,2);
            uStack_b28 = (double)CONCAT44(0xa67b9a,(undefined4)uStack_b28);
            FUN_00987ac0();
            pppuStack_b20 = local_1f8;
            local_1f8[0] = std::ios_base::vftable;
            uStack_b28 = (double)CONCAT44(0xa67bb0,(undefined4)uStack_b28);
            FUN_00aad52d();
            if (0xf < uStack_7c) {
              pppuStack_b20 = (undefined ***)auStack_90[0];
              uStack_b28 = (double)CONCAT44(&UNK_00a67bc5,(undefined4)uStack_b28);
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            *(undefined1 *)(in_ECX[7] + 0x25d) = 1;
            *(undefined4 *)(iStack_40 + 0x14) = 0;
            ExceptionList = pvStack_10;
            return;
          }
          puVar1 = local_14;
        } while (local_44 != 3);
        if ((char)local_3c != '\0') break;
        iVar4 = *(int *)(iVar9 + 0x2c);
        if ((((iVar4 == 4) || (iVar4 == 2)) || (iVar4 == 10)) || ((iVar4 == 0xb || (iVar4 == 0xc))))
        {
          pppuStack_b20 = (undefined ***)0x3c;
          uStack_b28 = (double)CONCAT44(0xa672f7,(undefined4)uStack_b28);
          local_18 = (undefined1 *)FUN_00aae9af();
          local_8 = 4;
          if (local_18 == (undefined1 *)0x0) {
            iVar5 = 0;
          }
          else {
            pppuStack_b20 = *(undefined ****)(local_34 + 0xc);
            uStack_b28 = (double)CONCAT44(local_18,0xa67315);
            iVar5 = FUN_009d6ea0();
          }
          local_8 = 0xffffffff;
          iStack_b2c = *(int *)(iVar5 + 4);
          pppuStack_b20 = (undefined ***)local_24;
          uStack_b28 = (double)CONCAT44(*(int *)(local_34 + 0xc) + *(int *)(local_34 + 8),
                                        *(int *)(local_34 + 8));
          iStack_b30 = 0xa6733e;
          local_18 = (undefined1 *)iVar5;
          FUN_009d7490();
          pppuStack_b20 = (undefined ***)0x114;
          local_30[0] = 0;
          local_8 = 5;
          uStack_b28 = (double)CONCAT44(0xa67356,(undefined4)uStack_b28);
          puVar7 = (undefined4 *)FUN_00aae9af();
          local_8._0_1_ = 6;
          if (puVar7 == (undefined4 *)0x0) {
            local_1c = (undefined4 *)0x0;
          }
          else {
            pppuStack_b20 = (undefined ***)0x3c;
            uStack_b28 = (double)CONCAT44(0xa6736d,(undefined4)uStack_b28);
            local_1c = puVar7;
            local_28 = (undefined1 *)FUN_00aae9af();
            local_8._0_1_ = 7;
            if (local_28 == (undefined1 *)0x0) {
              uVar3 = 0;
            }
            else {
              pppuStack_b20 = (undefined ***)0x0;
              uStack_b28 = 0.0;
              puStack_b34 = (undefined4 *)0xa67388;
              iStack_b30 = (int)local_28;
              iStack_b2c = iVar5;
              uVar3 = FUN_009d5450();
            }
            local_8._0_1_ = 6;
            *puVar7 = &PTR_FUN_00e37c30;
            puVar7[1] = uVar3;
            *(undefined2 *)(puVar7 + 0x44) = 0x100;
            pppuStack_b20 = (undefined ***)0xa673a9;
            FUN_00990100();
            *puVar7 = &PTR_FUN_00e37c48;
            local_1c = puVar7;
          }
          pppuStack_b20 = (undefined ***)0x1;
          local_28 = (undefined1 *)&iStack_b30;
          puStack_b34 = (undefined4 *)(in_ECX[7] + 0x1c);
          iStack_b30 = 0;
          iStack_b2c = 0;
          uStack_b28 = (double)((ulonglong)uStack_b28 & 0xffffffff00000000);
          local_8._0_1_ = 8;
          puStack_b38 = (undefined1 *)0xa673e8;
          FUN_009a2240();
          local_8._0_1_ = 5;
          puStack_b34 = local_1c;
          puStack_b38 = local_690;
          FUN_009a0cb0();
          local_50 = &PTR_FUN_00e38550;
          local_28 = (undefined1 *)&puStack_b38;
          local_8._0_1_ = 10;
          uStack_b28 = 3.18299368644791e-313;
          puStack_b38 = (undefined1 *)((uint)puStack_b38 & 0xffffff00);
          FUN_00408ed0(in_ECX[7] + 0xbc,0,0xffffffff);
          FUN_009a14e0(local_30);
          piVar6 = (int *)in_ECX[0x15];
          iVar5 = piVar6[1];
          pppuStack_b20 = (undefined ***)0x10;
          uStack_b28 = (double)CONCAT44(0xa67453,(undefined4)uStack_b28);
          piVar8 = (int *)FUN_00aae9af();
          if (piVar8 == (int *)0x0) {
            piVar8 = (int *)0x0;
          }
          else {
            *piVar8 = local_30[0];
            piVar8[1] = iVar5;
            piVar8[2] = 0;
            *(undefined1 *)(piVar8 + 3) = 0;
          }
          iVar4 = piVar6[2];
          piVar6[1] = (int)piVar8;
          piVar6[2] = iVar4 + 1;
          if (iVar4 == 0) {
            *piVar6 = (int)piVar8;
          }
          else {
            *(int **)(iVar5 + 8) = piVar8;
          }
          local_50 = &PTR_FUN_00e38318;
          local_8 = CONCAT31(local_8._1_3_,5);
          pppuStack_b20 = (undefined ***)0xa6749e;
          FUN_009a0dc0();
          local_8 = 0xffffffff;
          FUN_00a674b7();
          return;
        }
        if (iVar4 == 6) {
          pppuStack_b20 = (undefined ***)0xa66f33;
          FUN_009885d0();
          pppuStack_b20 = (undefined ***)0x301;
          uStack_b28 = (double)CONCAT44(0x7a1,local_124);
          local_8 = 0xc;
          iStack_b2c = 0xa66f52;
          FUN_004015b0();
          local_8._0_1_ = 0xd;
          pppuStack_b20 = (undefined ***)0xa66f65;
          pppuStack_b20 = (undefined ***)FUN_00987d20();
          uStack_b28 = (double)CONCAT44(0xa66f6b,(undefined4)uStack_b28);
          FUN_00401280();
          local_8 = CONCAT31(local_8._1_3_,0xc);
          pppuStack_b20 = (undefined ***)0xa66f7d;
          FUN_00401650();
          local_8 = 0xffffffff;
          pppuStack_b20 = (undefined ***)0xa66f8f;
          FUN_00408ad0();
          pppuStack_b20 = (undefined ***)0x3c;
          uStack_b28 = (double)CONCAT44(0xa66f96,(undefined4)uStack_b28);
          local_18 = (undefined1 *)FUN_00aae9af();
          local_8 = 0xe;
          if (local_18 == (undefined1 *)0x0) {
            iVar5 = 0;
          }
          else {
            pppuStack_b20 = *(undefined ****)(local_34 + 0xc);
            uStack_b28 = (double)CONCAT44(local_18,0xa66fb4);
            iVar5 = FUN_009d6ea0();
          }
          local_8 = 0xffffffff;
          iStack_b2c = *(int *)(iVar5 + 4);
          pppuStack_b20 = (undefined ***)local_24;
          uStack_b28 = (double)CONCAT44(*(int *)(local_34 + 0xc) + *(int *)(local_34 + 8),
                                        *(int *)(local_34 + 8));
          iStack_b30 = 0xa66fd8;
          FUN_009d7490();
          pppuStack_b20 = (undefined ***)0x114;
          local_1c = (undefined4 *)0x0;
          uStack_b28 = (double)CONCAT44(0xa66fe9,(undefined4)uStack_b28);
          iVar4 = FUN_00aae9af();
          local_8 = 0xf;
          if (iVar4 == 0) {
            uVar3 = 0;
          }
          else {
            pppuStack_b20 = (undefined ***)0x3c;
            uStack_b28 = (double)CONCAT44(0xa67003,(undefined4)uStack_b28);
            local_18 = (undefined1 *)iVar4;
            local_30[0] = FUN_00aae9af();
            local_8._0_1_ = 0x10;
            if (local_30[0] == 0) {
              local_8 = CONCAT31(local_8._1_3_,0xf);
              uStack_b28 = (double)CONCAT44(0xa6703c,(undefined4)uStack_b28);
              pppuStack_b20 = (undefined ***)iVar4;
              uVar3 = FUN_00990df0();
            }
            else {
              pppuStack_b20 = (undefined ***)0x0;
              uStack_b28 = 0.0;
              puStack_b34 = (undefined4 *)0xa6701e;
              iStack_b30 = local_30[0];
              iStack_b2c = iVar5;
              FUN_009d5450();
              local_8 = CONCAT31(local_8._1_3_,0xf);
              uStack_b28 = (double)CONCAT44(0xa6702a,(undefined4)uStack_b28);
              pppuStack_b20 = (undefined ***)iVar4;
              uVar3 = FUN_00990df0();
            }
          }
          local_8 = 0xffffffff;
          pppuStack_b20 = (undefined ***)0x1;
          local_18 = (undefined1 *)&iStack_b30;
          puStack_b38 = (undefined1 *)&iStack_b30;
          puStack_b34 = (undefined4 *)(in_ECX[7] + 0x1c);
          FUN_009a0d70();
          puStack_b38 = local_690;
          puStack_b34 = (undefined4 *)uVar3;
          FUN_009a0cb0();
          local_54 = &PTR_FUN_00e38550;
          local_8 = 0x12;
          local_18 = (undefined1 *)&puStack_b38;
          FUN_00401320();
          FUN_009a14e0(&local_1c);
          puVar7 = local_1c;
          pppuStack_b20 = (undefined ***)0x10;
          if (*(char *)((int)local_1c + 0x36) == '\0') {
            iVar5 = in_ECX[7];
            local_1c = *(undefined4 **)(iVar5 + 0xdc);
            uStack_b28 = (double)CONCAT44(0xa67107,(undefined4)uStack_b28);
            piVar6 = (int *)FUN_00aae9af();
            if (piVar6 == (int *)0x0) {
              piVar6 = (int *)0x0;
            }
            else {
              *piVar6 = (int)puVar7;
              piVar6[1] = (int)local_1c;
              piVar6[2] = 0;
              *(undefined1 *)(piVar6 + 3) = 0;
            }
            iVar4 = *(int *)(iVar5 + 0xe0);
            *(int **)(iVar5 + 0xdc) = piVar6;
            *(int *)(iVar5 + 0xe0) = iVar4 + 1;
            if (iVar4 == 0) {
              *(int **)(iVar5 + 0xd8) = piVar6;
            }
            else {
              local_1c[2] = piVar6;
            }
          }
          else {
            iVar5 = in_ECX[0xe];
            uStack_b28 = (double)CONCAT44(0xa670c1,(undefined4)uStack_b28);
            piVar6 = (int *)FUN_00aae9af();
            if (piVar6 == (int *)0x0) {
              piVar6 = (int *)0x0;
            }
            else {
              *piVar6 = (int)puVar7;
              piVar6[1] = iVar5;
              piVar6[2] = 0;
              *(undefined1 *)(piVar6 + 3) = 0;
            }
            iVar4 = in_ECX[0xf];
            in_ECX[0xe] = (int)piVar6;
            in_ECX[0xf] = iVar4 + 1;
            if (iVar4 == 0) {
              in_ECX[0xd] = (int)piVar6;
            }
            else {
              *(int **)(iVar5 + 8) = piVar6;
            }
          }
          local_54 = &PTR_FUN_00e38318;
          local_8 = 0xffffffff;
          pppuStack_b20 = (undefined ***)0xa67165;
          FUN_009a0dc0();
          FUN_00a674c8();
          return;
        }
        if (iVar4 == 5) {
          pppuStack_b20 = (undefined ***)0x3c;
          uStack_b28 = (double)CONCAT44(0xa6717a,(undefined4)uStack_b28);
          local_18 = (undefined1 *)FUN_00aae9af();
          local_8 = 0x13;
          if (local_18 == (undefined1 *)0x0) {
            iVar5 = 0;
          }
          else {
            pppuStack_b20 = *(undefined ****)(local_34 + 0xc);
            uStack_b28 = (double)CONCAT44(local_18,0xa67198);
            iVar5 = FUN_009d6ea0();
          }
          local_8 = 0xffffffff;
          iStack_b2c = *(int *)(iVar5 + 4);
          pppuStack_b20 = (undefined ***)local_24;
          uStack_b28 = (double)CONCAT44(*(int *)(local_34 + 0xc) + *(int *)(local_34 + 8),
                                        *(int *)(local_34 + 8));
          iStack_b30 = 0xa671bc;
          FUN_009d7490();
          pppuStack_b20 = (undefined ***)0x114;
          local_1c = (undefined4 *)0x0;
          uStack_b28 = (double)CONCAT44(0xa671cd,(undefined4)uStack_b28);
          iVar4 = FUN_00aae9af();
          local_8 = 0x14;
          if (iVar4 == 0) {
            uVar3 = 0;
          }
          else {
            pppuStack_b20 = (undefined ***)0x3c;
            uStack_b28 = (double)CONCAT44(0xa671e7,(undefined4)uStack_b28);
            local_18 = (undefined1 *)iVar4;
            local_30[0] = FUN_00aae9af();
            local_8._0_1_ = 0x15;
            if (local_30[0] == 0) {
              local_8 = CONCAT31(local_8._1_3_,0x14);
              uStack_b28 = (double)CONCAT44(0xa67220,(undefined4)uStack_b28);
              pppuStack_b20 = (undefined ***)iVar4;
              uVar3 = FUN_00990df0();
            }
            else {
              pppuStack_b20 = (undefined ***)0x0;
              uStack_b28 = 0.0;
              puStack_b34 = (undefined4 *)0xa67202;
              iStack_b30 = local_30[0];
              iStack_b2c = iVar5;
              FUN_009d5450();
              local_8 = CONCAT31(local_8._1_3_,0x14);
              uStack_b28 = (double)CONCAT44(0xa6720e,(undefined4)uStack_b28);
              pppuStack_b20 = (undefined ***)iVar4;
              uVar3 = FUN_00990df0();
            }
          }
          local_8 = 0xffffffff;
          pppuStack_b20 = (undefined ***)0x1;
          local_18 = (undefined1 *)&iStack_b30;
          puStack_b38 = (undefined1 *)&iStack_b30;
          puStack_b34 = (undefined4 *)(in_ECX[7] + 0x1c);
          FUN_009a0d70();
          puStack_b38 = local_690;
          puStack_b34 = (undefined4 *)uVar3;
          FUN_009a0cb0();
          local_58 = &PTR_FUN_00e38550;
          local_8 = 0x17;
          local_18 = (undefined1 *)&puStack_b38;
          FUN_00401320();
          FUN_009a14e0(&local_1c);
          iVar5 = in_ECX[10];
          pppuStack_b20 = (undefined ***)0x10;
          uStack_b28 = (double)CONCAT44(0xa6729c,(undefined4)uStack_b28);
          puVar7 = (undefined4 *)FUN_00aae9af();
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = local_1c;
            puVar7[1] = iVar5;
            puVar7[2] = 0;
            *(undefined1 *)(puVar7 + 3) = 0;
          }
          iVar4 = in_ECX[0xb];
          in_ECX[10] = (int)puVar7;
          in_ECX[0xb] = iVar4 + 1;
          if (iVar4 == 0) {
            in_ECX[9] = (int)puVar7;
          }
          else {
            *(undefined4 **)(iVar5 + 8) = puVar7;
          }
          local_58 = &PTR_FUN_00e38318;
          local_8 = 0xffffffff;
          pppuStack_b20 = (undefined ***)0xa672eb;
          FUN_009a0dc0();
          FUN_00a674c8();
          return;
        }
        pppuStack_b20 = *(undefined ****)(local_34 + 8);
        uStack_b28 = (double)CONCAT44(0xa674d5,(undefined4)uStack_b28);
        (*(code *)PTR__free_00f071fc)();
        uStack_b28 = (double)CONCAT44(iVar5,0xa674dc);
        (*(code *)PTR__free_00f071fc)();
        puVar1 = local_14;
      }
    } while ((char)local_3c != '\x01');
    iVar5 = (*(undefined4 **)(local_34 + 8))[1];
    pppuStack_b20 = (undefined ***)iVar5;
    switch(**(undefined4 **)(local_34 + 8)) {
    case 0:
      uStack_b28 = (double)CONCAT44(0xa6754e,(undefined4)uStack_b28);
      pppuStack_b20 = (undefined ***)iVar9;
      FUN_009af8f0();
      *(int *)(in_ECX[7] + 0x68) = iVar5 + 1;
      *(undefined4 *)(in_ECX[7] + 0x2c) = 5;
      pppuStack_b20 = (undefined ***)0xa6756f;
      FUN_009885d0();
      pppuStack_b20 = (undefined ***)0x301;
      uStack_b28 = (double)CONCAT44(0x7da,auStack_1b0);
      local_8 = 0x18;
      iStack_b2c = 0xa6758e;
      FUN_004015b0();
      local_8._0_1_ = 0x19;
      pppuStack_b20 = (undefined ***)0xa675a1;
      pppuStack_b20 = (undefined ***)FUN_00987d20();
      uStack_b28 = (double)CONCAT44(0xa675a7,(undefined4)uStack_b28);
      FUN_00401280();
      local_8 = CONCAT31(local_8._1_3_,0x18);
      pppuStack_b20 = (undefined ***)0xa675b9;
      FUN_00401650();
      local_8 = 0xffffffff;
      pppuStack_b20 = (undefined ***)0xa675cb;
      FUN_00408ad0();
      puVar1 = local_14;
      break;
    case 1:
      *(int *)(iVar9 + 0x40) = iVar5;
      break;
    case 2:
      uStack_b28 = (double)CONCAT44(0xa675de,(undefined4)uStack_b28);
      FUN_009b10b0();
      *(int *)(in_ECX[7] + 0x68) = iVar5 + 1;
      puVar1 = local_14;
      break;
    case 4:
      if (*(int *)(iVar9 + 0x2c) == 2) {
        pppuStack_b20 = (undefined ***)0x4;
        uStack_b28 = (double)CONCAT44(iVar9,0xa675f8);
        FUN_009af7e0();
      }
      *(int *)(in_ECX[7] + 0x54) = iVar5;
      in_ECX[0x32] = iVar5;
      pppuStack_b20 = (undefined ***)0xa67614;
      FUN_009885d0();
      pppuStack_b20 = (undefined ***)0x301;
      uStack_b28 = (double)CONCAT44(0x7f0,auStack_ec);
      local_8 = 0x1a;
      iStack_b2c = 0xa67633;
      FUN_004015b0();
      local_8._0_1_ = 0x1b;
      uStack_b28 = (double)CONCAT44(0xa67647,(undefined4)uStack_b28);
      pppuStack_b20 = (undefined ***)iVar5;
      uVar3 = FUN_00987d20();
      uStack_b28 = (double)CONCAT44(uVar3,0xa6764d);
      pppuStack_b20 = (undefined ***)FUN_00455470();
      uStack_b28 = (double)CONCAT44(0xa67653,(undefined4)uStack_b28);
      FUN_00401280();
      local_8 = CONCAT31(local_8._1_3_,0x1a);
      pppuStack_b20 = (undefined ***)0xa67665;
      FUN_00401650();
      local_8 = 0xffffffff;
      pppuStack_b20 = (undefined ***)0xa67677;
      FUN_00408ad0();
      puVar1 = local_14;
      break;
    case 5:
      if (*(int *)(iVar9 + 0x2c) == 2) goto switchD_00a6751a_caseD_b;
      if (in_ECX[0x32] == iVar5) {
        *(int *)(iVar9 + 0x54) = *(int *)(iVar9 + 0x54) + 1;
        in_ECX[0x32] = *(int *)(in_ECX[7] + 0x54);
      }
      else {
        *(int *)(iVar9 + 0x54) = iVar5;
        in_ECX[0x32] = *(int *)(in_ECX[7] + 0x54);
      }
      break;
    case 7:
      if (iVar5 == *(int *)(iVar9 + 0x6c)) {
        *(undefined1 *)(iVar9 + 0x3c) = 1;
      }
      break;
    case 0xb:
switchD_00a6751a_caseD_b:
      *(undefined4 *)(iVar9 + 0x2c) = 7;
      break;
    case 0xf:
      *(undefined1 *)(iVar9 + 0x25c) = 1;
      pppuStack_b20 = (undefined ***)0xa67abb;
      FUN_009ae5d0();
      iVar5 = in_ECX[7];
      if (*(int *)(iVar5 + 0x2c) != 0xb) {
        puVar7 = *(undefined4 **)(iVar5 + 4);
        *(undefined4 *)(iVar5 + 0x2c) = 0xb;
        for (; puVar7 != (undefined4 *)0x0; puVar7 = (undefined4 *)puVar7[2]) {
          pppuStack_b20 = (undefined ***)0x0;
          uStack_b28 = (double)CONCAT44(0xa67add,(undefined4)uStack_b28);
          (**(code **)(*(int *)*puVar7 + 4))();
        }
      }
      *(undefined4 *)(iVar5 + 0x2c) = 0xb;
      puVar1 = local_14;
      break;
    case 0x10:
      if (*(int *)(iVar9 + 0x2c) != 0xd) {
        *(undefined4 *)(iVar9 + 0x2c) = 0xd;
        pppuStack_b20 = (undefined ***)0xa67b05;
        FUN_009ae5d0();
      }
      *(undefined4 *)(iVar9 + 0x2c) = 0xd;
      *(undefined1 *)(in_ECX[7] + 0x25c) = 0;
      pppuStack_b20 = (undefined ***)0xa67b1f;
      FUN_009ae5d0();
      puVar1 = local_14;
      break;
    case 0x12:
      pppuStack_b20 = (undefined ***)0xa676e0;
      FUN_009885d0();
      pppuStack_b20 = (undefined ***)0x301;
      uStack_b28 = (double)CONCAT44(0x816,auStack_194);
      local_8 = 0x1c;
      iStack_b2c = 0xa676ff;
      FUN_004015b0();
      local_8._0_1_ = 0x1d;
      pppuStack_b20 = (undefined ***)0xa67712;
      pppuStack_b20 = (undefined ***)FUN_00987d20();
      uStack_b28 = (double)CONCAT44(0xa67718,(undefined4)uStack_b28);
      FUN_00401280();
      local_8 = CONCAT31(local_8._1_3_,0x1c);
      pppuStack_b20 = (undefined ***)0xa6772a;
      FUN_00401650();
      local_8 = 0xffffffff;
      pppuStack_b20 = (undefined ***)0xa6773c;
      FUN_00408ad0();
      iVar5 = local_34;
      if (8 < *(uint *)(local_34 + 0xc)) {
        pppuStack_b20 = (undefined ***)0x3c;
        uStack_b28 = (double)CONCAT44(0xa6774c,(undefined4)uStack_b28);
        local_28 = (undefined1 *)FUN_00aae9af();
        local_8 = 0x1e;
        if (local_28 == (undefined1 *)0x0) {
          iVar4 = 0;
        }
        else {
          pppuStack_b20 = *(undefined ****)(iVar5 + 0xc);
          uStack_b28 = (double)CONCAT44(local_28,0xa67767);
          iVar4 = FUN_009d6ea0();
        }
        local_8 = 0xffffffff;
        iStack_b2c = *(undefined4 *)(iVar4 + 4);
        iVar9 = *(int *)(iVar5 + 8) + 8;
        pppuStack_b20 = (undefined ***)local_28;
        uStack_b28 = (double)CONCAT44(*(int *)(iVar5 + 0xc) + -8 + iVar9,iVar9);
        iStack_b30 = 0xa67791;
        FUN_009d7490();
        *(int *)(in_ECX[7] + 0x110) = iVar4;
      }
      iVar5 = in_ECX[7];
      if (*(int *)(iVar5 + 0x2c) != 0xe) {
        if (*(int *)(iVar5 + 0x2c) != 6) {
          puVar7 = *(undefined4 **)(iVar5 + 4);
          *(undefined4 *)(iVar5 + 0x2c) = 6;
          for (; puVar7 != (undefined4 *)0x0; puVar7 = (undefined4 *)puVar7[2]) {
            pppuStack_b20 = (undefined ***)0x8;
            uStack_b28 = (double)CONCAT44(0xa677c2,(undefined4)uStack_b28);
            (**(code **)(*(int *)*puVar7 + 4))();
          }
        }
        *(undefined4 *)(iVar5 + 0x2c) = 6;
      }
      pppuStack_b20 = (undefined ***)0xa677e1;
      FUN_009885d0();
      pppuStack_b20 = (undefined ***)0x301;
      uStack_b28 = (double)CONCAT44(0x823,auStack_15c);
      local_8 = 0x1f;
      iStack_b2c = 0xa67800;
      FUN_004015b0();
      local_8._0_1_ = 0x20;
      pppuStack_b20 = (undefined ***)0xa67813;
      pppuStack_b20 = (undefined ***)FUN_00987d20();
      uStack_b28 = (double)CONCAT44(0xa67819,(undefined4)uStack_b28);
      FUN_00401280();
      local_8 = CONCAT31(local_8._1_3_,0x1f);
      pppuStack_b20 = (undefined ***)0xa6782b;
      FUN_00401650();
      local_8 = 0xffffffff;
      pppuStack_b20 = (undefined ***)0xa6783d;
      FUN_00408ad0();
      puVar1 = local_14;
      break;
    case 0x13:
      local_28 = (undefined1 *)0x0;
      if (*(int *)(iVar9 + 0x6c) == iVar5) {
        local_1d = '\x01';
        break;
      }
    case 3:
      uStack_b28 = (double)CONCAT44(iVar9,0xa6753a);
      FUN_009b0f50();
      puVar1 = local_14;
      break;
    case 0x14:
      *(undefined4 *)(iVar9 + 0x2c) = 9;
      break;
    case 0x15:
      pppuStack_b20 = (undefined ***)0xa6785e;
      FUN_009885d0();
      pppuStack_b20 = (undefined ***)0x301;
      uStack_b28 = (double)CONCAT44(0x82b,auStack_108);
      local_8 = 0x21;
      iStack_b2c = 0xa6787d;
      FUN_004015b0();
      local_8._0_1_ = 0x22;
      pppuStack_b20 = (undefined ***)0xa67890;
      pppuStack_b20 = (undefined ***)FUN_00987d20();
      uStack_b28 = (double)CONCAT44(0xa67896,(undefined4)uStack_b28);
      FUN_00401280();
      local_8 = CONCAT31(local_8._1_3_,0x21);
      pppuStack_b20 = (undefined ***)0xa678a8;
      FUN_00401650();
      local_8 = 0xffffffff;
      pppuStack_b20 = (undefined ***)0xa678ba;
      FUN_00408ad0();
      pppuStack_b20 = (undefined ***)0x3c;
      uStack_b28 = (double)CONCAT44(0xa678c1,(undefined4)uStack_b28);
      local_28 = (undefined1 *)FUN_00aae9af();
      iVar5 = local_34;
      local_8 = 0x23;
      if (local_28 == (undefined1 *)0x0) {
        iVar4 = 0;
      }
      else {
        pppuStack_b20 = (undefined ***)(*(int *)(local_34 + 0xc) + -8);
        uStack_b28 = (double)CONCAT44(local_28,0xa678e2);
        iVar4 = FUN_009d6ea0();
      }
      local_8 = 0xffffffff;
      iStack_b2c = *(undefined4 *)(iVar4 + 4);
      pppuStack_b20 = (undefined ***)local_28;
      iVar9 = *(int *)(iVar5 + 8) + 8;
      uStack_b28 = (double)CONCAT44(*(int *)(iVar5 + 0xc) + -8 + iVar9,iVar9);
      iStack_b30 = 0xa6790b;
      FUN_009d7490();
      pppuStack_b20 = (undefined ***)0x8;
      uStack_b28 = (double)CONCAT44(0xa67912,(undefined4)uStack_b28);
      pppuStack_b20 = (undefined ***)FUN_00aae9af();
      if (pppuStack_b20 == (undefined ***)0x0) {
        pppuStack_b20 = (undefined ***)0x0;
        uStack_b28 = (double)CONCAT44(0xa67934,(undefined4)uStack_b28);
        FUN_009b15c0();
        puVar1 = local_14;
      }
      else {
        *pppuStack_b20 = (undefined **)iVar4;
        uStack_b28 = (double)CONCAT44(0xa67924,(undefined4)uStack_b28);
        FUN_009b15c0();
        puVar1 = local_14;
      }
      break;
    case 0x19:
      pppuStack_b20 = (undefined ***)0xa67949;
      FUN_009885d0();
      local_8 = 0x24;
      uStack_b28 = (double)CONCAT44(aiStack_d0,0xa6795f);
      pppuStack_b20 = (undefined ***)auStack_140;
      FUN_009da390();
      local_8._0_1_ = 0x26;
      pppuStack_b20 = (undefined ***)0xa6796a;
      FUN_00408ad0();
      pppuStack_b20 = (undefined ***)0xa6797d;
      FUN_005dac60();
      local_8._0_1_ = 0x27;
      uVar3 = *(undefined4 *)*puStack_a0;
      pppuStack_b20 = (undefined ***)0xa6799b;
      FUN_009885d0();
      pppuStack_b20 = (undefined ***)0x114;
      local_8._0_1_ = 0x28;
      uStack_b28 = (double)CONCAT44(0xa679a9,(undefined4)uStack_b28);
      iVar5 = FUN_00aae9af();
      local_8._0_1_ = 0x29;
      local_28 = (undefined1 *)iVar5;
      if (iVar5 == 0) {
        uVar3 = 0;
      }
      else {
        pppuStack_b20 = (undefined ***)0x3c;
        uStack_b28 = (double)CONCAT44(0xa679c0,(undefined4)uStack_b28);
        local_18 = (undefined1 *)FUN_00aae9af();
        local_8._0_1_ = 0x2a;
        if (local_18 == (undefined1 *)0x0) {
          local_8._0_1_ = 0x29;
          uStack_b28 = (double)CONCAT44(0xa679f7,(undefined4)uStack_b28);
          pppuStack_b20 = (undefined ***)iVar5;
          uVar3 = FUN_00990df0();
        }
        else {
          pppuStack_b20 = (undefined ***)0x0;
          uStack_b28 = 0.0;
          puStack_b34 = (undefined4 *)0xa679db;
          iStack_b30 = (int)local_18;
          iStack_b2c = uVar3;
          FUN_009d5450();
          local_8._0_1_ = 0x29;
          uStack_b28 = (double)CONCAT44(0xa679e7,(undefined4)uStack_b28);
          pppuStack_b20 = (undefined ***)iVar5;
          uVar3 = FUN_00990df0();
        }
      }
      pppuStack_b20 = (undefined ***)0x1;
      uStack_b28 = (double)CONCAT44(uVar3,local_690);
      local_8._0_1_ = 0x28;
      iStack_b2c = 0xa67a14;
      FUN_009a0bf0();
      local_8 = CONCAT31(local_8._1_3_,0x2c);
      pppuStack_b20 = (undefined ***)0xa67a23;
      FUN_00408ad0();
      pppuStack_b20 = (undefined ***)local_690;
      uStack_b28 = (double)CONCAT44(0xa67a2f,(undefined4)uStack_b28);
      FUN_009a1440();
      pppuStack_b20 = (undefined ***)local_690;
      uStack_b28 = (double)CONCAT44(0xa67a47,(undefined4)uStack_b28);
      (**(code **)(aiStack_d0[0] + 0xc))();
      pppuStack_b20 = (undefined ***)0xa67a5a;
      cVar2 = FUN_009da970();
      if (cVar2 == '\0') {
        *(undefined4 *)(in_ECX[7] + 0x2c) = 0xe;
        pppuStack_b20 = (undefined ***)0xa67a76;
        FUN_009b0f10();
      }
      local_8 = CONCAT31(local_8._1_3_,0x27);
      pppuStack_b20 = (undefined ***)0xa67a85;
      FUN_009a0dc0();
      pppuStack_b20 = (undefined ***)0xa67a90;
      FUN_009a63f0();
      local_8 = 0xffffffff;
      pppuStack_b20 = (undefined ***)0xa67aa2;
      FUN_006336b0();
      puVar1 = local_14;
    }
  } while( true );
}

