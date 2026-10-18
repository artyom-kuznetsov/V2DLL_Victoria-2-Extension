// FUN_004e1b20 @ 004e1b20 body=[[004e1b20, 004e1d2d] [004e1d30, 004e1d49] [004e1d50, 004e1e17]]


int FUN_004e1b20(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 *local_18;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_2 != (int *)0x0) {
    if ((*(char *)(*(int *)(param_1 + 0x30) + 0x123) != '\0') &&
       (*(char *)(*(int *)(param_1 + 0x30) + 0x124) != '\0')) {
      iVar7 = param_2[0x10];
      piVar4 = (int *)FUN_005cd690(param_2);
      iVar7 = iVar7 * 1000;
      if (iVar7 == 0) {
        iVar7 = -1;
      }
      else {
        iVar8 = *piVar4;
        if ((iVar8 < -0x189373) || (0x20c49a < iVar8)) {
          uVar9 = __allmul(iVar8,iVar8 >> 0x1f,1000,0);
          iVar7 = __alldiv(uVar9,iVar7,iVar7 >> 0x1f);
        }
        else {
          iVar7 = (iVar8 * 1000) / iVar7;
        }
      }
      if (iVar7 < DAT_0125d1e0) {
        return 0;
      }
    }
    piVar4 = (int *)(**(code **)(*param_2 + 0x94))(&local_18);
    piVar5 = (int *)(**(code **)(*param_2 + 0x44))(&local_14);
    iVar7 = *piVar4;
    if (iVar7 == 0) {
      iVar7 = -1;
    }
    else {
      iVar8 = *piVar5;
      if ((iVar8 < -0x189373) || (0x20c49a < iVar8)) {
        uVar9 = __allmul(iVar8,iVar8 >> 0x1f,1000,0);
        local_18 = (undefined4 *)((ulonglong)uVar9 >> 0x20);
        iVar7 = __alldiv(uVar9,iVar7,iVar7 >> 0x1f);
      }
      else {
        iVar7 = (iVar8 * 1000) / iVar7;
      }
    }
    if (DAT_0125d2dc <= iVar7) {
      uVar6 = FUN_009b7950(0x777,0);
      FUN_008a8650(uVar6);
      local_10 = 0;
      local_8 = 0;
      if (*(int *)(param_2[0x37] + 0xe8) != 0) {
        local_14 = *(int **)(*(int *)(param_2[0x37] + 0xe8) + 4);
        while (local_14 != (int *)0x0) {
          iVar7 = *local_14;
          local_14 = (int *)local_14[2];
          cVar3 = FUN_004e1a50();
          if (cVar3 != '\0') {
            FUN_004eab00();
            iVar8 = *(int *)(param_2[0x37] + 0x5c);
            iVar1 = (*(int *)(iVar8 + 0xcc) - *(int *)(iVar8 + 200)) / 0x24;
            if (0 < iVar1) {
              piVar4 = (int *)(*(int *)(iVar8 + 200) + 4);
              iVar8 = 0;
              do {
                if (*piVar4 == *(int *)(iVar7 + 0x58)) goto LAB_004e1cfd;
                iVar8 = iVar8 + 1;
                piVar4 = piVar4 + 9;
              } while (iVar8 < iVar1);
            }
            local_c = __alldiv((longlong)DAT_0125d270 * (longlong)local_c,1000,0);
LAB_004e1cfd:
            if (local_8 < local_c) {
              local_10 = iVar7;
              local_8 = local_c;
            }
          }
        }
        puVar2 = *(undefined4 **)(*(int *)(param_2[0x37] + 0xe8) + 0x14);
        while (puVar2 != (undefined4 *)0x0) {
          local_18 = (undefined4 *)puVar2[2];
          local_14 = *(int **)(*(int *)*puVar2 + 4);
          while (puVar2 = local_18, local_14 != (int *)0x0) {
            iVar7 = *local_14;
            local_14 = (int *)local_14[2];
            cVar3 = FUN_004e1a50();
            if (cVar3 != '\0') {
              FUN_004eab00();
              iVar8 = *(int *)(param_2[0x37] + 0x5c);
              iVar1 = (*(int *)(iVar8 + 0xcc) - *(int *)(iVar8 + 200)) / 0x24;
              if (0 < iVar1) {
                piVar4 = (int *)(*(int *)(iVar8 + 200) + 4);
                iVar8 = 0;
                do {
                  if (*piVar4 == *(int *)(iVar7 + 0x58)) goto LAB_004e1ded;
                  iVar8 = iVar8 + 1;
                  piVar4 = piVar4 + 9;
                } while (iVar8 < iVar1);
              }
              local_c = __alldiv((longlong)DAT_0125d270 * (longlong)local_c,1000,0);
LAB_004e1ded:
              if (local_8 < local_c) {
                local_10 = iVar7;
                local_8 = local_c;
              }
            }
          }
        }
      }
      return local_10;
    }
  }
  return 0;
}

