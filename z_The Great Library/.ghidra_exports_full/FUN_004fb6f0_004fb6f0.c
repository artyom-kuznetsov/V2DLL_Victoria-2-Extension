// FUN_004fb6f0 @ 004fb6f0 body=[[004fb6f0, 004fb7c5]]


void FUN_004fb6f0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  iVar2 = DAT_0125870c;
  local_8 = 100000;
  piVar3 = *(int **)(param_1 + 0x9d8);
  while ((*(int **)(param_1 + 0x9d8) <= piVar3 && (piVar3 < *(int **)(param_1 + 0x9dc)))) {
    piVar4 = piVar3 + 1;
    local_c = *(undefined4 *)(*(int *)(iVar2 + 0x2238) + *piVar3 * 4);
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_3 + 4) * 4);
    uVar5 = *(uint *)(iVar1 + 0x9d8);
    while ((piVar3 = piVar4, *(uint *)(iVar1 + 0x9d8) <= uVar5 && (uVar5 < *(uint *)(iVar1 + 0x9dc))
           )) {
      uVar5 = uVar5 + 4;
      FUN_004a0e80(iVar2,&local_10);
      if (local_10 / 1000 < local_8) {
        local_8 = local_10 / 1000;
      }
    }
  }
  *param_2 = local_8 * 1000;
  return;
}

