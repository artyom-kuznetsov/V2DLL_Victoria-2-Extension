// FUN_00461db0 @ 00461db0 body=[[00461db0, 00461de3] [00461dea, 00461ed0]]


void FUN_00461db0(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int local_8;
  
  local_8 = 0x15;
  piVar6 = param_1;
  do {
    piVar10 = piVar6 + 4;
    puVar2 = (undefined4 *)*piVar10;
    puVar3 = (undefined4 *)*puVar2;
    while (puVar3 != puVar2) {
      iVar4 = puVar3[10];
      if (iVar4 != 0) {
        FUN_0045fc60(iVar4);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar4);
      }
      puVar3[10] = 0;
      if (*(char *)((int)puVar3 + 0x2d) == '\0') {
        puVar5 = (undefined4 *)puVar3[2];
        if (*(char *)((int)puVar5 + 0x2d) == '\0') {
          cVar1 = *(char *)((int)*puVar5 + 0x2d);
          puVar3 = puVar5;
          puVar5 = (undefined4 *)*puVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar5 + 0x2d);
            puVar3 = puVar5;
            puVar5 = (undefined4 *)*puVar5;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar3[1] + 0x2d);
          puVar7 = (undefined4 *)puVar3[1];
          puVar5 = puVar3;
          while ((puVar3 = puVar7, cVar1 == '\0' && (puVar5 == (undefined4 *)puVar3[2]))) {
            cVar1 = *(char *)((int)puVar3[1] + 0x2d);
            puVar7 = (undefined4 *)puVar3[1];
            puVar5 = puVar3;
          }
        }
      }
    }
    FUN_00462290(*(undefined4 *)(*piVar10 + 4));
    *(int *)(*piVar10 + 4) = *piVar10;
    *(int *)*piVar10 = *piVar10;
    *(int *)(*piVar10 + 8) = *piVar10;
    piVar6[5] = 0;
    local_8 = local_8 + -1;
    piVar6 = piVar10;
  } while (local_8 != 0);
  if (param_1[0x59] != param_1[0x5a]) {
    iVar8 = FUN_00463ba0(param_1[0x5a],param_1[0x59],param_1);
    iVar4 = param_1[0x5a];
    for (iVar9 = iVar8; iVar9 != iVar4; iVar9 = iVar9 + 0xac) {
      FUN_0045f8a0(iVar9);
    }
    param_1[0x5a] = iVar8;
  }
  FUN_0045ef40(param_1 + 0x76);
  return;
}

