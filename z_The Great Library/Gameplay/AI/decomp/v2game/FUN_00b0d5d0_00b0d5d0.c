// FUN_00b0d5d0 @ 00b0d5d0 body=[[00b0d5d0, 00b0d680]]


void FUN_00b0d5d0(int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 != in_ECX) {
    uVar5 = 0;
    in_ECX[1] = 0;
    *(short *)(in_ECX + 3) = (short)param_1[3];
    uVar1 = param_1[1];
    in_ECX[1] = uVar1;
    if ((uint)in_ECX[2] < uVar1) {
      FUN_00b0d4d0(uVar1 + 1);
    }
    if (in_ECX[1] != 0) {
      iVar4 = 0;
      do {
        puVar2 = (undefined4 *)(*param_1 + iVar4);
        puVar3 = (undefined4 *)(*in_ECX + iVar4);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *puVar2;
          puVar3[1] = puVar2[1];
          puVar3[2] = puVar2[2];
          puVar3[3] = puVar2[3];
          puVar3[4] = puVar2[4];
          puVar3[5] = puVar2[5];
          puVar3[6] = puVar2[6];
          puVar3[7] = puVar2[7];
          puVar3[8] = puVar2[8];
          puVar3[9] = puVar2[9];
          puVar3[10] = puVar2[10];
          puVar3[0xb] = puVar2[0xb];
          puVar3[0xc] = puVar2[0xc];
          puVar3[0xd] = puVar2[0xd];
          puVar3[0xe] = puVar2[0xe];
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x3c;
      } while (uVar5 < (uint)in_ECX[1]);
    }
    return;
  }
  return;
}

