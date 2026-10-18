// FUN_007f8bf0 @ 007f8bf0 body=[[007f8bf0, 007f8c5a] [007f8c60, 007f8dfd]]


void FUN_007f8bf0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_90 [16];
  undefined4 local_50 [13];
  float local_1c;
  int *local_10;
  int local_c;
  
  puVar2 = (undefined4 *)(**(code **)(*(int *)(*(int *)(param_1 + 0x14) + 0x1c) + 0x16c))();
  puVar5 = local_90;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0x14) + 0x1c) + 0x174))();
  local_10 = *(int **)(*(int *)(param_1 + 0x3c) + 0x6bc58);
  local_c = 0;
  if (0 < (int)(*(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80) & 0xfffffffcU)) {
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x80) + local_c * 4) * 0x3c0 + *(int *)(param_1 + 0x19c);
      if (local_10 == (int *)0x0) {
        piVar1 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
        (**(code **)(*piVar1 + 0xb0))(piVar1,0x100,iVar3 + 0x17c);
      }
      else {
        puVar2 = (undefined4 *)(iVar3 + 0x17c);
        puVar5 = local_50;
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar5 = puVar5 + 1;
        }
        local_1c = local_1c + 0.001;
        D3DXMatrixMultiply(local_50,local_50,local_90);
        piVar1 = local_10;
        (**(code **)(*local_10 + 0x98))(local_10,"WorldViewMatrix",local_50);
        (**(code **)(*piVar1 + 0x104))(piVar1);
      }
      if ((*(int *)(iVar3 + 0x2c4) != 0) || (*(int *)(iVar3 + 0x2c8) != 0)) {
        piVar1 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
        (**(code **)(*piVar1 + 0x15c))(piVar1,*(undefined4 *)(param_1 + 0x18ec));
        FUN_009f9d50();
      }
      if ((*(int *)(iVar3 + 600) != 0) || (*(int *)(iVar3 + 0x25c) != 0)) {
        piVar1 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
        (**(code **)(*piVar1 + 0x15c))(piVar1,*(undefined4 *)(param_1 + 0x18e8));
        piVar1 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
        if (*(int *)(iVar3 + 0x28c) != 0) {
          (**(code **)(*piVar1 + 0x164))(piVar1,*(int *)(iVar3 + 0x28c));
        }
        (**(code **)(*piVar1 + 400))
                  (piVar1,0,*(undefined4 *)(iVar3 + 0x270),0,*(undefined4 *)(iVar3 + 0x288));
        (**(code **)(*piVar1 + 0x1a0))(piVar1,*(undefined4 *)(iVar3 + 0x250));
        (**(code **)(*piVar1 + 0x148))
                  (piVar1,4,0,0,*(undefined4 *)(iVar3 + 0x27c),0,*(undefined4 *)(iVar3 + 0x25c));
      }
      local_c = local_c + 1;
    } while (local_c < *(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80) >> 2);
  }
  return;
}

