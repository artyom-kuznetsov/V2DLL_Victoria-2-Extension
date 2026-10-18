// FUN_00a30420 @ 00a30420 body=[[00a30420, 00a304dc] [00a304e0, 00a3054c]]


void FUN_00a30420(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  int *unaff_EDI;
  float10 fVar5;
  int iStack_18;
  undefined4 uStack_14;
  
  if ((unaff_EDI[1] - *unaff_EDI & 0xfffffffcU) != 0) {
    (**(code **)(**(int **)(*(int *)*unaff_EDI + 0x13c) + 0x8c))(param_1);
    iStack_18 = 0;
    iVar3 = unaff_EDI[1] - *unaff_EDI >> 2;
    if (0 < iVar3) {
      do {
        piVar1 = *(int **)(*unaff_EDI + iStack_18 * 4);
        fVar5 = (float10)(**(code **)(*piVar1 + 0x58))();
        FUN_009ed370(param_1,uStack_14,piVar1 + 0x25,(float)fVar5);
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < iVar3);
    }
    (**(code **)(**(int **)(*(int *)*unaff_EDI + 0x13c) + 0x90))(param_1);
    iVar4 = 0;
    iVar3 = unaff_EDI[1] - *unaff_EDI >> 2;
    if (0 < iVar3) {
      do {
        iVar2 = *unaff_EDI;
        piVar1 = *(int **)(iVar2 + iVar4 * 4);
        (**(code **)(*piVar1 + 0x58))();
        FUN_009ed4d0(*(undefined4 *)(iVar2 + iVar4 * 4),param_1,iStack_18,piVar1 + 0x25,param_2,
                     param_3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
    _Dst = (void *)*unaff_EDI;
    if (_Dst != (void *)unaff_EDI[1]) {
      FID_conflict__memcpy(_Dst,(void *)unaff_EDI[1],0);
      unaff_EDI[1] = (int)_Dst;
    }
  }
  return;
}

