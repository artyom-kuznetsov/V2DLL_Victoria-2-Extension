// FUN_0047f2c0 @ 0047f2c0 body=[[0047f2c0, 0047f3c3] [0047f3c9, 0047f3d7] [0047f3dd, 0047fd98] [0047fda0, 0047fdf8] [0047fe00, 004800af] [004800b3, 004800dc] [004800e0, 0048013d] [00480141, 004801bd]]


/* WARNING: Removing unreachable block (ram,0x0047f568) */
/* WARNING: Removing unreachable block (ram,0x0047f6f0) */
/* WARNING: Removing unreachable block (ram,0x0047fa07) */
/* WARNING: Removing unreachable block (ram,0x0047f87d) */
/* WARNING: Removing unreachable block (ram,0x0047f880) */
/* WARNING: Removing unreachable block (ram,0x0047f44d) */
/* WARNING: Removing unreachable block (ram,0x0047f450) */
/* WARNING: Removing unreachable block (ram,0x0047fb8e) */
/* WARNING: Removing unreachable block (ram,0x0047fb90) */

void FUN_0047f2c0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  int local_50;
  int local_4c;
  int *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5b776;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_00561c40();
  FUN_00561c40();
  FUN_00561c40();
  FUN_00561c40();
  FUN_00561c40();
  FUN_00561c40();
  FUN_00561c40();
  FUN_00561c40();
  FUN_00561c40();
  FUN_00561c40();
  FUN_00561c40();
  FUN_00561c40();
  FUN_00561c40();
  FUN_00561c40();
  iVar9 = *(int *)(param_1 + 0x338);
  while (iVar9 != 0) {
    iVar9 = *(int *)(param_1 + 0x330);
    if (iVar9 != 0) {
      if (*(char *)(param_1 + 0x33c) == '\0') {
        iVar2 = *(int *)(iVar9 + 0x5c);
        *(int *)(param_1 + 0x330) = iVar2;
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0x334) = 0;
        }
        else {
          *(undefined4 *)(iVar2 + 0x58) = 0;
        }
        if (iVar9 != 0) {
          if (*(int *)(iVar9 + 0x48) == 0) {
            *(undefined4 *)(iVar9 + 0x48) = 0;
            *(undefined4 *)(iVar9 + 0x4c) = 0;
            *(undefined4 *)(iVar9 + 0x50) = 0;
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(iVar9);
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(*(int *)(iVar9 + 0x48));
        }
        *(int *)(param_1 + 0x338) = *(int *)(param_1 + 0x338) + -1;
      }
      else {
        *(undefined1 *)(iVar9 + 0x60) = 1;
      }
    }
    iVar9 = *(int *)(param_1 + 0x338);
  }
  *(undefined4 *)(param_1 + 0x340) = DAT_0125ba60;
  local_4c = 0;
  if (0 < (*(int *)(param_1 + 0x5a8) - *(int *)(param_1 + 0x5a4)) / 0x58) {
    local_50 = 0;
    do {
      iVar9 = *(int *)(param_1 + 0x5a4) + local_50;
      _memset((void *)(iVar9 + 8),0,0x40);
      if (*(int *)(iVar9 + 0x48) != *(int *)(iVar9 + 0x4c)) {
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x48);
      }
      uVar4 = *(uint *)(iVar9 + 0x4c);
      if ((uVar4 < 0x125e449) || (puVar5 = *(undefined4 **)(iVar9 + 0x48), &DAT_0125e448 < puVar5))
      {
        if (uVar4 == *(uint *)(iVar9 + 0x50)) {
          FUN_00423780();
        }
        puVar5 = *(undefined4 **)(iVar9 + 0x4c);
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = DAT_0125e448;
          uVar6 = DAT_0125e44c;
          goto LAB_0047f4d5;
        }
      }
      else {
        if (uVar4 == *(uint *)(iVar9 + 0x50)) {
          FUN_00423780();
        }
        puVar1 = (undefined4 *)
                 (*(int *)(iVar9 + 0x48) + ((int)&DAT_0125e448 - (int)puVar5 >> 3) * 8);
        puVar5 = *(undefined4 **)(iVar9 + 0x4c);
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar1;
          uVar6 = puVar1[1];
LAB_0047f4d5:
          puVar5[1] = uVar6;
        }
      }
      *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 8;
      local_50 = local_50 + 0x58;
      local_4c = local_4c + 1;
    } while (local_4c < (*(int *)(param_1 + 0x5a8) - *(int *)(param_1 + 0x5a4)) / 0x58);
  }
  local_4c = 0;
  if (0 < (*(int *)(param_1 + 0x114) - *(int *)(param_1 + 0x110)) / 0x58) {
    local_50 = 0;
    do {
      iVar9 = *(int *)(param_1 + 0x110) + local_50;
      _memset((void *)(iVar9 + 8),0,0x40);
      if (*(int *)(iVar9 + 0x48) != *(int *)(iVar9 + 0x4c)) {
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x48);
      }
      uVar4 = *(uint *)(iVar9 + 0x4c);
      if ((uVar4 < 0x125e449) || (puVar5 = *(undefined4 **)(iVar9 + 0x48), &DAT_0125e448 < puVar5))
      {
        if (uVar4 == *(uint *)(iVar9 + 0x50)) {
          uVar4 = (int)(uVar4 - *(int *)(iVar9 + 0x48)) >> 3;
          if (0x1ffffffe < uVar4) goto LAB_0047f75e;
          uVar4 = uVar4 + 1;
          uVar7 = (int)(*(uint *)(iVar9 + 0x50) - *(int *)(iVar9 + 0x48)) >> 3;
          if (uVar7 < uVar4) {
            if (0x1fffffff - (uVar7 >> 1) < uVar7) {
              uVar7 = 0;
            }
            else {
              uVar7 = uVar7 + (uVar7 >> 1);
            }
            if (uVar7 < uVar4) {
              uVar7 = uVar4;
            }
            FUN_004237e0(uVar7);
          }
        }
        puVar5 = *(undefined4 **)(iVar9 + 0x4c);
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = DAT_0125e448;
          uVar6 = DAT_0125e44c;
          goto LAB_0047f65c;
        }
      }
      else {
        if (uVar4 == *(uint *)(iVar9 + 0x50)) {
          uVar4 = (int)(uVar4 - (int)puVar5) >> 3;
          if (0x1ffffffe < uVar4) goto LAB_0047f75e;
          uVar4 = uVar4 + 1;
          uVar7 = (int)(*(uint *)(iVar9 + 0x50) - (int)puVar5) >> 3;
          if (uVar7 < uVar4) {
            if (0x1fffffff - (uVar7 >> 1) < uVar7) {
              uVar7 = 0;
            }
            else {
              uVar7 = uVar7 + (uVar7 >> 1);
            }
            if (uVar7 < uVar4) {
              uVar7 = uVar4;
            }
            FUN_004237e0(uVar7);
          }
        }
        puVar1 = (undefined4 *)
                 (*(int *)(iVar9 + 0x48) + ((int)&DAT_0125e448 - (int)puVar5 >> 3) * 8);
        puVar5 = *(undefined4 **)(iVar9 + 0x4c);
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar1;
          uVar6 = puVar1[1];
LAB_0047f65c:
          puVar5[1] = uVar6;
        }
      }
      *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 8;
      local_50 = local_50 + 0x58;
      local_4c = local_4c + 1;
    } while (local_4c < (*(int *)(param_1 + 0x114) - *(int *)(param_1 + 0x110)) / 0x58);
  }
  local_4c = 0;
  if (0 < (*(int *)(param_1 + 0x3f8) - *(int *)(param_1 + 0x3f4)) / 0x58) {
    local_50 = 0;
    do {
      iVar9 = *(int *)(param_1 + 0x3f4) + local_50;
      _memset((void *)(iVar9 + 8),0,0x40);
      if (*(int *)(iVar9 + 0x48) != *(int *)(iVar9 + 0x4c)) {
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x48);
      }
      uVar4 = *(uint *)(iVar9 + 0x4c);
      if ((uVar4 < 0x125e449) || (puVar5 = *(undefined4 **)(iVar9 + 0x48), &DAT_0125e448 < puVar5))
      {
        if (uVar4 == *(uint *)(iVar9 + 0x50)) {
          uVar4 = (int)(uVar4 - *(int *)(iVar9 + 0x48)) >> 3;
          if (0x1ffffffe < uVar4) goto LAB_0047f75e;
          uVar4 = uVar4 + 1;
          uVar7 = (int)(*(uint *)(iVar9 + 0x50) - *(int *)(iVar9 + 0x48)) >> 3;
          if (uVar7 < uVar4) {
            if (0x1fffffff - (uVar7 >> 1) < uVar7) {
              uVar7 = 0;
            }
            else {
              uVar7 = uVar7 + (uVar7 >> 1);
            }
            if (uVar7 < uVar4) {
              uVar7 = uVar4;
            }
            FUN_004237e0(uVar7);
          }
        }
        puVar5 = *(undefined4 **)(iVar9 + 0x4c);
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = DAT_0125e448;
          uVar6 = DAT_0125e44c;
          goto LAB_0047f7ea;
        }
      }
      else {
        if (uVar4 == *(uint *)(iVar9 + 0x50)) {
          uVar4 = (int)(uVar4 - (int)puVar5) >> 3;
          if (0x1ffffffe < uVar4) goto LAB_0047f75e;
          uVar4 = uVar4 + 1;
          uVar7 = (int)(*(uint *)(iVar9 + 0x50) - (int)puVar5) >> 3;
          if (uVar7 < uVar4) {
            if (0x1fffffff - (uVar7 >> 1) < uVar7) {
              uVar7 = 0;
            }
            else {
              uVar7 = uVar7 + (uVar7 >> 1);
            }
            if (uVar7 < uVar4) {
              uVar7 = uVar4;
            }
            FUN_004237e0(uVar7);
          }
        }
        puVar1 = (undefined4 *)
                 (*(int *)(iVar9 + 0x48) + ((int)&DAT_0125e448 - (int)puVar5 >> 3) * 8);
        puVar5 = *(undefined4 **)(iVar9 + 0x4c);
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar1;
          uVar6 = puVar1[1];
LAB_0047f7ea:
          puVar5[1] = uVar6;
        }
      }
      *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 8;
      local_50 = local_50 + 0x58;
      local_4c = local_4c + 1;
    } while (local_4c < (*(int *)(param_1 + 0x3f8) - *(int *)(param_1 + 0x3f4)) / 0x58);
  }
  local_4c = 0;
  if (0 < (*(int *)(param_1 + 0x408) - *(int *)(param_1 + 0x404)) / 0x58) {
    local_50 = 0;
    do {
      iVar9 = *(int *)(param_1 + 0x404) + local_50;
      _memset((void *)(iVar9 + 8),0,0x40);
      if (*(int *)(iVar9 + 0x48) != *(int *)(iVar9 + 0x4c)) {
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x48);
      }
      uVar4 = *(uint *)(iVar9 + 0x4c);
      if ((uVar4 < 0x125e449) || (puVar5 = *(undefined4 **)(iVar9 + 0x48), &DAT_0125e448 < puVar5))
      {
        if (uVar4 == *(uint *)(iVar9 + 0x50)) {
          uVar4 = (int)(uVar4 - *(int *)(iVar9 + 0x48)) >> 3;
          if (0x1ffffffe < uVar4) goto LAB_0047f75e;
          uVar4 = uVar4 + 1;
          uVar7 = (int)(*(uint *)(iVar9 + 0x50) - *(int *)(iVar9 + 0x48)) >> 3;
          if (uVar7 < uVar4) {
            if (0x1fffffff - (uVar7 >> 1) < uVar7) {
              uVar7 = 0;
            }
            else {
              uVar7 = uVar7 + (uVar7 >> 1);
            }
            if (uVar7 < uVar4) {
              uVar7 = uVar4;
            }
            FUN_004237e0(uVar7);
          }
        }
        puVar5 = *(undefined4 **)(iVar9 + 0x4c);
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = DAT_0125e448;
          uVar6 = DAT_0125e44c;
          goto LAB_0047f974;
        }
      }
      else {
        if (uVar4 == *(uint *)(iVar9 + 0x50)) {
          uVar4 = (int)(uVar4 - (int)puVar5) >> 3;
          if (0x1ffffffe < uVar4) goto LAB_0047f75e;
          uVar4 = uVar4 + 1;
          uVar7 = (int)(*(uint *)(iVar9 + 0x50) - (int)puVar5) >> 3;
          if (uVar7 < uVar4) {
            if (0x1fffffff - (uVar7 >> 1) < uVar7) {
              uVar7 = 0;
            }
            else {
              uVar7 = uVar7 + (uVar7 >> 1);
            }
            if (uVar7 < uVar4) {
              uVar7 = uVar4;
            }
            FUN_004237e0(uVar7);
          }
        }
        puVar1 = (undefined4 *)
                 (*(int *)(iVar9 + 0x48) + ((int)&DAT_0125e448 - (int)puVar5 >> 3) * 8);
        puVar5 = *(undefined4 **)(iVar9 + 0x4c);
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar1;
          uVar6 = puVar1[1];
LAB_0047f974:
          puVar5[1] = uVar6;
        }
      }
      *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 8;
      local_50 = local_50 + 0x58;
      local_4c = local_4c + 1;
    } while (local_4c < (*(int *)(param_1 + 0x408) - *(int *)(param_1 + 0x404)) / 0x58);
  }
  local_4c = 0;
  if (0 < (*(int *)(param_1 + 0x418) - *(int *)(param_1 + 0x414)) / 0x58) {
    local_50 = 0;
    do {
      iVar9 = *(int *)(param_1 + 0x414) + local_50;
      _memset((void *)(iVar9 + 8),0,0x40);
      if (*(int *)(iVar9 + 0x48) != *(int *)(iVar9 + 0x4c)) {
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x48);
      }
      uVar4 = *(uint *)(iVar9 + 0x4c);
      if ((uVar4 < 0x125e449) || (puVar5 = *(undefined4 **)(iVar9 + 0x48), &DAT_0125e448 < puVar5))
      {
        if (uVar4 == *(uint *)(iVar9 + 0x50)) {
          uVar4 = (int)(uVar4 - *(int *)(iVar9 + 0x48)) >> 3;
          if (0x1ffffffe < uVar4) goto LAB_0047f75e;
          uVar4 = uVar4 + 1;
          uVar7 = (int)(*(uint *)(iVar9 + 0x50) - *(int *)(iVar9 + 0x48)) >> 3;
          if (uVar7 < uVar4) {
            if (0x1fffffff - (uVar7 >> 1) < uVar7) {
              uVar7 = 0;
            }
            else {
              uVar7 = uVar7 + (uVar7 >> 1);
            }
            if (uVar7 < uVar4) {
              uVar7 = uVar4;
            }
            FUN_004237e0(uVar7);
          }
        }
        puVar5 = *(undefined4 **)(iVar9 + 0x4c);
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = DAT_0125e448;
          uVar6 = DAT_0125e44c;
          goto LAB_0047fafb;
        }
      }
      else {
        if (uVar4 == *(uint *)(iVar9 + 0x50)) {
          uVar4 = (int)(uVar4 - (int)puVar5) >> 3;
          if (0x1ffffffe < uVar4) goto LAB_0047f75e;
          uVar4 = uVar4 + 1;
          uVar7 = (int)(*(uint *)(iVar9 + 0x50) - (int)puVar5) >> 3;
          if (uVar7 < uVar4) {
            if (0x1fffffff - (uVar7 >> 1) < uVar7) {
              uVar7 = 0;
            }
            else {
              uVar7 = uVar7 + (uVar7 >> 1);
            }
            if (uVar7 < uVar4) {
              uVar7 = uVar4;
            }
            FUN_004237e0(uVar7);
          }
        }
        puVar1 = (undefined4 *)
                 (*(int *)(iVar9 + 0x48) + ((int)&DAT_0125e448 - (int)puVar5 >> 3) * 8);
        puVar5 = *(undefined4 **)(iVar9 + 0x4c);
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar1;
          uVar6 = puVar1[1];
LAB_0047fafb:
          puVar5[1] = uVar6;
        }
      }
      *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 8;
      local_50 = local_50 + 0x58;
      local_4c = local_4c + 1;
    } while (local_4c < (*(int *)(param_1 + 0x418) - *(int *)(param_1 + 0x414)) / 0x58);
  }
  local_4c = 0;
  if (0 < (*(int *)(param_1 + 0x428) - *(int *)(param_1 + 0x424)) / 0x58) {
    local_50 = 0;
    do {
      iVar9 = *(int *)(param_1 + 0x424) + local_50;
      _memset((void *)(iVar9 + 8),0,0x40);
      if (*(int *)(iVar9 + 0x48) != *(int *)(iVar9 + 0x4c)) {
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x48);
      }
      uVar4 = *(uint *)(iVar9 + 0x4c);
      if ((uVar4 < 0x125e449) || (puVar5 = *(undefined4 **)(iVar9 + 0x48), &DAT_0125e448 < puVar5))
      {
        if (uVar4 == *(uint *)(iVar9 + 0x50)) {
          uVar4 = (int)(uVar4 - *(int *)(iVar9 + 0x48)) >> 3;
          if (0x1ffffffe < uVar4) {
LAB_0047f75e:
                    /* WARNING: Subroutine does not return */
            FUN_00aad3ad("vector<T> too long");
          }
          uVar4 = uVar4 + 1;
          uVar7 = (int)(*(uint *)(iVar9 + 0x50) - *(int *)(iVar9 + 0x48)) >> 3;
          if (uVar7 < uVar4) {
            if (0x1fffffff - (uVar7 >> 1) < uVar7) {
              uVar7 = 0;
            }
            else {
              uVar7 = uVar7 + (uVar7 >> 1);
            }
            if (uVar7 < uVar4) {
              uVar7 = uVar4;
            }
            FUN_004237e0(uVar7);
          }
        }
        puVar5 = *(undefined4 **)(iVar9 + 0x4c);
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = DAT_0125e448;
          uVar6 = DAT_0125e44c;
          goto LAB_0047fc84;
        }
      }
      else {
        if (uVar4 == *(uint *)(iVar9 + 0x50)) {
          uVar4 = (int)(uVar4 - (int)puVar5) >> 3;
          if (0x1ffffffe < uVar4) goto LAB_0047f75e;
          uVar4 = uVar4 + 1;
          uVar7 = (int)(*(uint *)(iVar9 + 0x50) - (int)puVar5) >> 3;
          if (uVar7 < uVar4) {
            if (0x1fffffff - (uVar7 >> 1) < uVar7) {
              uVar7 = 0;
            }
            else {
              uVar7 = uVar7 + (uVar7 >> 1);
            }
            if (uVar7 < uVar4) {
              uVar7 = uVar4;
            }
            FUN_004237e0(uVar7);
          }
        }
        puVar1 = (undefined4 *)
                 (*(int *)(iVar9 + 0x48) + ((int)&DAT_0125e448 - (int)puVar5 >> 3) * 8);
        puVar5 = *(undefined4 **)(iVar9 + 0x4c);
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar1;
          uVar6 = puVar1[1];
LAB_0047fc84:
          puVar5[1] = uVar6;
        }
      }
      *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 8;
      local_50 = local_50 + 0x58;
      local_4c = local_4c + 1;
    } while (local_4c < (*(int *)(param_1 + 0x428) - *(int *)(param_1 + 0x424)) / 0x58);
  }
  iVar9 = 0;
  if (0 < (*(int *)(param_1 + 0x4e8) - *(int *)(param_1 + 0x4e4)) / 0x58) {
    do {
      FUN_00561c40();
      iVar9 = iVar9 + 1;
    } while (iVar9 < (*(int *)(param_1 + 0x4e8) - *(int *)(param_1 + 0x4e4)) / 0x58);
  }
  iVar9 = 0;
  if (0 < (*(int *)(param_1 + 0x718) - *(int *)(param_1 + 0x714)) / 0x58) {
    do {
      FUN_00561c40();
      iVar9 = iVar9 + 1;
    } while (iVar9 < (*(int *)(param_1 + 0x718) - *(int *)(param_1 + 0x714)) / 0x58);
  }
  iVar9 = 0;
  if (0 < (*(int *)(param_1 + 0x7d8) - *(int *)(param_1 + 0x7d4)) / 0x58) {
    do {
      FUN_00561c40();
      iVar9 = iVar9 + 1;
    } while (iVar9 < (*(int *)(param_1 + 0x7d8) - *(int *)(param_1 + 0x7d4)) / 0x58);
  }
  iVar9 = 0;
  if (0 < (*(int *)(param_1 + 0x818) - *(int *)(param_1 + 0x814)) / 0x58) {
    do {
      FUN_00561c40();
      iVar9 = iVar9 + 1;
    } while (iVar9 < (*(int *)(param_1 + 0x818) - *(int *)(param_1 + 0x814)) / 0x58);
  }
  if (0 < DAT_012587f4) {
    pbVar8 = (byte *)(param_1 + 0x128);
    do {
      local_40 = (int *)0xa1200000;
      local_3c = 7;
      if (*pbVar8 == 0) {
        *pbVar8 = (byte)(*(int *)(param_1 + 0x16c) - *(int *)(param_1 + 0x168) >> 3);
        FUN_00423920();
      }
      else {
        puVar5 = (undefined4 *)(*(int *)(param_1 + 0x168) + (uint)*pbVar8 * 8);
        *puVar5 = 0xa1200000;
        puVar5[1] = 7;
      }
      pbVar8 = pbVar8 + 1;
    } while ((int)(pbVar8 + (-0x128 - param_1)) < DAT_012587f4);
  }
  local_40 = (int *)(DAT_012587f0 + 0xc);
  if (0 < (int)(*(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) & 0xfffffffcU)) {
    local_50 = 0;
    pbVar8 = (byte *)(param_1 + 0x3a4);
    do {
      iVar9 = *(int *)(local_50 + *local_40);
      if (*(char *)(iVar9 + 0x2a) == '\0') {
        local_2c = DAT_0125ba14;
        local_30 = DAT_0125ba10;
        if (*pbVar8 == 0) goto LAB_0047ff69;
        puVar5 = (undefined4 *)(*(int *)(param_1 + 0x3e4) + (uint)*pbVar8 * 8);
        *puVar5 = DAT_0125ba10;
        puVar5[1] = DAT_0125ba14;
      }
      else {
        local_34 = DAT_00f0ae14;
        local_38 = DAT_00f0ae10;
        if (*pbVar8 == 0) {
LAB_0047ff69:
          *pbVar8 = (byte)(*(int *)(param_1 + 1000) - *(int *)(param_1 + 0x3e4) >> 3);
          FUN_00423920();
        }
        else {
          puVar5 = (undefined4 *)(*(int *)(param_1 + 0x3e4) + (uint)*pbVar8 * 8);
          *puVar5 = DAT_00f0ae10;
          puVar5[1] = DAT_00f0ae14;
        }
      }
      local_28 = *(undefined4 *)(iVar9 + 0x30);
      local_24 = *(undefined4 *)(iVar9 + 0x34);
      if (pbVar8[-0x11c] == 0) {
        pbVar8[-0x11c] = (byte)(*(int *)(param_1 + 0x2cc) - *(int *)(param_1 + 0x2c8) >> 3);
        FUN_00423920();
      }
      else {
        puVar5 = (undefined4 *)(*(int *)(param_1 + 0x2c8) + (uint)pbVar8[-0x11c] * 8);
        *puVar5 = local_28;
        puVar5[1] = local_24;
      }
      local_1c = DAT_0125ba14;
      iVar9 = param_1 + 0x344 + (-0x3a4 - param_1);
      local_20 = DAT_0125ba10;
      if (pbVar8[iVar9 + 8] == 0) {
        pbVar8[iVar9 + 8] = (byte)(*(int *)(param_1 + 0x390) - *(int *)(param_1 + 0x38c) >> 3);
        FUN_00423920();
      }
      else {
        puVar5 = (undefined4 *)(*(int *)(param_1 + 0x38c) + (uint)pbVar8[iVar9 + 8] * 8);
        *puVar5 = DAT_0125ba10;
        puVar5[1] = DAT_0125ba14;
      }
      local_50 = local_50 + 4;
      pbVar8 = pbVar8 + 1;
    } while ((int)(pbVar8 + (-0x3a4 - param_1)) <
             *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2);
  }
  iVar9 = 0;
  local_50 = 0;
  if (DAT_0131bb34 == 0) {
    local_40 = (int *)FUN_00aae9af(0x188);
    local_c = 2;
    if (local_40 != (int *)0x0) {
      iVar9 = FUN_0041a160();
    }
    iVar2 = DAT_0131bb34;
    local_c = 3;
    local_40 = (int *)0x0;
    if ((iVar9 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
      FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar2);
    }
    local_c = 0xffffffff;
    DAT_0131bb34 = iVar9;
  }
  local_40 = (int *)(*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2);
  if (0 < (int)local_40) {
    do {
      if (DAT_0131bb34 == 0) {
        iVar9 = FUN_00aae9af(0x188);
        local_c = 4;
        if (iVar9 == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = FUN_0041a160();
        }
        iVar2 = DAT_0131bb34;
        local_c = 5;
        if ((iVar9 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
          FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(iVar2);
        }
        local_c = 0xffffffff;
        DAT_0131bb34 = iVar9;
      }
      cVar3 = (**(code **)(**(int **)(*(int *)(DAT_0131bb34 + 0xc) + local_50 * 4) + 0x18))();
      if (cVar3 != '\0') {
        FUN_0096f760(param_1 + 0x39c);
      }
      local_50 = local_50 + 1;
    } while (local_50 < (int)local_40);
  }
  FUN_00485bd0();
  FUN_0048b8c0(param_1 + 0x824,&local_40,*(undefined4 *)(param_1 + 0x824),
               *(undefined4 *)(param_1 + 0x828));
  ExceptionList = pvStack_14;
  return;
}

