// FUN_009e6760 @ 009e6760 body=[[009e6760, 009e6808]]


/* WARNING: Removing unreachable block (ram,0x009e67aa) */

void FUN_009e6760(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  bVar4 = false;
  uVar1 = *param_1;
  for (uVar7 = uVar1; (uVar1 <= uVar7 && (uVar7 < param_1[1])); uVar7 = uVar7 + 0x20) {
    uVar2 = *(uint *)(param_2 + 0x10);
    uVar3 = *(uint *)(uVar7 + 0x10);
    uVar5 = uVar3;
    if (uVar2 <= uVar3) {
      uVar5 = uVar2;
    }
    iVar6 = FUN_00414bd0(uVar5);
    if (((iVar6 == 0) && (uVar2 <= uVar3)) && (uVar3 == uVar2)) {
      bVar4 = true;
    }
  }
  if (bVar4) {
    FUN_009c1de0(param_1);
  }
  return;
}

