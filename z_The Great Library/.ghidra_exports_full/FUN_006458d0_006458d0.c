// FUN_006458d0 @ 006458d0 body=[[006458d0, 006458e6] [006458f0, 00645a11]]


void FUN_006458d0(int param_1)

{
  int *piVar1;
  char cVar2;
  uint *puVar3;
  uint uVar4;
  void *_Dst;
  uint *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint **ppuVar8;
  uint *puStack_24;
  uint *apuStack_20 [2];
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint *local_10;
  
  puVar5 = *(uint **)(param_1 + 0x3a48);
  while ((*(uint **)(param_1 + 0x3a48) <= puVar5 && (puVar5 < *(uint **)(param_1 + 0x3a4c)))) {
    puVar3 = (uint *)*puVar5;
    local_10 = puVar5 + 1;
    (**(code **)(*puVar3 + 0x38))();
    uVar6 = (**(code **)(*puVar3 + 0x44))();
    FUN_009962f0(uVar6);
    puVar5 = (uint *)(*(uint **)(param_1 + 0x3a00))[1];
    cVar2 = *(char *)((int)puVar5 + 0x15);
    puStack_24 = *(uint **)(param_1 + 0x3a00);
    while (cVar2 == '\0') {
      if ((uint *)puVar5[3] < puVar3) {
        puVar7 = (uint *)puVar5[2];
        puVar5 = puStack_24;
      }
      else {
        puVar7 = (uint *)*puVar5;
      }
      puStack_24 = puVar5;
      puVar5 = puVar7;
      cVar2 = *(char *)((int)puVar7 + 0x15);
    }
    if ((puStack_24 == *(uint **)(param_1 + 0x3a00)) || (puVar3 < (uint *)puStack_24[3])) {
      apuStack_20[0] = *(uint **)(param_1 + 0x3a00);
      ppuVar8 = apuStack_20;
    }
    else {
      ppuVar8 = &puStack_24;
    }
    puVar5 = local_10;
    if ((*ppuVar8 != *(uint **)(param_1 + 0x3a00)) && (uVar4 = (*ppuVar8)[4], uVar4 != 0xffffffff))
    {
      piVar1 = (int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x20d8) + uVar4 * 4) + 0xc) + 0x394);
      *piVar1 = *piVar1 + -1;
      puStack_24 = puVar3;
      FUN_004c9400(&uStack_18,&puStack_24);
      FUN_00445600(uStack_18,uStack_14);
      puVar5 = local_10;
    }
  }
  _Dst = *(void **)(param_1 + 0x3a48);
  if (_Dst != *(void **)(param_1 + 0x3a4c)) {
    FID_conflict__memcpy(_Dst,*(void **)(param_1 + 0x3a4c),0);
    *(void **)(param_1 + 0x3a4c) = _Dst;
  }
  return;
}

