// FUN_00511340 @ 00511340  (requested 00511340, first bytes: 55 8B EC 83 EC 0C 53 56)


void FUN_00511340(int param_1,char param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  void *_Dst;
  int *piVar7;
  
  piVar7 = *(int **)(param_1 + 0xe8c);
  while ((*(int **)(param_1 + 0xe8c) <= piVar7 && (piVar7 < *(int **)(param_1 + 0xe90)))) {
    puVar3 = (undefined4 *)*piVar7;
    uVar4 = puVar3[6];
    iVar5 = puVar3[7];
    piVar7 = piVar7 + 1;
    if ((puVar3[3] != 0) && ((param_2 == '\0' || (*(char *)(puVar3 + 8) == '\0')))) {
      iVar6 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + puVar3[3] * 4) + 0xe88);
      puVar1 = (uint *)(iVar6 + 0x18);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - uVar4;
      *(int *)(iVar6 + 0x1c) = (*(int *)(iVar6 + 0x1c) - iVar5) - (uint)(uVar2 < uVar4);
      puVar1 = (uint *)(iVar6 + 0x10);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - uVar4;
      *(int *)(iVar6 + 0x14) = (*(int *)(iVar6 + 0x14) - iVar5) - (uint)(uVar2 < uVar4);
      if ((*(int *)(iVar6 + 0x1c) < 1) && (*(int *)(iVar6 + 0x1c) < 0)) {
        *(undefined4 *)(iVar6 + 0x18) = 0;
        *(undefined4 *)(iVar6 + 0x1c) = 0;
      }
      if ((*(int *)(iVar6 + 0x14) < 1) && (*(int *)(iVar6 + 0x14) < 0)) {
        *(undefined4 *)(iVar6 + 0x10) = 0;
        *(undefined4 *)(iVar6 + 0x14) = 0;
      }
      FUN_004f5e10(iVar6,uVar4,iVar5);
    }
    (**(code **)*puVar3)(1);
  }
  _Dst = *(void **)(param_1 + 0xe8c);
  if (_Dst != *(void **)(param_1 + 0xe90)) {
    FID_conflict__memcpy(_Dst,*(void **)(param_1 + 0xe90),0);
    *(void **)(param_1 + 0xe90) = _Dst;
  }
  return;
}

