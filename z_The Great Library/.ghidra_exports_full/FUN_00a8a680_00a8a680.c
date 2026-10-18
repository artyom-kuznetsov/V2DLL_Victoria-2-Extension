// FUN_00a8a680 @ 00a8a680 body=[[00a8a680, 00a8a7ca] [00a8a7ce, 00a8a7ff]]


int * FUN_00a8a680(int *param_1,int param_2)

{
  undefined4 *puVar1;
  size_t _Size;
  int in_EAX;
  int *piVar2;
  void *_Dst;
  undefined8 *in_ECX;
  int *piVar3;
  int iVar4;
  u_long local_8;
  
  iVar4 = (uint)*(byte *)((int)in_ECX + 1) * 0x20 + *(int *)(in_EAX + 0x1c);
  local_8 = 0;
  switch(*(undefined1 *)in_ECX) {
  case 6:
  case 8:
    piVar3 = *(int **)(iVar4 + 0x14);
    if (piVar3 != (int *)(iVar4 + 0x10)) {
      do {
        if ((uint)piVar3[2] <= *(uint *)(in_ECX + 1)) {
          if (*(uint *)(in_ECX + 1) <= (uint)piVar3[2]) goto switchD_00a8a6a5_caseD_9;
          break;
        }
        piVar3 = (int *)piVar3[1];
      } while (piVar3 != (int *)(iVar4 + 0x10));
    }
    break;
  case 7:
    local_8 = ntohl(*(u_long *)((int)in_ECX + 0xc));
    if ((*(uint *)(in_ECX + 1) < *(uint *)(iVar4 + 8)) || (local_8 <= *(uint *)(iVar4 + 0xc)))
    goto switchD_00a8a6a5_caseD_9;
    for (piVar3 = *(int **)(iVar4 + 0x1c); piVar3 != (int *)(iVar4 + 0x18);
        piVar3 = (int *)piVar3[1]) {
      if ((uint)piVar3[3] <= local_8) {
        if (local_8 <= (uint)piVar3[3]) goto switchD_00a8a6a5_caseD_9;
        break;
      }
    }
    break;
  default:
switchD_00a8a6a5_caseD_9:
    if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
      (*(code *)PTR__free_00f071fc)(param_1[2]);
      (*(code *)PTR__free_00f071fc)(param_1);
    }
    return (int *)0x0;
  case 0xb:
    piVar3 = (int *)(iVar4 + 0x18);
  }
  piVar2 = (int *)(*(code *)PTR__malloc_00f071f8)(0x4c);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  piVar2[2] = *(int *)(in_ECX + 1);
  piVar2[3] = local_8;
  *(undefined8 *)(piVar2 + 4) = *in_ECX;
  *(undefined8 *)(piVar2 + 6) = in_ECX[1];
  *(undefined8 *)(piVar2 + 8) = in_ECX[2];
  *(undefined8 *)(piVar2 + 10) = in_ECX[3];
  *(undefined8 *)(piVar2 + 0xc) = in_ECX[4];
  piVar2[0xe] = *(int *)(in_ECX + 5);
  piVar2[0xf] = param_2;
  piVar2[0x10] = param_2;
  piVar2[0x12] = (int)param_1;
  piVar2[0x11] = 0;
  if (param_2 != 0) {
    _Size = (param_2 + 0x1fU >> 5) * 4;
    _Dst = (void *)(*(code *)PTR__malloc_00f071f8)(_Size);
    if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _abort();
    }
    piVar2[0x11] = (int)_Dst;
    _memset(_Dst,0,_Size);
  }
  if (param_1 != (int *)0x0) {
    *param_1 = *param_1 + 1;
  }
  iVar4 = *piVar3;
  puVar1 = *(undefined4 **)(iVar4 + 4);
  piVar2[1] = (int)puVar1;
  *piVar2 = iVar4;
  *puVar1 = piVar2;
  *(int **)(iVar4 + 4) = piVar2;
  return piVar2;
}

