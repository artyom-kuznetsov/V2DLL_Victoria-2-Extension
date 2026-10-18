// FUN_0048cdd0 @ 0048cdd0 body=[[0048cdd0, 0048cde9] [0048cdf0, 0048cea1]]


void FUN_0048cdd0(int param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int in_EAX;
  int iVar5;
  bool bVar6;
  bool bVar7;
  
  while( true ) {
    iVar5 = in_EAX * 2 + 2;
    if (param_2 <= iVar5) break;
    iVar3 = *(int *)(param_1 + 4 + iVar5 * 0x14);
    iVar4 = *(int *)(param_1 + -0x10 + iVar5 * 0x14);
    iVar1 = param_1 + iVar5 * 0x14;
    if (iVar3 == iVar4) {
      bVar6 = *(uint *)(iVar1 + 8) < *(uint *)(iVar1 + -0xc);
      bVar7 = false;
      if (*(uint *)(iVar1 + 8) == *(uint *)(iVar1 + -0xc)) {
        bVar6 = *(uint *)(iVar1 + 0xc) < *(uint *)(iVar1 + -8);
        bVar7 = false;
        if (*(uint *)(iVar1 + 0xc) == *(uint *)(iVar1 + -8)) {
          bVar6 = *(uint *)(iVar1 + 0x10) < *(uint *)(iVar1 + -4);
          bVar7 = *(uint *)(iVar1 + 0x10) == *(uint *)(iVar1 + -4);
        }
      }
      bVar7 = !bVar6 && !bVar7;
    }
    else {
      bVar7 = iVar4 < iVar3;
    }
    if (bVar7) {
      iVar5 = in_EAX * 2 + 1;
    }
    iVar1 = param_1 + iVar5 * 0x14;
    puVar2 = (undefined8 *)(param_1 + in_EAX * 0x14);
    *puVar2 = *(undefined8 *)(param_1 + iVar5 * 0x14);
    puVar2[1] = *(undefined8 *)(iVar1 + 8);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(iVar1 + 0x10);
    in_EAX = iVar5;
  }
  if (iVar5 == param_2) {
    iVar5 = param_1 + -0x14 + param_2 * 0x14;
    puVar2 = (undefined8 *)(param_1 + in_EAX * 0x14);
    *puVar2 = *(undefined8 *)(param_1 + -0x14 + param_2 * 0x14);
    puVar2[1] = *(undefined8 *)(iVar5 + 8);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(iVar5 + 0x10);
  }
  FUN_0048cfa0(param_1);
  return;
}

