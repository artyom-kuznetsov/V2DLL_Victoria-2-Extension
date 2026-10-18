// FUN_004d3560 @ 004d3560 body=[[004d3560, 004d35e0]]


int FUN_004d3560(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  undefined4 *puVar5;
  undefined4 **ppuVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *local_8;
  
  iVar4 = 0;
  iVar2 = *(int *)(in_ECX + 0x60);
  while (iVar2 != 0) {
    puVar8 = (undefined4 *)(*(undefined4 **)(iVar2 + 0x130))[1];
    cVar1 = *(char *)((int)puVar8 + 0x15);
    puVar3 = *(undefined4 **)(iVar2 + 0x130);
    while (cVar1 == '\0') {
      if ((undefined4 *)puVar8[3] < param_1) {
        puVar5 = (undefined4 *)puVar8[2];
        puVar8 = puVar3;
      }
      else {
        puVar5 = (undefined4 *)*puVar8;
      }
      puVar3 = puVar8;
      puVar8 = puVar5;
      cVar1 = *(char *)((int)puVar5 + 0x15);
    }
    if ((puVar3 == *(undefined4 **)(iVar2 + 0x130)) || (param_1 < (undefined4 *)puVar3[3])) {
      local_8 = *(undefined4 **)(iVar2 + 0x130);
      ppuVar6 = &local_8;
    }
    else {
      ppuVar6 = &param_1;
    }
    if (*ppuVar6 == *(undefined4 **)(iVar2 + 0x130)) {
      iVar7 = 0;
    }
    else {
      iVar7 = (*ppuVar6)[4];
    }
    iVar4 = iVar4 + iVar7;
    iVar2 = *(int *)(iVar2 + 0x224);
  }
  return iVar4;
}

