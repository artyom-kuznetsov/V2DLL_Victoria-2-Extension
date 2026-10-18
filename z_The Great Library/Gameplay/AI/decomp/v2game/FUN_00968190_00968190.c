// FUN_00968190 @ 00968190 body=[[00968190, 0096824e]]


void FUN_00968190(int param_1)

{
  undefined4 *in_EAX;
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int local_10c [65];
  undefined4 local_8;
  
  while( true ) {
    piVar2 = *(int **)(param_1 + 0x1c);
    if ((char)piVar2[0x44] == '\0') {
      iVar1 = (**(code **)(*piVar2 + 4))();
      piVar2[2] = iVar1;
      if (iVar1 == 0) {
        piVar2[3] = 0x13;
      }
      *(undefined1 *)(piVar2 + 0x44) = 1;
    }
    piVar2 = piVar2 + 3;
    piVar4 = local_10c;
    for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar4 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar4 = piVar4 + 1;
    }
    if ((local_10c[0] == 4) || (local_10c[0] == 0x13)) break;
    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc);
    puVar5 = (undefined4 *)(param_1 + 0x228);
    for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",&local_8);
    if (iVar1 == 0) {
      FUN_009a1140();
    }
    *in_EAX = local_8;
    in_EAX = in_EAX + 1;
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  return;
}

