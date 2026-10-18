// FUN_0048cfa0 @ 0048cfa0 body=[[0048cfa0, 0048cfb9] [0048cfc0, 0048d04c]]


void FUN_0048cfa0(int param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int in_EAX;
  int iVar3;
  bool bVar4;
  bool bVar5;
  
  while (param_2 < in_EAX) {
    iVar3 = (in_EAX + -1) / 2;
    puVar1 = (undefined8 *)(param_1 + iVar3 * 0x14);
    if (*(int *)((int)puVar1 + 4) == *(int *)((int)param_3 + 4)) {
      bVar4 = *(uint *)(puVar1 + 1) < *(uint *)(param_3 + 1);
      bVar5 = false;
      if (*(uint *)(puVar1 + 1) == *(uint *)(param_3 + 1)) {
        bVar4 = *(uint *)((int)puVar1 + 0xc) < *(uint *)((int)param_3 + 0xc);
        bVar5 = false;
        if (*(uint *)((int)puVar1 + 0xc) == *(uint *)((int)param_3 + 0xc)) {
          bVar4 = *(uint *)(puVar1 + 2) < *(uint *)(param_3 + 2);
          bVar5 = *(uint *)(puVar1 + 2) == *(uint *)(param_3 + 2);
        }
      }
      bVar5 = !bVar4 && !bVar5;
    }
    else {
      bVar5 = *(int *)((int)param_3 + 4) < *(int *)((int)puVar1 + 4);
    }
    if (!bVar5) break;
    puVar2 = (undefined8 *)(param_1 + in_EAX * 0x14);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
    in_EAX = iVar3;
  }
  puVar1 = (undefined8 *)(param_1 + in_EAX * 0x14);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_3 + 2);
  return;
}

