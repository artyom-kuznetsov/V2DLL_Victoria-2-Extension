// FUN_00b0c2b0 @ 00b0c2b0 body=[[00b0c2b0, 00b0c31d]]


void FUN_00b0c2b0(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  
  FUN_00b0d690(*(undefined4 *)(param_1 + 0x14));
  iVar4 = FUN_00add410(5,0);
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar7 = 0;
  if (uVar2 != 0) {
    do {
      piVar6 = (int *)(*(int *)(iVar4 + uVar7 * 4) * 0x10 + *param_2);
      iVar3 = piVar6[1];
      uVar5 = iVar3 + 1;
      piVar6[1] = uVar5;
      if ((uint)piVar6[2] < uVar5) {
        FUN_00aeb6c0(iVar3 + 2);
      }
      puVar1 = (uint *)(*piVar6 + -4 + piVar6[1] * 4);
      if (puVar1 != (uint *)0x0) {
        *puVar1 = uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar2);
  }
  return;
}

