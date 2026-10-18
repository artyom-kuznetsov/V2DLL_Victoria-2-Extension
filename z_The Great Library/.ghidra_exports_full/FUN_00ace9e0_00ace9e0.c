// FUN_00ace9e0 @ 00ace9e0 body=[[00ace9e0, 00acea8c]]


void FUN_00ace9e0(void)

{
  float fVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  
  if ((((int *)(in_ECX + 0x17c) != (int *)0x0) &&
      (iVar5 = *(int *)(*(int *)(in_ECX + 0x1ac) + 0xd8),
      *(int *)(iVar5 + 4 + *(int *)(in_ECX + 0x1d0) * 8) != 0)) &&
     (piVar4 = (int *)(**(code **)(**(int **)(iVar5 + *(int *)(in_ECX + 0x1d0) * 8 + 4) + 0x10))(),
     piVar4 != (int *)0x0)) {
    uVar2 = piVar4[1];
    uVar6 = 0;
    if (uVar2 != 0) {
      do {
        piVar3 = *(int **)(*piVar4 + uVar6 * 4);
        iVar5 = FUN_00adfc50(piVar3[1]);
        if (((iVar5 != -1) && (iVar5 = *(int *)(in_ECX + 0x17c) + iVar5 * 0xc, iVar5 != 0)) &&
           (fVar1 = *(float *)(iVar5 + 4), 0.0001 < ABS(fVar1))) {
          (**(code **)(*piVar3 + 0x14))(in_ECX,fVar1);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar2);
    }
  }
  return;
}

