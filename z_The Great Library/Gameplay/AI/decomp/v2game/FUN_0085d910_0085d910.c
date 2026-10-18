// FUN_0085d910 @ 0085d910 body=[[0085d910, 0085d964] [0085d970, 0085db3f]]


void FUN_0085d910(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int local_10;
  int local_8;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  iVar2 = *(int *)(*(int *)(*(int *)(iVar1 + 0xe64) + 0x50) + 0x20);
  local_10 = 0;
  iVar4 = (**(code **)(*DAT_012588e8 + 0x18))();
  if (0 < iVar4) {
    do {
      iVar4 = *(int *)(DAT_012588e8[0x2b3] + local_10 * 4);
      iVar8 = *(int *)(iVar4 + 0x5c);
      if (((*(char *)(iVar8 + 0x2a) != '\0') && (*(int *)(iVar4 + 300) != 0)) &&
         (iVar3 = *(int *)(param_1 + 0xc), *(int *)(iVar4 + 300) != iVar3)) {
        iVar5 = *(int *)(iVar1 + 0xe64);
        local_8 = 0;
        if (*(int *)(*(int *)(iVar4 + 500) + *(int *)(*(int *)(iVar5 + 0x50) + 0x5c) * 4) != 0) {
          local_8 = 10000;
        }
        if (*(int *)(*(int *)(iVar4 + 0x1f0) + *(int *)(iVar5 + 8) * 4) != 0) {
          local_8 = local_8 + 20000;
        }
        iVar5 = (*(int *)(iVar8 + 0xcc) - *(int *)(iVar8 + 200)) / 0x24;
        iVar9 = 0;
        if (iVar5 < 1) {
LAB_0085da6c:
          uVar10 = __allmul(local_8,0,1000,0);
          iVar8 = __alldiv(uVar10,4000,0);
        }
        else {
          piVar6 = *(int **)(iVar8 + 200);
          do {
            if ((*piVar6 != 4) &&
               (*(int *)(*(int *)(*(int *)(DAT_0125870c + 0x2238) + piVar6[1] * 4) + 300) == iVar3))
            {
              iVar9 = iVar9 + 1;
            }
            piVar6 = piVar6 + 9;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          if (iVar9 == 0) goto LAB_0085da6c;
          uVar7 = *(uint *)(iVar4 + 0x1a8) / 10000;
          if (100 < uVar7) {
            uVar7 = 100;
          }
          iVar8 = local_8 + iVar9 * 15000 + uVar7 * 1000;
        }
        iVar5 = *(int *)(iVar4 + 0x148);
        iVar4 = *(int *)(iVar4 + 0x14c);
        iVar9 = iVar5;
        if (iVar5 != iVar4) {
          do {
            if (*(int *)(iVar9 + 4) == iVar3) break;
            iVar9 = iVar9 + 8;
          } while (iVar9 != iVar4);
          if (iVar9 != iVar4) {
            iVar8 = iVar8 + 100000;
          }
        }
        if (iVar5 != iVar4) {
          do {
            if (*(int *)(iVar5 + 4) == iVar2) break;
            iVar5 = iVar5 + 8;
          } while (iVar5 != iVar4);
          if (iVar5 != iVar4) {
            iVar8 = iVar8 + 70000;
          }
        }
        if (0 < iVar8) {
          FUN_00401000(0x43fa4001);
          FUN_00b31c00();
          FUN_0085ba40();
        }
      }
      local_10 = local_10 + 1;
      iVar4 = (**(code **)(*DAT_012588e8 + 0x18))();
    } while (local_10 < iVar4);
  }
  return;
}

