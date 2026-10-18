// FUN_005d7990 @ 005d7990 body=[[005d7990, 005d7b8a]]


void FUN_005d7990(float param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float10 fVar9;
  undefined4 auStack_4c [18];
  
  piVar5 = *(int **)(in_ECX + 0x10c);
  if (piVar5 != (int *)0x0) {
    iVar4 = *(int *)(in_ECX + 0xdc);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x58) != 0)) {
      cVar3 = FUN_005d9180();
      if (cVar3 == '\0') {
        cVar3 = FUN_004b6de0(iVar4);
        iVar4 = (-(uint)(cVar3 != '\0') & 0xfffffffe) + 2;
      }
      else {
        iVar4 = 2;
      }
      if (*(int *)(in_ECX + 0x18c) != iVar4) {
        *(int *)(in_ECX + 0x18c) = iVar4;
        *(undefined1 *)(in_ECX + 0xbc) = 1;
      }
    }
    (**(code **)(*piVar5 + 0x170))(param_2);
    if ((char)param_2 == '\0') {
      fVar1 = *(float *)(in_ECX + 0xb8);
      fVar2 = *(float *)(in_ECX + 0xb4);
      param_1 = param_1 * 1.25;
      if ((param_1 < fVar1 - fVar2) || (fVar1 - fVar2 < -param_1)) {
        if (fVar1 <= fVar2) {
          fVar2 = fVar2 - param_1;
        }
        else {
          fVar2 = fVar2 + param_1;
        }
        *(float *)(in_ECX + 0xb4) = fVar2;
      }
      *(float *)(in_ECX + 0xb4) = fVar1;
      cVar3 = (**(code **)(**(int **)(in_ECX + 0x10c) + 0x13c))();
      if (cVar3 != '\0') {
        iVar4 = (**(code **)(**(int **)(in_ECX + 0x10c) + 0x16c))();
        if (iVar4 != 0) {
          piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x10c) + 0x16c))();
          cVar3 = (**(code **)(*piVar5 + 0x3c))();
          if (cVar3 != '\0') {
            iVar4 = (**(code **)(**(int **)(in_ECX + 0x10c) + 0x16c))();
            puVar7 = (undefined4 *)(iVar4 + 0x54);
            puVar8 = auStack_4c;
            for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
            FUN_00408b00();
            fVar9 = (float10)(**(code **)(**(int **)(in_ECX + 0x10c) + 0xa0))();
            fVar1 = (float)fVar9;
            FUN_005da570(fVar1,fVar1,fVar1);
            FUN_005da2a0(*(undefined4 *)(in_ECX + 0xb4));
            piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x10c) + 0x16c))();
            (**(code **)(*piVar5 + 0xa4))(auStack_4c);
          }
        }
      }
    }
  }
  return;
}

