// FUN_00ae81c0 @ 00ae81c0 body=[[00ae81c0, 00ae82c3]]


void FUN_00ae81c0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *in_ECX;
  void *_Dst;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  
  uVar6 = 0;
  uVar4 = 0;
  if (in_ECX[1] != 0) {
    piVar5 = (int *)*in_ECX;
    while (*(int *)(*piVar5 + 0x3c) != *(int *)(param_1 + 0x3c)) {
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 5;
      if ((uint)in_ECX[1] <= uVar4) {
        return;
      }
    }
    uVar1 = piVar5[2];
    if (uVar1 != 0) {
      do {
        in_ECX[8] = in_ECX[8] - *(int *)(*(int *)(piVar5[1] + uVar6 * 4) + 0x14);
        puVar2 = *(undefined4 **)(piVar5[1] + uVar6 * 4);
        if (puVar2 != (undefined4 *)0x0) {
          (*(code *)PTR__free_00f01b10)(*puVar2);
          (*(code *)PTR__free_00f01b10)(puVar2[1]);
          (*(code *)PTR__free_00f01b10)(puVar2[7]);
          (*(code *)PTR__free_00f01b10)(puVar2[8]);
          (*(code *)PTR__free_00f01b10)(puVar2);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar1);
    }
    piVar5[2] = 0;
    piVar5[3] = 0;
    if (piVar5[1] != 0) {
      (*(code *)PTR__free_00f01b10)(piVar5[1]);
      piVar5[1] = 0;
    }
    iVar3 = *(int *)(*in_ECX + 4 + uVar4 * 0x14);
    if (iVar3 != 0) {
      (*(code *)PTR__free_00f01b10)(iVar3);
    }
    if ((1 < (uint)in_ECX[1]) && (iVar3 = (in_ECX[1] - uVar4) + -1, iVar3 != 0)) {
      _Dst = (void *)(*in_ECX + uVar4 * 0x14);
      FID_conflict__memcpy(_Dst,(void *)((int)_Dst + 0x14),iVar3 * 0x14);
    }
    in_ECX[1] = in_ECX[1] + -1;
  }
  return;
}

