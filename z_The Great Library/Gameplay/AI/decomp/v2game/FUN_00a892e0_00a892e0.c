// FUN_00a892e0 @ 00a892e0 body=[[00a892e0, 00a8940e]]


void FUN_00a892e0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  u_long uVar3;
  int *piVar4;
  undefined1 *puVar5;
  
  piVar4 = (int *)(param_1 + 0x5b4 + *(int *)(param_1 + 0x7bc) * 8);
  puVar5 = (undefined1 *)(*(int *)(param_1 + 0x5b0) * 0x2c + 0x30 + param_1);
  piVar2 = *(int **)(param_2 + 0xa4);
  if (piVar2 != (int *)(param_2 + 0xa4)) {
    do {
      if ((((undefined1 *)(param_1 + 0x5b0) <= puVar5) || ((int *)(param_1 + 0x7bc) <= piVar4)) ||
         ((uint)*(ushort *)(param_2 + 0x94) - *(int *)(param_1 + 0x2c) < 0x14)) break;
      piVar1 = (int *)*piVar2;
      piVar4[1] = (int)puVar5;
      *piVar4 = 0x14;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0x14;
      *puVar5 = 1;
      puVar5[1] = *(undefined1 *)((int)piVar2 + 0xd);
      puVar5[2] = 0;
      uVar3 = htonl(0x14);
      *(u_long *)(puVar5 + 4) = uVar3;
      uVar3 = htonl(piVar2[5]);
      *(u_long *)(puVar5 + 0xc) = uVar3;
      uVar3 = htonl(piVar2[2]);
      *(u_long *)(puVar5 + 0x10) = uVar3;
      if ((char)piVar2[3] == '\x04') {
        *(undefined4 *)(param_2 + 0x18) = 7;
      }
      *(int *)piVar2[1] = *piVar2;
      *(int *)(*piVar2 + 4) = piVar2[1];
      (*(code *)PTR__free_00f071fc)(piVar2);
      puVar5 = puVar5 + 0x2c;
      piVar4 = piVar4 + 2;
      piVar2 = piVar1;
    } while (piVar1 != (int *)(param_2 + 0xa4));
  }
  *(int *)(param_1 + 0x7bc) = (int)piVar4 + (-0x5b4 - param_1) >> 3;
  *(int *)(param_1 + 0x5b0) = (int)(puVar5 + (-0x30 - param_1)) / 0x2c;
  return;
}

