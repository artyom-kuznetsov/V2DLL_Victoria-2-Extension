// FUN_008c47f0 @ 008c47f0 body=[[008c47f0, 008c48c0]]


void FUN_008c47f0(int param_1,int param_2,char param_3)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *in_ECX;
  int iVar4;
  int local_18 [2];
  undefined4 local_10;
  
  iVar4 = in_ECX[7];
  if ((char)in_ECX[6] == '\0') {
    if (*(char *)((int)in_ECX + 0x19) == '\0') goto LAB_008c487d;
    iVar4 = in_ECX[8];
    local_10 = *(undefined4 *)(param_2 + 0x2c);
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_2 + 0x30) * 4);
  }
  else {
    piVar3 = (int *)FUN_008a8dc0();
    local_18[0] = *piVar3;
    iVar4 = in_ECX[8];
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + piVar3[1] * 4);
  }
  FUN_005dbf10(iVar1 + 0x7b4,local_18,iVar4);
  iVar4 = local_18[0] / 1000;
LAB_008c487d:
  if ((param_3 == '\0') &&
     (local_10 = *(undefined4 *)(param_1 + 8), *(int *)(param_2 + 0xc) == *(int *)(param_1 + 0xc)))
  {
    cVar2 = (**(code **)(*in_ECX + 0x18))(param_2);
    if (cVar2 == '\0') {
      piVar3 = (int *)(*(int *)(param_1 + 0x120) + *(int *)(in_ECX[8] + 0x24) * 4);
      *piVar3 = *piVar3 + iVar4;
    }
  }
  return;
}

