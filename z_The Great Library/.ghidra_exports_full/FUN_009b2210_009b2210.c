// FUN_009b2210 @ 009b2210 body=[[009b2210, 009b22df]]


/* WARNING: Removing unreachable block (ram,0x009b225f) */

undefined4 FUN_009b2210(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  undefined4 *puVar6;
  int iVar7;
  int in_ECX;
  uint uVar8;
  
  puVar6 = (undefined4 *)(**(code **)(*(int *)(in_ECX + -4) + 0x30))();
  piVar1 = (int *)*puVar6;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar2 = *piVar1;
    iVar7 = (**(code **)(*(int *)(*(int *)(iVar2 + 0x20) + 0x18) + 0x44))();
    uVar3 = *(uint *)(param_1 + 0x10);
    uVar4 = *(uint *)(iVar7 + 0x10);
    uVar8 = uVar4;
    if (uVar3 <= uVar4) {
      uVar8 = uVar3;
    }
    iVar7 = FUN_00414bd0(uVar8);
    if (((iVar7 == 0) && (uVar3 <= uVar4)) && (uVar4 == uVar3)) break;
    cVar5 = (**(code **)(*(int *)(*(int *)(iVar2 + 0x20) + 0x18) + 0x88))(param_1);
    if (cVar5 != '\0') {
      return 1;
    }
    piVar1 = (int *)piVar1[2];
  }
  (**(code **)(*(int *)(*(int *)(iVar2 + 0x20) + 0x18) + 0x84))(1);
  return 1;
}

