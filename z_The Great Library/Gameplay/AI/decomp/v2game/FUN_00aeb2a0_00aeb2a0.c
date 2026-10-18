// FUN_00aeb2a0 @ 00aeb2a0 body=[[00aeb2a0, 00aeb2f0]]


void FUN_00aeb2a0(int param_1,undefined4 param_2)

{
  void *_Src;
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  
  iVar3 = in_ECX[1];
  uVar2 = iVar3 + 1;
  in_ECX[1] = uVar2;
  if ((uint)in_ECX[2] < uVar2) {
    FUN_00aeb6c0(iVar3 + 2);
  }
  iVar3 = (in_ECX[1] - param_1) + -1;
  if (iVar3 != 0) {
    _Src = (void *)(*in_ECX + param_1 * 4);
    FID_conflict__memcpy((void *)((int)_Src + 4),_Src,iVar3 * 4);
  }
  puVar1 = (undefined4 *)(*in_ECX + param_1 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
  }
  return;
}

