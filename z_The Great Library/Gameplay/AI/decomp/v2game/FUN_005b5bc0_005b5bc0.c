// FUN_005b5bc0 @ 005b5bc0 body=[[005b5bc0, 005b5d9e]]


uint FUN_005b5bc0(int *param_1)

{
  int *piVar1;
  int in_EAX;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *extraout_ECX;
  int *piVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  
  piVar2 = (int *)0x0;
  if ((0 < *(int *)(in_EAX + 0x40)) && (0 < param_1[0x10])) {
    piVar2 = *(int **)(in_EAX + 0xdc);
    if ((*(int *)(piVar2[0x5d] + *(int *)(in_EAX + 0xc4) * 4) < 2) &&
       ((param_1[0x1d] == 0 && (DAT_00f092fb != '\0')))) {
      piVar2 = (int *)(**(code **)(*param_1 + 0x3c))();
      if ((char)piVar2 == '\0') {
LAB_005b5c58:
        if (param_1[0xe] != 0) {
          piVar4 = (int *)FUN_005cb1b0();
          piVar6 = extraout_ECX;
          do {
            iVar3 = *piVar6;
            piVar6 = (int *)piVar6[2];
            piVar1 = *(int **)(*(int *)(iVar3 + 0x38) + 0x244);
            piVar7 = (int *)*piVar4;
            piVar2 = piVar1;
            if (piVar7 != (int *)0x0) {
              do {
                iVar3 = *(int *)(*(int *)(*piVar7 + 0x38) + 0x248);
                piVar7 = (int *)piVar7[2];
                uVar8 = __allmul(iVar3,iVar3 >> 0x1f,1000,0);
                iVar3 = __alldiv(uVar8,1000,0);
                uVar8 = __allmul(iVar3,iVar3 >> 0x1f,piVar1,(int)piVar1 >> 0x1f);
                iVar3 = __alldiv(uVar8,1000,0);
                if (param_1[0x3b] < 1) {
                  uVar8 = __allmul(iVar3,iVar3 >> 0x1f,1000,0);
                  uVar9 = 2000;
                }
                else {
                  uVar8 = __allmul(iVar3,iVar3 >> 0x1f,1000,0);
                  uVar9 = 3000;
                }
                iVar3 = __alldiv(uVar8,uVar9,0);
                if (*(char *)((int)param_1 + 0x85) != '\0') {
                  uVar8 = __allmul(iVar3,iVar3 >> 0x1f,2000,0);
                  iVar3 = __alldiv(uVar8,1000,0);
                }
                if (iVar3 < 1000) {
                  iVar3 = 1000;
                }
                iVar5 = FUN_009b7950(0,0);
                piVar2 = (int *)(iVar3 / 1000);
                if (iVar5 % 10000 < (int)piVar2) goto LAB_005b5c00;
              } while (piVar7 != (int *)0x0);
            }
          } while (piVar6 != (int *)0x0);
        }
        goto LAB_005b5d94;
      }
      iVar3 = (**(code **)(*param_1 + 0x30))();
      piVar6 = *(int **)(iVar3 + 0x1a4);
      do {
        piVar2 = (int *)0x0;
        if (piVar6 == (int *)0x0) goto LAB_005b5c58;
        iVar3 = *piVar6;
        piVar2 = (int *)piVar6[2];
      } while ((*(int *)(iVar3 + 0xec) < 1) && (piVar6 = piVar2, *(int *)(iVar3 + 0x74) == 0));
    }
LAB_005b5c00:
    return CONCAT31((int3)((uint)piVar2 >> 8),1);
  }
LAB_005b5d94:
  return (uint)piVar2 & 0xffffff00;
}

