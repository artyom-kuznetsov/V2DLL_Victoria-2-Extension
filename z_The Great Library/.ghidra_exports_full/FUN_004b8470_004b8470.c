// FUN_004b8470 @ 004b8470 body=[[004b8470, 004b8515] [004b8520, 004b85d5]]


/* WARNING: Removing unreachable block (ram,0x004b848e) */
/* WARNING: Removing unreachable block (ram,0x004b8490) */

void FUN_004b8470(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_c;
  
  iVar2 = param_1;
  if (*param_2 != param_2[1]) {
    param_2[1] = *param_2;
  }
  if (((*(int *)(param_1 + 300) != 0) && (*(int *)(param_1 + 0x158) != 0)) &&
     (iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 300) * 4),
     *(char *)(iVar1 + 3000) == '\0')) {
    iVar4 = FUN_005c1a10();
    local_c = 3;
    if (0xc < (int)(*(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc) & 0xfffffffcU)) {
      do {
        if (*(char *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                         *(int *)(iVar2 + 300) * 4) + 0xbcc) + 0x310
                                       ) +
                              *(int *)(*(int *)(*(int *)(iVar4 + 0xc) + local_c * 4) + 0x24) * 4) +
                     0x3a) != '\0') {
          cVar3 = FUN_00514030(iVar1,iVar2,&param_1);
          if (cVar3 == '\0') {
            if (param_3 != (int *)0x0) {
              piVar7 = (int *)*param_3;
              iVar5 = param_3[1] - (int)piVar7 >> 2;
              iVar6 = 0;
              if (0 < iVar5) {
                do {
                  if (*piVar7 == param_1) goto LAB_004b8597;
                  iVar6 = iVar6 + 1;
                  piVar7 = piVar7 + 1;
                } while (iVar6 < iVar5);
              }
            }
          }
          else {
LAB_004b8597:
            FUN_004bec00();
          }
        }
        local_c = local_c + 1;
      } while (local_c < *(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc) >> 2);
    }
  }
  return;
}

