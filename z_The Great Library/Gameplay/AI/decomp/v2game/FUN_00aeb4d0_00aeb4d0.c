// FUN_00aeb4d0 @ 00aeb4d0 body=[[00aeb4d0, 00aeb51e]]


void FUN_00aeb4d0(int param_1,char param_2)

{
  void *_Dst;
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  
  if ((param_2 != '\0') &&
     (puVar1 = *(undefined4 **)(*in_ECX + param_1 * 4), puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  if ((1 < (uint)in_ECX[1]) && (iVar2 = (in_ECX[1] - param_1) + -1, iVar2 != 0)) {
    _Dst = (void *)(*in_ECX + param_1 * 4);
    FID_conflict__memcpy(_Dst,(void *)((int)_Dst + 4),iVar2 * 4);
  }
  in_ECX[1] = in_ECX[1] + -1;
  return;
}

