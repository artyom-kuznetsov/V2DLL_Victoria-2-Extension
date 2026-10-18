// FUN_00826010 @ 00826010 body=[[00826010, 0082628a]]


void FUN_00826010(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *in_ECX;
  float10 fVar4;
  
  iVar1 = (**(code **)(*in_ECX + 0xe8))();
  if (*(char *)(iVar1 + 0x3c) != '\0') {
    fVar4 = (float10)(**(code **)(*in_ECX + 0x15c))();
    if (fVar4 != (float10)0) {
      piVar2 = (int *)(**(code **)(*in_ECX + 0xe8))();
      iVar1 = *piVar2;
      fVar4 = (float10)(**(code **)(*in_ECX + 0x15c))();
      (**(code **)(iVar1 + 0x160))((float)fVar4);
    }
    fVar4 = (float10)(**(code **)(*in_ECX + 0x168))();
    if (fVar4 != (float10)0) {
      piVar2 = (int *)(**(code **)(*in_ECX + 0xe8))();
      iVar1 = *piVar2;
      fVar4 = (float10)(**(code **)(*in_ECX + 0x168))();
      (**(code **)(iVar1 + 0x16c))((float)fVar4);
    }
    fVar4 = (float10)(**(code **)(*in_ECX + 0x180))();
    if (fVar4 != (float10)0) {
      piVar2 = (int *)(**(code **)(*in_ECX + 0xe8))();
      iVar1 = *piVar2;
      fVar4 = (float10)(**(code **)(*in_ECX + 0x180))();
      (**(code **)(iVar1 + 0x184))((float)fVar4);
    }
    fVar4 = (float10)(**(code **)(*in_ECX + 0x174))();
    if (fVar4 != (float10)0) {
      piVar2 = (int *)(**(code **)(*in_ECX + 0xe8))();
      iVar1 = *piVar2;
      fVar4 = (float10)(**(code **)(*in_ECX + 0x174))();
      (**(code **)(iVar1 + 0x178))((float)fVar4);
    }
    iVar1 = (**(code **)(*in_ECX + 0x1a4))();
    if (iVar1 != 0) {
      (**(code **)(*in_ECX + 0x1a4))();
      uVar3 = (**(code **)(*in_ECX + 0xe8))();
      FUN_008264c0(uVar3);
    }
    iVar1 = (**(code **)(*in_ECX + 0x1b4))();
    if (iVar1 != 0) {
      (**(code **)(*in_ECX + 0x1b4))();
      uVar3 = (**(code **)(*in_ECX + 0xe8))();
      FUN_008264c0(uVar3);
    }
    iVar1 = (**(code **)(*in_ECX + 0x1c0))();
    if (iVar1 != 0) {
      (**(code **)(*in_ECX + 0x1c0))();
      (**(code **)(*in_ECX + 0xe8))();
      FUN_008266a0(in_ECX);
    }
    iVar1 = (**(code **)(*in_ECX + 0x1cc))();
    if (iVar1 != 0) {
      (**(code **)(*in_ECX + 0x1cc))();
      (**(code **)(*in_ECX + 0xe8))();
      FUN_00826780(in_ECX);
    }
    iVar1 = (**(code **)(*in_ECX + 0xe8))();
    if (*(char *)(iVar1 + 0x3c) != '\0') {
      for (piVar2 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + in_ECX[0xe] * 4) + 0x7b4);
          piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
        if (*(int **)(*piVar2 + 0x144) == in_ECX) {
          uVar3 = (**(code **)(*in_ECX + 0xe8))();
          *(undefined4 *)(*piVar2 + 0x144) = uVar3;
        }
      }
    }
  }
  (**(code **)(*in_ECX + 400))();
  (**(code **)(*in_ECX + 0xe8))();
  FUN_0084fb30(in_ECX);
  return;
}

