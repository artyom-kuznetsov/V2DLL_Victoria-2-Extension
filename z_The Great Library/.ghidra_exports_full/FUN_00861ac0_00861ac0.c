// FUN_00861ac0 @ 00861ac0 body=[[00861ac0, 008621b8] [008621c0, 008626cb]]


/* WARNING: Type propagation algorithm not settling */

void FUN_00861ac0(int param_1)

{
  char cVar1;
  int iVar2;
  void **ppvVar3;
  undefined1 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int in_ECX;
  int *piVar11;
  undefined1 auStack_3e4 [8];
  undefined4 uStack_3dc;
  int iStack_3d8;
  undefined1 *puStack_3d4;
  char *pcStack_3d0;
  undefined4 *******pppppppuStack_3cc;
  int *piStack_3bc;
  char *pcStack_3b4;
  int iStack_3b0;
  int iStack_3ac;
  undefined1 *puStack_3a8;
  undefined1 auStack_39c [28];
  undefined4 uStack_380;
  undefined4 uStack_378;
  undefined1 *puStack_370;
  undefined4 uStack_36c;
  undefined1 auStack_368 [4];
  undefined4 *******apppppppuStack_364 [5];
  uint uStack_350;
  char acStack_348 [8];
  char acStack_340 [8];
  char acStack_338 [8];
  int aiStack_330 [66];
  int aiStack_228 [66];
  int aiStack_120 [67];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b4fb65;
  iVar10 = *(int *)(param_1 + 0x20);
  ppvVar3 = &local_14;
  local_14 = ExceptionList;
  do {
    ExceptionList = ppvVar3;
    if (iVar10 == 4) {
      ExceptionList = local_14;
      return;
    }
    if (iVar10 == 0xaa3) {
      pcStack_3d0 = (char *)(param_1 + 0x22c);
      pcVar5 = pcStack_3d0;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pppppppuStack_3cc = (undefined4 *******)((int)pcVar5 - (param_1 + 0x22d));
      puStack_3d4 = (undefined1 *)0x861b33;
      FUN_00409350();
    }
    else if (iVar10 == 0xaa4) {
      pcStack_3d0 = (char *)(param_1 + 0x22c);
      pcVar5 = pcStack_3d0;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pppppppuStack_3cc = (undefined4 *******)((int)pcVar5 - (param_1 + 0x22d));
      puStack_3d4 = (undefined1 *)0x861b63;
      FUN_00409350();
    }
    else if (iVar10 == 0xaa5) {
      pcStack_3d0 = (char *)(param_1 + 0x22c);
      pcVar5 = pcStack_3d0;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pppppppuStack_3cc = (undefined4 *******)((int)pcVar5 - (param_1 + 0x22d));
      puStack_3d4 = (undefined1 *)0x861b96;
      FUN_00409350();
    }
    else if (iVar10 == 0xaa6) {
      pcStack_3d0 = (char *)(param_1 + 0x22c);
      pcVar5 = pcStack_3d0;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pppppppuStack_3cc = (undefined4 *******)((int)pcVar5 - (param_1 + 0x22d));
      puStack_3d4 = (undefined1 *)0x861bc6;
      FUN_00409350();
    }
    else if (iVar10 == 0xaa7) {
      pcStack_3d0 = (char *)(param_1 + 0x22c);
      pcVar5 = pcStack_3d0;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pppppppuStack_3cc = (undefined4 *******)((int)pcVar5 - (param_1 + 0x22d));
      puStack_3d4 = (undefined1 *)0x861bf6;
      FUN_00409350();
    }
    else if (iVar10 == 0xaa8) {
      pcStack_3d0 = (char *)(param_1 + 0x22c);
      pcVar5 = pcStack_3d0;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pppppppuStack_3cc = (undefined4 *******)((int)pcVar5 - (param_1 + 0x22d));
      puStack_3d4 = (undefined1 *)0x861c26;
      FUN_00409350();
    }
    else if (iVar10 == 0xaa9) {
      pcStack_3d0 = (char *)(param_1 + 0x22c);
      pcVar5 = pcStack_3d0;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pppppppuStack_3cc = (undefined4 *******)((int)pcVar5 - (param_1 + 0x22d));
      puStack_3d4 = (undefined1 *)0x861c56;
      FUN_00409350();
    }
    else if (iVar10 == 0xaaa) {
      pppppppuStack_3cc = (undefined4 *******)(in_ECX + 0x120);
      pcStack_3d0 = (char *)0x861c74;
      FUN_004012f0();
    }
    else if (iVar10 == 0xaab) {
      pppppppuStack_3cc = (undefined4 *******)(in_ECX + 0x13c);
      pcStack_3d0 = (char *)0x861c92;
      FUN_004012f0();
    }
    else if (iVar10 == 0xaac) {
      pppppppuStack_3cc = (undefined4 *******)(in_ECX + 0x158);
      pcStack_3d0 = (char *)0x861cb0;
      FUN_004012f0();
    }
    else if (iVar10 == 0xaa1) {
      pppppppuStack_3cc = (undefined4 *******)0x861ccb;
      FUN_009885d0();
      pppppppuStack_3cc = (undefined4 *******)0x861cd7;
      uVar4 = FUN_0040b360();
      *(undefined1 *)(in_ECX + 0x1a5) = uVar4;
      pppppppuStack_3cc = (undefined4 *******)0x861ce6;
      FUN_00408ad0();
    }
    else if (iVar10 == 0xa9b) {
      pppppppuStack_3cc = (undefined4 *******)(in_ECX + 0x2c);
      pcStack_3d0 = (char *)0x861d01;
      FUN_004012f0();
    }
    else if (iVar10 == 0xa9c) {
      pppppppuStack_3cc = (undefined4 *******)0x861d17;
      (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
      pppppppuStack_3cc = (undefined4 *******)(*(int *)(param_1 + 0x1c) + 0x10);
      pcStack_3d0 = (char *)0x861d23;
      uVar6 = FUN_00aaf0c5();
      *(undefined4 *)(in_ECX + 0x48) = uVar6;
      pppppppuStack_3cc = (undefined4 *******)0x861d33;
      (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
      pppppppuStack_3cc = (undefined4 *******)(*(int *)(param_1 + 0x1c) + 0x10);
      pcStack_3d0 = (char *)0x861d3f;
      uVar6 = FUN_00aaf0c5();
      *(undefined4 *)(in_ECX + 0x4c) = uVar6;
      pppppppuStack_3cc = (undefined4 *******)0x861d4f;
      (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
    }
    else if (iVar10 == 0xa9d) {
      pppppppuStack_3cc = (undefined4 *******)0x861d65;
      (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
      pppppppuStack_3cc = (undefined4 *******)(*(int *)(param_1 + 0x1c) + 0x10);
      pcStack_3d0 = (char *)0x861d71;
      uVar6 = FUN_00aaf0c5();
      *(undefined4 *)(in_ECX + 0x50) = uVar6;
      pppppppuStack_3cc = (undefined4 *******)0x861d81;
      (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
      pppppppuStack_3cc = (undefined4 *******)(*(int *)(param_1 + 0x1c) + 0x10);
      pcStack_3d0 = (char *)0x861d8d;
      uVar6 = FUN_00aaf0c5();
      *(undefined4 *)(in_ECX + 0x54) = uVar6;
      pppppppuStack_3cc = (undefined4 *******)0x861d9d;
      (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
    }
    else {
      if (iVar10 == 0xab4) {
        pppppppuStack_3cc = (undefined4 *******)0x861db8;
        FUN_009885d0();
        uStack_c = 0;
        pcStack_3d0 = (char *)0x861dd1;
        pppppppuStack_3cc = (undefined4 *******)auStack_39c;
        FUN_00868200();
      }
      else {
        if (iVar10 != 0xab3) {
          if (iVar10 == 0xa9a) {
            pppppppuStack_3cc =
                 (undefined4 *******)(in_ECX + 0x1d4 + *(int *)(in_ECX + 0x1d0) * 0x1c);
            *(int *)(in_ECX + 0x1d0) = *(int *)(in_ECX + 0x1d0) + 1;
            pcStack_3d0 = (char *)0x861e3a;
            FUN_004012f0();
          }
          else if (iVar10 == 0x8c) {
            pppppppuStack_3cc =
                 (undefined4 *******)(in_ECX + 0x2d0 + *(int *)(in_ECX + 0x1d0) * 0x1c);
            pcStack_3d0 = (char *)0x861e68;
            FUN_004012f0();
          }
          else if (iVar10 == 0xa9f) {
            pppppppuStack_3cc = (undefined4 *******)0x861e7e;
            (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
            pppppppuStack_3cc = (undefined4 *******)(*(int *)(param_1 + 0x1c) + 0x10);
            pcStack_3d0 = (char *)0x861e8a;
            uVar6 = FUN_00aaf0c5();
            *(undefined4 *)(in_ECX + 0x3fc + *(int *)(in_ECX + 0x1d0) * 8) = uVar6;
            pppppppuStack_3cc = (undefined4 *******)0x861ea4;
            (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
            pppppppuStack_3cc = (undefined4 *******)(*(int *)(param_1 + 0x1c) + 0x10);
            pcStack_3d0 = (char *)0x861eb0;
            uVar6 = FUN_00aaf0c5();
            *(undefined4 *)(in_ECX + 0x400 + *(int *)(in_ECX + 0x1d0) * 8) = uVar6;
            pppppppuStack_3cc = (undefined4 *******)0x861eca;
            (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
          }
          else if (iVar10 == 0xaa0) {
            pppppppuStack_3cc = (undefined4 *******)0x861ee0;
            (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
            pppppppuStack_3cc = (undefined4 *******)(*(int *)(param_1 + 0x1c) + 0x10);
            pcStack_3d0 = (char *)0x861eec;
            uVar6 = FUN_00aaf0c5();
            *(undefined4 *)(in_ECX + 0x44c + *(int *)(in_ECX + 0x1d0) * 8) = uVar6;
            pppppppuStack_3cc = (undefined4 *******)0x861f06;
            (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
            pppppppuStack_3cc = (undefined4 *******)(*(int *)(param_1 + 0x1c) + 0x10);
            pcStack_3d0 = (char *)0x861f12;
            uVar6 = FUN_00aaf0c5();
            *(undefined4 *)(in_ECX + 0x450 + *(int *)(in_ECX + 0x1d0) * 8) = uVar6;
            pppppppuStack_3cc = (undefined4 *******)0x861f2c;
            (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
          }
          else {
            if (iVar10 == 0xaa2) {
              pppppppuStack_3cc = (undefined4 *******)0x861f47;
              FUN_009885d0();
              uStack_c = 2;
              pcStack_3d0 = (char *)0x861f60;
              pppppppuStack_3cc = (undefined4 *******)auStack_39c;
              FUN_00868200();
              goto LAB_0086248c;
            }
            if (iVar10 == 0xaad) {
              pppppppuStack_3cc = (undefined4 *******)(param_1 + 0x22c);
              pcStack_3d0 = (char *)0x861f78;
              uVar6 = FUN_00aaf0c5();
              *(undefined4 *)(in_ECX + 0x1a8) = uVar6;
            }
            else {
              if (iVar10 == 0xab5) {
                pppppppuStack_3cc = (undefined4 *******)0x861f9c;
                FUN_009885d0();
                uStack_c = 3;
                pcStack_3d0 = (char *)0x861fb5;
                pppppppuStack_3cc = (undefined4 *******)auStack_39c;
                FUN_00868200();
                goto LAB_0086248c;
              }
              if (iVar10 == 0xab0) {
                pppppppuStack_3cc = (undefined4 *******)(param_1 + 0x22c);
                pcStack_3d0 = (char *)0x861fcd;
                uVar6 = FUN_00aaf0c5();
                *(undefined4 *)(in_ECX + 0x1ac) = uVar6;
              }
              else if (iVar10 == 0xab2) {
                pppppppuStack_3cc = (undefined4 *******)(param_1 + 0x22c);
                pcStack_3d0 = (char *)0x861fee;
                uVar6 = FUN_00aaf0c5();
                *(undefined4 *)(in_ECX + 0x1cc) = uVar6;
              }
              else if (iVar10 == 0xab1) {
                pppppppuStack_3cc = (undefined4 *******)(in_ECX + 0x1b0);
                pcStack_3d0 = (char *)0x862015;
                FUN_004012f0();
              }
              else if (iVar10 == 0xab7) {
                pppppppuStack_3cc = (undefined4 *******)(param_1 + 0x22c);
                pcStack_3d0 = (char *)0x86202d;
                uVar6 = FUN_00aaf0c5();
                *(undefined4 *)(in_ECX + 0x6f4) = uVar6;
              }
              else if (iVar10 == 0x3b6) {
                pppppppuStack_3cc = (undefined4 *******)param_1;
                pcStack_3d0 = (char *)0x862054;
                (**(code **)(*(int *)(in_ECX + 0x72c) + 0xc))();
              }
              else if (iVar10 == 0x58) {
                pppppppuStack_3cc = (undefined4 *******)param_1;
                pcStack_3d0 = (char *)0x86206a;
                (**(code **)(*(int *)(in_ECX + 0xc) + 0xc))();
              }
              else if (iVar10 == 0xab9) {
                pppppppuStack_3cc = (undefined4 *******)0x862085;
                FUN_009885d0();
                pppppppuStack_3cc = (undefined4 *******)0x862091;
                uVar4 = FUN_0040b360();
                *(undefined1 *)(in_ECX + 0x1a4) = uVar4;
                pppppppuStack_3cc = (undefined4 *******)0x86209e;
                FUN_00408ad0();
              }
              else if (iVar10 == 0xaba) {
                pppppppuStack_3cc = (undefined4 *******)0x8620b4;
                (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
                if (*(int *)(*(int *)(param_1 + 0x1c) + 0xc) != 4) {
                  iVar10 = in_ECX + 0x4e0;
                  do {
                    pppppppuStack_3cc = (undefined4 *******)(iVar10 + -0x1c);
                    pcStack_3d0 = (char *)0x8620d2;
                    FUN_004012f0();
                    pppppppuStack_3cc = (undefined4 *******)0x8620dc;
                    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
                    pppppppuStack_3cc = (undefined4 *******)0x8620e6;
                    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
                    pcStack_3d0 = (char *)0x8620f5;
                    pppppppuStack_3cc = (undefined4 *******)iVar10;
                    FUN_004012f0();
                    pppppppuStack_3cc = (undefined4 *******)0x8620ff;
                    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
                    iVar10 = iVar10 + 0x38;
                  } while (*(int *)(*(int *)(param_1 + 0x1c) + 0xc) != 4);
                }
              }
              else if (iVar10 == 0xabb) {
                pppppppuStack_3cc = (undefined4 *******)(param_1 + 0x22c);
                pcStack_3d0 = (char *)0x86211f;
                uVar6 = FUN_00aaf0c5();
                *(undefined4 *)(in_ECX + 0x85c) = uVar6;
              }
              else if (iVar10 == 0xacb) {
                pppppppuStack_3cc = (undefined4 *******)(param_1 + 0x22c);
                pcStack_3d0 = (char *)0x862140;
                uVar6 = FUN_00aaf0c5();
                *(undefined4 *)(in_ECX + 0x860) = uVar6;
              }
              else if (iVar10 == 0xaca) {
                pppppppuStack_3cc = (undefined4 *******)(param_1 + 0x22c);
                pcStack_3d0 = (char *)0x862161;
                uVar6 = FUN_00aaf0c5();
                *(undefined4 *)(in_ECX + 0x864) = uVar6;
              }
              else if (iVar10 == 0x8af) {
                uStack_380 = 0x2d2d2d;
                pcStack_3b4 = (char *)0x2d2d2d;
                uStack_378 = 0x2d2d2d;
                iStack_3b0 = 0;
                uStack_36c = *(undefined4 *)(DAT_012588e8 + 0xb0c);
                piStack_3bc = (int *)0x0;
                while( true ) {
                  piVar7 = *(int **)(param_1 + 0x1c);
                  if ((char)piVar7[0x44] == '\0') {
                    pppppppuStack_3cc = (undefined4 *******)0x8621d5;
                    iVar10 = (**(code **)(*piVar7 + 4))();
                    piVar7[2] = iVar10;
                    if (iVar10 == 0) {
                      piVar7[3] = 0x13;
                    }
                    *(undefined1 *)(piVar7 + 0x44) = 1;
                  }
                  piVar7 = piVar7 + 3;
                  piVar11 = aiStack_330;
                  for (iVar10 = 0x41; iVar10 != 0; iVar10 = iVar10 + -1) {
                    *piVar11 = *piVar7;
                    piVar7 = piVar7 + 1;
                    piVar11 = piVar11 + 1;
                  }
                  if ((aiStack_330[0] == 4) || (aiStack_330[0] == 0x13)) break;
                  pppppppuStack_3cc = (undefined4 *******)param_1;
                  pcStack_3d0 = (char *)0x86221a;
                  FUN_009a1440();
                  iVar10 = *(int *)(param_1 + 0x20);
                  if (iVar10 == 0x381) {
                    pppppppuStack_3cc = (undefined4 *******)(param_1 + 0x22c);
                    pcStack_3d0 = acStack_338;
                    puStack_3d4 = DAT_012587e4;
                    iStack_3d8 = 0x86223f;
                    piVar7 = (int *)FUN_0055c6c0();
                    pcStack_3b4 = (char *)*piVar7;
                    iStack_3b0 = piVar7[1];
                  }
                  else if (iVar10 == 0x382) {
                    pppppppuStack_3cc = (undefined4 *******)(param_1 + 0x22c);
                    pcStack_3d0 = acStack_340;
                    puStack_3d4 = DAT_012587e4;
                    iStack_3d8 = 0x862273;
                    FUN_0055c6c0();
                  }
                  else if (iVar10 == 0x2a1) {
                    puStack_370 = auStack_3e4;
                    FUN_009885d0();
                    FUN_0043bb10();
                  }
                  else if (iVar10 == 0x8af) {
                    pppppppuStack_3cc = *(undefined4 ********)(param_1 + 0x228);
                    pcStack_3d0 = (char *)0x8622c5;
                    piStack_3bc = (int *)FUN_0090e850();
                  }
                }
                pppppppuStack_3cc = (undefined4 *******)0x8622db;
                (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
                if (piStack_3bc != (int *)0x0) {
                  pppppppuStack_3cc = (undefined4 *******)iStack_3b0;
                  pcStack_3d0 = pcStack_3b4;
                  puStack_3d4 = (undefined1 *)0x8622fd;
                  (**(code **)(*piStack_3bc + 0x4c))();
                  uStack_3dc = 0x862310;
                  iStack_3d8 = iStack_3ac;
                  puStack_3d4 = puStack_3a8;
                  (**(code **)(*piStack_3bc + 0x48))();
                  piStack_3bc[6] = *(int *)(DAT_012588e8 + 0xb0c);
                  *(int **)(in_ECX + 0x4c0) = piStack_3bc;
                }
              }
              else if (iVar10 == 0xabd) {
                *(bool *)(in_ECX + 0x868) = *(int *)(param_1 + 0x228) == 0x29f;
              }
              else if (iVar10 == 0xabc) {
                *(bool *)(in_ECX + 0x888) = *(int *)(param_1 + 0x228) == 0x29f;
              }
              else if (iVar10 == 0xabe) {
                pppppppuStack_3cc = (undefined4 *******)(in_ECX + 0x88c);
                pcStack_3d0 = (char *)0x86237d;
                FUN_004012f0();
              }
              else {
                if (iVar10 == 0xac0) {
                  pppppppuStack_3cc = (undefined4 *******)(in_ECX + 0x889);
                }
                else {
                  if (iVar10 != 0xabf) {
                    if (iVar10 == 0xac1) {
                      pppppppuStack_3cc = (undefined4 *******)(in_ECX + 0x8a8);
                      pcStack_3d0 = (char *)0x8623bf;
                      FUN_004012f0();
                    }
                    else if (iVar10 == 0xac2) {
                      pppppppuStack_3cc = (undefined4 *******)(in_ECX + 0x8c4);
                      pcStack_3d0 = (char *)0x8623dd;
                      FUN_004012f0();
                    }
                    else {
                      if (iVar10 == 0xac3) {
                        pppppppuStack_3cc = (undefined4 *******)0x8623fc;
                        FUN_009885d0();
                        uStack_c = 4;
                        iVar10 = *(int *)(in_ECX + 0x8e4);
                        pppppppuStack_3cc = (undefined4 *******)0x28;
                        pcStack_3d0 = (char *)0x862418;
                        puVar8 = (undefined1 *)FUN_00aae9af();
                        uStack_c = CONCAT31(uStack_c._1_3_,5);
                        puStack_370 = puVar8;
                        if (puVar8 == (undefined1 *)0x0) {
                          puVar8 = (undefined1 *)0x0;
                        }
                        else {
                          pppppppuStack_3cc = (undefined4 *******)0xffffffff;
                          pcStack_3d0 = (char *)0x0;
                          puStack_3d4 = auStack_39c;
                          *(undefined4 *)(puVar8 + 0x14) = 0xf;
                          *(undefined4 *)(puVar8 + 0x10) = 0;
                          *puVar8 = 0;
                          iStack_3d8 = 0x86244e;
                          FUN_00408ed0();
                          *(int *)(puVar8 + 0x1c) = iVar10;
                          *(undefined4 *)(puVar8 + 0x20) = 0;
                          puVar8[0x24] = 0;
                        }
                        iVar2 = *(int *)(in_ECX + 0x8e8);
                        *(undefined1 **)(in_ECX + 0x8e4) = puVar8;
                        *(int *)(in_ECX + 0x8e8) = iVar2 + 1;
                        if (iVar2 == 0) {
                          *(undefined1 **)(in_ECX + 0x8e0) = puVar8;
                        }
                        else {
                          *(undefined1 **)(iVar10 + 0x20) = puVar8;
                        }
                        goto LAB_0086248c;
                      }
                      if (iVar10 == 0xac4) {
                        iStack_3ac = 0;
                        puStack_3a8 = (undefined1 *)0x3e8;
                        while( true ) {
                          piVar7 = *(int **)(param_1 + 0x1c);
                          if ((char)piVar7[0x44] == '\0') {
                            pppppppuStack_3cc = (undefined4 *******)0x8624d5;
                            iVar10 = (**(code **)(*piVar7 + 4))();
                            piVar7[2] = iVar10;
                            if (iVar10 == 0) {
                              piVar7[3] = 0x13;
                            }
                            *(undefined1 *)(piVar7 + 0x44) = 1;
                          }
                          piVar7 = piVar7 + 3;
                          piVar11 = aiStack_228;
                          for (iVar10 = 0x41; iVar10 != 0; iVar10 = iVar10 + -1) {
                            *piVar11 = *piVar7;
                            piVar7 = piVar7 + 1;
                            piVar11 = piVar11 + 1;
                          }
                          if ((aiStack_228[0] == 4) || (aiStack_228[0] == 0x13)) break;
                          pppppppuStack_3cc = (undefined4 *******)param_1;
                          pcStack_3d0 = (char *)0x862512;
                          FUN_009a1440();
                          if (*(int *)(param_1 + 0x20) == 0x2c9) {
                            pppppppuStack_3cc = (undefined4 *******)(param_1 + 0x22c);
                            pcStack_3d0 = (char *)0x862528;
                            iStack_3ac = FUN_00aaf0c5();
                          }
                          else if (*(int *)(param_1 + 0x20) == 0x534) {
                            pppppppuStack_3cc = (undefined4 *******)auStack_368;
                            pcStack_3d0 = (char *)(param_1 + 0x228);
                            puStack_3d4 = (undefined1 *)0x862549;
                            piVar7 = (int *)FUN_0098fb60();
                            puStack_3a8 = (undefined1 *)*piVar7;
                          }
                        }
                        pppppppuStack_3cc = (undefined4 *******)0x86255e;
                        (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
                        if (0 < iStack_3ac) {
                          pppppppuStack_3cc = (undefined4 *******)0x86257c;
                          FUN_00868690();
                        }
                      }
                      else if (iVar10 == 0x2f0) {
                        pppppppuStack_3cc = (undefined4 *******)0x862597;
                        FUN_009885d0();
                        pppppppuStack_3cc = apppppppuStack_364[0];
                        if (uStack_350 < 0x10) {
                          pppppppuStack_3cc = apppppppuStack_364;
                        }
                        pcStack_3d0 = acStack_348;
                        puStack_3d4 = DAT_012587e4;
                        iStack_3d8 = 0x8625b9;
                        puVar9 = (undefined4 *)FUN_0055c6c0();
                        *(undefined4 *)(in_ECX + 0x724) = *puVar9;
                        *(undefined4 *)(in_ECX + 0x728) = puVar9[1];
                        pppppppuStack_3cc = (undefined4 *******)0x8625d3;
                        FUN_00408ad0();
                      }
                      else if (iVar10 == 0x69e) {
                        *(bool *)(in_ECX + 0x908) = *(int *)(param_1 + 0x228) == 0x29f;
                      }
                      else if (iVar10 == 0xac8) {
                        pppppppuStack_3cc = (undefined4 *******)(in_ECX + 0x86c);
                        pcStack_3d0 = (char *)0x862606;
                        FUN_004012f0();
                      }
                      else if (iVar10 == 0x6a1) {
                        pppppppuStack_3cc = (undefined4 *******)(param_1 + 0x22c);
                        pcStack_3d0 = (char *)0x86261b;
                        uVar6 = FUN_00aaf0c5();
                        *(undefined4 *)(in_ECX + 0x6f8) = uVar6;
                      }
                      else if (iVar10 == 0x342) {
                        pppppppuStack_3cc = (undefined4 *******)(in_ECX + 0x90c);
                        pcStack_3d0 = (char *)0x86263f;
                        FUN_004012f0();
                      }
                      else if (iVar10 == 0xac9) {
                        pppppppuStack_3cc = (undefined4 *******)(in_ECX + 0x58);
                        goto LAB_0086264b;
                      }
                    }
                    goto LAB_00862653;
                  }
                  pppppppuStack_3cc = (undefined4 *******)(in_ECX + 0x88a);
                }
LAB_0086264b:
                pcStack_3d0 = (char *)0x862653;
                FUN_009a1bb0();
              }
            }
          }
          goto LAB_00862653;
        }
        pppppppuStack_3cc = (undefined4 *******)0x861dec;
        FUN_009885d0();
        uStack_c = 1;
        pcStack_3d0 = (char *)0x861e05;
        pppppppuStack_3cc = (undefined4 *******)auStack_39c;
        FUN_00868200();
      }
LAB_0086248c:
      uStack_c = 0xffffffff;
      pppppppuStack_3cc = (undefined4 *******)0x8624a0;
      FUN_00408ad0();
    }
LAB_00862653:
    piVar7 = *(int **)(param_1 + 0x1c);
    if ((char)piVar7[0x44] == '\0') {
      pppppppuStack_3cc = (undefined4 *******)0x862668;
      iVar10 = (**(code **)(*piVar7 + 4))();
      piVar7[2] = iVar10;
      if (iVar10 == 0) {
        piVar7[3] = 0x13;
      }
      *(undefined1 *)(piVar7 + 0x44) = 1;
    }
    piVar7 = piVar7 + 3;
    piVar11 = aiStack_120;
    for (iVar10 = 0x41; iVar10 != 0; iVar10 = iVar10 + -1) {
      *piVar11 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar11 = piVar11 + 1;
    }
    if (aiStack_120[0] == 4) {
      ExceptionList = local_14;
      return;
    }
    if (aiStack_120[0] == 0x13) {
      ExceptionList = local_14;
      return;
    }
    pppppppuStack_3cc = (undefined4 *******)param_1;
    pcStack_3d0 = (char *)0x8626a5;
    FUN_009a1440();
    iVar10 = *(int *)(param_1 + 0x20);
    ppvVar3 = ExceptionList;
  } while( true );
}

