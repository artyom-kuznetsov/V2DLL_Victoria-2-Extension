// FUN_009bbdb0 @ 009bbdb0 body=[[009bbdb0, 009bbde8] [009bbdf0, 009bbe27]]


void FUN_009bbdb0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_8;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar3 = *(int *)(param_2 + 0xc) - *(int *)(param_2 + 8) >> 2;
    iVar6 = 0;
    iVar5 = 100000;
    local_8 = -1;
    if (0 < iVar3) {
      piVar7 = *(int **)(param_2 + 8);
      do {
        uVar1 = *piVar7 - *(int *)(param_1 + 0x40);
        uVar4 = (int)uVar1 >> 0x1f;
        iVar2 = (uVar1 ^ uVar4) - uVar4;
        if (iVar2 < iVar5) {
          iVar5 = iVar2;
          local_8 = iVar6;
        }
        iVar6 = iVar6 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar6 < iVar3);
    }
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(*(int *)(param_2 + 8) + local_8 * 4);
  }
  return;
}

