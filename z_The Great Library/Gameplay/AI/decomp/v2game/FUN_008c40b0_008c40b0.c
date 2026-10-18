// FUN_008c40b0 @ 008c40b0 body=[[008c40b0, 008c417c]]


bool FUN_008c40b0(int param_1)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  undefined4 uVar3;
  int local_18 [2];
  undefined4 local_10;
  
  iVar2 = *(int *)(in_ECX + 0x1c);
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) == '\0') goto LAB_008c413d;
    uVar3 = *(undefined4 *)(in_ECX + 0x20);
    local_10 = *(undefined4 *)(param_1 + 0x2c);
    iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x30) * 4);
  }
  else {
    piVar1 = (int *)FUN_008a8dc0();
    local_18[0] = *piVar1;
    uVar3 = *(undefined4 *)(in_ECX + 0x20);
    iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + piVar1[1] * 4);
  }
  FUN_005dbf10(iVar2 + 0x7b4,local_18,uVar3);
  iVar2 = local_18[0] / 1000;
LAB_008c413d:
  local_18[0] = *(int *)(param_1 + 8);
  FUN_005dbf10(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0x7b4,local_18,
               *(undefined4 *)(in_ECX + 0x20));
  return iVar2 * 1000 <= local_18[0];
}

