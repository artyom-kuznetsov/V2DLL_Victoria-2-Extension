// FUN_007e81a0 @ 007e81a0 body=[[007e81a0, 007e821c]]


undefined4 FUN_007e81a0(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int in_ECX;
  byte *pbVar4;
  bool bVar5;
  
  if (*(int **)(in_ECX + 0x124) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x124) + 0x17c))(param_1);
    pbVar2 = param_1;
    if (0xf < *(uint *)(param_1 + 0x14)) {
      pbVar2 = *(byte **)param_1;
    }
    pbVar4 = &DAT_00e02bd4;
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_007e81f0:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_007e81f5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_007e81f0;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_007e81f5:
    *(bool *)(in_ECX + 0x14c) = iVar3 == 0;
  }
  if (*(int **)(in_ECX + 300) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 300) + 0x17c))(param_1);
  }
  return 1;
}

