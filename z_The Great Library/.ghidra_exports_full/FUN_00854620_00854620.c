// FUN_00854620 @ 00854620 body=[[00854620, 0085468e] [00854690, 008546fc] [00854700, 0085491b]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x0085463b) */
/* WARNING: Removing unreachable block (ram,0x00854640) */

void FUN_00854620(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  bool bVar8;
  undefined8 uVar9;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 *local_18;
  int *local_14;
  int local_10;
  int local_c;
  char local_5;
  
  if (*param_1 != param_1[1]) {
    param_1[1] = *param_1;
  }
  local_2c = DAT_012588e8;
  iVar2 = *(int *)(DAT_0125870c + 0x2a8c) - *(int *)(DAT_0125870c + 0x2a88) >> 2;
  local_34 = 0;
  local_30 = iVar2;
  if (0 < iVar2) {
    do {
      iVar7 = *(int *)(*(int *)(DAT_0125870c + 0x2a88) + local_34 * 4);
      local_28 = iVar7;
      if (*(int *)(iVar7 + 0x10) != 0) {
        local_1c = 0;
        local_20 = 0;
        local_10 = 0;
        FUN_00565b70();
        local_18 = &stack0xffffffac;
        puVar6 = (undefined4 *)&stack0xffffffac;
        iVar2 = FUN_00565b70();
        iVar4 = *(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc) >> 2;
        local_c = iVar2;
        if (0 < iVar4) {
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
        }
        for (piVar3 = *(int **)(iVar7 + 8); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
          iVar7 = *(int *)(*(int *)(local_2c + 0xacc) + *piVar3 * 4);
          iVar4 = *(int *)(iVar7 + 300);
          local_14 = piVar3;
          if (iVar4 == 0) {
LAB_0085472b:
            cVar1 = FUN_004bbd60(iVar7);
            if (cVar1 != '\0') {
LAB_0085473c:
              iVar5 = 0;
              iVar4 = *(int *)(local_c + 0x10) - *(int *)(local_c + 0xc) >> 2;
              iVar2 = local_c;
              local_24 = iVar4;
              if (0 < iVar4) {
                do {
                  iVar2 = DAT_01258804;
                  if ((-1 < iVar5) &&
                     (iVar5 < *(int *)(local_c + 0x10) - *(int *)(local_c + 0xc) >> 2)) {
                    iVar2 = *(int *)(*(int *)(local_c + 0xc) + iVar5 * 4);
                  }
                  if ((((*(int *)(iVar2 + 0x5c) < 1) || (*(int *)(iVar7 + 300) == 0)) &&
                      ((*(int *)(iVar2 + 0x5c) != 0 || (*(int *)(iVar7 + 300) != 0)))) &&
                     (FUN_00564770(iVar2,&local_38,param_2), iVar4 = local_24, 0 < local_38)) {
                    *(int *)(local_18 + *(int *)(iVar2 + 0x4c) * 4) =
                         *(int *)(local_18 + *(int *)(iVar2 + 0x4c) * 4) + local_38;
                  }
                  iVar5 = iVar5 + 1;
                  iVar2 = local_c;
                  piVar3 = local_14;
                } while (iVar5 < iVar4);
              }
            }
          }
          else if (iVar4 == *(int *)(param_2 + 4)) {
            if (iVar4 == 0) goto LAB_0085472b;
            goto LAB_0085473c;
          }
        }
        iVar7 = 0;
        local_14 = (int *)0x0;
        if (0 < (int)(*(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc) & 0xfffffffcU)) {
          do {
            iVar4 = *(int *)(local_28 + 0x10) * 1000;
            uVar9 = __allmul(*(int *)(local_18 + iVar7 * 4),*(int *)(local_18 + iVar7 * 4) >> 0x1f,
                             1000,0);
            local_24 = (int)((ulonglong)uVar9 >> 0x20);
            iVar5 = __alldiv(uVar9,iVar4,iVar4 >> 0x1f);
            *(int *)(local_18 + iVar7 * 4) = iVar5;
            iVar4 = local_20;
            if (local_1c < iVar5) {
              if ((iVar7 < 0) || (*(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc) >> 2 <= iVar7)) {
                local_10 = DAT_01258804;
              }
              else {
                local_10 = *(int *)(*(int *)(iVar2 + 0xc) + iVar7 * 4);
              }
              piVar3 = *(int **)(local_28 + 8);
              local_1c = iVar5;
              if (piVar3 != (int *)0x0) {
                local_5 = *(char *)(local_10 + 0xe4);
                do {
                  iVar4 = *(int *)(*(int *)(local_2c + 0xacc) + *piVar3 * 4);
                  if (local_5 == '\0') {
                    bVar8 = *(int *)(iVar4 + 300) == *(int *)(param_2 + 4);
                    iVar2 = local_c;
                  }
                  else {
                    bVar8 = *(int *)(iVar4 + 300) == 0;
                  }
                } while ((!bVar8) &&
                        (piVar3 = (int *)piVar3[2], iVar4 = local_20, piVar3 != (int *)0x0));
              }
            }
            local_20 = iVar4;
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc) >> 2);
        }
        iVar2 = local_30;
        if (0 < local_1c) {
          FUN_00854a80();
          iVar2 = local_30;
        }
      }
      local_34 = local_34 + 1;
    } while (local_34 < iVar2);
  }
  piVar3 = param_1 + 1;
  iVar2 = *param_1;
  param_1 = (int *)((uint)param_1 & 0xffffff00);
  FUN_00854c60(iVar2,*piVar3,(*piVar3 - iVar2) / 0xc,param_1);
  return;
}

