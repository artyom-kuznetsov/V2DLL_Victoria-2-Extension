// FUN_007f8a90 @ 007f8a90 body=[[007f8a90, 007f8b06] [007f8b10, 007f8b58] [007f8b60, 007f8bee]]


void FUN_007f8a90(int param_1)

{
  void *_Dst;
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3c84b;
  local_10 = ExceptionList;
  iVar5 = 0;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x15ac) == 0) {
    ExceptionList = &local_10;
    puVar2 = (undefined4 *)FUN_00aad56b(0xc84);
    local_8 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = puVar2 + 1;
      *puVar2 = 200;
      _eh_vector_constructor_iterator_(puVar4,0x10,200,FUN_00413490,FUN_00aa8540);
    }
    local_8 = 0xffffffff;
    *(undefined4 **)(param_1 + 0x15ac) = puVar4;
    do {
      FUN_005c5920(30000);
      iVar5 = iVar5 + 0x10;
    } while (iVar5 < 0xc80);
    uVar3 = FUN_00aad56b(800);
    *(undefined4 *)(param_1 + 0x15b0) = uVar3;
    uVar3 = FUN_00aad56b(800);
    *(undefined4 *)(param_1 + 0x15b0) = uVar3;
  }
  param_1 = 0;
  do {
    puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x15ac) + param_1);
    _Dst = (void *)*puVar2;
    if (_Dst != (void *)puVar2[1]) {
      FID_conflict__memcpy(_Dst,(void *)puVar2[1],0);
      puVar2[1] = _Dst;
    }
    FUN_007d85d0(30000);
    param_1 = param_1 + 0x10;
  } while (param_1 < 0xc80);
  _memset(*(void **)(iVar1 + 0x15b0),0,800);
  _memset((void *)(iVar1 + 0x15b4),0,800);
  ExceptionList = local_10;
  return;
}

