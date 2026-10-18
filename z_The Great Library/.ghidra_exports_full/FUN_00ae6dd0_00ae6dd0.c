// FUN_00ae6dd0 @ 00ae6dd0 body=[[00ae6dd0, 00ae6e33]]


void FUN_00ae6dd0(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  void *_Dst;
  uint uVar3;
  
  uVar3 = 0;
  if (*(uint *)(in_ECX + 8) != 0) {
    piVar1 = (int *)(*(int *)(in_ECX + 4) + 0xc);
    while (*piVar1 != param_1) {
      uVar3 = uVar3 + 1;
      piVar1 = piVar1 + 4;
      if (*(uint *)(in_ECX + 8) <= uVar3) {
        return;
      }
    }
    FUN_00b13650();
    if ((1 < *(uint *)(in_ECX + 8)) && (iVar2 = (*(uint *)(in_ECX + 8) - uVar3) + -1, iVar2 != 0)) {
      _Dst = (void *)(*(int *)(in_ECX + 4) + uVar3 * 0x10);
      FID_conflict__memcpy(_Dst,(void *)((int)_Dst + 0x10),iVar2 * 0x10);
    }
    *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + -1;
  }
  return;
}

