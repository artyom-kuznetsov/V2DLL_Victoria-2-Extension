// FUN_00409810 @ 00409810  (requested 00409810, first bytes: 55 8B EC 81 EC 04 01 00)


void FUN_00409810(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_108 [65];
  
  iVar2 = param_1;
  while( true ) {
    piVar5 = *(int **)(iVar2 + 0x1c);
    if ((char)piVar5[0x44] == '\0') {
      iVar3 = (**(code **)(*piVar5 + 4))();
      piVar5[2] = iVar3;
      if (iVar3 == 0) {
        piVar5[3] = 0x13;
      }
      *(undefined1 *)(piVar5 + 0x44) = 1;
    }
    piVar5 = piVar5 + 3;
    piVar4 = local_108;
    for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar4 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar4 = piVar4 + 1;
    }
    if ((local_108[0] == 4) || (local_108[0] == 0x13)) break;
    (**(code **)(**(int **)(iVar2 + 0x1c) + 4))();
    puVar6 = (undefined4 *)(*(int *)(iVar2 + 0x1c) + 0xc);
    puVar7 = (undefined4 *)(iVar2 + 0x228);
    for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    iVar3 = FID_conflict__sscanf((char *)(iVar2 + 0x22c),"%i",&param_1);
    if (iVar3 == 0) {
      FUN_009a1140();
    }
    piVar5 = param_2;
    iVar3 = param_2[1];
    piVar4 = (int *)FUN_00aae9af(0x10);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      *piVar4 = param_1;
      piVar4[1] = iVar3;
      piVar4[2] = 0;
      *(undefined1 *)(piVar4 + 3) = 0;
    }
    iVar1 = piVar5[2];
    piVar5[1] = (int)piVar4;
    piVar5[2] = iVar1 + 1;
    if (iVar1 == 0) {
      *piVar5 = (int)piVar4;
    }
    else {
      *(int **)(iVar3 + 8) = piVar4;
    }
  }
  (**(code **)(**(int **)(iVar2 + 0x1c) + 4))();
  return;
}

