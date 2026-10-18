// FUN_009b6ea0 @ 009b6ea0 body=[[009b6ea0, 009b7052]]


void FUN_009b6ea0(int param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  int in_ECX;
  
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0xc) != 3) {
    FUN_009a1140();
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0xc) != 0xc) {
    FUN_009a1140();
  }
  pfVar1 = (float *)(in_ECX + 8);
  FID_conflict__sscanf((char *)(*(int *)(param_1 + 0x1c) + 0x10),"%f",pfVar1);
  if (DAT_00f092fc < *pfVar1) {
    *pfVar1 = *pfVar1 / 255.0;
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0xc) != 0xc) {
    FUN_009a1140();
  }
  pfVar1 = (float *)(in_ECX + 0xc);
  FID_conflict__sscanf((char *)(*(int *)(param_1 + 0x1c) + 0x10),"%f",pfVar1);
  if (DAT_00f092fc < *pfVar1) {
    *pfVar1 = *pfVar1 / 255.0;
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0xc) != 0xc) {
    FUN_009a1140();
  }
  pfVar1 = (float *)(in_ECX + 0x10);
  FID_conflict__sscanf((char *)(*(int *)(param_1 + 0x1c) + 0x10),"%f",pfVar1);
  fVar3 = DAT_00f092fc;
  if (DAT_00f092fc < *pfVar1) {
    *pfVar1 = *pfVar1 / 255.0;
  }
  pfVar1 = (float *)(in_ECX + 0x14);
  *pfVar1 = fVar3;
  (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
  if (iVar2 != 4) {
    if (iVar2 != 0xc) {
      FUN_009a1140();
    }
    FID_conflict__sscanf((char *)(*(int *)(param_1 + 0x1c) + 0x10),"%f",pfVar1);
    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  }
  if ((((*(float *)(in_ECX + 8) <= 0.999) || (*(float *)(in_ECX + 0xc) <= 0.999)) ||
      (*(float *)(in_ECX + 0x10) <= 0.999)) || (*pfVar1 <= 0.999)) {
    *(undefined1 *)(in_ECX + 0x18) = 0;
  }
  else {
    *(undefined1 *)(in_ECX + 0x18) = 1;
  }
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0xc) != 4) {
    FUN_009a1140();
  }
  return;
}

