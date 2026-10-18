// FUN_00828c10 @ 00828c10 body=[[00828c10, 00828e08] [00828e12, 00828e27]]


undefined4 FUN_00828c10(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  float fVar9;
  int **ppiVar10;
  undefined4 uVar11;
  int *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  int local_28;
  int local_20;
  int *local_1c;
  int *local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar6 = param_1;
  puStack_c = &LAB_00b4add8;
  local_10 = ExceptionList;
  local_38 = (int *)0x0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_8 = 0;
  uVar11 = *(undefined4 *)(param_2 + 0x98);
  ppiVar10 = &local_38;
  ExceptionList = &local_10;
  uVar7 = (**(code **)(*param_1 + 0xe8))(ppiVar10,uVar11);
  FUN_0084bd60(uVar7,ppiVar10,uVar11);
  param_1 = (int *)0x0;
  local_14 = 1e+06;
  piVar3 = local_38;
  piVar4 = local_38;
  while (piVar4 != (int *)0x0) {
    local_1c = (int *)piVar4[2];
    piVar5 = *(int **)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(*piVar4 + 8) * 4)
                               + 0xe8) + 4);
    while (piVar4 = local_1c, piVar5 != (int *)0x0) {
      iVar1 = *piVar5;
      local_18 = (int *)piVar5[2];
      piVar5 = local_18;
      piVar3 = local_38;
      if ((*(int *)(*(int *)(iVar1 + 0x5c) + 0xdc) != 0) &&
         (iVar2 = *(int *)(param_2 + 0x8c), iVar8 = FUN_005dc7c0(piVar6[0xd],piVar6[0xe]),
         piVar5 = local_18, piVar3 = local_38, iVar8 < iVar2 / 1000)) {
        FUN_004a0e80(DAT_0125870c,&local_20);
        local_28 = piVar6[0xd];
        fVar9 = (float)local_20 / 1000.0;
        if (*(int *)(iVar1 + 300) == piVar6[0xe]) {
          fVar9 = fVar9 - 400.0;
        }
        else {
          iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + piVar6[0xe] * 4);
          if ((*(int *)(iVar1 + 300) == *(int *)(iVar2 + 0x20)) ||
             (((*(int *)(*(int *)(*(int *)(iVar2 + 0xbe8) + *(int *)(iVar1 + 300) * 4) + 0x34) == 0
               && (((*(char *)(iVar1 + 0x128) != 'R' || (*(char *)(iVar1 + 0x129) != 'E')) ||
                   (*(char *)(iVar1 + 0x12a) != 'B')))) &&
              (((*(char *)(iVar2 + 0x1c) != 'R' || (*(char *)(iVar2 + 0x1d) != 'E')) ||
               (*(char *)(iVar2 + 0x1e) != 'B')))))) {
            fVar9 = fVar9 + 5000.0;
          }
        }
        piVar5 = local_18;
        piVar3 = local_38;
        if (fVar9 < local_14) {
          param_1 = *(int **)(iVar1 + 0x58);
          local_14 = fVar9;
        }
      }
    }
  }
  if (piVar3 == (int *)0x0) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(piVar3);
}

