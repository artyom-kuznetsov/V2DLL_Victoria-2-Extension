// FUN_00ae1420 @ 00ae1420 body=[[00ae1420, 00ae16fc]]


void FUN_00ae1420(int param_1,float *param_2)

{
  uint *puVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int in_ECX;
  float *pfVar5;
  
  if (((*(uint *)(in_ECX + 0x2c) & 2) == 0) || ((*(uint *)(in_ECX + 0x2c) & 0x10) == 0)) {
    iVar2 = *(int *)(in_ECX + 0x18);
    iVar4 = param_1 * 0x38;
    *(float *)(iVar4 + 0x2c + iVar2) = param_2[0xb];
    iVar2 = iVar4 + 0x2c + iVar2;
    *(float *)(iVar2 + 4) = param_2[0xc];
    *(float *)(iVar2 + 8) = param_2[0xd];
    pfVar5 = (float *)(*(int *)(in_ECX + 0x18) + iVar4);
    *pfVar5 = *param_2;
    pfVar5[1] = param_2[1];
    pfVar5[2] = param_2[2];
    pfVar5[3] = param_2[3];
    pfVar5 = (float *)(iVar4 + 0x20 + *(int *)(in_ECX + 0x18));
    *pfVar5 = param_2[8];
    pfVar5[1] = param_2[9];
    pfVar5[2] = param_2[10];
    pfVar5 = (float *)(iVar4 + 0x10 + *(int *)(in_ECX + 0x18));
    *pfVar5 = param_2[4];
    pfVar5[1] = param_2[5];
    pfVar5[2] = param_2[6];
    pfVar5[3] = param_2[7];
  }
  else {
    iVar2 = param_1 * 0x38;
    pfVar5 = (float *)(iVar2 + 0x2c + *(int *)(in_ECX + 0x18));
    fVar3 = param_2[0xb] - *(float *)(iVar2 + 0x2c + *(int *)(in_ECX + 0x18));
    if (1e-06 < (param_2[0xd] - pfVar5[2]) * (param_2[0xd] - pfVar5[2]) +
                (param_2[0xc] - pfVar5[1]) * (param_2[0xc] - pfVar5[1]) + fVar3 * fVar3) {
      *pfVar5 = param_2[0xb];
      pfVar5[1] = param_2[0xc];
      pfVar5[2] = param_2[0xd];
      puVar1 = (uint *)(*(int *)(in_ECX + 0x20) + param_1 * 4);
      *puVar1 = *puVar1 | 1;
    }
    pfVar5 = (float *)(iVar2 + *(int *)(in_ECX + 0x18));
    if ((((1e-05 < ABS(*param_2 - *(float *)(iVar2 + *(int *)(in_ECX + 0x18)))) ||
         (1e-05 < ABS(param_2[1] - pfVar5[1]))) || (1e-05 < ABS(param_2[2] - pfVar5[2]))) ||
       (1e-05 < ABS(param_2[3] - pfVar5[3]))) {
      *pfVar5 = *param_2;
      pfVar5[1] = param_2[1];
      pfVar5[2] = param_2[2];
      pfVar5[3] = param_2[3];
      puVar1 = (uint *)(*(int *)(in_ECX + 0x20) + param_1 * 4);
      *puVar1 = *puVar1 | 1;
    }
    pfVar5 = (float *)(iVar2 + 0x20 + *(int *)(in_ECX + 0x18));
    fVar3 = param_2[8] - *(float *)(iVar2 + 0x20 + *(int *)(in_ECX + 0x18));
    if (1e-05 < (param_2[10] - pfVar5[2]) * (param_2[10] - pfVar5[2]) +
                (param_2[9] - pfVar5[1]) * (param_2[9] - pfVar5[1]) + fVar3 * fVar3) {
      *pfVar5 = param_2[8];
      pfVar5[1] = param_2[9];
      pfVar5[2] = param_2[10];
      puVar1 = (uint *)(*(int *)(in_ECX + 0x20) + param_1 * 4);
      *puVar1 = *puVar1 | 1;
    }
    pfVar5 = (float *)(iVar2 + 0x10 + *(int *)(in_ECX + 0x18));
    if (((ABS(param_2[4] - *(float *)(iVar2 + 0x10 + *(int *)(in_ECX + 0x18))) <= 1e-05) &&
        (ABS(param_2[5] - pfVar5[1]) <= 1e-05)) &&
       ((ABS(param_2[6] - pfVar5[2]) <= 1e-05 && (ABS(param_2[7] - pfVar5[3]) <= 1e-05))))
    goto LAB_00ae1695;
    *pfVar5 = param_2[4];
    pfVar5[1] = param_2[5];
    pfVar5[2] = param_2[6];
    pfVar5[3] = param_2[7];
  }
  puVar1 = (uint *)(*(int *)(in_ECX + 0x20) + param_1 * 4);
  *puVar1 = *puVar1 | 1;
LAB_00ae1695:
  if ((0.001 < ABS(param_2[8] - 1.0)) ||
     (ABS(param_2[9] - 1.0) < 0.001 == (ABS(param_2[9] - 1.0) == 0.001))) {
    *(uint *)(*(int *)(in_ECX + 0x20) + param_1 * 4) =
         *(uint *)(*(int *)(in_ECX + 0x20) + param_1 * 4) | 2;
  }
  else if (ABS(param_2[10] - 1.0) < 0.001 == (ABS(param_2[10] - 1.0) == 0.001)) {
    *(uint *)(*(int *)(in_ECX + 0x20) + param_1 * 4) =
         *(uint *)(*(int *)(in_ECX + 0x20) + param_1 * 4) | 2;
    return;
  }
  return;
}

