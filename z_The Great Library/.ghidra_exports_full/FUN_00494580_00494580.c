// FUN_00494580 @ 00494580 body=[[00494580, 00494672]]


void FUN_00494580(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int in_ECX;
  int *piVar5;
  int *piVar6;
  int local_108 [65];
  
  if (param_2 == 0x285) {
    while( true ) {
      piVar5 = *(int **)(param_1 + 0x1c);
      if ((char)piVar5[0x44] == '\0') {
        iVar2 = (**(code **)(*piVar5 + 4))();
        piVar5[2] = iVar2;
        if (iVar2 == 0) {
          piVar5[3] = 0x13;
        }
        *(undefined1 *)(piVar5 + 0x44) = 1;
      }
      piVar5 = piVar5 + 3;
      piVar6 = local_108;
      for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar6 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
      }
      if ((local_108[0] == 4) || (local_108[0] == 0x13)) break;
      (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
      uVar3 = FUN_00aaf0c5(*(int *)(param_1 + 0x1c) + 0x10);
      iVar2 = *(int *)(in_ECX + 0x34);
      puVar4 = (undefined4 *)FUN_00aae9af(0x10);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = uVar3;
        puVar4[1] = iVar2;
        puVar4[2] = 0;
        *(undefined1 *)(puVar4 + 3) = 0;
      }
      iVar1 = *(int *)(in_ECX + 0x38);
      *(undefined4 **)(in_ECX + 0x34) = puVar4;
      *(int *)(in_ECX + 0x38) = iVar1 + 1;
      if (iVar1 == 0) {
        *(undefined4 **)(in_ECX + 0x30) = puVar4;
      }
      else {
        *(undefined4 **)(iVar2 + 8) = puVar4;
      }
    }
    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
    return;
  }
  FUN_0044bef0(param_1,param_2);
  return;
}

