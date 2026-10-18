// FUN_0084fea0 @ 0084fea0 body=[[0084fea0, 0084ff4c] [0084ff50, 0085009b]]


undefined4 * FUN_0084fea0(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3eaa9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  local_8 = 0;
  iVar5 = *(int *)(param_3 + 0x5c);
  local_18 = 0;
  if (0 < (*(int *)(iVar5 + 0xcc) - *(int *)(iVar5 + 200)) / 0x24) {
    local_1c = 0;
    do {
      if ((*(int *)(local_1c + *(int *)(iVar5 + 200)) != 4) &&
         (iVar5 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                          *(int *)(*(int *)(iVar5 + 200) + 4 + local_1c) * 4),
         *(char *)(*(int *)(iVar5 + 0x5c) + 0x2a) != '\0')) {
        piVar1 = *(int **)(iVar5 + 0xec);
joined_r0x0084ff45:
        if (piVar1 != (int *)0x0) {
          piVar2 = (int *)*piVar1;
          piVar1 = (int *)piVar1[2];
          cVar4 = (**(code **)(*piVar2 + 0x3c))();
          if (cVar4 == '\0') {
            iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
            if ((piVar2[0x31] != *(int *)(iVar5 + 0x20)) &&
               (((*(int *)(*(int *)(*(int *)(iVar5 + 0xbe8) + piVar2[0x31] * 4) + 0x34) != 0 ||
                 ((((char)piVar2[0x30] == 'R' && (*(char *)((int)piVar2 + 0xc1) == 'E')) &&
                  (*(char *)((int)piVar2 + 0xc2) == 'B')))) ||
                (((*(char *)(iVar5 + 0x1c) == 'R' && (*(char *)(iVar5 + 0x1d) == 'E')) &&
                 (*(char *)(iVar5 + 0x1e) == 'B')))))) {
              if (piVar2[0x3b] < 1) {
                if ((char)piVar2[0x41] == '\0') goto joined_r0x0084ff45;
                if (0 < piVar2[0x3b]) goto LAB_0084ffe6;
                iVar5 = 0;
              }
              else {
LAB_0084ffe6:
                iVar5 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)piVar2[0x39] * 4);
              }
              if (iVar5 == param_3) {
                iVar5 = param_2[1];
                piVar6 = (int *)FUN_00aae9af(0x10);
                if (piVar6 == (int *)0x0) {
                  piVar6 = (int *)0x0;
                }
                else {
                  *piVar6 = (int)piVar2;
                  piVar6[1] = iVar5;
                  piVar6[2] = 0;
                  *(undefined1 *)(piVar6 + 3) = 0;
                }
                iVar3 = param_2[2];
                param_2[1] = piVar6;
                param_2[2] = iVar3 + 1;
                if (iVar3 == 0) {
                  *param_2 = piVar6;
                }
                else {
                  *(int **)(iVar5 + 8) = piVar6;
                }
              }
            }
          }
          goto joined_r0x0084ff45;
        }
      }
      iVar5 = *(int *)(param_3 + 0x5c);
      local_18 = local_18 + 1;
      local_1c = local_1c + 0x24;
    } while (local_18 < (*(int *)(iVar5 + 0xcc) - *(int *)(iVar5 + 200)) / 0x24);
  }
  ExceptionList = local_10;
  return param_2;
}

