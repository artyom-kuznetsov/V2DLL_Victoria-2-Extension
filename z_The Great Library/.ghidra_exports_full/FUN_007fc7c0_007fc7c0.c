// FUN_007fc7c0 @ 007fc7c0 body=[[007fc7c0, 007fc979]]


void FUN_007fc7c0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int local_4c [13];
  float local_18;
  int local_c;
  uint local_8;
  
  iVar2 = 0;
  if (0 < (int)(*(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80) & 0xfffffffcU)) {
    do {
      piVar4 = (int *)(*(int *)(*(int *)(param_1 + 0x80) + iVar2 * 4) * 0x3c0 +
                      *(int *)(param_1 + 0x19c));
      local_8 = 0;
      uVar1 = piVar4[1] - *piVar4 >> 2;
      if (uVar1 != 0) {
        do {
          if (*(int *)(*(int *)(*(int *)(*piVar4 + local_8 * 4) + 8) + 0xb4) == param_2) {
            if ((piVar4[9] - piVar4[8] & 0xfffffffcU) != 0) {
              piVar5 = (int *)(piVar4[8] + local_8 * 4);
              local_c = *piVar5;
              local_8 = piVar5[1] - local_c;
              if (0 < (int)local_8) {
                iVar2 = *(int *)(param_1 + 0x3c);
                piVar5 = piVar4 + 0x5f;
                piVar6 = local_4c;
                for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *piVar6 = *piVar5;
                  piVar5 = piVar5 + 1;
                  piVar6 = piVar6 + 1;
                }
                local_18 = local_18 + 0.05;
                piVar5 = *(int **)(iVar2 + 100);
                (**(code **)(*piVar5 + 0xb0))(piVar5,0x100,local_4c);
                piVar5 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
                (**(code **)(*piVar5 + 0x15c))(piVar5,*(undefined4 *)(param_1 + 0x18e8));
                piVar5 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
                if (piVar4[0xa3] != 0) {
                  (**(code **)(*piVar5 + 0x164))(piVar5,piVar4[0xa3]);
                }
                (**(code **)(*piVar5 + 400))(piVar5,0,piVar4[0x9c],0,piVar4[0xa2]);
                (**(code **)(*piVar5 + 0x1a0))(piVar5,piVar4[0x94]);
                (**(code **)(*piVar5 + 0x148))(piVar5,4,0,0,piVar4[0x9f],local_c,(int)local_8 / 3);
              }
            }
            uVar1 = piVar4[1] - *piVar4 >> 2;
            iVar2 = *(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80) >> 2;
            local_8 = uVar1;
          }
          local_8 = local_8 + 1;
        } while (local_8 < uVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80) >> 2);
  }
  return;
}

