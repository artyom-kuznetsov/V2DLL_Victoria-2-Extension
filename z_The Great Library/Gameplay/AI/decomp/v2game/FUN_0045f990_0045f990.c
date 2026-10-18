// FUN_0045f990 @ 0045f990 body=[[0045f990, 0045fa57]]


/* WARNING: Removing unreachable block (ram,0x0045f9ef) */

int FUN_0045f990(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int in_EAX;
  uint uVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  iVar4 = (*(int *)(in_EAX + 0xc) - *(int *)(in_EAX + 8)) / 0xac;
  local_8 = 0;
  if (0 < iVar4) {
    iVar1 = *(int *)(in_EAX + 8);
    uVar2 = *(uint *)(param_1 + 0x10);
    iVar7 = iVar1;
    do {
      uVar3 = *(uint *)(iVar7 + 0x10);
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = uVar2;
      }
      iVar6 = FUN_00414bd0(uVar5);
      if (((iVar6 == 0) && (uVar2 <= uVar3)) && (uVar3 == uVar2)) {
        return local_8 * 0xac + iVar1;
      }
      local_8 = local_8 + 1;
      iVar7 = iVar7 + 0xac;
    } while (local_8 < iVar4);
  }
  return 0;
}

