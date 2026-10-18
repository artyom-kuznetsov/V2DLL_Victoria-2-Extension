// FUN_0045d530 @ 0045d530 body=[[0045d530, 0045d62c]]


void FUN_0045d530(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int in_EAX;
  int iVar5;
  int in_ECX;
  
  iVar1 = in_ECX;
  while( true ) {
    iVar5 = iVar1 * 2 + 2;
    if (in_EAX <= iVar5) break;
    if (*(int *)(param_1 + -0xc + iVar5 * 0x14) < *(int *)(param_1 + 8 + iVar5 * 0x14)) {
      iVar5 = iVar1 * 2 + 1;
    }
    iVar2 = param_1 + iVar5 * 0x14;
    puVar3 = (undefined8 *)(param_1 + iVar1 * 0x14);
    *puVar3 = *(undefined8 *)(param_1 + iVar5 * 0x14);
    puVar3[1] = *(undefined8 *)(iVar2 + 8);
    *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(iVar2 + 0x10);
    iVar1 = iVar5;
  }
  if (iVar5 == in_EAX) {
    iVar5 = param_1 + -0x14 + in_EAX * 0x14;
    puVar3 = (undefined8 *)(param_1 + iVar1 * 0x14);
    *puVar3 = *(undefined8 *)(param_1 + -0x14 + in_EAX * 0x14);
    puVar3[1] = *(undefined8 *)(iVar5 + 8);
    *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(iVar5 + 0x10);
    iVar1 = in_EAX + -1;
  }
  while (in_ECX < iVar1) {
    iVar5 = (iVar1 + -1) / 2;
    puVar3 = (undefined8 *)(param_1 + iVar5 * 0x14);
    if (*(int *)(param_1 + 8 + iVar5 * 0x14) <= *(int *)(param_2 + 1)) break;
    puVar4 = (undefined8 *)(param_1 + iVar1 * 0x14);
    *puVar4 = *puVar3;
    puVar4[1] = puVar3[1];
    *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(puVar3 + 2);
    iVar1 = iVar5;
  }
  puVar3 = (undefined8 *)(param_1 + iVar1 * 0x14);
  *puVar3 = *param_2;
  puVar3[1] = param_2[1];
  *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_2 + 2);
  return;
}

