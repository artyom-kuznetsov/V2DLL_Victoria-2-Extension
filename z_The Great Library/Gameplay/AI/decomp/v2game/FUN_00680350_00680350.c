// FUN_00680350 @ 00680350 body=[[00680350, 006803a8] [006803b0, 0068044d]]


void FUN_00680350(int *param_1)

{
  void *_Dst;
  int *piVar1;
  int **ppiVar2;
  int **ppiVar3;
  int in_EAX;
  int iVar4;
  int local_c;
  int *local_8;
  
  _Dst = *(void **)(in_EAX + 0xacc);
  if (_Dst != *(void **)(in_EAX + 0xad0)) {
    FID_conflict__memcpy(_Dst,*(void **)(in_EAX + 0xad0),0);
    *(void **)(in_EAX + 0xad0) = _Dst;
  }
  iVar4 = param_1[1] - *param_1 >> 2;
  local_c = 0;
  if (0 < iVar4) {
    do {
      piVar1 = *(int **)(*param_1 + local_c * 4);
      ppiVar2 = *(int ***)(in_EAX + 0xad0);
      local_8 = piVar1;
      if (&local_8 < ppiVar2) {
        ppiVar3 = *(int ***)(in_EAX + 0xacc);
        if (&local_8 < ppiVar3) goto LAB_00680409;
        if (ppiVar2 == *(int ***)(in_EAX + 0xad4)) {
          FUN_00a513f0();
        }
        if (*(undefined4 **)(in_EAX + 0xad0) != (undefined4 *)0x0) {
          **(undefined4 **)(in_EAX + 0xad0) =
               *(undefined4 *)(*(int *)(in_EAX + 0xacc) + ((int)&local_8 - (int)ppiVar3 >> 2) * 4);
        }
      }
      else {
LAB_00680409:
        if (ppiVar2 == *(int ***)(in_EAX + 0xad4)) {
          FUN_00a513f0();
        }
        if (*(undefined4 **)(in_EAX + 0xad0) != (undefined4 *)0x0) {
          **(undefined4 **)(in_EAX + 0xad0) = piVar1;
        }
      }
      *(int *)(in_EAX + 0xad0) = *(int *)(in_EAX + 0xad0) + 4;
      (**(code **)(*piVar1 + 0x18))();
      local_c = local_c + 1;
    } while (local_c < iVar4);
  }
  return;
}

