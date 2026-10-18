// FUN_009cc940 @ 009cc940 body=[[009cc940, 009ccaac]]


void FUN_009cc940(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  float fVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [12];
  
  *(undefined4 *)(in_ECX + 0x1e0) = param_1;
  *(undefined4 *)(in_ECX + 0x1e4) = param_2;
  *(undefined4 *)(in_ECX + 0x1e8) = param_3;
  *(undefined4 *)(in_ECX + 0x1ec) = param_4;
  fVar4 = (float)*(int *)(in_ECX + 0x1e0) / 1000.0;
  *(int *)(in_ECX + 0x340) = *(int *)(in_ECX + 0x1e0);
  *(int *)(in_ECX + 0x344) = *(int *)(in_ECX + 0x1e4);
  if ((*(float *)(in_ECX + 0x1d4) < fVar4) ||
     (fVar4 = (float)*(int *)(in_ECX + 0x1e4) / 1000.0, fVar4 < *(float *)(in_ECX + 0x1d4))) {
    *(float *)(in_ECX + 0x1d4) = fVar4;
  }
  uVar1 = *(undefined4 *)(in_ECX + 0x1d4);
  if (*(short *)(in_ECX + 0x1f0) == 0) {
    if (*(short *)(in_ECX + 0x1f0) == 0) {
      iVar2 = FUN_009caed0(&local_18,uVar1);
      local_14 = *(undefined4 *)(iVar2 + 4);
    }
    else {
      puVar3 = (undefined4 *)FUN_009caed0(local_10,uVar1);
      local_14 = *puVar3;
    }
    local_18 = *(undefined4 *)(in_ECX + 0x50);
    *(undefined4 *)(in_ECX + 0x50) = local_18;
    *(undefined4 *)(in_ECX + 0x54) = local_14;
  }
  else {
    if (*(short *)(in_ECX + 0x1f0) == 0) {
      iVar2 = FUN_009caed0(local_10,uVar1);
      local_18 = *(undefined4 *)(iVar2 + 4);
    }
    else {
      puVar3 = (undefined4 *)FUN_009caed0(&local_18,uVar1);
      local_18 = *puVar3;
    }
    local_14 = *(undefined4 *)(in_ECX + 0x30);
    *(undefined4 *)(in_ECX + 0x50) = local_18;
    *(undefined4 *)(in_ECX + 0x54) = local_14;
  }
  FUN_009ccd10(*(undefined4 *)(in_ECX + 0x50),*(undefined4 *)(in_ECX + 0x54));
  return;
}

