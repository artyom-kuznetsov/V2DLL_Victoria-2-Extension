// FUN_0045cd80 @ 0045cd80 body=[[0045cd80, 0045cdbc] [0045cdc0, 0045ce8f]]


void FUN_0045cd80(undefined4 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  
  iVar3 = (in_EAX - in_ECX) / 0x14;
  iVar7 = iVar3 / 2;
  if (0 < iVar7) {
    iVar5 = iVar7 * 2 + 2;
    do {
      iVar7 = iVar7 + -1;
      iVar5 = iVar5 + -2;
      iVar4 = iVar7;
      for (iVar6 = iVar5; iVar6 < iVar3; iVar6 = iVar6 * 2 + 2) {
        if (*(int *)(in_ECX + -0xc + iVar6 * 0x14) < *(int *)(in_ECX + 8 + iVar6 * 0x14)) {
          iVar6 = iVar6 + -1;
        }
        iVar1 = in_ECX + iVar6 * 0x14;
        puVar2 = (undefined8 *)(in_ECX + iVar4 * 0x14);
        *puVar2 = *(undefined8 *)(in_ECX + iVar6 * 0x14);
        puVar2[1] = *(undefined8 *)(iVar1 + 8);
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(iVar1 + 0x10);
        iVar4 = iVar6;
      }
      if (iVar6 == iVar3) {
        iVar6 = in_ECX + -0x14 + iVar3 * 0x14;
        puVar2 = (undefined8 *)(in_ECX + iVar4 * 0x14);
        *puVar2 = *(undefined8 *)(in_ECX + -0x14 + iVar3 * 0x14);
        puVar2[1] = *(undefined8 *)(iVar6 + 8);
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(iVar6 + 0x10);
      }
      FUN_0045d6b0(iVar7,param_1);
    } while (0 < iVar7);
  }
  return;
}

