// FUN_009cb9d0 @ 009cb9d0 body=[[009cb9d0, 009cbb02]]


void FUN_009cb9d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [12];
  
  FUN_00401000((*(float *)(in_ECX + 0x1d4) + 0.0005) * 1000.0);
  iVar2 = FUN_00b31c00();
  FUN_009cc770(param_1 - iVar2,param_2,param_3);
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
    local_14 = *(undefined4 *)(in_ECX + 0x54);
    *(undefined4 *)(in_ECX + 0x50) = local_18;
    *(undefined4 *)(in_ECX + 0x54) = local_14;
  }
  FUN_009ccd10(*(undefined4 *)(in_ECX + 0x50),*(undefined4 *)(in_ECX + 0x54));
  FUN_009cd050();
  return;
}

