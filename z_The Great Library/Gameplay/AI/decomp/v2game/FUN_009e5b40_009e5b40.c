// FUN_009e5b40 @ 009e5b40 body=[[009e5b40, 009e5d48] [009e5d50, 009e5e52]]


undefined4 FUN_009e5b40(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 uStack_14;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar2 = (**(code **)(*param_1 + 0x44))();
  piVar4 = *(int **)(in_ECX + 0x254);
  iVar3 = *(int *)(in_ECX + 600) - (int)piVar4 >> 2;
  if (0 < iVar3) {
    iVar5 = 0;
    do {
      if (param_1 == (int *)*piVar4) {
        return 1;
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar5 < iVar3);
  }
  piVar4 = *(int **)(in_ECX + 0x294);
  iVar3 = *(int *)(in_ECX + 0x298) - (int)piVar4 >> 2;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      if (param_1 == (int *)*piVar4) {
        return 1;
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar5 < iVar3);
  }
  piVar4 = *(int **)(in_ECX + 0x274);
  iVar3 = *(int *)(in_ECX + 0x278) - (int)piVar4 >> 2;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      if (param_1 == (int *)*piVar4) {
        return 1;
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar5 < iVar3);
  }
  piVar4 = *(int **)(in_ECX + 0x2b4);
  iVar3 = *(int *)(in_ECX + 0x2b8) - (int)piVar4 >> 2;
  if (0 < iVar3) {
    iVar5 = 0;
    do {
      if (param_1 == (int *)*piVar4) {
        return 1;
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar5 < iVar3);
  }
  piVar4 = (int *)(**(code **)(*(int *)(in_ECX + 0x334) + 4))(uVar2);
  if (((((piVar4 != param_1) &&
        (piVar4 = (int *)FUN_009e6b30(in_ECX + 0x2c4,in_ECX + 0x2b4), piVar4 != param_1)) &&
       (uVar2 = uStack_14, piVar4 = (int *)(**(code **)(*(int *)(in_ECX + 0x358) + 4))(uStack_14),
       piVar4 != param_1)) &&
      ((piVar4 = (int *)(**(code **)(*(int *)(in_ECX + 0x37c) + 4))(uStack_14), piVar4 != param_1 &&
       (piVar4 = (int *)FUN_009e6b30(in_ECX + 0x2a4,in_ECX + 0x294), piVar4 != param_1)))) &&
     (piVar4 = (int *)FUN_009e6b30(in_ECX + 0x304,in_ECX + 0x2f4), piVar4 != param_1)) {
    piVar4 = *(int **)(in_ECX + 0x314);
    iVar3 = *(int *)(in_ECX + 0x318) - (int)piVar4 >> 2;
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        if (param_1 == (int *)*piVar4) {
          return 1;
        }
        iVar5 = iVar5 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar5 < iVar3);
    }
    piVar4 = (int *)(**(code **)(*(int *)(in_ECX + 0x3c4) + 4))(uStack_14);
    if ((piVar4 != param_1) &&
       (piVar4 = (int *)(**(code **)(*(int *)(in_ECX + 1000) + 4))(uStack_14), piVar4 != param_1)) {
      iVar3 = (**(code **)(*(int *)(in_ECX + 0x3a0) + 4))(uStack_14);
      if (iVar3 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)(iVar3 + 4);
      }
      if (piVar4 != param_1) {
        for (iVar3 = *(int *)(in_ECX + 0x44c); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x20)) {
          iVar5 = (**(code **)(*(int *)(in_ECX + 0x3a0) + 4))(iVar3);
          cVar1 = (**(code **)(*(int *)(iVar5 + 4) + 0x94))(param_1);
          if (cVar1 != '\0') {
            return 1;
          }
        }
        piVar4 = (int *)FUN_009e6b30(in_ECX + 0x2e4,in_ECX + 0x2d4);
        if (piVar4 != param_1) {
          iVar3 = 0;
          iVar5 = *(int *)(in_ECX + 0x2d8) - *(int *)(in_ECX + 0x2d4) >> 2;
          if (0 < iVar5) {
            do {
              cVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x2d4) + iVar3 * 4) + 0x94))
                                (param_1);
              if (cVar1 != '\0') {
                return 1;
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < iVar5);
          }
          puVar7 = (uint *)(in_ECX + 0x40c);
          cVar1 = FUN_009e68a0(puVar7,uVar2);
          if (cVar1 != '\0') {
            piVar4 = (int *)FUN_009e6960(puVar7,uVar2);
            if (*piVar4 == 0) {
              piVar4 = (int *)0x0;
            }
            else {
              piVar4 = (int *)(*piVar4 + 0x18);
            }
            if (piVar4 == param_1) {
              return 1;
            }
          }
          uVar6 = *puVar7;
          while( true ) {
            if (uVar6 < *puVar7) {
              return 0;
            }
            if (*(uint *)(in_ECX + 0x410) <= uVar6) break;
            cVar1 = (**(code **)(*(int *)(*(int *)(uVar6 + 0x1c) + 0x18) + 0x94))(param_1);
            if (cVar1 != '\0') {
              return 1;
            }
            uVar6 = uVar6 + 0x20;
          }
          return 0;
        }
      }
    }
  }
  return 1;
}

