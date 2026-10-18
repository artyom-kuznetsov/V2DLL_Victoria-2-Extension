// FUN_00a65fa0 @ 00a65fa0 body=[[00a65fa0, 00a660fe] [00a66102, 00a66283] [00a66287, 00a66401] [00a66405, 00a664de] [00a664e2, 00a66925]]


int * FUN_00a65fa0(void)

{
  short *psVar1;
  char *cp;
  ulong uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  short *psVar6;
  undefined4 uVar7;
  void *_Dst;
  undefined1 *puVar8;
  int *in_ECX;
  uint uVar9;
  float10 fVar10;
  undefined1 auStack_2ec [12];
  undefined4 uStack_2e0;
  undefined4 *puStack_2dc;
  undefined4 uStack_2d8;
  undefined *puStack_2d4;
  undefined ***pppuStack_2d0;
  undefined ***pppuStack_2cc;
  int *piStack_2c8;
  uint auStack_2a4 [4];
  undefined4 uStack_294;
  uint uStack_290;
  int iStack_28c;
  undefined8 local_288;
  uint local_27c;
  int iStack_278;
  char cStack_274;
  int iStack_26c;
  uint uStack_268;
  undefined4 uStack_264;
  undefined1 *puStack_260;
  int iStack_25c;
  uint uStack_254;
  undefined1 auStack_248 [100];
  undefined **ppuStack_1e4;
  undefined **appuStack_1e0 [4];
  undefined **ppuStack_1d0;
  undefined1 auStack_184 [356];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_00b547ae;
  pvStack_14 = ExceptionList;
  iVar5 = in_ECX[0x30];
  if (iVar5 < 0xff) {
    cp = (char *)(in_ECX[0x1f] + 4 + iVar5 * 0x24);
    ExceptionList = &pvStack_14;
    in_ECX[0x30] = iVar5 + 1;
    if (*(int *)(cp + 0x1c) < 0) {
      if (0xf < *(uint *)(cp + 0x14)) {
        cp = *(char **)cp;
      }
      uVar2 = inet_addr(cp);
      local_288 = CONCAT44(CONCAT22(local_288._6_2_,(short)in_ECX[5]),uVar2);
      FUN_00a8aaf0();
      (**(code **)(*(int *)in_ECX[0x2f] + 4))();
    }
  }
  else {
    ExceptionList = &pvStack_14;
    fVar10 = (float10)(**(code **)(*(int *)in_ECX[0x2f] + 0x14))();
    if ((float10)5.0 < fVar10) {
      uStack_268 = 0xf;
      iStack_26c = 0;
      local_27c = local_27c & 0xffffff00;
      FUN_00409350();
      iStack_c = 0;
      piStack_2c8 = (int *)0xa6608f;
      piStack_2c8 = (int *)FUN_004015b0();
      iStack_c._0_1_ = 1;
      pppuStack_2cc = (undefined ***)0xa660aa;
      FUN_00987d50();
      FUN_00401280();
      iStack_c = (uint)iStack_c._1_3_ << 8;
      FUN_00987ac0();
      ppuStack_1d0 = std::ios_base::vftable;
      FUN_00aad52d();
      iStack_c = 0xffffffff;
      if (0xf < uStack_268) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uVar9 = *(uint *)(in_ECX[6] + 0x20);
      if (uVar9 < *(int *)(in_ECX[6] + 0x24) * 0xe8 + uVar9) {
        do {
          if (*(int *)(uVar9 + 0x18) != 4) {
            FUN_00a8a450();
            FUN_00a8a360();
          }
          uVar9 = uVar9 + 0xe8;
        } while (uVar9 < (uint)(*(int *)(in_ECX[6] + 0x24) * 0xe8 + *(int *)(in_ECX[6] + 0x20)));
      }
      in_ECX[0x30] = 0;
    }
  }
  local_288 = 0;
  if ((char)in_ECX[0x2e] != '\0') {
    piStack_2c8 = (int *)0xa66171;
    iVar3 = FUN_00a89d00();
    iVar5 = iStack_26c;
    while (0 < iVar3) {
      iStack_26c = iVar5;
      if (local_27c == 1) {
        uVar9 = 0;
        uStack_290 = 0xf;
        uStack_294 = 0;
        auStack_2a4[0] = auStack_2a4[0] & 0xffffff00;
        FUN_00409350();
        iStack_c = 2;
        piStack_2c8 = (int *)0xa661d3;
        piVar4 = (int *)FUN_004015b0();
        iStack_c = CONCAT31(iStack_c._1_3_,3);
        pppuStack_2cc = (undefined ***)0xa661ee;
        piStack_2c8 = piVar4;
        FUN_00987d50();
        pppuStack_2d0 = (undefined ***)0xa661f4;
        pppuStack_2cc = (undefined ***)piVar4;
        FUN_00408be0();
        if ((*(byte *)(*(int *)(*piVar4 + 4) + 0xc + (int)piVar4) & 6) == 0) {
          pppuStack_2d0 = (undefined ***)0xa6620d;
          iVar5 = (**(code **)(**(int **)(*(int *)(*piVar4 + 4) + 0x38 + (int)piVar4) + 0x34))();
          if (iVar5 == -1) {
            uVar9 = 4;
          }
        }
        if (uVar9 != 0) {
          puStack_2d4 = (undefined *)(*(uint *)((int)piVar4 + *(int *)(*piVar4 + 4) + 0xc) | uVar9);
          if (*(int *)((int)piVar4 + *(int *)(*piVar4 + 4) + 0x38) == 0) {
            puStack_2d4 = (undefined *)((uint)puStack_2d4 | 4);
          }
          pppuStack_2d0 = (undefined ***)0x0;
          uStack_2d8 = 0xa66238;
          FUN_00401120();
        }
        pppuStack_2d0 = &ppuStack_1e4;
        uStack_20 = CONCAT31(uStack_20._1_3_,2);
        puStack_2d4 = (undefined *)0xa6624d;
        FUN_00987ac0();
        pppuStack_2d0 = &ppuStack_1e4;
        ppuStack_1e4 = std::ios_base::vftable;
        puStack_2d4 = (undefined *)0xa66265;
        FUN_00aad52d();
        uStack_20 = 0xffffffff;
        if (0xf < auStack_2a4[0]) {
                    /* WARNING: Subroutine does not return */
          puStack_2d4 = &UNK_00a66284;
          FUN_00aae91b();
        }
        uStack_264 = 0x18;
        puStack_260 = (undefined1 *)0x0;
        uVar9 = *(uint *)(in_ECX[6] + 0x20);
        puStack_2d4 = (undefined *)0x0;
        if (uVar9 < *(int *)(in_ECX[6] + 0x24) * 0xe8 + uVar9) {
          psVar6 = (short *)(uVar9 + 0x10);
          do {
            if ((*(int *)(psVar6 + -2) == *(int *)(iStack_28c + 0xc)) &&
               (*psVar6 == *(short *)(iStack_28c + 0x10))) goto LAB_00a662e5;
            psVar1 = psVar6 + 0x6c;
            puStack_2d4 = (undefined *)((int)puStack_2d4 + 1);
            psVar6 = psVar6 + 0x74;
          } while (psVar1 < (short *)(*(int *)(in_ECX[6] + 0x24) * 0xe8 + *(int *)(in_ECX[6] + 0x20)
                                     ));
        }
        puStack_2d4 = (undefined *)0xffffffff;
LAB_00a662e5:
        pppuStack_2d0 = (undefined ***)0x1;
        uStack_2d8 = 8;
        puStack_2dc = &uStack_264;
        uStack_2e0 = 0xa662f8;
        (**(code **)(*in_ECX + 0x14))();
        iVar5 = FUN_00a6a2c0();
        *(undefined4 *)(iVar5 + 0x1c) = 0;
      }
      else if (local_27c == 3) {
        if (cStack_274 == '\x01') {
          uStack_254 = (*(int **)(iVar5 + 8))[1];
          iVar3 = **(int **)(iVar5 + 8);
          auStack_2a4[0]._1_3_ = (uint3)(auStack_2a4[0] >> 8);
          if (iVar3 == 0x11) {
            uStack_294 = 0;
            auStack_2a4[0] = (uint)auStack_2a4[0]._1_3_ << 8;
            uStack_290 = 0xf;
            FUN_00409350();
            iStack_c = 4;
            piStack_2c8 = (int *)0xa66391;
            piStack_2c8 = (int *)FUN_004015b0();
            iStack_c._0_1_ = 5;
            pppuStack_2cc = (undefined ***)0xa663ad;
            FUN_00987d50();
            FUN_00401280();
            iStack_c = CONCAT31(iStack_c._1_3_,4);
            FUN_00987ac0();
            ppuStack_1d0 = std::ios_base::vftable;
            FUN_00aad52d();
            iStack_c = 0xffffffff;
            if (0xf < uStack_290) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_288 = (ulonglong)uStack_254;
          }
          else if (iVar3 == 0x17) {
            uStack_294 = 0;
            auStack_2a4[0] = (uint)auStack_2a4[0]._1_3_ << 8;
            uStack_290 = 0xf;
            FUN_00409350();
            iStack_c = 6;
            piStack_2c8 = (int *)0xa6646e;
            piStack_2c8 = (int *)FUN_004015b0();
            iStack_c._0_1_ = 7;
            pppuStack_2cc = (undefined ***)0xa6648a;
            FUN_00987d50();
            FUN_00401280();
            iStack_c = CONCAT31(iStack_c._1_3_,6);
            FUN_00987ac0();
            ppuStack_1d0 = std::ios_base::vftable;
            FUN_00aad52d();
            uVar9 = uStack_254;
            iStack_c = 0xffffffff;
            if (0xf < uStack_290) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            iVar5 = FUN_00a6a2c0();
            *(uint *)(iVar5 + 0x1c) = uVar9;
          }
          else {
            iVar3 = FUN_00a6a2c0();
            if ((0 < *(int *)(iVar3 + 0x1c)) && (iVar3 = FUN_00a6a2c0(), *(int *)(iVar3 + 0x1c) < 3)
               ) {
              FUN_009885d0();
              iStack_c = 8;
              piStack_2c8 = (int *)0xa6657b;
              uVar7 = FUN_004015b0();
              iStack_c = CONCAT31(iStack_c._1_3_,9);
              pppuStack_2cc = (undefined ***)0xa66597;
              piStack_2c8 = (int *)uVar7;
              FUN_00987d50();
              pppuStack_2d0 = (undefined ***)0xa6659d;
              pppuStack_2cc = (undefined ***)uVar7;
              FUN_00401280();
              pppuStack_2cc = appuStack_1e0;
              uStack_1c = CONCAT31(uStack_1c._1_3_,8);
              pppuStack_2d0 = (undefined ***)0xa665b5;
              FUN_00987ac0();
              pppuStack_2cc = appuStack_1e0;
              appuStack_1e0[0] = std::ios_base::vftable;
              pppuStack_2d0 = (undefined ***)0xa665cd;
              FUN_00aad52d();
              uStack_1c = 0xffffffff;
              pppuStack_2cc = (undefined ***)0xa665e4;
              FUN_00408ad0();
              pppuStack_2cc = *(undefined ****)(iVar5 + 0xc);
              pppuStack_2d0 = (undefined ***)0xa665ed;
              _Dst = (void *)FUN_00aad56b();
              piStack_2c8 = (int *)0xa66600;
              FID_conflict__memcpy(_Dst,*(void **)(iVar5 + 8),*(size_t *)(iVar5 + 0xc));
              *(undefined1 *)((int)_Dst + *(int *)(iVar5 + 0xc)) = 0;
              FUN_009885d0();
              iStack_c = 10;
              FUN_009885d0();
              iStack_c._0_1_ = 0xb;
              puStack_260 = auStack_2ec;
              FUN_009da390(auStack_2ec,auStack_2a4);
              iStack_c._0_1_ = 0xc;
              iVar5 = FUN_00a6a2c0();
              uVar7 = FUN_00a6a2c0();
              iStack_c._0_1_ = 0xb;
              FUN_009f8180(auStack_248,in_ECX[7] + 0xbc,uVar7,in_ECX[5],auStack_184,
                           *(undefined4 *)(iStack_278 + 0xc),(undefined4)local_288,0,
                           *(undefined4 *)(iVar5 + 0x1c));
              iStack_c._0_1_ = 0xd;
              FUN_00648af0();
              FUN_00648a60();
              iStack_c._0_1_ = 0x10;
              FUN_00408ad0();
              piStack_2c8 = (int *)0xa66711;
              FUN_007689f0();
              if (iStack_25c == 0) {
                iVar5 = in_ECX[0x24];
                puVar8 = (undefined1 *)FUN_00aae9af();
                iStack_c._0_1_ = 0x11;
                puStack_260 = puVar8;
                if (puVar8 == (undefined1 *)0x0) {
                  puVar8 = (undefined1 *)0x0;
                }
                else {
                  FUN_00648af0();
                  *(int *)(puVar8 + 0xa4) = iVar5;
                  *(undefined4 *)(puVar8 + 0xa8) = 0;
                  puVar8[0xac] = 0;
                }
                iStack_c._0_1_ = 0x10;
                iVar3 = in_ECX[0x25];
                in_ECX[0x24] = (int)puVar8;
                in_ECX[0x25] = iVar3 + 1;
                if (iVar3 == 0) {
                  in_ECX[0x23] = (int)puVar8;
                }
                else {
                  *(undefined1 **)(iVar5 + 0xa8) = puVar8;
                }
              }
              piVar4 = (int *)FUN_00aae9af();
              if (piVar4 == (int *)0x0) {
                piVar4 = (int *)0x0;
              }
              else {
                *piVar4 = in_ECX[0x25] + -1;
              }
              *(int **)(iStack_278 + 0x14) = piVar4;
              iVar5 = FUN_00a6a2c0();
              *(undefined4 *)(iVar5 + 0x1c) = 3;
              FUN_00648a60();
              iStack_c = 0xffffffff;
              FUN_00408ad0();
            }
          }
          (*(code *)PTR__free_00f071fc)();
          (*(code *)PTR__free_00f071fc)();
        }
      }
      else if ((local_27c == 2) && (*(int *)(iStack_278 + 0x14) != 0)) {
        iVar5 = **(int **)(iStack_278 + 0x14);
        *(undefined4 *)(iStack_278 + 0x14) = 0;
        iVar3 = iVar5;
        if (iVar5 < in_ECX[0x25]) {
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          }
          FUN_00648af0();
          iStack_c = 0x12;
          iVar3 = FUN_00a6a2c0();
          *(undefined4 *)(iVar3 + 0x1c) = 0xffffffff;
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
          }
          piStack_2c8 = (int *)&stack0xfffffd44;
          pppuStack_2cc = (undefined ***)0xa668d4;
          FUN_007689f0();
          FUN_00768980();
          iStack_c = 0xffffffff;
          FUN_00648a60();
        }
      }
      piStack_2c8 = (int *)0xa66900;
      iVar3 = FUN_00a89d00();
      iVar5 = iStack_26c;
    }
  }
  ExceptionList = pvStack_14;
  return in_ECX + 0x23;
}

