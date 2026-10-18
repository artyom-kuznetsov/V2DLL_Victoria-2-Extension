// FUN_00addac0 @ 00addac0 body=[[00addac0, 00addb09]]


void FUN_00addac0(int param_1)

{
  void *_Dst;
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x30) + param_1 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  if ((1 < *(uint *)(in_ECX + 0x34)) &&
     (iVar2 = (*(uint *)(in_ECX + 0x34) - param_1) + -1, iVar2 != 0)) {
    _Dst = (void *)(*(int *)(in_ECX + 0x30) + param_1 * 4);
    FID_conflict__memcpy(_Dst,(void *)((int)_Dst + 4),iVar2 * 4);
  }
  *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + -1;
  return;
}

