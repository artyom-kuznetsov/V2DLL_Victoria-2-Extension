// FUN_00632890 @ 00632890 body=[[00632890, 00632a86] [00632a8d, 00632ad2] [00632ad6, 00632ae9] [00632aed, 00632b0c] [00632b10, 00632b18] [00632b22, 00632b34]]


void FUN_00632890(int *param_1)

{
  double dVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  char cVar9;
  int *piVar10;
  int iVar11;
  short *psVar12;
  short sVar13;
  double in_XMM0_Qa;
  int *local_50;
  int *local_4c;
  int local_48;
  short local_34;
  undefined4 *local_2c;
  undefined1 local_28 [12];
  uint local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puVar8 = param_1;
  puStack_c = &LAB_00b4c7b9;
  local_10 = ExceptionList;
  sVar13 = 0;
  dVar1 = *(double *)(param_1 + 6);
  local_50 = (int *)0x0;
  local_4c = (int *)0x0;
  local_48 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  piVar10 = (int *)(**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x34))();
  iVar11 = (**(code **)(*piVar10 + 0x48))(&DAT_00f0bae0);
  local_18 = CONCAT22((short)*(undefined4 *)(iVar11 + 0x68),(short)*(undefined4 *)(iVar11 + 100));
  (**(code **)(*(int *)*param_1 + 0x18))(local_18);
  local_18 = 0;
  piVar10 = (int *)(**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x34))();
  iVar11 = (**(code **)(*piVar10 + 0x48))(&DAT_00f0bafc);
  iVar11 = *(int *)(iVar11 + 100);
  piVar5 = local_50;
  piVar6 = local_4c;
  iVar3 = local_48;
  for (piVar10 = (int *)param_1[1]; piVar10 != (int *)0x0; piVar10 = (int *)piVar10[2]) {
    psVar12 = (short *)(**(code **)(*(int *)*param_1 + 0x60))();
    if (local_18 <= *psVar12) {
      piVar2 = *(int **)*piVar10;
      psVar12 = (short *)(**(code **)(*piVar2 + 0x60))(local_28);
      local_34 = (short)iVar11;
      local_1c = (uint)(ushort)((*psVar12 + local_34) * sVar13);
      (**(code **)(*piVar2 + 0x18))(local_1c);
      (**(code **)(*(int *)(*(int *)*piVar10 + 0x18) + 0x90))();
      sVar13 = sVar13 + 1;
    }
    psVar12 = (short *)(**(code **)(**(int **)*piVar10 + 0x60))(&local_2c);
    local_18 = local_18 + *psVar12 + iVar11;
    cVar9 = FUN_006326f0(in_XMM0_Qa - dVar1);
    local_50 = piVar5;
    local_4c = piVar6;
    local_48 = iVar3;
    if (cVar9 == '\0') {
      local_4c = (int *)FUN_00aae9af();
      if (local_4c == (int *)0x0) {
        local_4c = (int *)0x0;
      }
      else {
        *local_4c = *piVar10;
        local_4c[1] = (int)piVar6;
        local_4c[2] = 0;
        *(undefined1 *)(local_4c + 3) = 0;
      }
      local_48 = iVar3 + 1;
      local_50 = local_4c;
      if (iVar3 != 0) {
        piVar6[2] = (int)local_4c;
        local_50 = piVar5;
      }
    }
    piVar5 = local_50;
    piVar6 = local_4c;
    iVar3 = local_48;
  }
  param_1 = piVar5;
  if (piVar5 != (int *)0x0) {
    do {
      piVar10 = (int *)puVar8[1];
      if (piVar10 != (int *)0x0) {
        do {
          if (*piVar10 == *param_1) {
            if (piVar10 != (int *)0x0) {
              if (*(char *)(puVar8 + 4) == '\0') {
                iVar11 = piVar10[1];
                iVar3 = piVar10[2];
                if (iVar11 != 0) {
                  *(int *)(iVar11 + 8) = iVar3;
                }
                if (iVar3 != 0) {
                  *(int *)(iVar3 + 4) = iVar11;
                }
                if (piVar10 == (int *)puVar8[1]) {
                  puVar8[1] = iVar3;
                }
                if (piVar10 == (int *)puVar8[2]) {
                  puVar8[2] = iVar11;
                }
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              *(undefined1 *)(piVar10 + 3) = 1;
            }
            break;
          }
          piVar10 = (int *)piVar10[2];
        } while (piVar10 != (int *)0x0);
      }
      puVar4 = (undefined4 *)*param_1;
      if (puVar4 != (undefined4 *)0x0) {
        uVar7 = local_8 >> 8;
        local_8 = CONCAT31((int3)uVar7,3);
        local_2c = puVar4;
        (**(code **)(*(int *)*puVar4 + 0x50))();
        if ((undefined4 *)puVar4[1] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)puVar4[1])();
        }
        puVar4[0x1b] = CButtonObserver::vftable;
        puVar4[0x10] = CButtonObserver::vftable;
        local_8 = local_8 & 0xffffff00;
        if (0xf < (uint)puVar4[10]) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        puVar4[10] = 0xf;
        puVar4[9] = 0;
        *(undefined1 *)(puVar4 + 5) = 0;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      param_1 = (int *)param_1[2];
      local_2c = (undefined4 *)0x0;
    } while (param_1 != (int *)0x0);
    local_2c = puVar4;
    FUN_006332e0();
    if (piVar5 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return;
}

