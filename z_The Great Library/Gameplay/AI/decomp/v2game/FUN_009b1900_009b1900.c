// FUN_009b1900 @ 009b1900 body=[[009b1900, 009b19db]]


void FUN_009b1900(int param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int local_108 [65];
  
  while( true ) {
    piVar3 = *(int **)(param_1 + 0x1c);
    if ((char)piVar3[0x44] == '\0') {
      iVar2 = (**(code **)(*piVar3 + 4))();
      piVar3[2] = iVar2;
      if (iVar2 == 0) {
        piVar3[3] = 0x13;
      }
      *(undefined1 *)(piVar3 + 0x44) = 1;
    }
    piVar3 = piVar3 + 3;
    piVar5 = local_108;
    for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar5 = piVar5 + 1;
    }
    if ((local_108[0] == 4) || (local_108[0] == 0x13)) break;
    FUN_009a1440(param_1);
    piVar3 = (int *)(**(code **)(*param_3 + 8))(param_1,*(undefined4 *)(param_1 + 0x20));
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xc))(param_1);
      iVar2 = param_2[1];
      puVar4 = (undefined4 *)FUN_00aae9af(0x10);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = piVar3;
        puVar4[1] = iVar2;
        puVar4[2] = 0;
        *(undefined1 *)(puVar4 + 3) = 0;
      }
      iVar1 = param_2[2];
      param_2[1] = puVar4;
      param_2[2] = iVar1 + 1;
      if (iVar1 == 0) {
        *param_2 = puVar4;
      }
      else {
        *(undefined4 **)(iVar2 + 8) = puVar4;
      }
    }
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  return;
}

