// FUN_007495d0 @ 007495d0 body=[[007495d0, 0074965c] [00749660, 0074968b] [0074968f, 007496ea]]


void FUN_007495d0(undefined4 *param_1)

{
  void *_Dst;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  iVar3 = param_1[0x16];
  if (*(int *)(iVar3 + 4) != 0) {
    (**(code **)(*(int *)(*(int *)(iVar3 + 4) + 0x18) + 0x38))();
  }
  *(undefined4 *)(iVar3 + 8) = 0;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  *(undefined4 *)(iVar3 + 0xc) = 0x2d2d2d;
  *(undefined4 *)(iVar3 + 0x10) = 0;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  _Dst = (void *)param_1[1];
  if (_Dst != (void *)param_1[2]) {
    FID_conflict__memcpy(_Dst,(void *)param_1[2],0);
    param_1[2] = _Dst;
  }
  iVar3 = 0;
  piVar2 = param_1 + 0x11;
  FUN_007534e0(piVar2,&local_8,param_1[0x11],param_1[0x12]);
  local_8 = 0;
  if (0 < (int)(param_1[0x12] - *piVar2 & 0xfffffff0U)) {
    do {
      iVar1 = *piVar2;
      iVar4 = 0;
      if (0 < (int)(*(int *)(iVar3 + 4 + iVar1) - *(int *)(iVar3 + iVar1) & 0xfffffffcU)) {
        do {
          iVar1 = *(int *)(*(int *)(iVar3 + iVar1) + iVar4 * 4);
          if (iVar1 != 0) {
            *(undefined ***)(iVar1 + 0xc) = CButtonObserver::vftable;
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(iVar1);
          }
          iVar1 = *piVar2;
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(iVar3 + 4 + iVar1) - *(int *)(iVar3 + iVar1) >> 2);
      }
      local_8 = local_8 + 1;
      iVar3 = iVar3 + 0x10;
    } while (local_8 < param_1[0x12] - *piVar2 >> 4);
  }
  piVar2 = (int *)*param_1;
  (**(code **)(*piVar2 + 0x94))();
  (**(code **)(*piVar2 + 0x90))();
  (**(code **)(*(int *)*param_1 + 0x88))();
  return;
}

