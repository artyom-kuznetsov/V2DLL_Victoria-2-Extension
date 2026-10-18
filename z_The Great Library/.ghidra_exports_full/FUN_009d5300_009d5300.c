// FUN_009d5300 @ 009d5300 body=[[009d5300, 009d53f5]]


/* WARNING: Removing unreachable block (ram,0x009d5368) */

void FUN_009d5300(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 8) = *param_4;
    *(int *)(param_1 + 4 + param_2 * 8) = param_4[1];
    return;
  }
  do {
    iVar5 = (param_2 + -1) / 2;
    iVar1 = *(int *)(param_1 + iVar5 * 8);
    if (iVar1 == *param_4) {
      uVar2 = *(uint *)(*(int *)(param_1 + 4 + iVar5 * 8) + 0x18);
      uVar3 = *(uint *)(param_4[1] + 0x18);
      uVar4 = uVar2;
      if (uVar3 < uVar2) {
        uVar4 = uVar3;
      }
      uVar4 = FUN_00414bd0(uVar4);
      if (uVar4 == 0) {
        if (uVar3 < uVar2) {
          bVar6 = true;
          goto LAB_009d53b9;
        }
        uVar4 = (uint)(uVar3 != uVar2);
      }
      bVar6 = (int)uVar4 < 0;
    }
    else {
      bVar6 = *param_4 < iVar1;
    }
LAB_009d53b9:
    if (!bVar6) break;
    *(undefined4 *)(param_1 + param_2 * 8) = *(undefined4 *)(param_1 + iVar5 * 8);
    *(undefined4 *)(param_1 + 4 + param_2 * 8) = *(undefined4 *)(param_1 + 4 + iVar5 * 8);
    param_2 = iVar5;
  } while (param_3 < iVar5);
  *(int *)(param_1 + param_2 * 8) = *param_4;
  *(int *)(param_1 + 4 + param_2 * 8) = param_4[1];
  return;
}

