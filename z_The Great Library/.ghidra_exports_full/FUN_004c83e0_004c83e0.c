// FUN_004c83e0 @ 004c83e0 body=[[004c83e0, 004c84d9] [004c84e0, 004c8570]]


void FUN_004c83e0(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_3c [14];
  
  local_3c[6] = 0;
  local_3c[0] = 0;
  local_3c[7] = 0;
  local_3c[1] = 0;
  local_3c[8] = 0;
  local_3c[2] = 0;
  local_3c[9] = 0;
  local_3c[3] = 0;
  local_3c[10] = 0;
  local_3c[4] = 0;
  local_3c[0xb] = 0;
  local_3c[5] = 0;
  if (0 < *(int *)(*(int *)(param_1 + 0x18) + 0x104)) {
    piVar5 = *(int **)(*(int *)(param_1 + 0x18) + 0xfc);
    while (piVar5 != (int *)0x0) {
      iVar4 = 0;
      piVar1 = (int *)*piVar5;
      piVar5 = (int *)piVar5[2];
      cVar2 = (**(code **)(*piVar1 + 0x3c))();
      if (((cVar2 == '\0') || (*(char *)(*(int *)(piVar1[0x37] + 0x5c) + 0x2a) == '\0')) &&
         ((cVar2 = (**(code **)(*piVar1 + 0x38))(), cVar2 == '\0' ||
          (iVar3 = (**(code **)(*piVar1 + 0x2c))(), *(int *)(iVar3 + 0x1b4) == 0)))) {
        cVar2 = (**(code **)(*piVar1 + 0x40))();
        if (cVar2 == '\0') {
          if (piVar1[0x1d] == 0) {
            if ((0 < piVar1[0x3b]) && (cVar2 = (**(code **)(*piVar1 + 0x3c))(), cVar2 == '\0')) {
              iVar4 = 1;
            }
          }
          else {
            cVar2 = FUN_005cf260();
            iVar4 = 3 - (uint)(cVar2 != '\0');
          }
        }
        else {
          iVar4 = 4;
        }
        local_3c[iVar4 + 6] = local_3c[iVar4 + 6] + 1;
        if (local_3c[iVar4] == 0) {
          local_3c[iVar4] = (int)piVar1;
        }
      }
    }
  }
  iVar4 = 0;
  piVar5 = (int *)(param_1 + 0x1e0);
  do {
    local_3c[0xd] = 0;
    local_3c[0xc] = 7;
    do {
      piVar1 = (int *)piVar5[1];
      if ((piVar1 != (int *)0x0) && ((int *)*piVar5 != (int *)0x0)) {
        cVar2 = (**(code **)(*(int *)*piVar5 + 0x38))();
        if ((cVar2 == '\0') ||
           (iVar3 = (**(code **)(*(int *)*piVar5 + 0x2c))(), *(int *)(iVar3 + 0x1b4) == 0)) {
          if ((local_3c[0xd] < local_3c[iVar4 + 6]) && (*piVar5 != local_3c[iVar4])) {
            (**(code **)(*piVar1 + 0x34))();
            local_3c[0xd] = local_3c[0xd] + 1;
          }
          else {
            (**(code **)(*piVar1 + 0x38))();
          }
        }
        else {
          (**(code **)(*piVar1 + 0x38))();
        }
      }
      piVar5 = piVar5 + 2;
      local_3c[0xc] = local_3c[0xc] + -1;
    } while (local_3c[0xc] != 0);
    FUN_004c87b0(iVar4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  return;
}

