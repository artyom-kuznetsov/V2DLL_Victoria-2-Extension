// FUN_00b1a7e0 @ 00b1a7e0 body=[[00b1a7e0, 00b1a8d5]]


void FUN_00b1a7e0(float *param_1,uint param_2)

{
  float *pfVar1;
  float *pfVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (param_2 != 3) {
    iVar5 = (param_2 - 4 >> 1) + 1;
    iVar3 = (param_2 >> 1) * 4;
    pfVar1 = param_1;
    do {
      pfVar2 = pfVar1 + 2;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
      *(float *)(*(int *)(in_ECX + 4) + -4 + iVar4 * 4) =
           *(float *)(in_ECX + 0x18) * pfVar1[3] +
           *pfVar2 * *(float *)(in_ECX + 0x14) +
           *(float *)(in_ECX + 0xc) * *pfVar1 + pfVar1[1] * *(float *)(in_ECX + 0x10);
      *(float *)(iVar3 + *(int *)(in_ECX + 4)) =
           *(float *)(in_ECX + 0x28) * pfVar1[3] +
           *pfVar2 * *(float *)(in_ECX + 0x24) +
           *pfVar1 * *(float *)(in_ECX + 0x1c) + pfVar1[1] * *(float *)(in_ECX + 0x20);
      iVar3 = iVar3 + 4;
      pfVar1 = pfVar2;
    } while (iVar5 != 0);
  }
  *(float *)(*(int *)(in_ECX + 4) + iVar4 * 4) =
       *(float *)(in_ECX + 0x18) * param_1[1] +
       *(float *)(in_ECX + 0x14) * *param_1 +
       *(float *)(in_ECX + 0xc) * param_1[param_2 - 2] +
       *(float *)(in_ECX + 0x10) * param_1[param_2 - 1];
  *(float *)(*(int *)(in_ECX + 4) + ((param_2 >> 1) + iVar4) * 4) =
       *(float *)(in_ECX + 0x28) * param_1[1] +
       *(float *)(in_ECX + 0x24) * *param_1 +
       *(float *)(in_ECX + 0x1c) * param_1[param_2 - 2] +
       *(float *)(in_ECX + 0x20) * param_1[param_2 - 1];
  FID_conflict__memcpy(param_1,*(void **)(in_ECX + 4),param_2 * 4);
  return;
}

