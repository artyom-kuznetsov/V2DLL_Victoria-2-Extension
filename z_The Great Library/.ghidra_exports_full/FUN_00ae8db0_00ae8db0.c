// FUN_00ae8db0 @ 00ae8db0 body=[[00ae8db0, 00ae8e18]]


void FUN_00ae8db0(int param_1,uint param_2)

{
  void *_Dst;
  uint uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(in_ECX + 0x30);
  uVar3 = 0;
  uVar4 = 0;
  if (uVar1 != 0) {
    while( true ) {
      iVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x2c) + uVar4 * 4) + 4))();
      if ((iVar2 == param_1) && (uVar3 = uVar3 + 1, param_2 < uVar3)) break;
      uVar4 = uVar4 + 1;
      if (uVar1 <= uVar4) {
        return;
      }
    }
    if ((1 < *(uint *)(in_ECX + 0x30)) &&
       (iVar2 = (*(uint *)(in_ECX + 0x30) - uVar4) + -1, iVar2 != 0)) {
      _Dst = (void *)(*(int *)(in_ECX + 0x2c) + uVar4 * 4);
      FID_conflict__memcpy(_Dst,(void *)((int)_Dst + 4),iVar2 * 4);
    }
    *(int *)(in_ECX + 0x30) = *(int *)(in_ECX + 0x30) + -1;
  }
  return;
}

