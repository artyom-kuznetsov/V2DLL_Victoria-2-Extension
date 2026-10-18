// FUN_00a194e0 @ 00a194e0 body=[[00a194e0, 00a195da]]


int FUN_00a194e0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  void *_Src;
  int unaff_ESI;
  void *pvVar3;
  uint uVar4;
  void *local_8;
  
  local_8 = *(void **)(param_1 + 0xc);
  pvVar3 = *(void **)(unaff_ESI + 0x34);
  _Src = *(void **)(unaff_ESI + 0x30);
  if (pvVar3 < _Src) {
    pvVar3 = *(void **)(unaff_ESI + 0x2c);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar4 = (int)pvVar3 - (int)_Src;
  if (uVar1 < (uint)((int)pvVar3 - (int)_Src)) {
    uVar4 = uVar1;
  }
  if ((uVar4 != 0) && (param_2 == -5)) {
    param_2 = 0;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar4;
  *(uint *)(param_1 + 0x10) = uVar1 - uVar4;
  if (*(code **)(unaff_ESI + 0x38) != (code *)0x0) {
    uVar2 = (**(code **)(unaff_ESI + 0x38))(*(undefined4 *)(unaff_ESI + 0x3c),_Src,uVar4);
    *(undefined4 *)(unaff_ESI + 0x3c) = uVar2;
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  if (uVar4 != 0) {
    FID_conflict__memcpy(local_8,_Src,uVar4);
    local_8 = (void *)((int)local_8 + uVar4);
    _Src = (void *)((int)_Src + uVar4);
  }
  if (_Src == *(void **)(unaff_ESI + 0x2c)) {
    _Src = *(void **)(unaff_ESI + 0x28);
    if (*(void **)(unaff_ESI + 0x34) == *(void **)(unaff_ESI + 0x2c)) {
      *(void **)(unaff_ESI + 0x34) = _Src;
    }
    uVar1 = *(uint *)(param_1 + 0x10);
    uVar4 = *(int *)(unaff_ESI + 0x34) - (int)_Src;
    if (uVar1 < uVar4) {
      uVar4 = uVar1;
    }
    if ((uVar4 != 0) && (param_2 == -5)) {
      param_2 = 0;
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar4;
    *(uint *)(param_1 + 0x10) = uVar1 - uVar4;
    if (*(code **)(unaff_ESI + 0x38) != (code *)0x0) {
      uVar2 = (**(code **)(unaff_ESI + 0x38))(*(undefined4 *)(unaff_ESI + 0x3c),_Src,uVar4);
      *(undefined4 *)(unaff_ESI + 0x3c) = uVar2;
      *(undefined4 *)(param_1 + 0x30) = uVar2;
    }
    if (uVar4 != 0) {
      FID_conflict__memcpy(local_8,_Src,uVar4);
      local_8 = (void *)((int)local_8 + uVar4);
      _Src = (void *)((int)_Src + uVar4);
    }
  }
  *(void **)(param_1 + 0xc) = local_8;
  *(void **)(unaff_ESI + 0x30) = _Src;
  return param_2;
}

