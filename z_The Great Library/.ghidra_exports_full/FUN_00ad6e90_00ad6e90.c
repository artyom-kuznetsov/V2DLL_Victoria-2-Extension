// FUN_00ad6e90 @ 00ad6e90 body=[[00ad6e90, 00ad7184] [00ad7190, 00ad73d7] [00ad73e0, 00ad7935]]


int FUN_00ad6e90(byte param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  ushort uVar10;
  int in_ECX;
  undefined1 *puVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  byte bVar15;
  uint uStack_44;
  int iStack_40;
  int iStack_3c;
  uint uStack_38;
  undefined **ppuStack_1c;
  int *piStack_18;
  undefined **ppuStack_14;
  int *piStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b370f5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = (*(code *)PTR_FUN_00f01b08)
                    (0x114,0x191,4,0,0,0xffffffff,DAT_00ef259c ^ (uint)&stack0xffffffa8);
  uStack_4 = 0;
  if (iVar4 == 0) {
    iStack_3c = 0;
  }
  else {
    puVar11 = *(undefined1 **)(in_ECX + 0xa0);
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &DAT_00ded94d;
    }
    iStack_3c = FUN_00ad59e0(puVar11);
  }
  *(undefined4 *)(iStack_3c + 0xfc) = *(undefined4 *)(in_ECX + 0xfc);
  *(undefined4 *)(iStack_3c + 0x10c) = *(undefined4 *)(in_ECX + 0x10c);
  uStack_4 = 0xffffffff;
  *(undefined4 *)(iStack_3c + 0x110) = *(undefined4 *)(in_ECX + 0x110);
  FUN_00ae66b0(in_ECX + 0xb8);
  *(undefined4 *)(iStack_3c + 0xf8) = *(undefined4 *)(in_ECX + 0xf8);
  *(undefined4 *)(iStack_3c + 0x108) = *(undefined4 *)(in_ECX + 0x108);
  uVar5 = *(uint *)(in_ECX + 0x84);
  uVar12 = 0;
  uStack_38 = 0;
  if (uVar5 != 0) {
    do {
      cVar3 = FUN_00ae8b70();
      if (cVar3 != '\0') {
        if ((param_1 & 8) == 0) {
          uStack_38 = 1;
        }
        break;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar5);
  }
  if (uStack_38 != 0) {
    iVar4 = *(int *)(iStack_3c + 0x94);
    uVar5 = iVar4 + 1;
    *(uint *)(iStack_3c + 0x94) = uVar5;
    if (*(uint *)(iStack_3c + 0x98) < uVar5) {
      FUN_00ae6430(iVar4 + 2);
    }
    piVar13 = (int *)(*(int *)(iStack_3c + 0x90) + -8 + *(int *)(iStack_3c + 0x94) * 8);
    if (piVar13 != (int *)0x0) {
      *piVar13 = in_ECX;
      piVar13[1] = uStack_38;
    }
  }
  FUN_00ad6110(in_ECX);
  uVar5 = 0;
  if (*(short *)(in_ECX + 0xec) != 0) {
    do {
      uVar6 = FUN_00ae2e10();
      uVar10 = *(short *)(iStack_3c + 0xec) + 1;
      *(ushort *)(iStack_3c + 0xec) = uVar10;
      if (uVar10 == 0) {
        *(undefined2 *)(iStack_3c + 0xec) = 0;
        if (*(int *)(iStack_3c + 0xe8) != 0) {
          (*(code *)PTR__free_00f01b10)(*(int *)(iStack_3c + 0xe8));
        }
        *(undefined4 *)(iStack_3c + 0xe8) = 0;
      }
      else {
        if (*(int *)(iStack_3c + 0xe8) == 0) {
          uVar7 = (*(code *)PTR_FUN_00f01b08)((uint)uVar10 * 4,0x10,4,2,0,0xffffffff);
        }
        else {
          uVar7 = (*(code *)PTR_FUN_00f01b0c)(*(int *)(iStack_3c + 0xe8),(uint)uVar10 * 4);
        }
        *(undefined4 *)(iStack_3c + 0xe8) = uVar7;
      }
      puVar1 = (undefined4 *)
               (*(int *)(iStack_3c + 0xe8) + (uint)(ushort)(*(short *)(iStack_3c + 0xec) - 1) * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = uVar6;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)(in_ECX + 0xec));
  }
  if ((param_1 & 1) == 0) {
    FUN_00ad3190(*(undefined4 *)(in_ECX + 0xcc));
    uStack_44 = 0;
    if (*(int *)(in_ECX + 0xcc) != 0) {
      iStack_40 = 0;
      do {
        uVar5 = *(uint *)(*(int *)(in_ECX + 200) + 4 + iStack_40);
        if (*(uint *)(iStack_3c + 0xd0) < uVar5) {
          if (uVar5 == 0) {
            *(undefined4 *)(iStack_3c + 0xcc) = 0;
            *(undefined4 *)(iStack_3c + 0xd0) = 0;
            if (*(int *)(iStack_3c + 200) != 0) {
              (*(code *)PTR__free_00f01b10)(*(int *)(iStack_3c + 200));
              *(undefined4 *)(iStack_3c + 200) = 0;
            }
          }
          else {
            if (*(int *)(iStack_3c + 200) == 0) {
              uVar6 = (*(code *)PTR_FUN_00f01b08)
                                (uVar5 << 4,*(undefined2 *)(iStack_3c + 0xd4),4,2,0,0xffffffff);
            }
            else {
              uVar6 = (*(code *)PTR_FUN_00f01b0c)(*(int *)(iStack_3c + 200),uVar5 << 4);
            }
            *(undefined4 *)(iStack_3c + 200) = uVar6;
            *(uint *)(iStack_3c + 0xd0) = uVar5;
          }
        }
        uStack_38 = 0;
        if (uVar5 != 0) {
          ppuStack_14 = &PTR_FUN_00e3fb28;
          do {
            piVar13 = *(int **)(*(int *)(*(int *)(in_ECX + 200) + iStack_40) + 4 + uStack_38 * 8);
            if (piVar13 != (int *)0x0) {
              (**(code **)(*piVar13 + 4))();
            }
            iVar4 = *(int *)(*(int *)(iStack_3c + 200) + 4 + iStack_40);
            piVar8 = (int *)(*(int *)(iStack_3c + 200) + iStack_40);
            uVar12 = iVar4 + 1;
            uStack_4 = 4;
            piVar8[1] = uVar12;
            piStack_10 = piVar13;
            if ((uint)piVar8[2] < uVar12) {
              iVar4 = iVar4 + 2;
              if (iVar4 == 0) {
                piVar8[1] = 0;
                piVar8[2] = 0;
                if (*piVar8 != 0) {
                  (*(code *)PTR__free_00f01b10)(*piVar8);
                  *piVar8 = 0;
                }
              }
              else {
                if (*piVar8 == 0) {
                  iVar9 = (*(code *)PTR_FUN_00f01b08)(iVar4 * 8,(short)piVar8[3],4,2,0,0xffffffff);
                }
                else {
                  iVar9 = (*(code *)PTR_FUN_00f01b0c)(*piVar8,iVar4 * 8);
                }
                *piVar8 = iVar9;
                piVar8[2] = iVar4;
              }
            }
            puVar1 = (undefined4 *)(*piVar8 + (piVar8[1] + -1) * 8);
            uStack_4 = CONCAT31(uStack_4._1_3_,5);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = &PTR_FUN_00e3fb28;
              puVar1[1] = 0;
              if (piVar13 != (int *)0x0) {
                (**(code **)(*piVar13 + 4))();
              }
              piVar8 = (int *)puVar1[1];
              puVar1[1] = piVar13;
              if (piVar8 != (int *)0x0) {
                (**(code **)(*piVar8 + 8))();
              }
            }
            uStack_4 = 0xffffffff;
            piStack_10 = (int *)0x0;
            if (piVar13 != (int *)0x0) {
              (**(code **)(*piVar13 + 8))();
            }
            uStack_38 = uStack_38 + 1;
          } while (uStack_38 < uVar5);
        }
        iStack_40 = iStack_40 + 0x10;
        uStack_44 = uStack_44 + 1;
      } while (uStack_44 < *(uint *)(in_ECX + 0xcc));
    }
  }
  else {
    FUN_00ad3190(*(undefined4 *)(in_ECX + 0xcc));
    uStack_44 = 0;
    if (*(int *)(in_ECX + 0xcc) != 0) {
      iStack_40 = 0;
      do {
        uVar5 = *(uint *)(*(int *)(in_ECX + 200) + 4 + iStack_40);
        piVar13 = (int *)(*(int *)(iStack_3c + 200) + iStack_40);
        if ((uint)piVar13[2] < uVar5) {
          if (uVar5 == 0) {
            piVar13[1] = 0;
            piVar13[2] = 0;
            if (*piVar13 != 0) {
              (*(code *)PTR__free_00f01b10)(*piVar13);
              *piVar13 = 0;
            }
          }
          else {
            if (*piVar13 == 0) {
              iVar4 = (*(code *)PTR_FUN_00f01b08)(uVar5 * 8,(short)piVar13[3],4,2,0,0xffffffff);
            }
            else {
              iVar4 = (*(code *)PTR_FUN_00f01b0c)(*piVar13,uVar5 * 8);
            }
            *piVar13 = iVar4;
            piVar13[2] = uVar5;
          }
        }
        uStack_38 = 0;
        if (uVar5 != 0) {
          ppuStack_14 = &PTR_FUN_00e3fb28;
          do {
            piVar13 = *(int **)(*(int *)(*(int *)(in_ECX + 200) + iStack_40) + 4 + uStack_38 * 8);
            if (piVar13 != (int *)0x0) {
              (**(code **)(*piVar13 + 4))();
            }
            uStack_4 = 1;
            piStack_10 = piVar13;
            if (piVar13 == (int *)0x0) {
              piVar8 = (int *)0x0;
            }
            else {
              piVar8 = (int *)(**(code **)(*piVar13 + 0x10))();
            }
            (**(code **)(*piVar8 + 0xc))(&ppuStack_1c);
            iVar9 = *(int *)(iStack_3c + 200);
            iVar4 = *(int *)(iVar9 + 4 + iStack_40);
            piVar8 = (int *)(iVar9 + iStack_40);
            uVar12 = iVar4 + 1;
            uStack_4._0_1_ = 2;
            piVar8[1] = uVar12;
            if ((uint)piVar8[2] < uVar12) {
              iVar4 = iVar4 + 2;
              if (iVar4 == 0) {
                piVar8[1] = 0;
                piVar8[2] = 0;
                if (*piVar8 != 0) {
                  (*(code *)PTR__free_00f01b10)(*piVar8);
                  *piVar8 = 0;
                }
              }
              else {
                if (*piVar8 == 0) {
                  iVar9 = (*(code *)PTR_FUN_00f01b08)(iVar4 * 8,(short)piVar8[3],4,2,0,0xffffffff);
                }
                else {
                  iVar9 = (*(code *)PTR_FUN_00f01b0c)(*piVar8,iVar4 * 8);
                }
                *piVar8 = iVar9;
                piVar8[2] = iVar4;
              }
            }
            piVar2 = piStack_18;
            puVar1 = (undefined4 *)(*piVar8 + (piVar8[1] + -1) * 8);
            uStack_4._0_1_ = 3;
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = &PTR_FUN_00e3fb28;
              puVar1[1] = 0;
              if (piStack_18 != (int *)0x0) {
                (**(code **)(*piStack_18 + 4))();
              }
              piVar8 = (int *)puVar1[1];
              puVar1[1] = piVar2;
              if (piVar8 != (int *)0x0) {
                (**(code **)(*piVar8 + 8))();
              }
            }
            piVar8 = piStack_18;
            uStack_4 = CONCAT31(uStack_4._1_3_,1);
            ppuStack_1c = &PTR_FUN_00e3fb28;
            piStack_18 = (int *)0x0;
            if (piVar8 != (int *)0x0) {
              (**(code **)(*piVar8 + 8))();
            }
            uStack_4 = 0xffffffff;
            piStack_10 = (int *)0x0;
            if (piVar13 != (int *)0x0) {
              (**(code **)(*piVar13 + 8))();
            }
            uStack_38 = uStack_38 + 1;
          } while (uStack_38 < uVar5);
        }
        iStack_40 = iStack_40 + 0x10;
        uStack_44 = uStack_44 + 1;
      } while (uStack_44 < *(uint *)(in_ECX + 0xcc));
    }
  }
  uVar5 = 0;
  bVar15 = (param_1 & 2) != 0;
  if ((param_1 & 8) != 0) {
    bVar15 = bVar15 | 8;
  }
  if ((param_1 & 0x10) != 0) {
    bVar15 = bVar15 | 0x10;
  }
  uVar12 = *(uint *)(in_ECX + 0x84);
  uVar14 = *(uint *)(iStack_3c + 0x84);
  if (((uVar12 != uVar14) && (*(uint *)(iStack_3c + 0x84) = uVar12, uVar14 < uVar12)) &&
     (*(uint *)(iStack_3c + 0x88) < uVar12)) {
    if (uVar12 == 0) {
      *(undefined4 *)(iStack_3c + 0x84) = 0;
      *(undefined4 *)(iStack_3c + 0x88) = 0;
      if (*(int *)(iStack_3c + 0x80) != 0) {
        (*(code *)PTR__free_00f01b10)(*(int *)(iStack_3c + 0x80));
        *(undefined4 *)(iStack_3c + 0x80) = 0;
      }
    }
    else {
      if (*(int *)(iStack_3c + 0x80) == 0) {
        uVar6 = (*(code *)PTR_FUN_00f01b08)
                          (uVar12 * 4,*(undefined2 *)(iStack_3c + 0x8c),4,2,0,0xffffffff);
      }
      else {
        uVar6 = (*(code *)PTR_FUN_00f01b0c)(*(int *)(iStack_3c + 0x80),uVar12 * 4);
      }
      *(undefined4 *)(iStack_3c + 0x80) = uVar6;
      *(uint *)(iStack_3c + 0x88) = uVar12;
    }
  }
  if (uVar12 != 0) {
    do {
      iVar4 = uVar5 * 4;
      uVar6 = FUN_00ae99d0(iStack_3c,bVar15);
      uVar5 = uVar5 + 1;
      *(undefined4 *)(iVar4 + *(int *)(iStack_3c + 0x80)) = uVar6;
    } while (uVar5 < uVar12);
  }
  uVar5 = *(uint *)(in_ECX + 0xdc);
  uVar12 = *(uint *)(iStack_3c + 0xdc);
  if (uVar5 != uVar12) {
    if (uVar12 < uVar5) {
      *(uint *)(iStack_3c + 0xdc) = uVar5;
      if (*(uint *)(iStack_3c + 0xe0) < uVar5) {
        if (uVar5 == 0) {
          *(undefined4 *)(iStack_3c + 0xdc) = 0;
          *(undefined4 *)(iStack_3c + 0xe0) = 0;
          if (*(int *)(iStack_3c + 0xd8) != 0) {
            (*(code *)PTR__free_00f01b10)(*(int *)(iStack_3c + 0xd8));
            *(undefined4 *)(iStack_3c + 0xd8) = 0;
          }
        }
        else {
          if (*(int *)(iStack_3c + 0xd8) == 0) {
            uVar6 = (*(code *)PTR_FUN_00f01b08)
                              (uVar5 * 8,*(undefined2 *)(iStack_3c + 0xe4),4,2,0,0xffffffff);
          }
          else {
            uVar6 = (*(code *)PTR_FUN_00f01b0c)(*(int *)(iStack_3c + 0xd8),uVar5 * 8);
          }
          *(undefined4 *)(iStack_3c + 0xd8) = uVar6;
          *(uint *)(iStack_3c + 0xe0) = uVar5;
        }
      }
      for (; uVar12 < uVar5; uVar12 = uVar12 + 1) {
        puVar1 = (undefined4 *)(*(int *)(iStack_3c + 0xd8) + uVar12 * 8);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = &PTR_FUN_00ddd998;
          puVar1[1] = 0;
        }
      }
    }
    else {
      uVar14 = uVar5;
      if (uVar5 < uVar12) {
        do {
          (*(code *)**(undefined4 **)(*(int *)(iStack_3c + 0xd8) + uVar14 * 8))(0);
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(uint *)(iStack_3c + 0xdc));
      }
      *(uint *)(iStack_3c + 0xdc) = uVar5;
    }
  }
  uStack_44 = 0;
  if (*(int *)(in_ECX + 0xdc) != 0) {
    do {
      iVar4 = uStack_44 * 8;
      if ((*(int *)(*(int *)(in_ECX + 0xd8) + 4 + iVar4) == 0) ||
         (iVar9 = (**(code **)(**(int **)(*(int *)(in_ECX + 0xd8) + 4 + iVar4) + 0x10))(),
         iVar9 == 0)) {
        piVar13 = *(int **)(*(int *)(iStack_3c + 0xd8) + 4 + iVar4);
        uStack_4 = 7;
        *(undefined4 *)(*(int *)(iStack_3c + 0xd8) + 4 + iVar4) = 0;
        if (piVar13 != (int *)0x0) {
          (**(code **)(*piVar13 + 8))();
        }
        uStack_4 = 0xffffffff;
      }
      else {
        if (*(int *)(*(int *)(in_ECX + 0xd8) + 4 + iVar4) != 0) {
          (**(code **)(**(int **)(*(int *)(in_ECX + 0xd8) + 4 + iVar4) + 0x10))();
        }
        iVar9 = FUN_00aeb630();
        ppuStack_1c = &PTR_FUN_00ddd998;
        if ((iVar9 == 0) ||
           (piVar13 = (int *)(*(code *)PTR_FUN_00f01b08)(0xc,6,4,0,0,0xffffffff),
           piVar13 == (int *)0x0)) {
          piVar13 = (int *)0x0;
        }
        else {
          piVar13[1] = 0;
          *piVar13 = (int)&PTR_FUN_00ddcc08;
          piVar13[2] = iVar9;
          (**(code **)(*piVar13 + 4))();
        }
        iVar9 = *(int *)(iStack_3c + 0xd8);
        uStack_4 = 6;
        piStack_18 = piVar13;
        if (piVar13 != (int *)0x0) {
          (**(code **)(*piVar13 + 4))();
        }
        piVar8 = *(int **)(iVar9 + 4 + iVar4);
        *(int **)(iVar9 + 4 + iVar4) = piVar13;
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 8))();
        }
        uStack_4 = 0xffffffff;
        ppuStack_1c = &PTR_FUN_00ddd998;
        piStack_18 = (int *)0x0;
        if (piVar13 != (int *)0x0) {
          (**(code **)(*piVar13 + 8))();
        }
      }
      uStack_44 = uStack_44 + 1;
    } while (uStack_44 < *(uint *)(in_ECX + 0xdc));
  }
  FUN_00ae0e00(in_ECX,0x1f);
  FUN_00aecc00(*(undefined4 *)(in_ECX + 0x84),1);
  FUN_00aecc00(*(undefined4 *)(in_ECX + 0x84),1);
  if (*(int *)(in_ECX + 0x104) != 0) {
    if (*(int *)(iStack_3c + 0x104) == 0) {
      uVar5 = *(uint *)(iStack_3c + 0x84);
      uVar6 = (*(code *)PTR_FUN_00f01b08)(uVar5 * 2,0x191,4,0,"..\\..\\Source\\Actor.cpp",0xfd);
      *(undefined4 *)(iStack_3c + 0x104) = uVar6;
      uVar12 = 0;
      if (uVar5 != 0) {
        do {
          *(short *)(*(int *)(iStack_3c + 0x104) + uVar12 * 2) = (short)uVar12;
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar5);
      }
    }
    FID_conflict__memcpy
              (*(void **)(iStack_3c + 0x104),*(void **)(in_ECX + 0x104),*(int *)(in_ECX + 0x84) * 2)
    ;
  }
  ExceptionList = local_c;
  return iStack_3c;
}

