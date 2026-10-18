// FUN_009cc0a0 @ 009cc0a0 body=[[009cc0a0, 009cc154] [009cc160, 009cc1eb]]


void FUN_009cc0a0(void)

{
  float fVar1;
  int iVar2;
  int in_ECX;
  float10 fVar3;
  undefined1 auStack_18 [20];
  
  iVar2 = (**(code **)(**(int **)(in_ECX + 0xac) + 0xb0))();
  if (iVar2 != 3) {
    (**(code **)(*(int *)(in_ECX + 0x54) + 0x18))(auStack_18);
    fVar3 = (float10)(**(code **)(**(int **)(in_ECX + 0x208) + 0x14))();
    if (fVar3 == (float10)0) {
      (**(code **)(**(int **)(in_ECX + 0x208) + 4))();
    }
    else {
      fVar1 = *(float *)(in_ECX + 0x230);
      fVar3 = (float10)(**(code **)(**(int **)(in_ECX + 0x208) + 0x14))();
      *(float *)(in_ECX + 0x230) = (float)((float10)fVar1 + (fVar3 - (float10)fVar1));
    }
    fVar1 = *(float *)(in_ECX + 0x22c) * 0.3;
    if (*(float *)(in_ECX + 0x230) <= fVar1) {
      fVar3 = (float10)(**(code **)(**(int **)(in_ECX + 0x208) + 0x14))();
      if ((float10)*(float *)(in_ECX + 0x22c) < fVar3) {
        FUN_009cbb10();
        *(undefined4 *)(in_ECX + 0x70) = 2;
      }
    }
    else if (fVar1 < *(float *)(in_ECX + 0x230)) {
      do {
        *(float *)(in_ECX + 0x230) = *(float *)(in_ECX + 0x230) - *(float *)(in_ECX + 0x22c) * 0.3;
        FUN_009cbb10();
      } while (*(float *)(in_ECX + 0x22c) * 0.3 < *(float *)(in_ECX + 0x230));
      return;
    }
  }
  return;
}

