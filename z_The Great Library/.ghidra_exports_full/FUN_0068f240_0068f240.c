// FUN_0068f240 @ 0068f240 body=[[0068f240, 0068f334]]


void FUN_0068f240(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int local_114 [66];
  undefined8 local_c;
  
  while( true ) {
    piVar4 = *(int **)(param_1 + 0x1c);
    if ((char)piVar4[0x44] == '\0') {
      iVar2 = (**(code **)(*piVar4 + 4))();
      piVar4[2] = iVar2;
      if (iVar2 == 0) {
        piVar4[3] = 0x13;
      }
      *(undefined1 *)(piVar4 + 0x44) = 1;
    }
    piVar4 = piVar4 + 3;
    piVar5 = local_114;
    for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    if ((local_114[0] == 4) || (local_114[0] == 0x13)) break;
    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc);
    puVar6 = (undefined4 *)(param_1 + 0x228);
    for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    local_c = 0;
    FUN_009a1d40();
    iVar2 = param_2[1];
    puVar3 = (undefined4 *)FUN_00aae9af(0x18);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = (undefined4)local_c;
      puVar3[1] = local_c._4_4_;
      puVar3[2] = iVar2;
      puVar3[3] = 0;
      *(undefined1 *)(puVar3 + 4) = 0;
    }
    iVar1 = param_2[2];
    param_2[1] = (int)puVar3;
    param_2[2] = iVar1 + 1;
    if (iVar1 == 0) {
      *param_2 = (int)puVar3;
    }
    else {
      *(undefined4 **)(iVar2 + 0xc) = puVar3;
    }
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  return;
}

