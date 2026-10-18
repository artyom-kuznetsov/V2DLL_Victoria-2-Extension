// FUN_007ff310 @ 007ff310 body=[[007ff310, 007ff878]]


void FUN_007ff310(int param_1)

{
  char *pcVar1;
  float fVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int local_a8;
  int local_a4;
  int local_80;
  float local_7c;
  float local_78;
  undefined1 auStack_2c [8];
  undefined1 auStack_24 [32];
  
  iVar3 = DAT_012588e8;
  iVar6 = *(int *)(DAT_012588e8 + 0xb24);
  pcVar1 = (char *)(DAT_012588e8 + 0xb5c);
  local_80 = 0;
  if ((0 < *(int *)(iVar6 + 0x1608)) &&
     (iVar5 = (**(code **)(*(int *)**(undefined4 **)(iVar6 + 0x1600) + 4))(), iVar5 == 0)) {
    local_80 = **(int **)(iVar6 + 0x1600);
  }
  local_78 = 0.0;
  iVar6 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
  local_7c = 9999.0;
  local_a4 = 1;
  if (1 < iVar6) {
    do {
      piVar7 = (int *)FUN_004b3c40(*(undefined4 *)
                                    (*(int *)(*(int *)(param_1 + 0x1c) + local_a4 * 4) + 0xc),pcVar1
                                  );
      fVar2 = (float)*piVar7 / 1000.0;
      if (local_78 < fVar2) {
        local_78 = fVar2;
      }
      if (fVar2 < local_7c) {
        local_7c = fVar2;
      }
      local_a4 = local_a4 + 1;
    } while (local_a4 < iVar6);
  }
  local_a4 = 1;
  iVar6 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
  if (1 < iVar6) {
    do {
      iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + local_a4 * 4) + 0xc);
      if (local_80 == 0) {
        FUN_004b3c40(iVar5,pcVar1);
        FUN_009b7270(auStack_24);
        local_a8 = FUN_009b6df0();
        **(undefined4 **)(*(int *)(param_1 + 0x1c) + local_a4 * 4) = local_a8;
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + local_a4 * 4);
      }
      else {
        FUN_004b3c40(iVar5,pcVar1);
        iVar8 = *(int *)(local_80 + 0xdc);
        if ((DAT_00f092fb == '\0') || (0 < *(int *)(*(int *)(iVar5 + 0x5c) + 0x360))) {
          piVar7 = (int *)FUN_005dc2a0(iVar5 + 0xec,auStack_2c);
          local_a8 = *piVar7;
          if (iVar8 != iVar5) {
            FUN_00401000(0x3f000000);
            iVar8 = FUN_00b31c00();
            for (piVar7 = *(int **)(local_80 + 0x38); piVar7 != (int *)0x0;
                piVar7 = (int *)piVar7[2]) {
              iVar8 = iVar8 + *(int *)(*piVar7 + 0x3c);
            }
            local_a8 = local_a8 + iVar8;
          }
        }
        else {
          FUN_00401000(0x3f000000);
          local_a8 = FUN_00b31c00();
          for (piVar7 = *(int **)(local_80 + 0x38); piVar7 != (int *)0x0; piVar7 = (int *)piVar7[2])
          {
            local_a8 = local_a8 + *(int *)(*piVar7 + 0x3c);
          }
        }
        cVar4 = (**(code **)(**(int **)(local_80 + 0xd8) + 0x20))();
        if (cVar4 != '\0') {
          local_a8 = local_a8 + *(int *)(*(int *)(*(int *)(local_80 + 0xd8) + 0x48) + 0x38);
        }
        iVar8 = *(int *)(DAT_012587e4 + 4);
        __alldiv((longlong)(*(int *)(*(int *)(iVar5 + 0x9c) + 0x10) + local_a8) *
                 (longlong)
                 (*(int *)(*(int *)(*(int *)(iVar8 + *(int *)(local_80 + 0xc4) * 4) + 0xbcc) + 0x20)
                 + 1000),1000,0);
        uVar9 = FUN_009b6df0();
        iVar5 = *(int *)(iVar8 + *(int *)(iVar5 + 0x134) * 4);
        local_a8 = uVar9;
        if (((*(int *)(iVar3 + 0xb60) != *(int *)(iVar5 + 0x20)) &&
            (((*(int *)(*(int *)(*(int *)(iVar5 + 0xbe8) + *(int *)(iVar3 + 0xb60) * 4) + 0x34) != 0
              || (((*pcVar1 == 'R' && (*(char *)(iVar3 + 0xb5d) == 'E')) &&
                  (*(char *)(iVar3 + 0xb5e) == 'B')))) ||
             (((*(char *)(iVar5 + 0x1c) == 'R' && (*(char *)(iVar5 + 0x1d) == 'E')) &&
              (*(char *)(iVar5 + 0x1e) == 'B')))))) && (cVar4 = FUN_004b7e30(pcVar1), cVar4 == '\0')
           ) {
          local_a8 = FUN_009b6df0();
        }
        **(undefined4 **)(*(int *)(param_1 + 0x1c) + local_a4 * 4) = uVar9;
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + local_a4 * 4);
      }
      local_a4 = local_a4 + 1;
      *(int *)(iVar5 + 4) = local_a8;
    } while (local_a4 < iVar6);
  }
  return;
}

