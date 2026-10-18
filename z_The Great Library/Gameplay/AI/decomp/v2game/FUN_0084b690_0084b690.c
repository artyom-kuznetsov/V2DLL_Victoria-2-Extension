// FUN_0084b690 @ 0084b690 body=[[0084b690, 0084b806]]


void FUN_0084b690(void)

{
  float fVar1;
  undefined4 *puVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *in_ECX;
  float10 fVar6;
  
  if ((char)in_ECX[0xf] != '\0') {
    if ((*(char *)((int)in_ECX + 0x1bd) != '\0') ||
       (iVar5 = FUN_00424930(), (iVar5 + in_ECX[0xe]) % 0xf == 0)) {
      FUN_00851440(in_ECX);
    }
    puVar2 = (undefined4 *)in_ECX[0x4f];
    fVar1 = (float)in_ECX[0x72];
    while (puVar2 != (undefined4 *)0x0) {
      piVar3 = (int *)*puVar2;
      puVar2 = (undefined4 *)puVar2[2];
      fVar6 = (float10)(**(code **)(*piVar3 + 0x15c))();
      fVar1 = (float)(fVar6 + (float10)fVar1);
    }
    fVar1 = (float)((float10)*(longlong *)
                              (*(int *)(*(int *)(DAT_012587e4 + 4) + in_ECX[0xe] * 4) + 0xe78) *
                   (float10)3.0517578125e-05) - fVar1;
    fVar6 = (float10)FUN_0040b340(fVar1);
    if ((float10)0.01 < fVar6) {
      in_ECX[0x72] = (int)((float)in_ECX[0x72] + fVar1);
    }
    iVar5 = in_ECX[0x85];
    while (iVar5 != 0) {
      iVar5 = *(int *)(iVar5 + 8);
      FUN_00827f30();
    }
    cVar4 = (**(code **)(*in_ECX + 0x20))();
    if (cVar4 != '\0') {
      piVar3 = in_ECX + 0xc;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)(*in_ECX + 0x28))();
      }
    }
    puVar2 = (undefined4 *)in_ECX[0x11];
    while (puVar2 != (undefined4 *)0x0) {
      piVar3 = (int *)*puVar2;
      puVar2 = (undefined4 *)puVar2[2];
      (**(code **)(*piVar3 + 0x24))();
    }
    puVar2 = (undefined4 *)in_ECX[0x85];
    while (puVar2 != (undefined4 *)0x0) {
      piVar3 = (int *)*puVar2;
      puVar2 = (undefined4 *)puVar2[2];
      (**(code **)(*piVar3 + 0x24))();
    }
    iVar5 = 0;
    do {
      FUN_0084ef30(in_ECX);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 8);
  }
  return;
}

