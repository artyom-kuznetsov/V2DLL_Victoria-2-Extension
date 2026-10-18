// FUN_00851ad0 @ 00851ad0  (requested 00851AD0, first bytes: 55 8B EC 83 E4 F8 83 EC)


void FUN_00851ad0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  
  piVar1 = *(int **)(param_1 + 0x1dc);
  do {
    if (piVar1 == (int *)0x0) {
      FUN_00853db0(param_1 + 100);
      return;
    }
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    for (piVar3 = *(int **)(*(int *)(param_1 + 0x6c) +
                           ((uint)(*(int *)(iVar2 + 0x10) * 0x10000 + *(int *)(iVar2 + 0x14)) %
                           *(uint *)(param_1 + 0x68)) * 4); piVar3 != (int *)0x0;
        piVar3 = (int *)piVar3[1]) {
      if ((((int *)*piVar3)[1] == *(int *)(iVar2 + 0x14)) &&
         (*(int *)*piVar3 == *(int *)(iVar2 + 0x10))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        if (*piVar3 != 0) {
          iVar6 = DAT_01258a94;
          if (*(uint *)(*piVar3 + 8) < 0x1269) {
            iVar6 = DAT_01258a98;
          }
          if ((((iVar6 != 0) && (iVar6 = FUN_009c1d40(), iVar6 != 0)) && (iVar6 != 8)) &&
             ((*(int **)(iVar6 + 0x13c) != (int *)0x0 &&
              (cVar5 = (**(code **)(**(int **)(iVar6 + 0x13c) + 0x104))(), cVar5 != '\0')))) {
            (**(code **)(**(int **)(iVar6 + 0x13c) + 0x1a8))(iVar2);
          }
        }
        break;
      }
    }
  } while( true );
}

