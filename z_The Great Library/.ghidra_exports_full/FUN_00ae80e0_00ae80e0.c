// FUN_00ae80e0 @ 00ae80e0 body=[[00ae80e0, 00ae81be]]


void FUN_00ae80e0(int param_1,int param_2,char param_3)

{
  void *_Dst;
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  
  iVar3 = param_1 * 0x14;
  piVar1 = (int *)(iVar3 + 4 + *in_ECX);
  puVar2 = *(undefined4 **)(*(int *)(iVar3 + 4 + *in_ECX) + param_2 * 4);
  in_ECX[8] = in_ECX[8] - puVar2[5];
  if ((1 < (uint)piVar1[1]) && (iVar4 = (piVar1[1] - param_2) + -1, iVar4 != 0)) {
    _Dst = (void *)(*piVar1 + param_2 * 4);
    FID_conflict__memcpy(_Dst,(void *)((int)_Dst + 4),iVar4 * 4);
  }
  piVar1[1] = piVar1[1] + -1;
  if (*(int *)(*in_ECX + 8 + iVar3) == 0) {
    iVar4 = *(int *)(*in_ECX + 4 + iVar3);
    if (iVar4 != 0) {
      (*(code *)PTR__free_00f01b10)(iVar4);
    }
    if ((1 < (uint)in_ECX[1]) && (iVar4 = (in_ECX[1] - param_1) + -1, iVar4 != 0)) {
      FID_conflict__memcpy((void *)(*in_ECX + iVar3),(void *)(*in_ECX + iVar3 + 0x14),iVar4 * 0x14);
    }
    in_ECX[1] = in_ECX[1] + -1;
  }
  if (param_3 != '\0') {
    (*(code *)PTR__free_00f01b10)(*puVar2);
    (*(code *)PTR__free_00f01b10)(puVar2[1]);
    (*(code *)PTR__free_00f01b10)(puVar2[7]);
    (*(code *)PTR__free_00f01b10)(puVar2[8]);
    (*(code *)PTR__free_00f01b10)(puVar2);
  }
  return;
}

