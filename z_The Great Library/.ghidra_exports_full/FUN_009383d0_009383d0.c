// FUN_009383d0 @ 009383d0 body=[[009383d0, 00938739] [00938740, 00938796] [0093879a, 009387b6]]


void FUN_009383d0(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined1 local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b42168;
  local_10 = ExceptionList;
  local_24 = param_3;
  ExceptionList = &local_10;
  puVar4 = (undefined4 *)FUN_0093cfb0();
  FUN_0042b980(puVar4,&local_24,*puVar4,puVar4[1]);
  puVar4 = (undefined4 *)0x0;
  local_38 = (undefined4 *)0x0;
  local_34 = (undefined4 *)0x0;
  local_30 = (undefined4 *)0x0;
  local_8 = 0;
  piVar9 = (int *)**(int **)(param_1 + 0xe0);
  local_18 = piVar9;
  if (piVar9 != *(int **)(param_1 + 0xe0)) {
    do {
      FUN_0042b980(&local_38,local_28,local_38,puVar4);
      iVar5 = piVar9[5] - piVar9[4] >> 6;
      local_24 = 0;
      puVar4 = local_34;
      local_20 = iVar5;
      if (0 < iVar5) {
        local_1c = 0;
        puVar8 = local_30;
        do {
          puVar10 = (undefined4 *)(piVar9[4] + local_1c);
          if (puVar10[9] == param_3) {
            if ((puVar10 < puVar4) && (local_38 <= puVar10)) {
              uVar11 = (int)puVar10 - (int)local_38;
              if (puVar4 == puVar8) {
                uVar6 = (int)puVar4 - (int)local_38 >> 6;
                if (0x3fffffe < uVar6) {
LAB_009387ad:
                    /* WARNING: Subroutine does not return */
                  FUN_00aad3ad("vector<T> too long");
                }
                uVar6 = uVar6 + 1;
                uVar7 = (int)puVar8 - (int)local_38 >> 6;
                if (uVar7 < uVar6) {
                  if (0x3ffffff - (uVar7 >> 1) < uVar7) {
                    uVar7 = 0;
                  }
                  else {
                    uVar7 = uVar7 + (uVar7 >> 1);
                  }
                  if (uVar7 < uVar6) {
                    uVar7 = uVar6;
                  }
                  FUN_0042c600(uVar7);
                  puVar8 = local_30;
                  puVar4 = local_34;
                }
              }
              uVar11 = uVar11 & 0xffffffc0;
              if (puVar4 != (undefined4 *)0x0) {
                puVar4[1] = 0x18d;
                *puVar4 = CWarGoal::vftable;
                puVar4[2] = *(undefined4 *)((int)local_38 + uVar11 + 8);
                puVar4[3] = *(undefined4 *)((int)local_38 + uVar11 + 0xc);
                puVar4[4] = *(undefined4 *)((int)local_38 + uVar11 + 0x10);
                puVar4[5] = *(undefined4 *)((int)local_38 + uVar11 + 0x14);
                puVar4[6] = *(undefined4 *)((int)local_38 + uVar11 + 0x18);
                puVar4[7] = *(undefined4 *)((int)local_38 + uVar11 + 0x1c);
                puVar4[8] = *(undefined4 *)((int)local_38 + uVar11 + 0x20);
                puVar4[9] = *(undefined4 *)((int)local_38 + uVar11 + 0x24);
                puVar4[10] = *(undefined4 *)((int)local_38 + uVar11 + 0x28);
                puVar4[0xb] = *(undefined4 *)((int)local_38 + uVar11 + 0x2c);
                puVar4[0xc] = *(undefined4 *)((int)local_38 + uVar11 + 0x30);
                puVar4[0xd] = *(undefined4 *)((int)local_38 + uVar11 + 0x34);
                *(undefined1 *)(puVar4 + 0xe) = *(undefined1 *)((int)local_38 + uVar11 + 0x38);
                puVar4[0xf] = *(undefined4 *)((int)local_38 + uVar11 + 0x3c);
              }
            }
            else {
              if (puVar4 == puVar8) {
                uVar11 = (int)puVar4 - (int)local_38 >> 6;
                if (0x3fffffe < uVar11) goto LAB_009387ad;
                uVar11 = uVar11 + 1;
                uVar6 = (int)puVar8 - (int)local_38 >> 6;
                if (uVar6 < uVar11) {
                  if (0x3ffffff - (uVar6 >> 1) < uVar6) {
                    uVar6 = 0;
                  }
                  else {
                    uVar6 = uVar6 + (uVar6 >> 1);
                  }
                  if (uVar6 < uVar11) {
                    uVar6 = uVar11;
                  }
                  FUN_0042c600(uVar6);
                  puVar8 = local_30;
                  puVar4 = local_34;
                }
              }
              if (puVar4 != (undefined4 *)0x0) {
                puVar4[1] = 0x18d;
                *puVar4 = CWarGoal::vftable;
                puVar4[2] = puVar10[2];
                puVar4[3] = puVar10[3];
                puVar4[4] = puVar10[4];
                puVar4[5] = puVar10[5];
                puVar4[6] = puVar10[6];
                puVar4[7] = puVar10[7];
                puVar4[8] = puVar10[8];
                puVar4[9] = puVar10[9];
                puVar4[10] = puVar10[10];
                puVar4[0xb] = puVar10[0xb];
                puVar4[0xc] = puVar10[0xc];
                puVar4[0xd] = puVar10[0xd];
                *(undefined1 *)(puVar4 + 0xe) = *(undefined1 *)(puVar10 + 0xe);
                puVar4[0xf] = puVar10[0xf];
              }
            }
            puVar4 = puVar4 + 0x10;
            iVar5 = local_20;
            local_34 = puVar4;
          }
          local_1c = local_1c + 0x40;
          local_24 = local_24 + 1;
          piVar9 = local_18;
        } while (local_24 < iVar5);
      }
      if ((local_38 != puVar4) && (iVar5 = (int)puVar4 - (int)local_38 >> 6, iVar5 != 0)) {
        piVar9 = local_38 + 9;
        local_24 = iVar5;
        do {
          uVar6 = local_18[5];
          uVar11 = local_18[4];
          for (uVar7 = uVar11;
              (uVar7 != uVar6 &&
              ((((*(int *)(uVar7 + 0xc) != piVar9[-6] || (*(int *)(uVar7 + 0x1c) != piVar9[-2])) ||
                (*(int *)(uVar7 + 0x24) != *piVar9)) ||
               ((*(int *)(uVar7 + 0x14) != piVar9[-4] || (*(int *)(uVar7 + 0x28) != piVar9[1]))))));
              uVar7 = uVar7 + 0x40) {
          }
          if ((((uVar6 - uVar11 & 0xffffffc0) != 0) && ((uint)local_18[4] <= uVar7)) &&
             (uVar7 < (uint)local_18[5])) {
            if (uVar7 == uVar6 - 0x40) {
              if (uVar11 != uVar6) {
                (*(code *)**(undefined4 **)(uVar6 - 0x40))(0);
LAB_009386f3:
                local_18[5] = local_18[5] + -0x40;
              }
            }
            else {
              FUN_0042c960(param_1);
              iVar5 = local_18[5];
              if (((iVar5 - local_18[4] & 0xffffffc0U) != 0) && (local_18[4] != iVar5)) {
                (*(code *)**(undefined4 **)(iVar5 + -0x40))(0);
                goto LAB_009386f3;
              }
            }
          }
          piVar9 = piVar9 + 0x10;
          local_24 = local_24 + -1;
        } while (local_24 != 0);
        local_24 = 0;
        piVar9 = local_18;
      }
      if (*(char *)((int)piVar9 + 0x21) == '\0') {
        piVar2 = (int *)piVar9[2];
        if (*(char *)((int)piVar2 + 0x21) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x21);
          piVar9 = piVar2;
          piVar2 = (int *)*piVar2;
          while (local_18 = piVar9, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x21);
            piVar9 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar9[1] + 0x21);
          piVar3 = (int *)piVar9[1];
          piVar2 = piVar9;
          while ((piVar9 = piVar3, local_18 = piVar9, cVar1 == '\0' && (piVar2 == (int *)piVar9[2]))
                ) {
            cVar1 = *(char *)(piVar9[1] + 0x21);
            piVar3 = (int *)piVar9[1];
            piVar2 = piVar9;
          }
        }
      }
    } while (piVar9 != *(int **)(param_1 + 0xe0));
  }
  puVar10 = local_38;
  local_8 = 0xffffffff;
  puVar8 = local_38;
  if (local_38 != (undefined4 *)0x0) {
    for (; puVar8 != puVar4; puVar8 = puVar8 + 0x10) {
      (**(code **)*puVar8)(0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(puVar10);
  }
  ExceptionList = local_10;
  return;
}

