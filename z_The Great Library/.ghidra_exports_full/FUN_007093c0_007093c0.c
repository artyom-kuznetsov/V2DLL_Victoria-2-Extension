// FUN_007093c0 @ 007093c0 body=[[007093c0, 007094dc]]


void FUN_007093c0(int param_1,int param_2,int param_3,int *param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  bool bVar8;
  
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  do {
    iVar7 = (param_2 + -1) / 2;
    iVar1 = *(int *)(param_1 + iVar7 * 4);
    iVar2 = *param_4;
    if (param_6 == 0) {
      iVar3 = *(int *)(*(int *)(iVar1 + 0x118) + param_5 * 4);
      fVar5 = (float)iVar3;
      if (iVar3 < 0) {
        fVar5 = fVar5 + 4.2949673e+09;
      }
      iVar3 = *(int *)(*(int *)(iVar2 + 0x118) + param_5 * 4);
      fVar6 = (float)iVar3;
      if (iVar3 < 0) {
        fVar6 = fVar6 + 4.2949673e+09;
      }
      if (fVar6 / (float)*(int *)(iVar2 + 200) <= fVar5 / (float)*(int *)(iVar1 + 200)) {
        *(int *)(param_1 + param_2 * 4) = *param_4;
        return;
      }
    }
    else {
      uVar4 = *(uint *)(*(int *)(iVar1 + 0x118) + param_5 * 4);
      if (param_6 == 1) {
        bVar8 = (int)(uVar4 - *(int *)(*(int *)(iVar1 + 0x120) + param_5 * 4)) <
                *(int *)(*(int *)(iVar2 + 0x118) + param_5 * 4) -
                *(int *)(*(int *)(iVar2 + 0x120) + param_5 * 4);
      }
      else {
        bVar8 = uVar4 < *(uint *)(*(int *)(iVar2 + 0x118) + param_5 * 4);
      }
      if (!bVar8) {
        *(int *)(param_1 + param_2 * 4) = *param_4;
        return;
      }
    }
    *(int *)(param_1 + param_2 * 4) = iVar1;
    param_2 = iVar7;
    if (iVar7 <= param_3) {
      *(int *)(param_1 + iVar7 * 4) = *param_4;
      return;
    }
  } while( true );
}

