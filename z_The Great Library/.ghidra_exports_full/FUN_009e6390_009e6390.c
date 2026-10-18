// FUN_009e6390 @ 009e6390 body=[[009e6390, 009e63ab] [009e63b0, 009e644d]]


/* WARNING: Removing unreachable block (ram,0x009e63d5) */

undefined4 FUN_009e6390(int param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  
  puVar4 = *(undefined4 **)(in_ECX + 0x68);
  if (puVar4 == (undefined4 *)0x0) {
    return 0;
  }
  do {
    iVar5 = (**(code **)(*(int *)*puVar4 + 0x44))();
    uVar1 = *(uint *)(iVar5 + 0x10);
    uVar2 = *(uint *)(param_1 + 0x10);
    uVar6 = uVar2;
    if (uVar1 <= uVar2) {
      uVar6 = uVar1;
    }
    iVar5 = FUN_00414bd0(uVar6);
    if (((iVar5 == 0) && (uVar1 <= uVar2)) && (uVar2 == uVar1)) {
      (**(code **)(*(int *)*puVar4 + 0x84))(1);
      return 1;
    }
    cVar3 = (**(code **)(*(int *)*puVar4 + 0x88))(param_1);
    if (cVar3 != '\0') {
      return 1;
    }
    puVar4 = (undefined4 *)puVar4[2];
  } while (puVar4 != (undefined4 *)0x0);
  return 0;
}

