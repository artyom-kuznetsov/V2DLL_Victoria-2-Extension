// FUN_00791430 @ 00791430 body=[[00791430, 007915a9] [007915b0, 00791796]]


/* WARNING: Type propagation algorithm not settling */

void FUN_00791430(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iStack_9c;
  int aiStack_98 [3];
  int *local_8c;
  uint local_88;
  undefined4 local_84;
  int *local_7c;
  int *local_78;
  int *local_74;
  undefined1 auStack_6c [80];
  int iStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b439f8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x2c)) {
    ExceptionList = &local_14;
    uVar3 = FUN_0079f110(*(int *)(param_1 + 0x2c));
    FUN_0079ef90(local_88);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
  }
  cVar2 = FUN_005e5800();
  iVar5 = DAT_01258a98;
  iVar6 = DAT_01258a94;
  if (cVar2 == '\0') {
    ExceptionList = local_14;
    return;
  }
  local_88 = *(uint *)(param_1 + 4);
  local_84 = *(undefined4 *)(param_1 + 8);
  iVar4 = DAT_01258a98;
  if (0x1268 < local_88) {
    iVar4 = DAT_01258a94;
  }
  if ((iVar4 == 0) || (iVar4 = FUN_009c1d40(), iVar4 == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + -8;
  }
  iVar4 = *(int *)(iVar4 + 0xdc);
  local_88 = *(uint *)(param_1 + 4);
  local_84 = *(undefined4 *)(param_1 + 8);
  iVar1 = iVar5;
  if (0x1268 < local_88) {
    iVar1 = iVar6;
  }
  if ((iVar1 == 0) || (aiStack_98[2] = FUN_009c1d40(), aiStack_98[2] == 0)) {
    aiStack_98[2] = 0;
  }
  else {
    aiStack_98[2] = aiStack_98[2] + -8;
  }
  local_88 = *(uint *)(param_1 + 4);
  local_84 = *(undefined4 *)(param_1 + 8);
  if (0x1268 < local_88) {
    iVar5 = iVar6;
  }
  if ((iVar5 == 0) || (iVar5 = FUN_009c1d40(), iVar5 == 0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = iVar5 + -8;
  }
  if ((((*(int *)(iVar5 + 0x74) == 0) && (*(char *)(*(int *)(iVar4 + 0x5c) + 0x2a) != '\0')) &&
      (*(int *)(iVar4 + 300) != 0)) && (*(int *)(iVar4 + 0x158) != 0)) {
    local_7c = (int *)0x0;
    local_78 = (int *)0x0;
    local_74 = (int *)0x0;
    local_c = 0;
    piVar8 = *(int **)(*(int *)(iVar4 + 0x158) + 8);
    while (piVar8 != (int *)0x0) {
      local_8c = (int *)piVar8[2];
      piVar7 = (int *)*piVar8;
      cVar2 = (**(code **)(*piVar7 + 0x3c))();
      piVar8 = local_8c;
      if ((cVar2 != '\0') && (piVar7[0x33] == *(int *)(aiStack_98[2] + 0xcc))) {
        iVar6 = (**(code **)(*piVar7 + 0x30))();
        iVar5 = *(int *)(*(int *)(iVar6 + 0xa4) + 600);
        iVar4 = FUN_005dc560();
        local_88 = iVar5 / 1000 - iVar4;
        piVar8 = local_8c;
        if (0 < (int)local_88) {
          aiStack_98[1] = 0;
          iVar5 = FUN_0079dee0();
          if (iVar5 == 0) {
            piVar7 = (int *)0x0;
          }
          else {
            piVar7 = (int *)(iVar5 + 0x38);
          }
          piVar7 = (int *)*piVar7;
          piVar8 = local_8c;
          if (piVar7 != (int *)0x0) {
            iStack_9c = 1;
            piVar8 = local_78;
            piVar10 = local_7c;
            do {
              iVar5 = *piVar7;
              piVar7 = (int *)piVar7[2];
              piVar9 = piVar10;
              aiStack_98[0] = iVar5;
              if (piVar10 == piVar8) {
LAB_0079167f:
                if (piVar8 <= piVar9) goto LAB_00791683;
              }
              else {
                do {
                  if (*piVar9 == iVar5) break;
                  piVar9 = piVar9 + 1;
                } while (piVar9 != piVar8);
                if (piVar10 <= piVar9) goto LAB_0079167f;
LAB_00791683:
                if (iStack_9c <= (int)local_88) {
                  aiStack_98[1] = aiStack_98[1] + 1;
                  iStack_9c = iStack_9c + 1;
                  if ((aiStack_98 < piVar8) && (piVar10 <= aiStack_98)) {
                    iVar5 = (int)aiStack_98 - (int)piVar10;
                    if (piVar8 == local_74) {
                      FUN_00a513f0();
                      piVar8 = local_78;
                      piVar10 = local_7c;
                    }
                    piVar9 = (int *)0x0;
                    if (piVar8 != (int *)0x0) {
                      *piVar8 = piVar10[iVar5 >> 2];
                      piVar9 = local_78;
                      piVar10 = local_7c;
                    }
                  }
                  else {
                    if (piVar8 == local_74) {
                      FUN_00a513f0();
                      piVar8 = local_78;
                      piVar10 = local_7c;
                    }
                    piVar9 = (int *)0x0;
                    if (piVar8 != (int *)0x0) {
                      *piVar8 = iVar5;
                      piVar9 = local_78;
                      piVar10 = local_7c;
                    }
                  }
                  piVar8 = piVar9 + 1;
                  local_78 = piVar8;
                }
              }
              iVar5 = aiStack_98[1];
            } while (piVar7 != (int *)0x0);
            piVar8 = local_8c;
            if (0 < aiStack_98[1]) {
              FUN_007917a0();
              local_c._0_1_ = 1;
              FUN_0079de40(auStack_6c,iVar6);
              local_c._0_1_ = 2;
              FUN_004c0270();
              local_c._0_1_ = 1;
              FUN_00584e60();
              iStack_1c = iVar5;
              FUN_0079e8f0(param_1 + 0x28);
              local_c = (uint)local_c._1_3_ << 8;
              FUN_00584e60();
              piVar8 = local_8c;
            }
          }
        }
      }
    }
    FUN_00461f90();
  }
  ExceptionList = local_14;
  return;
}

