// FUN_0096dc40 @ 0096dc40 body=[[0096dc40, 0096dd7b]]


void FUN_0096dc40(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_108 [65];
  
  while( true ) {
    piVar2 = *(int **)(param_2 + 0x1c);
    if ((char)piVar2[0x44] == '\0') {
      iVar1 = (**(code **)(*piVar2 + 4))();
      piVar2[2] = iVar1;
      if (iVar1 == 0) {
        piVar2[3] = 0x13;
      }
      *(undefined1 *)(piVar2 + 0x44) = 1;
    }
    piVar2 = piVar2 + 3;
    piVar3 = local_108;
    for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    }
    if (local_108[0] == 0x13) break;
    FUN_009a1440(param_2);
    iVar1 = *(int *)(param_2 + 0x20);
    if (iVar1 == 0x1d5) {
      (**(code **)(*(int *)(param_1 + 0x4c) + 0xc))(param_2);
    }
    else if (iVar1 == 0xa72) {
      (**(code **)(*(int *)(param_1 + 0x7c) + 0xc))(param_2);
    }
    else if (iVar1 == 0x1d6) {
      (**(code **)(*(int *)(param_1 + 0x1c) + 0xc))(param_2);
    }
    else if (iVar1 == 0x1d7) {
      (**(code **)(*(int *)(param_1 + 0x10c) + 0xc))(param_2);
    }
    else if (iVar1 == 0x1d8) {
      (**(code **)(*(int *)(param_1 + 0x13c) + 0xc))(param_2);
    }
    else if (iVar1 == 0x1d9) {
      (**(code **)(*(int *)(param_1 + 0xdc) + 0xc))(param_2);
    }
    else if (iVar1 == 0xa90) {
      (**(code **)(*(int *)(param_1 + 0xac) + 0xc))(param_2);
    }
  }
  return;
}

